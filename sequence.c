int nineNumber (int length)
{
    int i;
    int num = 0;
    for (i=0;i<length;i++)
    {
        num = num*10 + 9;
    }
        return num;
}
int main()
{
    int lengthSeq;
    int result;
    printf("Hey there! Please enter length for nth sequence : ");
    scanf("%d", &lengthSeq);
    result = nineNumber(lengthSeq);
    printf("Result = %d\n", result);
    return 0;
}
