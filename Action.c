Action()
{
	int i,j;
	/*i = atoi(lr_eval_string("{IterationNumber}"));
	lr_output_message("i value is %d",i);
	j = atoi(lr_eval_string("{VuserID}"));
	lr_output_message("j value is %d",j);
	
	if(i==10 && j==1)
	{
		Action4();
	}
	else if(j<10 && i<5)
	{
		Action2();
	}
	else if (i>10 && j>5)
	{
		Action3();
	}*/
	
	//i = atoi(lr_eval_string("{IterationNumber}"));
	/*for(j=1; j<=i; j++)
	{
		lr_message("Iteration Number is : %d", j);
	}*/
	
	/*char * fname = "Parimala";
	char * lname = "Lakshmi", *stoken;
	char Name[20], sep[] = "a";
	strcpy (Name, fname);
	strcat (Name,lname);
	
	lr_output_message("My name is :%s", Name);
	
	stoken = (char *) strtok(Name,sep);
	lr_message("%s",stoken);
	while(stoken !=NULL)
	{
		lr_message("%s", stoken);
		
	}
	
	stoken=(char *) strtok(NULL,sep);*/
	
	
	
	/*char name[] = "Welcome to Tech Mahindra";
	char sep[] = "e";
	char *stoken;
	int len;
	
	len = strlen(name);
	lr_message("Length of string is: %d", len);
	stoken = (char *) strtok (name,sep);
	if(len ==30)
	{
		lr_message("Given tokenzier doesno match");
	}
	
	else
	{
		while(stoken!=NULL)
		{
			lr_message("String tokenzier %s",stoken);
			stoken = (char *)strtok(NULL,sep);
		}
	}*/
	
	String a =150.00;
		String b = 150.00;
		
		if(a==b)
		{
			lr_message("Hi");
		}
		else
		{
			lr_message("bye");
		}
	return 0;
}
