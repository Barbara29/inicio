int bitsUm (int n){
	int r, c=0; 
	while(n>=0){
		n = n/2;
		r = n%2;
		if (r==1) c++;
		else c;
	}

	return c;
}

//int trailingZ (int n){

int qDig (int n){
	int c=0;
while (n>0){
	c++;
    n=n/10;
}
return c;
}

int strlen (char str[]){
	int i;
for(i=0;str[i]!='\0';i++);
	return i;
}

char strcat (char s1[], char s2[]){
	int i, j = 0;
	for(i=0;s1[i]!='\0'; i++);
	while(s2[j] != '\0'){
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return s1;
}

char strcpy(char s1[], char s2[]) {
	int i;
	for (i=0; s2[i]!='\0'; i++)
		s1[i]=s2[i];
	s1[i]='\0';
	return s1;
}

int Strcmp (char s1[], char s2[]){
	int i=0;
	while (s1[i]==s2[i] && s1[i]!='\0')
		i++;
	return (s1[i]-s2[i]);
}


void strrev (char s[]){
    char h;
	int i,j;
    j=(myStrlen(s)-1);
	for (i=0;i<j;i++,j--){
	    h = s[i];
		s[i]=s[j];
		s[j]=h;
    }
}


void strnoV (char s[]){
    int r,w;
    for(r=0, w=0;s[r];++r){
        if(s[r]!='A' && s[r]!='E' && s[r]!='I' && s[r]!='O' && s[r]!='U' && s[r]!='a' && s[r]!='e' && s[r]!='i' && s[r]!='o' && s[r]!='u'){
            s[w]=s[r];
            w++;
        }
    }
    s[w]='\0';
}

int contaChar (char s [], char a){
	int i,count=0;
	for (i=0;s[i]!='\0';i++){
		if (s[i]==a)
			count ++;
	}
	return count;
}

int contaVogais (char s[]){
	int c, i;
	c=0;
	for (i=0; s[i]!='\0';i++)
	if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
		c++;
	return c;
}

int palindorome (char s[]){
    int i,j;
    j=(strlen(s)-1);
	for( i=0;s[i]!='\0' && i<=j;i++,j--)
      if (s[i]!=s[j]) return 0; 
    return 1;
}

int remRep (char c[]){
	int i = 0, j = 0;
	while(c[j]!= '\0'){
		c[i] = c[j];
		while((c[j]!='\0') && (c[j]==c[i]))
			j++;
		i++;
	}
	c[i] = '\0';
	return i;
}


int crescente (int a[], int i, int j){
	int c;
	for (c=i; c<j; c++)
		if (a[c]>a[c+1])
			return 0;
	return 1;
}

int retiraNeg (int v[], int N){
   int i, j;
   for (i=0,j=0;i<N;i++){
      if (v[i]>0) 
		v[j++] = v[i];
   }
   return j;
}

int maiorPrefixo (char s1[], char s2[]){
	int i;
	for (i=0; s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0'; i++);
	return i;
