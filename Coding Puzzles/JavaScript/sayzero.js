// Sample code to perform I/O:

process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";

process.stdin.on("data", function (input) {
    stdin_input += input;   
    // main(stdin_input);                           // Reading input from STDIN
});

//process.stdin.on("end", function () {
   
//});

function main(input) {
    // process.stdout.write("Hi, " + input + ".\n");       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
// Write your code here

/*
process.stdin.setRawMode(true);
process.stdin.on('readable', function () {
  var key = String(process.stdin.read());
  showArrEl(key);
});

function showArrEl (key) {
  console.log(arr[key]);
} */