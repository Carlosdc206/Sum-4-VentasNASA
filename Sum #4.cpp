
#define maxfilas 4
#define maxcolumnas 5

 void leerventas(float [][maxcolumnas],int, int);
 void imprimir(float [][maxcolumnas],int,int);
 int main()
 {
 	float ventas [maxfilas][maxcolumnas];
 	int venta=0,produc=0;
 	
 	int i,j;
 	
 	double totalSales[maxfilas]={0.0},productSales[maxcolumnas] = {0.0};
 	
 	
 	
 	float total[maxfilas]={0};
 	
 	//float vendedor[maxcolum]={0};
 	
 	
 	leerventas(ventas, maxfilas, maxcolumnas);
 	
 	
 	
 	
 	printf("\n");
 	
 		for ( i = 0; i <= maxfilas-1; ++i ) {
		 //totalSales = 0.0;
	//cout << i;
	
	
	for ( j = 0; j <= maxcolumnas-1; ++j ) {
	totalSales[i] += ventas[ i ] [ j ];
	
	//cout << setw( 12) << setprecision( 2 ) << ventas[ i ][ j ];
	productSales[ j ] += ventas[ i ][ j ];
		}	
		
	
		 }
		
		
		
		for(i=0;i<=maxfilas-1;i++){
		
			for(j=0;j<=maxcolumnas-1;j++){
		printf("%.2f\t",ventas[i][j]);
		
			}
			printf("%10.3lf\n", totalSales[i]);
		}
		
	//for(i=0;i<=maxfilas-1;i++)
	
 //printf("%13lf",totalSales[i]);
 
 
 printf("\n");
 printf("\n");	
  for ( j = 0; j <=maxcolumnas-1 ++j)
  	  printd("%.3lf\t",productSales[j]);
  	  
  	  
 system("pause");
 
 }



	void leerventas(float ventas[][maxcolumnas, int vendedor, int producto])
	
 {
 	int i,j;
 	for(i=0;i<maxfilas;i++)
 		//printf("\nvendedor[%d]	",i+1);
 	for(j=0;j<maxcolum;j++){
	 
	 	printf("\nvendedor[%d]	,i+1");
	 	printf("\n producto:%d	total? ",j+1);
	//printf("%-5d", ventas[i][j]);
		scanf("%f",&ventas[i[j]]);
	}
	
	
	
 }
