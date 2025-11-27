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
        return quotient;
    };
};

int main(){
    Calculator calc;
    
    std::vector<float> nums = {10.0, 5.0, 2.0};

    std::cout << "Addition: " << calc.addition(nums) << endl;
    std::cout << "Subtraction: " << calc.subtraction(nums) << endl;
    std::cout << "Multiplication: " << calc.multiplication(nums) << endl;
    std::cout << "Division: " << calc.division() << endl;

    return 0;

}