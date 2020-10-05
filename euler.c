
int one (int a){
    int ans = 0;
    for (int i = 3; i < a; i++){
        if (i % 3 == 0 || i % 5 == 0){
            ans += i;
        }        
    }
    return ans;
}

int two (int a){
    int num1 = 1;
    int num2 = 2;
    int ans = 0;
    while (num2 < a){
        if (num2 % 2 == 0){
            ans += num2;
        }
        int temp = num2;
        num2 = num1 + num2;
        num1 = temp;
    }
    return ans;
}

long long three (long long n){
    long long i = n;
    for (i = 3; n > 1; i += 2)
        while (n % i == 0)
            n /= i;
    return i - 2;
}