#include <stdio.h>
#include <stdlib.h>

int main(void)
{   system("color A");
    int z,x,c,v,b,n,m,a,s,d,q,toplam,mod;
    printf("TC kimlik numaranizi rakamlarin arasi bosluk olucak sekilde yaziniz.(son rakam haric):\n");
    printf("\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&z,&x,&c,&v,&b,&n,&m,&a,&s,&d);
    toplam=z+x+c+v+b+n+m+a+s+d;
    mod=toplam%10;
    printf("\n");
    printf("TC kimlik numaranizin son numarasi %d dir.",mod);
    printf("\n");

    return 0;
}
