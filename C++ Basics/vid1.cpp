// // #include<iostream>
// #include<bits/stdc++.h> // by this u can include every single library of c++
// using namespace std;

// int main(){


//     // std::cout<< "Hello World" << "\n"; // Faster
//     // std:: cout<<"Hello World" << std::endl;  // Slower as compared to '\n'
//     // std::cout<< "Hello World";

//     // we can use namespace decleration to avoid using std everywhere

//     // cout<<"Hello world" << '\n' << "without std ;)";

//     int x,y;
//     cin >> x >> y;
//     cout << "Value of x :" << x << '\n' << "Value of y :" << y;
//     return 0;
// }


// ------------------------------------------------------------------------------------------------------- 


// Boiler Plate Code of C++

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     return 0;
// }

// --------------------------------------------------------------------------------------------------

// Datatypes 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     // int 
//     int x = 10;
//     cout << "Integer x : " << x << '\n';

//     // long
//     long y = 100000;
//     cout << "Long y : " << y << '\n';

//     // long long
//     long long z = 1000000000;
//     cout << "Long Long z : " << z << '\n';

//     // float
//     float a = 4.555555;
//     cout << "Float a : " << a << '\n';

//     // double
//     double b = 14455.4444444444444;
//     cout << "Double b : " << b << '\n';

//     // string
//     string s = "hhgfds";
//     cout << "String s : " << s << '\n';

//     // char
//     char c = 'A';
//     cout<< "Char c : " << c << '\n';

    
//     return 0;
// }

// ---------------------------------------------------------------------------------------------------

// if/else 

// P1 - write a program that takes input age as a number and then states whether u r an adult or not '

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter your age :";
//     cin>>age;
//     if(age > 18){
//         cout<<"You are an adult";
//     }
//     else if(age >13 && age <= 18){
//         cout<<"You are a teenager"; // The extra operator you indicated was here
//     }
//     else{
//         cout<<"You are a child";
//     }
    
//     return 0;
// }

// P2 - Marks grading System 
// Below 25 - F
// 25-44 - E
// 45-49 - D
// 50-59 - C
// 60-79 - B
// 80-100 - A

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int marks;
//     cout << "Enter the Marks : ";
//     cin>>marks;
//     if(marks < 25){
//         cout<< 'F';
//     }
//     else if(marks  <= 44){
//         cout<<'E';
//     }
//     else if(marks  <= 49){
//         cout<<'D';
//     }
//     else if(marks  <= 59){
//         cout<<'C';
//     }
//     else if(marks  <= 79){
//         cout<<'B';
//     }
//     else if(marks  <= 100){
//         cout<<'A';
//     }
//     else{
//         cout<<"Invalid Input";
//     }
//     return 0;
// }

// -----------------------------------------------------------------------------------------------

// Checker(Job Eligibility Crietria)
// If age > 18 : Not Eligible for job
// if age >=18 and age<=54 : Eligible for job
// if age >=54 and age<=57 : Eligible but retirement soon
// if age >57 : Retirement time

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cout<<"Enter Your Age : ";
//     cin>>age;
//     if(age < 18) cout<<"Not Eligible For The Job";
//     else if(age <=57){
//         cout<<"Eligible for the job";
//         if(age>=55){
//             cout<<",but retirement soon!";
//         }
//     }
//     else cout<<"Retirement Time";
//     return 0;
// }

// ------------------------------------------------------------------------------------------------





