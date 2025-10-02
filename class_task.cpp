
#include<iostream>
using namespace std;
/*
 * Program to calculate and print Simple Interest.
 * The program takes principal amount, number of years, and rate of interest as input from the user,
 * then computes and displays the simple interest using a function.
 */


/* int si(int rate,int principal,int year=1){
return (principal*rate*year) /100;
}

 
int main(){
    int year,principal,rate;
cout<<"Enter principal ";
cin>>principal;
cout<<"enter time ";
cin>>year;
cout<<"Enter rate ";
cin>>rate;

cout<<"your simple interest = "<<si;


return 0;
} */

/* Print factorial of any number using function */
/* long long factorial(int n){
  long long fact=1;
  for(int i=1;i<=n;i++){
    fact=fact*i;
  }
  return fact;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        cout << "Factorial of " << num << " = " << factorial(num) << endl;
    }

    return 0;
} */


/* Print prime numbers in a given range using function */

bool isprime(int n){
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      return false;
    }
  }
  return true;
}
void print_prime(int lowerLimit,int upperLimit){
  for(int i=lowerLimit;i<=upperLimit;i++){
    if(isprime(i)){
      cout<<i<<" , ";
    }
  }
}
int main() {
  int lowerLimit, upperLimit ;
  cout << "Enter lower limit: ";
    cin >> lowerLimit;
    cout << "Enter upper limit: ";
    cin >> upperLimit;

    cout << "Prime numbers between " << lowerLimit << " and " << upperLimit << " are:" << endl;
    print_prime(lowerLimit, upperLimit);

    return 0;
}
