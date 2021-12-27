#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int count_words(char n_string[100]) {
    
    int i = 0, ncount = 0, slovo = 0;
    while (n_string[i] == ' ' && n_string[i] != '\0')
        i++;
    slovo = 0;
    while (n_string[i] != '\0') {
        if (n_string[i] != ' ' && slovo == 0)
        {
            slovo = 1;
            ncount++;
        }
        else if (n_string[i] == ' ')
            slovo = 0;
        i++;
    }
    return ncount;
}

int main()
{
    int i, count, n;
    cout << "Enter your string: ";
    char str[] = "your string is: ";
    char in_string[100];
    gets_s(in_string, 100);
    cout << str << in_string << endl;
    count = count_words(in_string);
    cout << "Number of words: ";
    cout << count << endl;
    n = count;
    string* arr1 = new string[n];
    int* arr2 = new int[n];
    string buff = "";
    int first = 0;
    i = 0, count = 0;
    while (in_string[i] != '\0') {
        if (in_string[i] != ' ')
        {
            buff = buff + in_string[i];
        }
        else if (in_string[i] == ' ' && in_string[i+1] != ' ')
        {
            arr1[count] = buff;
            count++;
            buff = "";
        }
      i++;
    }
    arr1[count] = buff;
    for (int k = 0; k < n; k++) {
        cout << arr1[k] << " ";
    }
    cout << endl;
    for (int k = 0; k < n; k++) {
        arr2[k] = stoi(arr1[k]);
    }

        int min = arr2[0], max = arr2[0], maxindex = 0, minindex = 0;
        
        for (int m = 1; m < n; m++) {
            if (arr2[m] < min) {
                min = arr2[m];
                minindex = m;
            }
            if (arr2[m] > max) {
                max = arr2[m];
                maxindex = m;
            }

        }
        cout << "min value: " << min << endl;
        cout << "max value: " << max << endl;

        arr2[minindex] = max;
        arr2[maxindex] = min;

        for (int k = 0; k < n; k++) {
            cout << arr2[k] << "  ";

        }
}

