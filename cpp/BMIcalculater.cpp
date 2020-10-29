#include<iostream>
#include<iomanip>
#include<math.h>

using namespace std;

int main()

{
    unsigned int weight;
    unsigned int height;
    float bmi;
    char response;
    
    do 
    {
    cout<<"*****************************\n";
    cout<<"Please enter your weight (lbs): ";
    cin>>weight;
    cout<<"Please enter your height (inches): ";
    cin>>height;
    bmi = (weight/ pow(height,2))*703;
    cout<<"\n";
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Your BMI is "<<bmi<<endl;
    
    if (bmi < 18.5)
       {  
       cout<<"You are underweight!"<<endl;
       cout<<"Eat more!!"<<endl;
       }
       else if (bmi >= 18.5 && bmi <25)   
       cout<<"You are normal!"<<endl;
       else if (bmi >= 25 )
       cout<<"You are overweight!"<<endl;
       else
       cin.get();
    
       cin.get();
       cout<<endl;
       
       cout<<"Would you like to enter the information again? ";
       cin>>response;
    }
   while (response == 'Y' || response == 'y' );
    
return 0;
    
}
