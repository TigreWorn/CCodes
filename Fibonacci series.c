// fibonacci series
int main()
{
    int n, a=0, b=1, c, i;
    printf("enter limits:");
    scanf("%d", &n);
    for (i=1;i<=n;i++)
    
{   c=a+b;
    printf("%d\n", a);
    a=b;
    b=c;
}
return 0;
}
