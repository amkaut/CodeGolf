void main()
{
    int i,j = 0;
    puts(":");
    for( i = 0; i < 33; ++i )
    {
	printf(":-");
	for( j = 0; j < 2*i-1; ++j )
	{
	    printf(")");
	}
	puts("");
    }
}
