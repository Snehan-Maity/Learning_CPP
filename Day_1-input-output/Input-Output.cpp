#include<bits/stdc++.h>

using namespace std;

// int main(){
//     cout << "Hello Wrold!!!";
//     return 0;
// }

// int main(){
//     cout << "My name is Shreyan";
//     return 0;
// }

// int main(){
//     cout <<"Knowledge is power.";
//     return 0;
// }

// int main(){
//     cout << "Hello World" << "\n" ;
//     cout << "Welcome to Programming\n";
//     cout << "Let's learn C++" << endl;
//     return 0;
// }


int main(){
    string Name;
    cout << "Enter your name : ";
    // cin >> Name; //This wouldn't take surname **For "Shreyan Maity" it will only print "Shreyan"
    getline(cin, Name); // Use getline to capture everything until you press Enter
    cout << "Hey, " << Name << " Welcome to programming!";

    return 0;
}

// int main(){
//     string colour;
//     cout << "Enter you favorite colour : ";
//     cin >> colour;
//     cout << "Hey, your favorite color is " << colour << ", That's cool!" ;

//     return 0;
// }