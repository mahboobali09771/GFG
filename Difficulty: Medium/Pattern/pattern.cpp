class Solution {
  public:
    void printDiamond(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j =1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=i;k++){
                cout<<("* ");
            }
            cout<<endl;
        }
    }
};