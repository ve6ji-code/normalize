// normalize a vector
// ----------------------------------------------------------------------------
// Matthew James Lewis - VE6JI
// Green::Box(Code)
// ve6mjl@gmail.com
// ----------------------------------------------------------------------------

#include <iostream>

int main(int argc, char const *argv[])
{
    // Create an array of values you wish to normai
    double myArray[]{-2, 1.1, 4, 5.5, 5.001};

    // Xnorm = (Xi - Xmin)/(Xmax -Xmin)
    // find max
    double Xmax = myArray[0];
    for (double x : myArray)
    {
        if (x > Xmax)
        {
            Xmax = x;
        }
    }
    // find min
    double Xmin = myArray[0];
    for (double x : myArray)
    {
        if (x < Xmin)
        {
            Xmin = x;
        }
    }
    // Create a new array of normalized values
    // get count of original myArray
    int cnt = 0;
    for (int i : myArray)
    {
        cnt++;
    }
    // Initialize array Xnorm with a size of cnt
    double Xnorm[cnt];
    int i = 0;

    for (double Xi : myArray)
    {
        Xnorm[i] = (Xi - Xmin) / (Xmax - Xmin);
        i++;
    }
    // Print results
    for (double X : Xnorm)
    {
        std::cout << X << " ";
    }
    std::cout << std::endl;
    return 0;
}
