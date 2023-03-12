#include <stdio.h>
#include <math.h> 
#define PI 3.141592654

long long intResult = 0;
double k = 0, result = 0;

int menu()
{
    int ch;
    printf("\n1. Addition");
    printf("\n2. Subtraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Remainder");
    printf("\n6. Factorial");
    printf("\n7. Sine");
    printf("\n8. Cosine");
    printf("\n9. Tangent");
    printf("\n10.log(base e)");
    printf("\n11.log(base 10)");
    printf("\n12.e^x");
    printf("\n13.SquareRoot");
    printf("\n14.CubeRoot");
    printf("\n15.Power");
    printf("\n16.Absolute Value");
    printf("\n17.Sine Inverse");
    printf("\n18.Cosine Inverse");
    printf("\n19.Tangent Inverse");
    printf("\n20.Ceil Function");
    printf("\n21.Floor Function");
    printf("\n22.Permutation (nPr)");
    printf("\n23.Combination (nCr)");
    printf("\n24.Clear");
    printf("\n25.Exit");
    printf("\nEnter your choice: ");

    scanf("%d", &ch);
    return ch;
}

void addition()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result += a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a + b;
        printf("\nResult = %lf", result);
    }
}

void subtraction()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result -= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a - b;
        printf("\nResult = %lf", result);
    }
}

void multiplication()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        result *= a;
        printf("\nResult = %lf", result);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        result = a * b;
        printf("\nResult = %lf",result);
    }
}

void division()
{
    double a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lf", &a);
        if(a!=0)
        {
        result /= a;
        printf("\nResult = %lf", result);
        }
        else
        {
        printf("Math Error\n");
        }
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lf%lf", &a, &b);
        if (b!=0)
        {
        result = a / b;
        printf("\nResult = %lf", result);
        }
        else
        {
        printf("Math Error\n");
        }
    }
}

void mod()
{
    long long a, b;
    if(k)
    {
        printf("\nEnter a number: ");
        scanf("%lld", &a);
        intResult %= a;
        printf("\nResult = %d",intResult);
    }
    else
    {
        printf("\nEnter two numbers: ");
        scanf("%lld%lld", &a, &b);
        intResult = a % b;
        printf("\nResult = %lld", intResult);
    }
}

void factorial()
{
    long long n, f, i;
    printf("\nEnter a number: ");
    scanf("%lld", &n);
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    intResult = f;
    printf("\nResult = %lld", intResult);

}
long long factorialReturn(long long n)
{
    long long f, i;
    f = 1;
    for(i = 1; i<=n; i++)
    {
        f = f * i;
    }
    return f;
}

void sine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = sin(a);
    printf("\nResult = %lf", result);
}

void cosine()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = cos(a);
    printf("\nResult = %lf", result);
}

void tangent()
{
    double a;
    printf("Enter angle in radians: ");
    scanf("%lf", &a);
    result = tan(a);
    printf("\nResult = %lf", result);
}

void logBasee()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log(a);
    printf("\nResult = %lf", result);
    }
}

void logBase10()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    if(a<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = log10(a);
    printf("\nResult = %lf", result);
    }
}

void eToPowerX()
{
    double a;
    printf("Enter a number: ");
    scanf("%lf", &a);
    result = exp(a);
    printf("\nResult = %lf", result);
}

void squareRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    if (n<0)
    {
    printf("Math Error\n");
    }
    else
    {
    result = sqrt(n);
    printf("\nResult = %lf", result);
    }
}

void cubeRoot()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    result = cbrt(n);
    printf("\nResult = %lf", result);
}

void power()
{
    double base, expo;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &expo);
    result = pow(base, expo);
    printf("%.1lf^%.1lf = %.2lf", base, expo, result);
}

void absolute()
{
    int n;
    printf("\nEnter a number: ");
    scanf("%lld",&n);
    intResult = abs(n);
    printf("\nResult = %lld", intResult);
}

void sineInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  
    {
        printf("Not in Range");
    }
    else
    {
        result = asin(n);
        printf("Inverse of sin(%.2f) = %.2lf in radians\n", n, result);

        result = asin(n)*180/PI;
        printf("Inverse of sin(%.2f) = %.2lf in degrees\n", n, result);
    }
}

void cosineInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    if(n>1 || n<-1)  
    {
        printf("\nNot in Range");
    }
    else
    {
        result = acos(n);
        printf("\nInverse of cos(%.2f) = %.2lf in radians\n", n, result);

        result = acos(n)*180/PI;
        printf("\nInverse of cos(%.2f) = %.2lf in degrees\n", n, result);
    }
}

void tangentInverse()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = atan(n);

    printf("\nInverse of tan(%.2f) = %.2f in radians", n, result);

    result = (result * 180) / PI;
    printf("\nInverse of tan(%.2f) = %.2f in degrees", n, result);
}

void ceilF()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = ceil(n);
    printf("Ceiling integer of %.2f = %f", n, result);
}

void floorF()
{
    double n;
    printf("\nEnter a number: ");
    scanf("%lf",&n);
    result = floor(n);
    printf("Floor integer of %.2f = %f", n, result);
}

void npr()
{
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld%lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / factorialReturn(n - r);
    printf("\nResult = %lld", intResult);
    }
    else
    {
    printf("Math Error\n");
    }
}

void ncr()
{
    long long n, r;
    printf("\nEnter two numbers: ");
    scanf("%lld %lld", &n, &r);
    if(n>=r && n>0 && r>=0)
    {
    intResult = factorialReturn(n) / (factorialReturn(r) * factorialReturn(n - r));
    printf("\nResult = %lld", intResult);
    }
    else
    {
    printf("Math Error\n");
    }
}

void clear()
{
    printf("\nOld Data Cleared");
    intResult = 0;
    result = 0;
    k = 0;
}

void main()
{
    
    int l = 0;

    while(1)
    {
        printf("\n    Old Decimal Result = %f", result);
        printf("\n    Old Integer Result = %d", intResult);

        switch(menu())
        {
            case 1: addition();
                    k = 1;
                    break;

            case 2: subtraction();
                    k = 1;
                    break;

            case 3: multiplication();
                    k = 1;
                    break;

            case 4: division();
                    k = 1;
                    break;

            case 5: mod();
                    k = 1;
                    break;

            case 6: factorial();
                    k = 1;
                    break;

            case 7: sine();
                    k = 1;
                    break;

            case 8: cosine();
                    k = 1;
                    break;

            case 9: tangent();
                    k = 1;
                    break;

            case 10:logBasee();
                    k = 1;
                    break;

            case 11:logBase10();
                    k = 1;
                    break;

            case 12:eToPowerX();
                    k = 1;
                    break;

            case 13:squareRoot();
                    k = 1;
                    break;

            case 14:cubeRoot();
                    k = 1;
                    break;

            case 15:power();
                    k = 1;
                    break;

            case 16:absolute();
                    k = 1;
                    break;

            case 17:sineInverse();
                    k = 1;
                    break;

            case 18:cosineInverse();
                    k = 1;
                    break;

            case 19:tangentInverse();
                    k = 1;
                    break;

            case 20:ceilF();
                    k = 1;
                    break;

            case 21:floorF();
                    k = 1;
                    break;

            case 22:npr();
                    k = 1;
                    break;

            case 23:ncr();
                    k = 1;
                    break;

            case 24:clear();
                    break;

            case 25:l = 1;
                    break;

            default:
                    printf("\nInvalid Choice !");
        }
    
        printf("\nPress any button to continue ...");
        getch();
        system("cls");

        if(l == 1)
            break;
    }
}