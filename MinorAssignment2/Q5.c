#include<stdio.h>
int main()
{
    //first code
    float x = 25.0,y=10.0;
    if(y!=(x-10.0))
    x = x-10.0;
    else
    x = x/2.0;
    printf("%lf\n",x); // output: 15.000000

    // second code
    x = 25.0;
    y = 10.0;
    if(y<15.0)
        if( y>=0.0)
            x = 5*y;
        else
        x = 2*y;
    else 
    x=3*y;
    printf("%lf\n",x); // Output: 50.000000

    //third code

    int j = 0;
    while (j <= 5) {
    printf("%3d %3d\n",j, 10 - j);
    j = j + 1;
    }
    // output:
    // 0  10
    // 1   9
    // 2   8
    // 3   7
    // 4   6
    // 5   5

    //fourth code:
    // j=1;
    // while ( ){
    // printf ( "%d ", j++ ) ;
    // if(j>10)
    // break ;
    // }
    // Output: code will produce an error in while() 

    //fifth code:
    int k,n=5;
    for(j=1, k=1; k<= n; j+= 2, k++){
    printf("%d%d\n", j, k);
    }
    /* Output: 
    11
    32
    53
    74
    95
    */

   //sixth code

   int count = 11;
    while (--count+1);
    printf("count down is %d \n",count);
    /*Output: count down is -1 */

    //seventh code

    int m, nn;
    for (m = 9; m > 0; --m)
    for (nn = 6; nn > 1; --nn)
    printf("#########\n");

    /*Output
    #########
    #########
    ..
    ..
    45 times
    */

   //eight code

   int ii=2;
    switch(ii) {
    default: printf("Hello ");
    case 1: printf("Hello ");
    case 2:
    case 3: printf("Hello ");
    }
    printf("\n");
    // output: Hello

    //ninth code:
    ii = 0 ;
    while(ii++) {
    printf( "%d ",ii);
    if (ii > 2 )
    break ;
    }
    // output: 

    //tenth code
    int a = 10;
    if(a=10){
    printf("%d %d\n",sizeof(2.3f),sizeof(2.3));
    }
    //output: 4 8







    return 0;
}