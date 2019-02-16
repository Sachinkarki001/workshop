// Program to find the root of an equation using Newton-Raphson Method --- Naiem Sultan

#include <iostream>
#include <cmath>
using namespace std;

//Equation used (4x^3)+2x-6

// Function to calculate f(x)
float ffx(float x){

        float s = ((4*pow(x,3)-(2*x))-6);
        return s;
    }

// Function to calculate f'(x)
float ffdx(float x){

        float s = ((12*pow(x,2))-2);
        return s;
    }

// Function to calculate the root of fx using Newton - Raphson Method
void nwtraph(float x0){

    float E = 0.005, e = 1, x1;
    int counter = 1;

    cout<<"Iteration "<<"    "<<"x0"<<"    "<<"f(x0)"<<"    "<<"f'(x0)"<<"    "<<"x1"<<"    "<<"Error"<<"\n";

    while (e > E){

        float fx = ffx(x0);
        float fdx = ffdx(x0);


        x1 =(x0 - (fx/fdx)); // Determining the root

        e = ((x1-x0)/x1); //Error Calculating
        e = fabs(e);

        //Displaying the Values after each Iterations
        cout<<counter<<"            "<<x0<<"    "<<fx<<"    "<<fdx<<"    "<<x1<<"    "<<e<<"\n";
        cout<<"------------------------------------------------------------------------"<<"\n";

        x0 = x1;
        counter++;

    }

    cout<<"\n"<<"______________________________________________________________________________"<<"\n"<<"______________________________________________________________________________"<<"\n";
    cout<<"The Required root = "<<x0<<"\n";
    cout<<"f(x) = "<<ffx(x0)<<"\n";
    cout<<"fdx(x) = "<<ffdx(x0)<<"\n";
}

// Main Function
int main() {
    float x0;

   cout << "Enter Initial guess: ";
   cin >> x0;

   nwtraph(x0); //Calling the Newton - Raphson method function and passing initial value

   return 0;
}
