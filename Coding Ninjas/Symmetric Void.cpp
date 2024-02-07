https://www.codingninjas.com/studio/problems/symmetric-void_6581919

void symmetry(int n) {
    int space = 0;
    // Upper half of the pattern
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        for(int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for(int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }

        space += 2;
        cout << endl;
    }

    // Lower half of the pattern
    space = 2 * (n - 1);
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        for(int j = 0; j < space; j++)
        {
            cout << " ";
        }

        for(int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        space -= 2;
        cout << endl;
    }
}