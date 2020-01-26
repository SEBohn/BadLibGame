#include <iostream>

using namespace std;

int main() {

string noun, adjective, name, verb, adverb;

cout << "Welcome to Bad Libs, a fun word game!\n";
cout << "Please enter a noun: \n";
cin >> noun;

cout << "Please enter an adjective: \n";
cin >> adjective;

cout << "Please enter a name: \n";
cin >> name;

cout << "Please enter a verb: \n";
cin >> verb;

cout << "Please enter an adverb: \n";
cin >> adverb;

cout << "There once was a " << adjective << " " << noun << " " << "which was named " << name << " " << "and it was " << adverb << " " << verb << " "
<< "among the crowd.";

return 0;



}