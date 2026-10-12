#include <iostream>
#include <limits>
#include "unitlib.h"
using namespace std;
void clearInput() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main() {
    while (true) {
        cout << "\n===== 单位转换器 =====\n";
        cout << "1. 摄氏度 -> 华氏度\n";
        cout << "2. 华氏度 -> 摄氏度\n";
        cout << "3. 米 -> 英尺\n";
        cout << "4. 英尺 -> 米\n";
        cout << "5. 磅 -> 千克\n";
        cout << "6. 千克 -> 磅\n";
        cout << "0. 退出\n";
        cout << "请选择：";
        int choice;
        if (!(cin >> choice)) {
            cin.clear();
            clearInput();
            cout << "输入无效，请重新输入。\n";
            continue;
        }
        if (choice == 0) {
            cout << "已退出。\n";
            break;
        }
        cout << "请输入数值：";
        double value;
        if (!(cin >> value)) {
            cin.clear();
            clearInput();
            cout << "输入无效，请重新输入。\n";
            continue;
        }
        switch (choice) {
            case 1:
                cout << value << " °C = " << unitlib::celsiusToFahrenheit(value) << " °F\n";
                break;
            case 2:
                cout << value << " °F = " << unitlib::fahrenheitToCelsius(value) << " °C\n";
                break;
            case 3:
                cout << value << " m = " << unitlib::metersToFeet(value) << " ft\n";
                break;
            case 4:
                cout << value << " ft = " << unitlib::feetToMeters(value) << " m\n";
                break;
            case 5:
                cout << value << " lb = " << unitlib::poundsToKilograms(value) << " kg\n";
                break;
            case 6:
                cout << value << " kg = " << unitlib::kilogramsToPounds(value) << " lb\n";
                break;
            default:
                cout << "无效选择。\n";
        }
    }
    return 0;
}