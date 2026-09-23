#include <iostream>
using namespace std;

void read(int a[], int &n);
void display(int a[], int n);
void swap(int &i, int &j);
void sort(int a[], int &n);

int main()
{
    int arr[100];
    int n;
    read(arr, n);
    sort(arr, n);
    display(arr, n);
    return 0;
}

void read(int a[], int &n)
{
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl;
}

void display(int a[], int n)
{
    cout << "Sorted array: ";

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    cout << endl;
}

void swap(int &i, int &j)
{
    int temp = i;
    i = j;
    j = temp;
}

void sort(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
