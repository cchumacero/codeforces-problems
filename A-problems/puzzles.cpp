#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int>pieces(m);
    for(int i = 0; i < m; i++) cin >> pieces[i];

    sort(pieces.begin(),pieces.end());
    
    int j = 0, minimumDifference = 98989898;
    for(int i = (n-1); i < pieces.size(); i++)
    {
        if((pieces[i] - pieces[j]) < minimumDifference)
            minimumDifference = pieces[i] - pieces[j];
        j++;
    }
    cout << minimumDifference;
    return 0;
}