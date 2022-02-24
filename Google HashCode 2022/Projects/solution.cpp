#include <bits/stdc++.h>

using namespace std;

// global variables
fstream file;

class Contributor {
    public:
        string name;
        vector<pair<string, int> > skills; 

        void printDetails() {
            cout << name << ": ";
            
            for (auto p : skills) 
                cout <<"("<< p.first << ", " << p.second << ") ";
        
            cout << endl;
        }
};

class Project {
    public:
        string name;
        int complete_time;
        int score;
        int bb;
        int roles;
        vector<pair<string, int> > skills;

        void printDetails() {

            cout <<"Project: "<< name;
            cout << " -> Skills: ";
            for (auto p : skills) 
                cout <<"("<< p.first << ", " << p.second << ") ";
        
            cout << endl;
        }
};


void reaFile(string filename) {

    int total_cb; // contributors
    int total_p; //projects

    vector<Contributor> contributors;
    vector<Project> Projects;

    // read from file
    file.open(filename, ios::in);
    if (file.is_open()) {

        string line;

        getline(file, line); // get first line
        total_cb = line[0] - '0';
        total_p  = line[2] - '0';
        cout << "\nContributors: " << total_cb << " Projects: " << total_p << "\n\n";

        for (int t_1 = 0; t_1 < total_cb; t_1++) {

            getline(file, line);

            // convert string to vector
            istringstream iss(line);
            vector<string> cb { istream_iterator<string>{iss},
                            istream_iterator<string>{}};

            Contributor con;
            con.name = cb[0]; 
            int num_skills = stoi(cb[1]);

            for (int i = 0; i < num_skills; i++) {
                getline(file, line);

                istringstream iss_tmp(line);
                vector<string> tmp { istream_iterator<string>{iss_tmp},
                            istream_iterator<string>{}};
                
                pair<string, int> skill(tmp[0], stoi(tmp[1]));
                con.skills.push_back(skill);
            }

            con.printDetails();
            contributors.push_back(con);
        }
        for (int t_2 = 0; t_2 < total_p; t_2++) {
            getline(file, line);

            istringstream iss_tmp(line);
            vector<string> tmp { istream_iterator<string>{iss_tmp},
                        istream_iterator<string>{}};
            
            Project pj;
            pj.name = tmp[0];
            pj.complete_time = stoi(tmp[1]);
            pj.score = stoi(tmp[2]);
            pj.bb = stoi(tmp[3]);
            pj.roles = stoi(tmp[4]);

            for (int i = 0; i < pj.roles; i++) {
                getline(file, line);

                istringstream iss_tmp2(line);
                vector<string> tmp2 { istream_iterator<string>{iss_tmp2},
                            istream_iterator<string>{}};
                
                pair<string, int> skill(tmp2[0], stoi(tmp2[1]));
                pj.skills.push_back(skill);
            }

            pj.printDetails();
            Projects.push_back(pj);
        }

        file.close();
    }
}


int main() {

    reaFile("a_an_example.in.txt");


    return 0;
}
