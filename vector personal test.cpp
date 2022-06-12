#include <iostream>
#include <vector>

using namespace std;

void second() {
    vector <int> second2;
    vector <int> second2odd;
    vector <int> second2even;
    vector <int> second2neg;
    int size=0, temp=0;
    cout << "How many number do you want ?" << endl;
    cin >> size;
    cout << "Insert the numbers: " << endl;
    for (int a = 0; a < size; a++) {
        cin >> temp;
        second2.push_back(temp);
    }
    vector <int>::iterator it;
    for (it = second2.begin(); it < second2.end(); it++) {
        if (*it < 0) {
            second2neg.push_back(*it);
        }
        else if (*it % 2 == 0) {
            second2even.push_back(*it);
        }
        else if (*it % 2 == 1) {
            second2odd.push_back(*it);
        }
    }
    cout << "Even numbers: " << endl;
    for (it = second2even.begin(); it < second2even.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Odd numbers: " << endl;
    for (it = second2odd.begin(); it < second2odd.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "Negative numbers: " << endl;
    for (it = second2neg.begin(); it < second2neg.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "End of test" << endl;
}
int main()
{
    vector <int> first1{ 1,2,3,4,5,6 };
    vector <int>::iterator i;
    for (i = first1.begin(); i < first1.end(); i++) {
        cout << *i << endl;
    }
    cout << endl;

    first1.push_back(2);
    for (i = first1.begin(); i < first1.end(); i++) {
        cout << *i << endl;
    }
    cout << endl << first1.at(1);
    cout << endl;
    second();
    return 0;
}