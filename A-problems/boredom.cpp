#include <iostream>
#include <vector>
 
using namespace std;
int main()
{
    long long cantidad, numero;
    vector<long long>numeros(100002, 0);
    cin >> cantidad;
    for(int i = 0 ; i < cantidad; i++)
    {
        cin >> numero;
        numeros[numero] += numero;
    }
    
    for(int i = 2; i < 100001; i++)
    {
        if(numeros[i - 1] > (numeros[i] + numeros[i - 2]))
            numeros[i] = numeros[i-1];
        else numeros[i] = numeros[i] + numeros[i - 2];
    }
    
    cout << numeros[100000] << endl;
 
    return 0;
}
