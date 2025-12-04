#include <iostream>
#include <vector>
using namespace std;

class Calculator{
public:
    float addition(std::vector<float> inputNums){
        float sumInput = 0;
        for (float num : inputNums){
            sumInput += num;
        }
        return sumInput;
    }
    float subtraction(std::vector<float> inputNums){
        float difference = 0;
        for (float num : inputNums){
            difference -= num;  
        }
        return difference;
    }
    float multiplication(std::vector<float> inputNums){
        float product = inputNums[0];
        for (int i = 1; i < inputNums.size(); i++){
            product = product * inputNums[i];
        }
        return product;
    };
    float division(){
        float dividend;
        float divisor;
        float quotient;
        std::cout << "Enter dividend: ";
        std::cin >> dividend;
        std::cout << "Enter divisor: ";
        std::cin >> divisor;
        
        try{
            std::cout << "Enter divisor: ";
            std::cin >> divisor;
            if (divisor != 0){
                quotient = dividend / divisor;
                return quotient;
            } else{
                throw(divisor);
            }
        }
        catch(int divisor){
            cout << "Divisor must not be 0, please try again\n";
             std::cout << "Enter divisor: ";
             std::cin >> divisor;
            cin >> divisor;
        }
        quotient = dividend / divisor;
        return quotient;
    };
};

int main(){
    Calculator calc;
    
    std::string choice_op;
    std::cout<<"Enter the operation you wish to use:\nA = Addition\nS = Subtraction\nM = Multiplication\nD = Division\n Enter: ";
    std::cin>>choice_op;

    int num_numbers;
    std::vector<float> nums = {};
    std::cout<<"How many numbers would you like to input? ";
    std::cin >> num_numbers;

    for(int i = 0; i < num_numbers; i++){
        float num;
        std::cout << "Enter number " << i+1 << ": ";
        std::cin >> num;
        nums.push_back(num);
    }

    if (choice_op == "A" || choice_op == "a"){
        std::cout << "Addition: " << calc.addition(nums) << endl;
    } else if (choice_op == "S" || choice_op == "s"){
        std::cout << "Subtraction: " << calc.subtraction(nums) << endl;
    } else if (choice_op == "M" || choice_op == "m"){
        std::cout << "Multiplication: " << calc.multiplication(nums) << endl;
    } else if (choice_op == "D" || choice_op == "d"){
        std::cout << "Division: " << calc.division() << endl;
    }

    
    std::cout << "Addition: " << calc.addition(nums) << endl;
    std::cout << "Subtraction: " << calc.subtraction(nums) << endl;
    std::cout << "Multiplication: " << calc.multiplication(nums) << endl;
    std::cout << "Division: " << calc.division() << endl;

    return 0;

}
