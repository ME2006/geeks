vector<vector<int>> transpose(int a[][M], int n)
{
    vector<vector<int>> k(n,vector<int>(n));
        for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) k[i][j]=a[j][i];
    }
    return k;
}