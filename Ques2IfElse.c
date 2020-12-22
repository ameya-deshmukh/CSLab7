int main() {
    char c;
    double a, b;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &c);
printf("Enter two operands: ");
    scanf("%lf %lf",&a, &b);
     
    if (c=='+'){
            printf("%lf + %lf = %lf", a, b, a+b);
    }
    else if(c=='-'){
            printf("%lf - %lf = %lf",a, b, a-b);
            
    }

        else if(c=='*'){
        
            printf("%lf * %lf = %lf",a, b, a*b);
        }

        else if(c=='/'){
        
            printf("%lf / %lf = %lf",a, b, a/b);
        }

        else {
            printf("Operator not valid");
    }

    return 0;
}
