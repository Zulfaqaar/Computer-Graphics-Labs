#include <iostream>
#include <build_HomePC/Car.hpp>
#include <build_HomePC/Student.hpp>

float pi = 3.1415927f;

float power(const float x, const int y)
{
    float xPowerY = 1.0f;
    for (unsigned int i = 0; i < y; i++)
    {
        xPowerY *= x;
    }
    return xPowerY;
}

void radians(float &angle)
{
    angle * pi / 180.0f;
}

int main()
{
    std::cout << "hello world\n" << std::endl;

    // Degrees to radians conversion
    float angleInDegrees = 45.0f;

    float angleInRadians = angleInDegrees * pi / 180.0f;

    // Output result
    std::cout << angleInDegrees << " degrees is equal to "
        << angleInRadians << " radians." << std::endl;

    // Determine whether it is acute or obtuse
    std::cout << "\nIf statements\n-------------" << std::endl;
    std::cout << angleInDegrees << " degrees is an ";

    if (angleInDegrees < 90)
        std::cout << "acute angle." << std::endl;

    else
        std::cout << "obtuse angle." << std::endl;

    // Output the first 10 powers of 2
    std::cout << "\nFor loop\n--------" << std::endl;
    int powerOfTwo = 1;

    for (unsigned int i = 0; i < 10; i++)
    {
        powerOfTwo *= 2;
        std::cout << "2^" << i + 1 << " = " << powerOfTwo << std::endl;
    }

    int n, step, nsave;
    n = 10;
    step = 0;
    nsave = n;
    std::cout << "\nWhile loop\n----------\n" << n;

    while (n > 1){
        if (n % 2 == 0)
            n /= 2;

        else
            n = 3 * n + 1;

        step++;
        std::cout << " -> " << n;
    }

    std::cout << "\n\nThe Collatz sequence starting at " << nsave
        << " took " << step << " steps to reach 1." << std::endl;



    std::cout << "\nArrays\n------" << std::endl;

    // Arrays
    unsigned int myArray[] =
    {
        3, 1, 4, 1, 5, 9, 2, 6, 5
    };

    for (unsigned int i = 0; i < 9; i++)
    {
        std::cout << "myArray[" << i << "] = " << myArray[i] << std::endl;
    }

    // Size of array and number of elements

    std::cout << "\nsize of myArray = " << sizeof(myArray) << std::endl;

    std::cout << "\nnumber of elements = " << sizeof(myArray) / sizeof(unsigned int) << std::endl;

    // Call the power function
    float twoPowerTen = power(2.0f, 10);

    std::cout << "\nFunctions\n---------" << std::endl;
    std::cout << "2^10 = " << twoPowerTen << std::endl;

    // Call the radians function
    float angle = angleInDegrees;
    radians(angle);

    std::cout << "\n" << angleInDegrees << " degrees is equal to " << angle << " radians." << std::endl;

    // Define car object
    /*Car delorean;
    delorean.make = "Delorean";
    delorean.model = "DMC-12";
    delorean.year = 1981;
    */

    Car delorean("DeLorean", "DMC-12", 1981);
    std::cout << "\nClasses\n-------" << std::endl;
    delorean.outputDetails();

    // Accelerate the Delorean up to 88 mph
    delorean.accelerate(88.0f);

    // Convert speed from mph to kph

    std::cout << "\n" << 88 << " mph is equibalent to " << Car::mph2kph(88.0f) << " kph.\n";

    std::cout << "\n-------\nExercises\n-------" << std::endl;

    Student ellie("Ellie", "Williams", 12345678, "Computer Science", 5);

    unsigned int level4Marks[] = {55, 60, 72, 64};
    unsigned int level5Marks[] = {68, 62, 74, 70};
    
    ellie.addLevelMarks(4, level4Marks);
    ellie.addLevelMarks(5, level5Marks);
    
    ellie.print();

    std::cout << "\nLevel average: " << ellie.levelAverage(5, ellie.marks) << std::endl;
    
    ellie.level = 6;
    unsigned int level6Marks[] = { 72, 68, 76, 65 };
    ellie.addLevelMarks(6, level6Marks);
    ellie.classification();

    return 0;
}