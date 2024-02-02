https://www.codingninjas.com/studio/problems/rotated-triangle_6573688

void nStarTriangle(int n) {
    // Write your code here.
   for(int i=1;i<=2*n-1;i++)
   {
       int stars = (i>n?2*n-i:i);
       for(int j=1;j<=stars;j++)
       {
           cout << "*";
       }
       cout << endl;
   }
}