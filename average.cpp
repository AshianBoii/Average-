//
// Name: Marquez, Jonathan
// Homework: #1
// Due: date
// Course: cs-2560-01-sp23
//
// Description: Write a program that will read floating point numbers from a file named “temps.dat”, compute the average, and
//output the data 8 value per line, the count and average.
// 


#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

ifstream infile;
infile.open("temps.dat");// opens file

float number;
float count=0;
float total =0;

if (infile) { // if the file opens sucessfully

while (infile>>number){ // reads the numbers in the file and counts them
++count;
total +=number;
     }
float  average = total / count; // calculates the average of numbers in the file
cout<<"Average by J. Marquez"<<endl;
cout<<"Count = "<<count<<endl;
cout<<setprecision(2)<<fixed; // sets average value to 2 decimal places
cout<<"Average = "<<average<<endl;

infile.close();  // closes the file
}
else {
cout<<"There was an error reading/retrieving the file."<<endl;
}

return 0;
}













