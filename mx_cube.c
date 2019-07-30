void mx_printchar(char c);

static void mx_horizontal(int n){
   mx_printchar('+');
   for(int i = 0; i < n; i++){
       mx_printchar('-');
       mx_printchar('-');
   }
   mx_printchar('+');
}
static void mx_up_face(int n){
   for (int i = 0; i < n / 2; i++){
       for (int j = n / 2 - i; j > 0; j--)
           mx_printchar(' ');
       mx_printchar('/');
       for(int j = 0; j < n * 2; j++)
           mx_printchar(' ');
       mx_printchar('/');
       for(int j = 0; j < i; j++)
           mx_printchar(' ');
       mx_printchar('|');
       mx_printchar('\n');
   }
}
static void central(int n) {
   for (int i = 0; i < n / 2 + n % 2; i++){
       mx_printchar('|');
       for(int j = 0; j < 2 * n; j++)
           mx_printchar(' ');
       mx_printchar('|');
       for(int j = 0; j < n / 2; j++)
           mx_printchar(' ');
       if(i != n / 2 + n % 2 - 1)
           mx_printchar('|');
       else
           mx_printchar('+');
       mx_printchar('\n');
   }
}
static void down(int n){
   for(int i = 0; i < n / 2; i++){
       mx_printchar('|');
       for(int j = 0; j < n * 2; j++)
           mx_printchar(' ');
       mx_printchar('|');
       for (int j = n / 2 - i - 1; j > 0; j--)
           mx_printchar(' ');
       mx_printchar('/');
       mx_printchar('\n');
   }
}

void mx_cube(int n){
   if (n > 1) {
       for(int k = n / 2; k > 0; k--)
           mx_printchar(' ');
       mx_printchar(' ');
       mx_horizontal(n);
       mx_printchar('\n');
       mx_up_face(n);
       mx_horizontal(n);
       for(int i = 0; i < n / 2; i++)
           mx_printchar(' ');
       mx_printchar('|');
       mx_printchar('\n');
       central(n);
       down(n);
       mx_horizontal(n);
       mx_printchar('\n');
   }
}
