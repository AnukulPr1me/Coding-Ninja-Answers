https://www.codingninjas.com/studio/problems/alpha-triangle_6581429

void alphaTriangle(int n) {
    // Write your code here.
    for(int i = 0; i<n; i++)
    {
        char ch = 'A' + n-1;
        for(int j = 0; j<=i; j++)
        {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }
}