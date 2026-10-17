// sizes of datatypes
// (1 byte --> group of 8 bits) (bit--> smallest unit)
// bool , char  --> 1 byte
// int, float --> 4 bytes
// double --> 8 bytes

// #include <iostream>
// #include <cmath>            ###pow(a,b)   sqrt(n)   abs(n)(REMOVES SIGN) log(n) 
// #include <algorithm>        ### max(a,b)          min(a,b)          max(a,max(b,c))
// #include <climits>         ### INT_MAX          INT_MIN

// to use them #include <climits>
// INT_MAX (max. +ve val you can store in int data_type)
// INT_MIN (min. -ve val you can store in int data_type)

// in C++ you dont need to write return 0; at last it automatically does
// logical and relational operator evaluates to 1(true) or 0(false)
// to prove something that doesnt exists must check all the possibilities
// for ex: prime numbers = no divisors exist, so all divisors must be tested 
// in c language--> <math.h> in C++ ----> <cmath>
// syntax of if else if else is same as c , loops are same too
// variable declaration is same , operators are same 
// logical operators are the same , switch , conditional op are same
// for arithmetical operators the hierarchy/assosciativity is left to right
// for assignment operator the hierarchy/assosciativity is right to left
// imp. ex :- 
// #include <iostream>            ###output ---> 10 10 0 
// using namespace std;           
// int main() {                   # first 10 goes to x and the val of x goes to y
//     int x= 3,y,z;            # x= 3   #associativity of assignment op is right to left 
//     y=x=10;           #value of x is updated from 3 to 10 i.e. x= 10 # value of x is assigned to y;y=10
//     z=x<10;         # as "<" is an relational operator it'll give output as 0(false) or 1(true)
//     cout<<x<<" "<<y<<" "<<z<<endl;      #10<10 --> false(0), they are equal 
//     return 0;  #hence 0 goes to z
// }
 
// cout <<endl;  (endline)   (\n)  (shifts the cursor to the next line)
// cout (read it as c-out) prints jo bhi iske aage (<<) likha ho
// cout<<x*y<<endl<<"happy birthday RAJ"<<endl;
// 4/3 = 1 (in C++ as its integer division) (to get accurate answer)  ---> typecasting
// float(4/3) ; (4.0/3) ; (4/3.0) ; (4.0/3.0)
// float x = 5/2  (2 will be stored in x) (pehle calculate then assignment)
// float x = (float)5/2 (2.5 will be stored)
// cout<< ---> (c-out) shows output   (muh bahar) (jo bhi screen pe dikhana ho)
// cin>> ---> (c-in) takes input  (muh andar)   (in short it works as scanf)
// cin>>a>>b       (to take a & b as input)
// (jo bhi keyboard se dalwana ho)
//  *****imp point****  for % operator
// if (b>a) then a%b = a  ex. 2%8 = 2;
// if (a is -ve) then (-a) % b = -(a%b)
// if (b is -ve) then a % (-b) = a%b  
// ex:- 4 + 2 % -8 = 4 + (2%-8) = 4 + 2 = 6 (a%-b = a%b & as if a%b b>a ans = a)
// char datatype stores only a single character in ''
// && / and ---> AND     || / or ---> OR
// ternary operator condition? (if true) : (if false);  (short-hand for if-else)  (conditional operator)
// switch statement when we have multiple cases but have to perform only one case for a particular values
// syntax --> switch(variable){}     case val:operation;break;  default: operation 
// boolean datatype --> true(1) ; false(0)  ##common var name --> flag 
// syntax---> bool flag(/variable name) = true/false;

// do while loop syntax ----> do {task; increment;} while(condition);
// swapping two numbers b = (a+b)-(a=b); (if b>a) ---> a = (a+b)-(b=a) (if a>b);

// ASCII VALUES a = 97, b= 98,..., z = 122 ||| A = 65, B = 66, ...,Z = 90
// '0' = 48, '1' = 49,... '9'=57  ###to calculate ascii value --> int(ch) typecasting
// to calculate characters from ascii values ---> char(x);
// into integers and print them...

// in function call we pass actual parameters while in function definition we give formal parameters
// when function doesnt returns any value as an output void is used instead of any datatype...
// always main() function is executed first and it calls another functions
// each and every function is called by the main function directly or indirectly
// main() function cannot be called more than once
// but we can any other functions more than once
// syntax:-
// #include <iostream>
// using namespace std;
// datatype/void function name(data type parameter1, data type parameter 2);  //function declaration
// int main() {}
// to call a function ---> function_name();     //function call
// datatype/void function name(data type parameter1, data type parameter 2) {} //func definiton
// whenever a function returns a value store it in a variable, then use it (better practice)
// you dont need to use return keyword in void functions
// but you have to use return keyword in other datatyped functions
// datatype of function and datatype of value to be returned must be the same

// return keyword is used to terminate a function if the return keyword is used then uske aage wo
// wo particular function wont run
// also if a function returns a value then the return keyword sends a value back to where the function
// was called...


//  *************************** LIBRARY FUNCTIONS *****************************************************
// TO USE LIBRARY FUNCTIONS , WE MUST INCLUDE THEIR HEADERFILE FIRST
// # --> preprocessor 

// #include <cmath>

// pow(a,b) -----> finds a raised to b a^b;
// sqrt(n)   ----> find square root of n;
// cbrt(n) -------> finds cube of n;
// min(a,b) ------> finds minimum betn a & b;
// max(a,b) -----> finds maximum betn a & b;

// *********************** SCOPE OF VARIABLES ****************************
// any variable created in any function/loop even main() function are limited to them only
// for ex : if u create a variable 'i' in any loop it will be limited for that loop only
// out of that loop it does not exist
// if u create a variable 'n' in main function it will be valid till main function only
// if u declare 'n' variable in any other function it will be different than the 'n' variable from the
// main function

//                    ****PASS BY VALUE****
// a function containing formal parameters(dabbe) accepts actual parameters from the main function;
// then only the values of the actual parameters are transferred to the formal parameters not the variable
// in which it was stored   
// so even if u create same named variables in xyz function and main function they wont be the same
// in main function the actual parameters(value) are stored in x,y variables(dabbe) and that value
// gets stored in the formal parameters..
// IN SHORT --> ACTUAL PARAMETERS JO DABBE(main function variables) MAI STORE THE UNSE NIKALKAR
// xyz FUNCTION KE FORMAL PARAMETERS WALE DABBE MAI STORE HOGAYE.. SIRF VALUE TRANSFER HUI WO DABBE NHI..
// to prove those variables are diff. we can print their address

// #include <iostream>
// using namespace std;
// void swap(int a, int b);         //creates variable a and b which will store values from main function

// int main() {
//     int a,b;          //these a and b variables are different and only are main() function valid(scope)
//     a = 5;
//     b = 2;        //main function ke a and b variables mai koi swapping nhi ho rahi hai
//     cout<<"a: "<<a<<" b: "<<b<<endl;
//     swap(5,2);
//     cout<<"a: "<<a<<" b: "<<b<<endl;
// }

// void swap(int a, int b) {
    // a = (a+b);
    // b = (a-b);  //swapping ho rahi hai but swap() function ke a and b variables mai
    // a = (a-b);   
// }

// ***************** PASS BY REFERENCE ******************
// whenever we use & , pointers in our program to refer a value from main function to xyz function
// WHEN WE HAVE TO USE THE SAME VARIABLES IN xyz FUNCTION AS WELL AS IN MAIN FUNCTION
// IN SHORT --> ACTUAL PARAMETERS JO DABBE(main function variables) MAI STORE THE WAHI FORMAL
// PARAMETER KE BHI DABBE BAN GAYE..
// xyz function ke formal parameters ke datatype ke aage '&' lagana..
// JAB WE WANT KI NAYE DABBE NA BANE

// #include <iostream>
// using namespace std;
// void swap(int& a, int& b);   //& refers to main's a ,b   

// ####**** we can change the names of the variables in the function what actually happens is 
// from the main function the two variables (say x,y) recieve values (acutal arguments) and which are 
// passed to the function (in formal parameters, variables say a,b) and if its passed by reference then 
// bas wo dabbe ka name change hota hai but address same hi hota hai so directly main function ke variables
// mai hi change hota hai NAME SE FARAK NAHI PADTA... ***********#########

// int main() {
//     int a,z;
//     a = 2;
//     b = 5;     
//     cout<<"a: "<<a<<" b: "<<b<<endl;
//     swap(a,b);
//     cout<<"a: "<<a<<" b: "<<b<<endl;
// }

// void swap(int& a, int& z) {
//     a = (a+z);
//     z = (a-z);
//     a = (a-z);   
// }

//                        *****      POINTERS       *****

// ****** address of a variable
// whenever a variable is declared it creates it respective space(dabba) in which value is stored and that
// specific space is called address 
// we print address of the variable using '&'
// address --> each variable has its own address
// one variable has only one particular address
// whenever we run a program the address of the variable changes

// *****   to store the address of any variable we use pointer
// there are various types of pointers ex. int* variable name = &variable_name;
// syntax--> datatype* variablename = &variable;  &---->(address of)
// int* var // int *var  --> both are valid but to avoid confusion int* variablename;
// pointers are used to acess the value of the variable whose address is in the pointers
// using derefernce (*) operator.. 
// *ptr --> iss (ptr mai jo address hai uspar) jao and uski value dedo 
// *ptr is not an variable itself
// as ptr itself is an variable obviously it will have its own address too
// *ptr --> go to the address stored in ptr and access the value there;
// *ptr --> y; go to the address stored in ptr and update the value of x to y; (since that address belongs)
// to x, x gets updated

// ptr --> stores address
// *ptr --> accesses/modifies the value at that address
// *ptr and x refers to the same memory
// that's why changing *ptr changes x

// #include <iostream>
// using namespace std;
// int main() {
//     int x = 3;                                       //(variable name = x)
//     cout<<&x<<endl;    //address of the variable
//     cout<<x<<endl;      //3
//     int* ptr;          // declaration of pointer variable
//     ptr = &x;          //initialization of pointer var.(address of var.) // //(variable name = ptr)                                       
//     cout<<ptr<<endl;     //address of variable
//     cout<<*ptr<<endl;       //value at address of the variable
//     cout<<&ptr<<endl;      // address of the pointer variable
//     *ptr = 5;             //update the value of x to 5
//     cout<<x<<endl;        //5
// }

////////               dereference operator (*)
// just by knowing the address of variable , without knowing the value or the variable itself we can
// perform multiple tasks 
// for ex:- we can update the value of the variable

// Q. CREATE A FUNCTION TO SWAP TWO NUMBERS (using POINTER)
// #include <iostream>
// using namespace std;
// void swap(int* ptr, int* p);

// int main() {
//     int a,b;
//     cout<<"enter first number: ";
//     cin>>a;
//     cout<<"enter second number: ";
//     cin>>b;

//     int* ptr = &a;
//     int* p = &b;

//     cout<<"a : "<<*ptr<<" b : "<<*p<<endl;    
//     swap(ptr,p);
//     cout<<"a : "<<*ptr<<" b : "<<*p<<endl;
// }

// void swap(int* ptr, int* p) {
//     *ptr = *ptr + *p;
//     *p = *ptr - *p;
//     *ptr = *ptr - *p;
//     return;
// }

//  *********************************** RECURSION *****************************************************
// FUNCTION CALLING ITSELF
// replacements for loops any program written by loops can also be written by recursion
// hint to create a recursive function 1)kaam likhlo 2)uske baad function call karalo 3)base case 
// a function terminates if it hits return or all the lines are executed
// there are two types of recursion ---> call after work    ;;;;;   call before work  
// diff. betn both of them is just ki chizein reverse ho jati hai..

// #include <iostream>
// using namespace std;
// void greet();

// int main() {
//     greet();   //call to greet function
// }

// void greet() {
//     cout<<"hello"<<endl;            //print hello
//     greet();           //again called greet function this will continue (infinite recursion)
// }
// base case is used to create a valid loop 

//  ************************************** ARRAYS **************************************
// An array is a collection of elements of the same data type stored in contiguous (continuous) memory
// locations, and each element is accessed using an index.
// variables aren't stored in continuous memory locations they are stored randomly
// used when we have to make multiple variables of the same data type
// syntax --> datatype array_name[size of array];            (declaration)
// ex:- 
// int numbers[5];    //creates a single dabba named 'numbers' in which  5 values will be stored (MEGA-DABBA)
// FOR ACCESING / ASSIGNING VALUES TO AN ARRAY WE USE ' [ ] ' 

// sizeof operator --> gives the size of any datatype 
// syntax--> sizeof(variable_name/array_name);
// if variable name is passed then it returns the size of the data_type of the variable
// if an array is passed it returns the (size of array * size of data_type of array)
// int arr[] = {1,2,3,4,5};
//     size = sizeof(arr)/4;          ###works but not good practice
//     size = sizeof(arr)/sizeof(arr[0]);      ###good practice

// WE CANT CHECK WHETHER TWO ARRAYS ARE EQUAL OR NOT DIRECTLY BY USING (==) TO CHECK WHETHER THEY ARE 
// EQUAL OR NOT WE HAVE TO CHECK FOR EACH AND EVERY INDEX

//  ASSIGNING VALUES 
// iNDEXING --> INDEXING STARTS FROM 0 
// NEGATIVE INDEXING IS NOT ALLOWED IN C++
// it causes undefined behavior (may print garbage, crash, or print nothing)

// numbers[0] = 7; ------ > initializing of array elements  (individual assignment)
// explaination ---> numbers naam ke array ke 0th index pe jao udhar value 7 bhar do (dabbe mai bhar do)

// if the size of an array is n then the indexing is from 0 to (n-1)
// #include <iostream>
// using namespace std;
// int main() {
//     int nums[5];
//     nums[0] = 9;
//     nums[1] = 3;
//     nums[2] = 7;
//     nums[3] = 2;
//     nums[4] = 4;
//     cout<<nums[0]<<" ";                  //nums naamke array mai jao uska 0th element print kara do
//     cout<<nums[1]<<" ";
//     cout<<nums[2]<<" ";
//     cout<<nums[3]<<" ";
//     cout<<nums[4]<<" ";
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int nums[5];
//     for (int i = 0 ; i<5; i++) {                     //assigning values 
//         cout<<"enter "<<i<<"th"<<" element of array: "<<endl;
//         cin>>nums[i];
//     }
//     for (int i = 0 ; i<5; i++) {
//         cout<<"first array is: "<<nums[i]<<endl;                       //printing values
//     }
//     nums[3] = 6;             //updating values of an array --> nums ke 3rd index pe jo value hai usse 
//                             //  nikalke ye value daaldo (same as variables) 
//         for (int i = 0 ; i<5; i++) {
//         cout<<"second array is: "<<nums[i]*2<<endl;                       //printing values
//     }     // we can perform arithmetic operations on all elements of array in this way
// }


// DECLARATION  + INITIALIZATION
// syntax :-
// data_type array_name[size of array] = {val1,val2,val3....,valn};

// whenever we are declaring and initializing in the same line its okay if we even dont mention the
// size of an array...  syntax:- data_type array_name[] = {val1,val2,val3};
// compiler automatically sets the size of array.. 

// #include <iostream>
// using namespace std;                  //printing the elements of array in reverse order
// int main() {
//     int arr[5] = {1,2,3,4,5};
//     for (int i=4; i>=0; i--) {
//         cout<<arr[i]<<" ";
//     }
// }

                ///          ######     PASSING ARRAY TO FUNCTIONS         ######
// Variables are passed by value
// Arrays are not passed by value in C++.
// when an array is passed from the main function to the user_defined function it automatically goes by
// reference (with address &) therefore changes in the array of the user_defined are the changes to the
// array of the main function
// NAME DOES NOT MATTER changes are made at that address so just the name of the array changes but the
// address remains the same

// #include <iostream>
// using namespace std;
// void change(int& y);        //on the same address of the variable taken as input (&) store the value
//                             //recieved and change the name of that address (variable_name) to y

// int main() {
//     int x = 3;
//     cout<<x<<endl;
//     change(x);        //pass this value to the formal parameter
//     cout<<x<<endl;
// }

// void change(int& y) {
//     y = 8;                  // x ke address ki value change hogyi
// }

// #include <iostream>
// using namespace std;
// void change(int arr[]);

// int main() {
//     int arr[] = {1,2,3,4,5};
//     for (int i = 0; i<=4; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

//     change(arr);

//     for (int i = 0; i<=4; i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

// }

// void change(int arr[]) {
//     arr[0] = 100;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int x;
//     int arr[] = {1,2,3,4,5};
//     cout<<sizeof(x)<<endl;
//     cout<<sizeof(arr)/4<<endl;
// }

// int arr[] = {1,2,3,4,5};
//     size = sizeof(arr)/4;          ###works but not good practice
//     size = sizeof(arr)/sizeof(arr[0]);      ###good practice
//     cout<<sizeof(arr)/4<<endl;
// }


//  #################### 2D ARRAYS #############################
// 2D ARRAY IS AN ARRAY OF ARRAYS. IT IS AN ARRAY HAVING 2 DIMENSION. THR 2D ARRAY IS ALSO CALLED MATRIX
// DUE TO ITS TABULAR FORM.
// SYNTAX :-  data_type array_name[size of row][size of column];  (declaration)
// array_name[index of row][index of column] = val; (to store a value at a particular position in 2D
// array (table))   (starts from 0)

// WAYS OF INITIALIZATION :- 
// #include <iostream>
// using namespace std;                         //initialization (method-1)
// int main() {
//     int arr[3][3];
//     arr[0][0] = 1;
//     arr[0][1] = 2;
//     arr[0][2] = 3;
//     arr[1][0] = 4;
//     arr[1][1] = 5;
//     arr[1][2] = 6;
//     arr[2][0] = 7;
//     arr[2][1] = 8;
//     arr[2][2] = 9;

// #include <iostream>
// using namespace std;
// int main() {
//     int arr[3][2] = { {1,2}, {3,4}, {5,6}} ; //initialization  (method-2)
// }
// it is called an array of arrays because 1,2 form a 1-D array similaly 3,4 and 5,6 and they together form
// a 2-D array

// int arr[2][3] = {1,2,3,4,5,6};
// int arr[][3] = {1,2,3,4,5,6};
// mentioning the no. of columns is mandatory no. of rows is optional (only valid if we are initializing
// while declaring)
// if no. of rows is not mentioned then 2-D array gets create.  with ref. to no. of columns
// for ex. we can understand there will be 3 elements in the first array and other 3 in the next array
// and no elements are left so the no. of rows is 2

// #include <iostream>
// using namespace std;                         //initialization (method-3)
// int main() {
//     int arr[3][3];
//     for (int i=0; i<3; i++) {
//         for (int j=0; j<3; j++) {
//             cout<<"enter element of array: ";
//             cin>>arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     for (int i=0; i<3; i++) {              //printing element of array (row wise)
//         for (int j=0; j<3; j++) {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }

//     for (int j=0; j<3; j++) {              //printing element of array (column wise) (transporse)
//         for (int i=0; i<3; i++) {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }
//     cout<<endl;
// }


// ############## STRINGS ##########################
// a character data type is used to store characters like letters, digits, or symbols
// Each char variable can store exactly one character
// Written inside single quotes ' '
// '\0' is null character
// in an character array we can have multiple charaacters separated by '',
// A char array stores characters.
// It becomes a string only if it ends with '\0' (null character).
// char[] + '\0' → string
// No '\0' → just characters
// ASCII value of '\0' is zero(0)
// '\0' tells us where the string ends / terminates

// '\0' null character has nothing to do with int arrays

// No null character → no string
// strings always have null character
// "text" → compiler adds '\0'
// {} → for individual characters
// cout << arr works only if '\0' exists and if it works even when it does not exist then
// This is undefined behavior (works by luck, not guaranteed)

// char arr[3] = {'r','a','j'};        //(not a string)

// char arr[4] = "raj";   // string
// char arr[] = "raj";              // r a j \0           //(string)
// char arr[4] = {'r','a','j','\0'};

// A string is a sequence of characters used to represent text.
// A string is a character array that ends with a null character '\0'.
// We use string instead of char arrays because string provides dynamic sizing,
// easier manipulation, and safer memory management.

// syntax --> string string_name = "raj";

// TAKING A STRING AS AN INPUT FROM THE USER
// string str;
// cin>>s;

// cin has a limitation if we use words which have space in between them then only the first word is 
// stored in it.     ex:- string name;   cin>name;   (raj singh)  only raj will be stored in name

// to solve the above issue we use the function getline
// syntax ---> getline(cin,string_name);

// #include <iostream>
// using namespace std;
// int main() {
//     string name;
//     cout<<"enter name";
//     getline(cin,name);
//     cout<<name<<endl;
// }

// INDEXING OF CHARACTERS IN STRINGS AND UPDATING          (similar to arrays)
// #include <iostream>
// using namespace std;
// int main() {
//     string name = "raj singh";
//     cout<<name<<endl;            //raj
//     cout<<name[0]<<endl;        //r
//     cout<<name[2]<<endl;        //j
//     cout<<name[3]<<endl;           //    (blank space)
//     name[0] = 'R';                           //UPDATING
//     cout<<name[0]<<endl;         //R
// }

// BUILT IN- STRING FUNCTIONS (STL- STANDARD TEMPLATE LIBRARY)
// length
// to find length of string
// syntax --> #include <string>    int (variable_name) = (string_name).length();
// ### int name = "raj" //originally its size is 4(including '\0') but length function doesnt considers
// '\0' so it returns 3.

// push_back
// to add only a single character at the end of an existing string.
// syntax ---> string_name.pushback('character');

// pop_back
// to remove only the single character from the end of an existing string
// syntax ---> string_name.pop_back();

// append
// to add a string at the end of an exisiting string (append - add in the end)
// syntax --> string_name.append("string");

// clear
// clears (empties) an exisiting string (existing string ko empty string banane ke liye)
// syntax --> string_name.clear();

// reverse
// to reverse an existing string
// to use you have to include <algorithm>
// syntax ---> reverse(string_name.begin(),string_name.end());
// to reverse only a particular part of the string
// syntax->reverse(string_name.begin() + [index to start from], string_name.begin() + [index where to stop])
// stopping index is not included
// #include <algorithm>
// #include <iostream>
// using namespace std;
// int main() {
//     string name = "raj singh";
//     cout<<name<<endl;
//     reverse(name.begin(),name.end());
//     cout<<name<<endl;
// }

// "+" operator
// ###concatenation (to add two strings)
// #include <iostream>
// using namespace std;
// int main() {
//     string name = "raj";
//     name = name + " singh"; 
//     cout<<name<<endl;
//     return 0;
// }

// to_string()
// used to convert integer to string
// syntax --> string variable_name = to_string(int data_typed variable which is to be convert to string)
// #include <iostream>
// using namespace std;
// int main() {
//     int x = 12345678;
//     string str = to_string(x);     //conversion from int to string and store it in variable str
//     str += "raj";      //concatenation (to prove its string)
//     cout<<str<<endl;
//     return 0;
// }

// stoi    (sting to integer)
// used to convert string to integer
// syntax --> int variable_name = stoi(string data_typed variable which is to be convert to integer)
// #include <iostream>
// using namespace std;
// int main() {
//     string str = "1234";
//     int num = stoi(str);    //conversion from string to integer and store it in variable num
//     cout<<num<<endl;
//     cout<<num+1<<endl;           //addition (to prove its integer)
//     return 0;
// }

