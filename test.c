#include <stdio.h>
#include <stdio.h>

int main (void)
{
    int i;
    int array[] = {70,152,195,284,475,612,791,896,810,850,737,1332,1469,1120,
                   1470,832,1785,2196,1520,1480,1449};
    for ( i = 0; i < sizeof(array) / sizeof(int); i++ )
    {   
        char c;
        c = array[i] / ( i + 1); 
        printf("%c", c); 
    }   
    printf("\n");

    return 0;
}
