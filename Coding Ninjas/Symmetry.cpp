https://www.codingninjas.com/studio/problems/symmetry_6581914

void symmetry(int n) {
    int spaces = 2 * n - 2;
    for(int i = 0; i < 2 * n - 1; i++) {
        int stars = i < n ? i + 1 : 2 * n - i - 1;

        for(int j = 0; j < stars; j++) {
            cout << "* ";
        }

        for(int j = 0; j < spaces; j++) {
            cout << "  ";  // Two spaces for alignment
        }

        for(int j = 0; j < stars; j++) {
            cout << "* ";
        }
        cout << endl;

        if(i < n - 1)
            spaces -= 2;
        else
            spaces += 2;
    }
}
