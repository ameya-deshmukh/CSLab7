int main() {
    char c;
    double a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &c);
    printf("Enter two operands: ");
    scanf("%lf %lf",&a, &b);

    switch(c)
    {
        case '+':
            printf("%lf + %lf = %lf",a, b, a+b);
            break;

        case '-':
            printf("%lf - %lf = %lf",a, b, a-b);
            break;

        case '*':
            printf("%lf * %lf = %lf",a, b, a*b);
            break;

        case '/':
            printf("%lf / %lf = %lf",a, b, a/b);
            break;

        default:
            printf("Operator not valid");
    }

    return 0;
}
