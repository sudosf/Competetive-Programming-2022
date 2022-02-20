#include <bits/stdc++.h>

using namespace std;

class Client {
    public:
        vector<string> liked;
        vector<string> disliked;
        pair<string, vector<string> > matches; // client graph

        void printLiked() {
            cout << "Client #" << matches.first <<", Liked: ";
            for (auto l : liked) cout << l << " ";
            cout << "\n";
        };

        void printDisLiked() {
            cout << "Client #" << matches.first <<", disliked: ";
            for (auto d : disliked) cout << d << " ";
            cout << "\n";
        };
};

fstream file; 

void createPizza(string filename) {

    int total_clients;
    vector<Client> clients;

    // read from file
    file.open(filename, ios::in);
    if (file.is_open()) {

        string line;

        getline(file, line); // get first line
        total_clients = stoi(line);
        cout <<"\nTotal Clients: "<< total_clients << "\n";

        for (int i = 1; getline(file, line); i++) {
            line[0] = ' ';

            Client client;

            // add liked ingredients
            istringstream iss_liked(line);
            copy(istream_iterator<string>(iss_liked),
                istream_iterator<string>(),
                back_inserter(client.liked));
            
            getline(file, line);
            line[0] = ' ';

            // add disliked ingredients
            istringstream iss_disliked(line);
            copy(istream_iterator<string>(iss_disliked),
                istream_iterator<string>(),
                back_inserter(client.disliked));

            // create client node
            client.matches.first = to_string(i);   

            clients.push_back(client);
        }

        file.close();
    }

}


int main() {

    createPizza("a_an_example.in.txt");
    createPizza("b_basic.in.txt");
    // createPizza("c_coarse.in.txt");
    // createPizza("d_difficult.in.txt");
    // createPizza("e_elaborate.in.txt");

    return 0;
}
