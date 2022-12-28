#include <iostream>
#include <cmath>
using namespace std;

void sayHi();
void sayHi(string name);
void sayHi(string name, int age);
double cube (double num);
int getMax (int num1, int num2);
int getMax (int num1, int num2, int num3);
double calculator(double num1, double num2, char op);
string getDayOfWeek(int dayNum);
void guessingGame();
int power(int baseNum, int powNum);
void arrayFunction(int row, int col);
void numberPattern(int n);


class myClass{
private:
public:
    int myNum;
    string myString;
    void myMethod(){
        cout << "My Class Method! Can call it a Function.";
    }
    void mySecondMethod();
};

void myClass::mySecondMethod(){
    cout << "Method or Function outside class.";
}

class car{
private:
public:
    int speed(int maxSpeed);
};
int car::speed(int maxSpeed){
    return maxSpeed;
}

class vehicle{
private:
public:
    string type;
    string model;
    int price;
    string brand;
    int year;

    //constructor 1......
    vehicle(string x, string y, int z){
        type = x;
        model = y;
        price = z;
    }
    //constructor 2......
    vehicle(string s, int yr){
        brand = s;
        year = yr;
    }
};

class Employee{
private:
    int salary, age;
public:
    Employee(){};
    //Setter......
    void setSalary(int s){
        salary = s;
    }
    //Getter.....
    int getSalary(){
        return salary;
    }

    void setAge(int a);
    int getAge();

};
void Employee::setAge(int a){
    age = a;
}
int Employee::getAge(){
    return age;
}

int main()
{

//    cout << "Hello world!" << endl;
//    cout << "My Name is Reza." << endl;
//    cout<<"This is a Diagonal Shape:"<<endl;
//    cout << "   /| "<<endl;
//    cout << "  / |" <<endl;
//    cout << " /  |" <<endl;
//    cout << "/___|" <<endl;
//
//    //Variables.....//
//    string characterName = "Reza";
//    int characterAge;
//    characterAge = 27;
//    cout << "There is a man named "<< characterName<<endl;
//    cout << "He is "<<characterAge<<endl;
//
//    //working with strings......//
//    string phrase = "I am a sentence.\n";
//    cout << phrase;
//    cout << "My Length is: " << phrase.length() << endl;
//    cout << phrase[0] <<endl;
//    cout << phrase[7] <<endl;
//    phrase[5] = 'B';
//    cout << phrase <<endl;
//    cout << "The word 'sentence' is found at position: " << phrase.find("sentence", 0) <<endl;
//    string phraseSub;
//    phraseSub = phrase.substr(8,3);
//    cout << "The sub string from index 3 to 8 is: " << phraseSub <<endl;
//
//    //working with numbers.....//
//    int wnum = 5;
//    double dnum = 5.5;
//    int ynum = 2;
//    double sum = wnum + dnum;
//    double div = wnum/dnum;
//    double mult = wnum*dnum;
//    int mod = wnum%ynum;
//    int power = pow(ynum, wnum);
//    double squareroot = sqrt(36);
//    int roundnum = round(dnum);
//    int ceiling = ceil(dnum);
//    int flooring = floor(dnum);
//    int maxbtntwo = fmax(wnum, ynum);
//    int minbtntwo = fmin(wnum, ynum);
//
//
//    cout << "wnum + dnum: " << sum <<endl;
//    cout << "wnum / dnum: " << div <<endl;
//    cout << "wnum * dnum: " << mult <<endl;
//    cout << "wnum % ynum: " << mod <<endl;
//    cout << "pow(ynum, wnum): " << power <<endl;
//    cout << "square root of 36, sqrt(36): " << squareroot <<endl;
//    cout << "round number of dnum, round(dnum): " << roundnum <<endl;
//    cout << "ceiling point of dunm, ceil(dnum): " << ceiling <<endl;
//    cout << "floor point of dnum, floor(dnum): " << flooring <<endl;
//    cout << "max between two numbers, fmax(wnum, ynum): " << maxbtntwo <<endl;
//    cout << "min between two numbers, fmin(wnum, ynum): " << minbtntwo <<endl;

//    //getting user inputs....//
//
//    string name;
//    cout << "Enter your name: ";
//    getline(cin, name);
//    cout << "Hello " << name << "!" << endl;
//
//
//    int age;
//    cout << "Enter your age: ";
//    cin >> age;
//    cout << "You are " << age << " years old." << endl;
//
//    char grade;
//    cout << "Enter your grade: ";
//    cin >> grade;
//    cout << "Your grade is " << grade << endl;
//
//    string color;
//    cout << "Enter your favorite color: ";
//    getline(cin >> ws, color); // After cin ">> ws" is used to remove all white spaces inside the input stream.//
//    cout << "your favorite color is: " << color << "." << endl;
//
//    string country, petType, celebrity;
//
//    cout << "Your Country Name: ";
//    getline(cin >> ws, country);
//    cout << "Pets You Like: ";
//    getline(cin >> ws, petType);
//    cout << "Your Favorite Celebrity: ";
//    getline(cin >> ws, celebrity);
//
//    cout << "My country name is " << country << endl;
//    cout << "I love " << petType << " as pets." << endl;
//    cout << celebrity << " is my favorite celebrity." << endl;


//    //Arrays....//
//
//    int luckyNums[] = {4, 8, 15, 16, 23, 42};
//    cout <<"Value of index 0 is: " << luckyNums[0] <<endl;
//    cout <<"Value of index 4 is: " << luckyNums [4] <<endl;
//
//    luckyNums[0] = 19;
//    cout <<"Updated value of index 0 is: " << luckyNums[0] <<endl;
//    luckyNums[3] = 99;
//    cout <<"Updated value of index 3 is: " << luckyNums [3] <<endl;
//
//    int luckyNums2[20] = {4, 8, 15, 16, 23, 42};
//    cout <<"Value of index 0 is: " << luckyNums2[0] <<endl;
//    cout <<"Value of index 1 is: " << luckyNums2[1] <<endl;
//    cout <<"Value of index 2 is: " << luckyNums2[2] <<endl;
//    cout <<"Value of index 3 is: " << luckyNums2[3] <<endl;
//    cout <<"Value of index 4 is: " << luckyNums2[4] <<endl;
//    cout <<"Value of index 5 is: " << luckyNums2[5] <<endl;
//
//    luckyNums2[6] = 47;
//    cout <<"Updated value of index 6 is: " << luckyNums2[6] <<endl;
//    luckyNums2[10] = 100;
//    cout <<"Updated value of index 10 is: " << luckyNums2[10] <<endl;


//    //Functions......//
//
//    sayHi();
//    cout << endl;
//    sayHi("Reza");
//    cout << endl;
//    sayHi("Reza", 27);
//    cout << endl;
//
//    //Return Type....//
//    double answer = cube(5.0);
//    cout << "Cube: " << answer <<endl;

//    //If statement....//

//    bool isMale = false;
//    if(isMale){
//        cout << "You are a Male.\n";
//    }
//    else{
//        cout << "You are not Male.\n";
//    }

//    bool isMale = false;
//    bool isTall = true;
//    if(isMale && isTall){
//        cout <<"You are a Tall Male.\n";
//    }else{
//        cout <<"You are not Tall Male.\n";
//    }

//    bool isMale = false;
//    bool isTall = false;
//    if(isMale || isTall){
//        cout <<"You are a Tall Male.\n";
//    }else{
//        cout <<"You are not Tall Male.\n";
//    }

//    bool isMale = false;
//    bool isTall = false;
//    if(isMale && isTall){
//        cout << "You are a Tall Male";
//    }else if(isMale && !isTall){
//    cout << "You are a Short Male";
//    }else if(!isMale && isTall){
//    cout << "You are Tall but not Male";
//    }else{
//    cout << "You are not Male and not Tall";
//    }
//    cout << endl;
//    int maxnum = getMax(17, 29);
//    cout << "Max num: " << maxnum;
//    cout <<endl;
//
//    int maxamong3 = getMax(29, 17, 48);
//    cout << "Max num among 3s: " << maxamong3;
//    cout <<endl;
//
//
////    //Building a Better Calculator......//
////    double a,b,ans;
////    char op;
////    cout << "Enter first number: ";
////    cin >> a;
////    cout << "Enter second number: ";
////    cin >> b;
////    cout << "Enter operator: ";
////    cin >> op;
////    ans = calculator(a,b,op);
////    cout << ans;
////    cout <<endl;
//
//    //Switch Statement.........//
//    int daynum;
//    cout << "Input Day Number: ";
//    cin >> daynum;
//    cout << "Day no. " << daynum << " is " << getDayOfWeek(daynum);
//    cout << endl;
//
//
//    //While Loop.........//
//    cout <<"Displaying While Loop:\n";
//    int index = 1;
//    while(index <= 100){
//        cout << index << endl;
//        index++;
//    }
//    cout << endl;
//
//    //Do While Loop........//
//    cout <<"Displaying Do-While Loop:\n";
//    int index2 = 6;
//    do{
//        cout << index2 << endl;
//        index2++;
//    }
//    while(index2 <= 5);
//    cout << endl;
//
//    //Guessing Game.........//
//    guessingGame();
//    cout <<endl;
//
//    //For Loop......//
//    for(int i = 1; i <=100; i++){
//        cout << i << endl;
//    }
//    int numbs[10] = {1,3,5,6,9,500};
//    for(int i = 0; i < 10; i++){
//        cout << numbs[i] <<endl;
//    }
//
//    //Exponential Function : power function.........//
//    int aBase, aPower;
//    cout << "Enter Base Number: ";
//    cin >> aBase;
//    cout << "Enter Power: ";
//    cin >> aPower;
//    cout << aBase << "^" << aPower << " = " << power(aBase, aPower);
//    cout << endl;
//
//
//    //2D Arrays and Nested Loops..........//
//    int row, col;
//    cout << "Enter number of rows and columns:\n";
//    cin >> row;
//    cin >> col;
//    int tdArray[row][col] = {
//                        {1, 2},
//                        {3, 4},
//                        {5, 6}
//                        };
//    cout << "Displaying 2D Array, (tdArray):\n";
//    for(int i = 0; i < row; i++){
//        for(int j = 0; j < col; j++){
//            cout << tdArray[i][j] << endl;
//        }
//    }
//
//    int r, c;
//    cout << "Rows: ";
//    cin >> r;
//    cout << "Columns: ";
//    cin >> c;
//    arrayFunction(r, c);

    //numberPattern(5);
    //cout << endl;
/*
    //Pointers......//
    int val1 = 5;
    cout << "Address of val1, (&val1): " << &val1 << endl;
    int *ptr = &val1;
    cout << "Value at the address &val1, (*ptr): " << *ptr <<endl;
    cout << "Address of the pointer *ptr pointed to, (ptr): " << ptr <<endl;
    cout << "Address of the pointer *ptr pointed to, (&*ptr): " << &*ptr <<endl;
    cout << "Address of the pointer *ptr, (&ptr): " << &ptr <<endl;
    */

    //Class and Object............//
    myClass obj;
    obj.myNum = 15;
    obj.myString = "Class Text";
    cout << obj.myNum << endl;
    cout << obj.myString << endl;

    myClass obj2;
    obj2.myNum = 20;
    obj2.myString = "Second String Object";
    cout << obj2.myNum << endl;
    cout << obj2.myString << endl;

    obj.myMethod();
    cout << endl;
    obj2.mySecondMethod();
    cout << endl;

    car c;
    cout << c.speed(200);
    cout << endl << endl;

    vehicle v1("Car", "BMW-7s", 25000000);
    vehicle v2("Bike", "Suzuki GSX R150 ABS", 430000);

    cout << "Vehicle Type: " << v1.type << endl;
    cout << "Model: " << v1.model << endl;
    cout << "Price: " << v1.price << endl <<endl;

    cout << "Vehicle Type: " << v2.type << endl;
    cout << "Model: " << v2.model << endl;
    cout << "Price: " << v2.price;
    cout << endl <<endl;

    vehicle v3("Test", 2022);
    cout << "Brand: " << v3.brand <<endl;
    cout << "Featured Year: " << v3.year;
    cout << endl <<endl;

    Employee e;
    e.setSalary(40000);
    cout << "Salary: " << e.getSalary();
    cout << endl;

    e.setAge(28);
    cout << "Age: " << e.getAge();
    cout << endl << endl;


    return 0;
}
void sayHi()
{
    cout << "Hello User!";
}
void sayHi(string name)
{
    cout << "Hello "<< name << "!";
}
void sayHi(string name, int age)
{
    cout << "Hello "<< name << "!\n";
    cout << "Age: " << age;
}
double cube (double num)
{
    double result = num * num * num;
    return result;
}
int getMax (int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }

    return result;

}
int getMax (int num1, int num2, int num3)
{
    int result;
    if (num1 >= num2 && num1 >= num3)
    {
        result = num1;
    }
    else if(num2 >=num1 && num2 >= num3)
    {
        result = num2;
    }
    else
    {
        result = num3;
    }

    return result;

}
double calculator(double num1, double num2, char op)
{
    double result;
    if(op == '+')
    {
        result = num1 + num2;
    }
    else if(op == '-')
    {
        if(num1 >= num2)
        {
            result = num1 - num2;
        }
        else
        {
            result = num2 - num1;
        }
    }
    else if(op == '*')
    {
        result = num1 * num2;
    }
    else if(op == '/')
    {
        result = num1 / num2;
    }
    else
    {
        cout <<"Invalid Operator!";
    }

    return result;
}
string getDayOfWeek(int dayNum)
{
    string dayName;
    switch(dayNum)
    {
    case 0:
        dayName = "Friday";
        break;
    case 1:
        dayName = "Saturday";
        break;
    case 2:
        dayName = "Sunday";
        break;
    case 3:
        dayName = "Monday";
        break;
    case 4:
        dayName = "Twesday";
        break;
    case 5:
        dayName = "Wednesday";
        break;
    case 6:
        dayName = "Thursday";
        break;

    default:
        dayName = "Invalid Day Number Input!";
    }

    return dayName;
}
void guessingGame()
{
    int secretKey = 7;
    int guess;
    cout << "Enter Guess: ";
    cin >> guess;
    int guessCount = 1;
    int guessLimit = 3;
    bool outOfGuesses = false;

    while(secretKey != guess && !outOfGuesses)
    {
        if(guessCount < guessLimit)
        {
            cout << "Wrong Guess! Try Again!!\nEnter Guess: ";
            cin >> guess;
            guessCount++;
        }
        else
        {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses)
    {
        cout << "Oops! You Lost!!\nOut of Limits! Better Luck Next Time.";
    }
    else
    {
        cout << "Congrats! You Win!!";
    }

//Another way to implement.........//
//    int key;
//    cout << "Enter Secret Key: ";
//    cin >> key;
//    int guessCounter = 1;
//    while(secretKey != key){
//        if(guessCounter <= 3){
//            cout << "Wrong Guess! Try Again!!\n";
//            cin >> key;
//            guessCounter++;
//        }else{
//            cout << "Oops! Out of Limits!!";
//            break;
//        }
//
//    }
//    if(secretKey == key){
//        cout << "Congrats! You Won!!";
//    }
}

int power(int baseNum, int powNum)
{
    int result = 1;
    for(int i = 0; i < powNum; i++)
    {
        result = result * baseNum;
    }
    return result;
}
void arrayFunction(int row, int col)
{
    int myArr[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
            myArr[i][j] = 0;
    }
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "Input at Index of myArr[" << i <<"][" << j << "]: ";
            cin >> myArr[i][j];
        }
        cout << endl;
    }
    cout << "Displaying my 2D array....\n";
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout << "myArr[" << i <<"][" << j << "] = " << myArr[i][j] << endl;
        }
    }

}

void numberPattern(int n){
    /*int col = 1;
    int counter;
    while(n!=0){
        for(int i = 1; i <= col; i++){
            counter = i;
            cout << counter;
        }
        col++;
        for(int j = counter+1; j <= col; j++)
        cout << endl;
        n--;
    }*/
    int counter = 1;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout <<" ";
        }
        for(int k = 0; k<2*i+1; k++){
            cout <<"*";
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << j+1;
        }
        cout << endl;
    }
    cout << endl << endl;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<=i; j++){
            cout << i+1;
        }
        cout << endl;
    }
}

