https://www.codingninjas.com/studio/problems/alpha-hill_6581921

void alphaHill(int n) {
    // Write your code here.
     for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        char ch = 'A';
        int brakepoint = (2*i+1)/2;

        for(int j = 0; j< 2*i+1; j++)
        {
            cout << ch << " ";
            if(j < brakepoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }

        for(int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}