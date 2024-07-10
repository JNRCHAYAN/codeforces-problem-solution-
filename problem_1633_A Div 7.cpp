#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Function to check if a number is divisible by 7
bool isDivisibleBy7(int num) {
    return num % 7 == 0;
}

// Function to find the minimum changes needed to make a number divisible by 7
int findClosestDivisibleBy7(int num) {
    if (isDivisibleBy7(num)) {
        return num;
    }
    
    string strNum = to_string(num);
    int len = strNum.length();
    
    // Check all possible replacements of digits
    for (int i = 0; i < len; ++i) {
        char originalDigit = strNum[i];
        
        for (char newDigit = '0'; newDigit <= '9'; ++newDigit) {
            if (newDigit == originalDigit) continue; // Skip the same digit
            
            strNum[i] = newDigit;
            int newNum = stoi(strNum);
            
            if (isDivisibleBy7(newNum) && strNum[0] != '0') {
                return newNum;
            }
        }
        
        strNum[i] = originalDigit; // Restore the original digit
    }
    
    // If no single digit replacement works, try more changes
    for (int i = 0; i < len; ++i) {
        for (int j = 0; j < len; ++j) {
            if (i == j) continue;
            
            char originalDigitI = strNum[i];
            char originalDigitJ = strNum[j];
            
            for (char newDigitI = '0'; newDigitI <= '9'; ++newDigitI) {
                if (newDigitI == originalDigitI) continue;
                
                strNum[i] = newDigitI;
                
                for (char newDigitJ = '0'; newDigitJ <= '9'; ++newDigitJ) {
                    if (newDigitJ == originalDigitJ) continue;
                    
                    strNum[j] = newDigitJ;
                    int newNum = stoi(strNum);
                    
                    if (isDivisibleBy7(newNum) && strNum[0] != '0') {
                        return newNum;
                    }
                }
                
                strNum[j] = originalDigitJ; // Restore the original digit
            }
            
            strNum[i] = originalDigitI; // Restore the original digit
        }
    }
    
    return num; // Return the original number if no changes work
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << findClosestDivisibleBy7(n) << endl;
    }
    
    return 0;
}
