//version 1.0(Pre-Alpha)
//Author: Emmanuel Antony

#include<iostream.h>

int intVal(double n)
{
    a = n - floor(n);
    if(a < 0.5)
    {
        return (int)floor(n);
    }
    else
    {
        return (int)ceil(n);
    }
}

double floor(double n)
{
    double result = 0;
    for(int i = n; i >= 1; i--)
    {
        result++;
    }
    return result;
}

double ceil(double n)
{
    double result = floor(n) + 1;
}

int average(int a, int b)
{
    double sum = a + b;
    int avg = intVal((sum / 2));
    return avg;
}

int average(int a, int b, int c)
{
    double sum = a + b + c;
    int avg = intVal((sum / 3));
    return avg;
}

int average(int size, int array[])
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    int avg = intVal((sum / (size)));
    return avg;
}

double average(double a, double b)
{
    double avg = (a + b) / 2;
    return avg;
}

double average(double a, double b, double c)
{
    double avg = (a + b + c) / 3;
    return avg;
}

double average(int size, double array[])
{
    double sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    double avg = sum / (size);
    return avg;
}

int max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a, int b, int c)
{
    int array = {a, b, c};
    int m = max(3, array);
    return m;
}

int max(int size, int array[])
{
    int MAX = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] > MAX)
        {
            MAX = array[i];
        }
    }
    return MAX;
}

double max(double a, double b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

double max(double a, double b, double c)
{
    double array = {a, b, c};
    double m = max(3, array);
    return m;
}

double max(int size, double array[])
{
    double MAX = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] > MAX)
        {
            MAX = array[i];
        }
    }
    return MAX;
}

int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b, int c)
{
    int array = {a, b, c};
    int m = min(3, array);
    return m;
}

int min(int size, int array[])
{
    int MIN = 0;
    for(int i = 0; i < size; i++)
    {
        if(array[i] < MAX)
        {
            MAX = array[i];
        }
    }
    return MAX;
}

double min(double a, double b)
{
    if(a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int mean(int size, int array[])
{
    int m = average(size, array[]);
    return m;
}

double mean(int size, int array[])
{
    double m = average(size, array[]);
    return m;
}

void main()
{
    int a = 5, b = 6;
    int max = max(a, b);
    cout<<max;
}
