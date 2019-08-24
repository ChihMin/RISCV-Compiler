int Index;
float sum;
float a[100];

void control() {
    int i, j;
    float m, n;
    i = 2147483647;
    j = -2147483648;
    write(i); write(", "); write(j); write("\n");
    write("i > j: "); write(i > j); write("\n");
    write("i >= j: ");write(i >= j); write("\n");
    write("i == j: ");write(i == j); write("\n");
    write("i < j: ");write(i < j); write("\n");
    write("i <= j: ");write(i <= j); write("\n");

    i = -2147483648;
    j = 2147483647;
    write(i); write(", "); write(j); write("\n");
    write("i > j: ");write(i > j); write("\n");
    write("i >= j: ");write(i >= j); write("\n");
    write("i == j: ");write(i == j); write("\n");
    write("i < j: ");write(i < j); write("\n");
    write("i <= j: ");write(i <= j); write("\n");
    
    i = j * 23 + 12 + i * 15 / 4;
    j = i / 7 * 13 + j * 12;
    write(i); write(", "); write(j); write("\n");
    write("i > j: ");write(i > j); write("\n");
    write("i >= j: ");write(i >= j); write("\n");
    write("i == j: ");write(i == j); write("\n");
    write("i < j: ");write(i < j); write("\n");
    write("i <= j: ");write(i <= j); write("\n");
    
    m = 123.345;
    n = -123.32;
    write(m); write(", "); write(n); write("\n");
    write("m < n: "); write(m < n); write("\n");
    write("m > n: "); write(m > n); write("\n");
    write("m == n: "); write(m == n); write("\n");
    write("m != n: "); write(m != n); write("\n");
    write("m <= n: "); write(m <= n); write("\n");
    write("m >= n: "); write(m >= n); write("\n");
    
    m = 123.32;
    n = 123.32;
    write(m); write(", "); write(n); write("\n");
    write("m < n: "); write(m < n); write("\n");
    write("m > n: "); write(m > n); write("\n");
    write("m == n: "); write(m == n); write("\n");
    write("m != n: "); write(m != n); write("\n");
    write("m <= n: "); write(m <= n); write("\n");
    write("m >= n: "); write(m >= n); write("\n");
    
    m = -123.32;
    n = 123.32;
    write(m); write(", "); write(n); write("\n");
    write("m < n: "); write(m < n); write("\n");
    write("m > n: "); write(m > n); write("\n");
    write("m == n: "); write(m == n); write("\n");
    write("m != n: "); write(m != n); write("\n");
    write("m <= n: "); write(m <= n); write("\n");
    write("m >= n: "); write(m >= n); write("\n");
}

float foo() {
    control();
    write("Please enter foo number: ");
    write(a[1]); write("\n");
    a[0] = 10.0;
    a[2] = 15.0;
    a[1] = 123.456;
    a[3] = 16.0;
    sum =  (a[1] / 12.0 + a[2] * 12.0) * 13.0 + a[3];
    a[4] = a[3] / a[2] + a[2] * a[1]; 
    a[5] = a[4] / a[3] + a[3] * a[2]; 
    a[6] = a[5] / a[4] + a[4] * a[3]; 
    a[7] = a[6] / a[5] + a[5] * a[4]; 
    a[8] = a[7] / a[6] + a[6] * a[5];
    write("Printing .... \n"); 
    write(a[4]); write("\n");
    write(a[5]); write("\n");
    write(a[6]); write("\n");
    write(a[7]); write("\n");
    write(a[8]); write("\n");
    write("Please enter the index: ");
    Index = 8;
    write("Index: ");
    write(Index); write(" is ");
    write(a[Index]); write("\n");
    write("\n");
    return sum;
}


void print(){
    int i, n, m;
    float x;
    i = 10; n = 10; m = 4; x = 3.0;
    while (i > 0 && x > 0.0) {
        if (!(i < 7)) {
            write(i); write(": "); write(a[i]); write("\n");
        } else {
            write(i); write(": Less equal than 7 -> "); 
            write(a[i]); write("\n");
        }
        i = i - 1;
        x = x - 0.5;
    }
}

void shit() {
    write("Enter shit function ... \n");
    sum = foo();
    write("Return value: "); write(sum); write("\n");
    print();
}

void HELLO() {
    write(123);
    write("\n");
    shit();
}

int MAIN() {
    HELLO();
    return 0;
}
