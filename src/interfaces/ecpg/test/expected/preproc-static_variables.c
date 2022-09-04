/* Processed by ecpg (regression mode) */
/* These include files are added by the preprocessor */
#include <ecpglib.h>
#include <ecpgerrno.h>
#include <sqlca.h>
/* End of automatic include section */
#define ECPGdebug(X,Y) ECPGdebug((X)+100,(Y))

#line 1 "static_variables.pgc"
#include <stdlib.h>


#line 1 "regression.h"






#line 3 "static_variables.pgc"


/* exec sql whenever sqlerror  stop ; */
#line 5 "static_variables.pgc"


/* declare cur cursor for select firstname , lastname , address , year_of_birth , height_in_sm , weight_in_kg , data1 , data2 , data3 from persons */
#line 11 "static_variables.pgc"


/* exec sql begin declare section */
	    
	    
	        
				    

#line 14 "static_variables.pgc"
 static  struct varchar_1  { int len; char arr[ 50 ]; }  firstname ; static  struct varchar_2  { int len; char arr[ 50 ]; }  lastname ; static  struct varchar_3  { int len; char arr[ 255 ]; }  address ;
 
#line 15 "static_variables.pgc"
 static int year_of_birth , height_in_sm , weight_in_kg ;
 
#line 16 "static_variables.pgc"
 static  struct bytea_1  { int len; char arr[ 5 ]; }  data1 ; static  struct bytea_2  { int len; char arr[ 8 ]; }  data2 ; static  struct bytea_3  { int len; char arr[ 12 ]; }  data3 ; static  struct bytea_4  { int len; char arr[ 5 ]; }  data1_2 ; static  struct bytea_5  { int len; char arr[ 8 ]; }  data2_2 ; static  struct bytea_6  { int len; char arr[ 12 ]; }  data3_2 ;
/* exec sql end declare section */
#line 18 "static_variables.pgc"


static void
dump_binary(char *buf, int len)
{
	int i;

	printf("len=%d, data=0x", len);
	for (i = 0; i < len; ++i)
		printf("%02x", buf[i]);
	printf("\n");
}

int
main (void)
{
	int loopcount;

	ECPGdebug(1, stderr);

	{ ECPGconnect(__LINE__, 0, "ecpg1_regression" , NULL, NULL , NULL, 0); 
#line 38 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 38 "static_variables.pgc"


	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "create table persons ( firstname varchar ( 50 ) not null , lastname varchar ( 50 ) not null , address varchar ( 255 ) not null , year_of_birth int not null , height_in_sm int not null , weight_in_kg int not null , data1 bytea not null , data2 bytea not null , data3 bytea not null )", ECPGt_EOIT, ECPGt_EORT);
#line 50 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 50 "static_variables.pgc"


	data1.len = 5;
	for (loopcount = 0; loopcount < data1.len; loopcount++)
		data1.arr[loopcount] = 1;

	data2.len = 8;
	for (loopcount = 0; loopcount < data2.len; loopcount++)
		data2.arr[loopcount] = 2;

	data3.len = 12;
	for (loopcount = 0; loopcount < data3.len; loopcount++)
		data3.arr[loopcount] = 3;

	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into persons ( firstname , lastname , address , year_of_birth , height_in_sm , weight_in_kg , data1 , data2 , data3 ) values ( 'firstname1' , 'lastname1' , 'address1' , 1985 , 180 , 70 , $1  , $2  , $3  )", 
	ECPGt_bytea,&(data1),(long)5,(long)1,sizeof(struct bytea_1), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data2),(long)8,(long)1,sizeof(struct bytea_2), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data3),(long)12,(long)1,sizeof(struct bytea_3), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);
#line 71 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 71 "static_variables.pgc"


	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into persons ( firstname , lastname , address , year_of_birth , height_in_sm , weight_in_kg , data1 , data2 , data3 ) values ( 'firstname2' , 'lastname2' , 'address2' , 1995 , 170 , 65 , $1  , $2  , $3  )", 
	ECPGt_bytea,&(data1),(long)5,(long)1,sizeof(struct bytea_1), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data2),(long)8,(long)1,sizeof(struct bytea_2), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data3),(long)12,(long)1,sizeof(struct bytea_3), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);
#line 80 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 80 "static_variables.pgc"


	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "insert into persons ( firstname , lastname , address , year_of_birth , height_in_sm , weight_in_kg , data1 , data2 , data3 ) values ( 'firstname3' , 'lastname3' , 'address3' , 2000 , 172 , 80 , $1  , $2  , $3  )", 
	ECPGt_bytea,&(data1),(long)5,(long)1,sizeof(struct bytea_1), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data2),(long)8,(long)1,sizeof(struct bytea_2), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data3),(long)12,(long)1,sizeof(struct bytea_3), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EOIT, ECPGt_EORT);
#line 89 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 89 "static_variables.pgc"


	{ ECPGtrans(__LINE__, NULL, "commit");
#line 91 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 91 "static_variables.pgc"


	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "declare cur cursor for select firstname , lastname , address , year_of_birth , height_in_sm , weight_in_kg , data1 , data2 , data3 from persons", ECPGt_EOIT, ECPGt_EORT);
#line 93 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 93 "static_variables.pgc"


	/* exec sql whenever not found  break ; */
#line 95 "static_variables.pgc"


	for (loopcount = 0; loopcount < 100; loopcount++)
	{
		{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "fetch cur", ECPGt_EOIT, 
	ECPGt_varchar,&(firstname),(long)50,(long)1,sizeof(struct varchar_1), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_varchar,&(lastname),(long)50,(long)1,sizeof(struct varchar_2), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_varchar,&(address),(long)255,(long)1,sizeof(struct varchar_3), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(year_of_birth),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(height_in_sm),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_int,&(weight_in_kg),(long)1,(long)1,sizeof(int), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data1_2),(long)5,(long)1,sizeof(struct bytea_4), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data2_2),(long)8,(long)1,sizeof(struct bytea_5), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, 
	ECPGt_bytea,&(data3_2),(long)12,(long)1,sizeof(struct bytea_6), 
	ECPGt_NO_INDICATOR, NULL , 0L, 0L, 0L, ECPGt_EORT);
#line 101 "static_variables.pgc"

if (sqlca.sqlcode == ECPG_NOT_FOUND) break;
#line 101 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 101 "static_variables.pgc"


		printf("%.*s\t%.*s\t%.*s\t%i\t%i\t%i\n",
			firstname.len, firstname.arr,
			lastname.len, lastname.arr,
			address.len, address.arr,
			year_of_birth, height_in_sm, weight_in_kg);
		dump_binary(data1_2.arr, data1_2.len);
		dump_binary(data2_2.arr, data2_2.len);
		dump_binary(data3_2.arr, data3_2.len);
	}

	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "close cur", ECPGt_EOIT, ECPGt_EORT);
#line 113 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 113 "static_variables.pgc"

	{ ECPGdo(__LINE__, 0, 1, NULL, 0, ECPGst_normal, "drop table persons", ECPGt_EOIT, ECPGt_EORT);
#line 114 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 114 "static_variables.pgc"

	{ ECPGtrans(__LINE__, NULL, "commit");
#line 115 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 115 "static_variables.pgc"

	{ ECPGdisconnect(__LINE__, "CURRENT");
#line 116 "static_variables.pgc"

if (sqlca.sqlcode < 0) exit (1);}
#line 116 "static_variables.pgc"

	return 0;
}
