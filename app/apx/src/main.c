/** 
 *
 *
 *  \file      main.c
 *  \author    Norbert
 *  \date      2017-01-08
 */
#include	<priva/priva.h>
#include	<foo/foo.h>
#include	<stdio.h>

int main()
{
    Foo_Init();
    printf("private number: %d\n",PrivA_returnSomeNumber());

    return 0;
}
