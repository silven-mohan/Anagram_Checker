int anagram_checker()
{
	int length1, length2, i, j;
	char word1[20], word2[20], temp, word11[20], word22[20];
	printf("Enter the First word:");
	gets(word1);
	printf("\nEnter the Second word:");
	gets(word2);
	strcpy(word11, word1);
	strcpy(word22, word2);
	length1=strlen(word1);
	length2=strlen(word2);
	for(i=0;i<=(length1-1);i++)
	{
		for(j=i+1;j<=length1;j++)
		{
			if(word1[i]>word1[j])
			{
				temp=word1[i];
				word1[i]=word1[j];
				word1[j]=temp;
			}
		}
	}
	for(i=0;i<=(length2-1);i++)
	{
		for(j=i+1;j<=length2;j++)
		{
			if(word2[i]>word2[j])
			{
				temp=word2[i];
				word2[i]=word2[j];
				word2[j]=temp;
			}
		}
	}
	if((strcmp(word1, word2))==0)
	{
		printf("%s and %s are anagrams.", word11, word22);
	}
	else
	{
		printf("%s and %s are not anagrams.", word11, word22);
	}

	return 0;
}
