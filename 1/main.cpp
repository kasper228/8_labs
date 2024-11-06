#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <algorithm>
#include <numeric>
#include <list>
#include "read.hpp"
#include "change.hpp"
#include <fstream>
#include <sstream>

using namespace std;
using namespace test;

void lab1()
{
    int num1; // -21474836417 - 2147483647, 32 bit
    int num2;
    char num3; // 0-255, 8 bit
    char num4;
    string num5; //2^67
    string num6;
    bool num7; //0-1, 1
    bool num8;
    double num9; // 15 цифр, 64 bit
    double num10;
    float num11; // 7 цифр, 32 bit
    float num12;
    unsigned int num13; // 0-4294967295, 32 bit
    unsigned int num14;
    short num15; //-32768 - 32767, 16 bit
    short num16;
    long long num17; // -9223372036854775807 - 9223372036854775807, 64 bit
    long long num18;
    cout<<"Введите целочисленные значения: ";
    cin>>num1>>num2;
    cout<< "num1*num2 = ";
    cout<<num1*num2;
    cout<<endl<<"Введите символьные значения значения: ";
    cin>>num3>>num4;
    cout<< "num3+num4 = ";
    cout<<num3+num4;
    cout<<endl<<"Введите строковые значения значения: ";
    cin>>num5>>num6;
    cout<< "num5+num6 = ";
    cout<<num5+num6;
    cout<<endl<<"Логические значения значения: ";
    cin>>num7>>num8;
    cout<< "num7+num8 = ";
    cout<<num7+num8;
    cout<<endl<<"Введите double значения значения: ";
    cin>>num9>>num10;
    cout<<"num9/num10 = "<<num9/num10;
    cout<<endl<<"Введите float значения значения: ";
    cin>>num11>>num12;
    cout<<"num11*num12 = "<<num11*num12;
    cout<<endl<<"Введите uns int значения значения: ";
    cin>>num13>>num14;
    cout<<"num13-num14 = "<<num13-num14;
    cout<<endl<<"Введите short значения значения: ";
    cin>>num15>>num16;
    cout<<"num15-num16 = "<<num15-num16;
    cout<<endl<<"Введите long long значения значения: ";
    cin>>num17>>num18;
    cout<<"num17+num18 = "<<num17+num18;
}

void lab2()
{
    long long a, b, c;
    cout<<"Введите стороны параллепипида: ";
    cin>>a>>b>>c;
    long long d = a*b*c;
    cout<<"Объем прямоугольного параллепипида = "<<d;
}

void lab3()
{
    int num, i;
    cout<<"введите число: ";
    cin>>num;
    cout<<"i бит равен ";
    cin>>i;
    cout<<num<<endl;
    num |= (1<<i);
    cout<<num;
}

void lab4()
{
    cout<<"Номер 1:\n";

    int a, b, c;
    cout<<"Числа a, b, c = ";
    cin>>a;
    cin>>b;
    cin>>c;
    if (a < b && b < c)
    {
        cout<<"c-b-a = "<<c-b-a;
    }
    else if (a%c==0)
    {
        cout<<"a/c+b = "<<a/c+b;
    }
    else
    {
        cout<<"a+b+c = "<<a+b+c;
    }

    cout<<"\nномер 2:\n";

    int n;
    cout<<"введите код товара: ";
    cin>>n;
    switch (n)
    {
    case 1:
        cout<<"хлеб";
        break;
    case 2:
        cout<<"молоко";
        break;
    case 3:
        cout<<"сахар";
        break;
    case 4:
        cout<<"соль";
        break;
    case 5:
        cout<<"яйца";
        break;
    default:
        cout<<"Неправильно выбран код товара";
        break;
    }

    cout<<"\nномер 3:\n";

    bool x;
    cout<<"Введите значение: ";
    cin>>x;
    if (x)
    {
        cout<<"Negative number";
    }
    else
    {
        cout<<"positive number";
    }
}

void lab5()
{
    cout<<"Номер1\n";

    double nums[10]{-124.345, -4.0, 44.12515, -6624.153, 746.0, -67.0, 55.0, 0.124, -0.124, 124.0};
    double mult = 1.0;
    double min = nums[0];
    int number = 0;
    for (int i = 0; i < size(nums); i++)
    {
        double n = floor(nums[i]);
        if(nums[i] - n != 0 && nums[i] < 0)
        {
            cout<<nums[i]<<endl;
            mult = mult * nums[i];
            cout<<"цикл "<<i<<"mult "<< std::setprecision(14) << std::fixed << mult<<endl;
            if (nums[i] < min)
            {
                min = nums[i];
                number = i;
            }
        }
    }
    cout<<"Произведение = "<< std::setprecision(14) << std::fixed << mult<<"\nНаименьшее число = "<<min<<"\nНомер = "<<number;

    cout<<"\nНомер2\n";

    int num;
    cout<<"введите число: ";
    cin>>num;
    string s = std::to_string(num);
    int minn = s[0] - '0';
    for (int i = 0; i < size(s); i++)
    {
        if ((s[i] - '0') < minn)
        {
            minn = s[i] - '0';
        }
    }
    cout<<"наименьшая цифра = "<<minn;
}

bool cmp(int a, int b)
{
    int sum1 = 0;
    int sum2 = 0;
    string s1 = to_string(a);
    string s2 = to_string(b);
    for (int i = 0; i < size(s1); i++)
    {
        sum1 += s1[i] - '0';
    }
    for (int i = 0; i < size(s2); i++)
    {
        sum2 += s2[i] - '0';
    }
    return sum1>sum2;
}

bool cmp1(int a, int b)
{
    int num1 = 0;
    int num2 = 0;
    string s1 = to_string(a);
    string s2 = to_string(b);
    num1 = s1[0] - '0';
    num2 = s2[0] - '0';
    return num1>num2;
}

void lab6()
{
    cout<<"номер 1: "<<endl;

    int mass[10]{1, 50, 45, 7845, 333, 124, 13515, 1, 4, 425};
    bool a = true;
    for (int i = 0; i < size(mass); i++)
    {
        cout<<mass[i]<<"  ";
    }
    for (int i = 0; i < size(mass); i++)
    {
        string s = std::to_string(mass[i]);
        int sum = 0;
        for (int j = 0; j < size(s); j++)
        {
            sum += s[j] - '0';
        }
        if (sum == 19)
        {
            cout<<endl;
            for (int i = 0; i < size(mass); i++)
            {
                cout<<mass[i]<<"  ";
                a = false;
            }
            break;
        }
    }
    cout<<endl;
    if(a)
    {
        sort(mass, mass+10, std::greater<int>());
        for (int i = 0; i < size(mass); i++)
        {
            cout<<mass[i]<<"  ";
        }
    }

   cout<<"Номер 2: "<<endl;

    const int A = 7;
    int mass2[A];
    for (int i = 0; i < A; i++)
    {
        cout<<"введите число в порследовательтность: ";
        cin>>mass2[i];
    }
    for (int i = 0; i < A; i++)
    {
        cout<<mass2[i]<<"  ";
    }
    cout<<endl;
    sort(mass2, mass2+7, std::greater<int>());
    sort(mass2, mass2+7, cmp1);
    sort(mass2, mass2+7, cmp);
    for (int i = 0; i < A; i++)
    {
        cout<<mass2[i]<<"  ";
    }
    
    cout<<"Номер 3:"<<endl;

    int mass3[5][4];
    int sum3 = 0;
    int summ3 = 0;
    int num = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<"введите число в порследовательтность: ";
            cin>>mass3[j][i];
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(i==0)
            {
                sum3 += mass3[j][i];
            }
            summ3 += mass3[j][i];
        }
        if (fabs(sum3) < fabs(summ3))
        {
            sum3 = summ3;
            num = i;
            cout<<"sum = "<<sum3<<"num = "<<num<<endl;
        }
        summ3 = 0;
    }
    for (int i = 0; i < 4; i++)
    {
        mass3[i][num] = 9999;
    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<mass3[j][i]<<"  ";
        }
        cout<<endl;
    }

   cout<<"Номер 4: "<<endl;

   const int B = 4;
    int mass4[B*2];
    for (int i = 0; i < B; i++)
    {
        cout<<"введите число в порследовательтность: ";
        cin>>mass4[i];
    }
    for (int i = 0; i < B; i++)
    {
        cout<<mass4[i]<<"  ";
    }
    for (int i = B; i < B*2; i++)
    {
        mass4[i] = mass4[i-B];
    }
    for (int i = 0; i < B; i++)
    {
        cout<<mass4[i]<<"  ";
    }

   cout<<"Номер 5: " <<endl;

    list<int> mass5{1, 121, 634, 4, 334, 3, 565};
    for (auto i = mass5.begin(); i != mass5.end(); i++)
    {
        cout<<*i<<"  ";
    }
    cout<<endl;
    for (auto i = mass5.begin(); i != mass5.end(); )
    {
        string strr = to_string(*i);
        if (((strr[0] - '0') == (strr[size(strr)-1] - '0')) && (size(strr) != 1))
        {
            i = mass5.erase(i);
        }
        else
        {
            ++i;
        }
    }
    for (auto i = mass5.begin(); i != mass5.end(); i++)
    {
        cout<<*i<<"  ";
    }
    cout<<endl;
    for (auto i = mass5.begin(); i != mass5.end(); i++)
    {
        string strr = to_string(*i);
        if ((strr[0] - '0') == 3)
        {
            mass5.insert(i, *i);
        }
    }
    for (auto i = mass5.begin(); i != mass5.end(); i++)
    {
        cout<<*i<<"  ";
    }
    cout<<endl;
}

void lab7()
{
    int mass[5][5] {{1,2,3,4,5}, {6,6,5,4,3}, {2,1,1,2,3}, {4,5,5,4,3}, {2,1,1,2,3}};
    int *p[5];
    for (int i = 0; i < 5; i++)
    {
        p[i] = mass[i];
    }
    printMtrx(mass, 5, 5);
    bool secondMax = findMtrx(p, 5, 5);
    cout<<endl;
    if (secondMax)
    {
        sortMtrx(p, 5, 5);
        printMtrx(mass, 5, 5);
    }
}

bool cmp2(string a, string b)
{
    char words[6] = {'a', 'o', 'u', 'i', 'e', 'y'};
    int count_a = 0;
    int count_b = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == words[0] || a[i] == words[1] || a[i] == words[2] || a[i] == words[3] || a[i] == words[4] || a[i] == words[5])
        {
            count_a++;
        }
    }
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == words[0] || b[i] == words[1] || b[i] == words[2] || b[i] == words[3] || b[i] == words[4] || b[i] == words[5])
        {
            count_b++;
        }
    }
    return count_a>count_b;
}

bool simvs(int m, string wordsStrr)
{
    for (int j = 0; j < m; j++)
    {
        for (int l = j+1; l < m; l++)
        {
            if(wordsStrr[j] == wordsStrr[l])
            {
                return true;
            }
        }
    }
    return false;
}

struct char_qual
{
    char ch;
    int count;
};

bool cmp3(char_qual a, char_qual b)
{
    return a.count > b.count;
}

void lab8()
{
    cout<<"номер1: \n\n";

    char words[6] = {'a', 'o', 'u', 'i', 'e', 'y'};
    string s;
    int n;
    int count = 0;
    list<string> wordsStr;
    stringstream ss(s);
    string word;
    ifstream file("C://Users//GGSudakov//Desktop//1//text.txt");
    getline(file, s);
    file.close();
    cout<<"введите количество слов: ";
    cin>>n;
    while (getline(ss, word, ' '))
    {
        wordsStr.push_back(word);
    }
    cout<<endl;
    wordsStr.sort(cmp2);
    ofstream out;
    out.open("C://Users//GGSudakov//Desktop//1//word.txt");
    for (auto i = wordsStr.begin(); i != wordsStr.end(); i++)
    {
        if (count != n)
        {
            int count_word = 0;
            out << *i << " "; 
            string& w = *i;
            for (int i = 0; i < w.size(); i++)
            {
                if (w[i] == words[0] || w[i] == words[1] || w[i] == words[2] || w[i] == words[3] || w[i] == words[4] || w[i] == words[5])
                {
                    count_word++;
                }
            }
            cout<<count_word<< " ";
        }
        else
        {
            break;
        }      
        count++;  
    }
    out.close();

    cout<<"Номер 2: \n\n";
    
    string s1;
    char words[6] = {'a', 'o', 'u', 'i', 'e', 'y'};
    ifstream file1("C://Users//GGSudakov//Desktop//1//text.txt");
    getline(file1, s1);
    file1.close();
    list<string> wordsStr1;
    stringstream ss1(s1);
    string word1;
    while (getline(ss1, word1, ' '))
    {
        wordsStr1.push_back(word1);
    }
    ofstream out1;
    out1.open("C://Users//GGSudakov//Desktop//1//word.txt");
    for (auto i = wordsStr1.begin(); i != wordsStr1.end(); )
    {
        string str = *i;
        string wordsStrr;
        for (int j = 0; j < str.size(); j++)
        {
            if (str[j] == words[0] || str[j] == words[1] || str[j] == words[2] || str[j] == words[3] || str[j] == words[4] || str[j] == words[5])
            {
               wordsStrr += str[j];
            }
        }
        int m = wordsStrr.size();
        if (simvs(m, wordsStrr))
        {
            out1 << *i << " ";
            i = wordsStr1.erase(i);
        }
        else
        {
            i++;
        }
    }
    for (auto i = wordsStr1.begin(); i != wordsStr1.end(); i++)
    {
        string str = *i;
        reverse(str.begin(), str.end());
        out1 << str << " ";
    }
    out1.close();
    cout<<endl;

    cout << "номер 3: \n";

    string s2;
    string strText;
    int wordCount = 0;
    struct char_qual alph[26];
    ifstream file2("C://Users//GGSudakov//Desktop//1//text.txt");
    while(getline(file2, s2))
    {
        strText+=s2;
        strText+="\n";
    }
    file2.close();
    for (int i = 0; i < 26; i++)
    {
        alph[i].ch = (char)i+97;
        alph[i].count = 0;
        
    }
    for (int i = 0; i < strText.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (strText[i] == alph[j].ch)
            {
                alph[j].count++;
            }
            
        }
        
    }
    sort(alph, alph+26, cmp3);
    for (int i = 0; i < 26; i++)
    {
        cout<<alph[i].ch<<" "<<alph[i].count<<"   ";
    }
    int countSimv = 0;
    string wordChCount;
    ofstream out2;
    out2.open("C://Users//GGSudakov//Desktop//1//word.txt");
    for (int i = 0; i < strText.size(); i++)
    {
        if (strText[i] == alph[0].ch || strText[i] == alph[1].ch || strText[i] == alph[2].ch || strText[i] == alph[3].ch || strText[i] == alph[4].ch)
        {
            countSimv++;
            strText[i] = toupper(strText[i]);
            wordChCount += strText[i];
        }
        out2 << strText[i];
        if (strText[i] == ' ' && wordChCount != "")
        {
            out2 << '(' << wordChCount << ')' << ' ';
            countSimv = 0;
            wordChCount = "";
        }
        
    }
    out2.close();
}

int main()
{
    setlocale(LC_ALL, "Rus");
    int a;
    cout<<"Лабораторная номер ";
    cin>>a;
    if(a == 1)
    {
        lab1();
    }
    else if(a == 2)
    {
        lab2();
    }
    else if(a == 3)
    {
        lab3();
    }
    else if(a==4)
    {
        lab4();
    }
    else if(a==5)
    {
        lab5();
    }
    else if(a==6)
    {
        lab6();
    }
    else if(a==7)
    {
        lab7();
    }
    else if(a==8)
    {
        lab8();
    }
    return 0;
}