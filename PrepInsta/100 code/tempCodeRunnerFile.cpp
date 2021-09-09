int main(){
    int n,rev=0,rem;
    cin>>n;
    do{
        rem=n%10;
        rev=rev*10+rem;
        n/10;
    }while(n!=0);
    cout<<rev;    
    return 0;
}