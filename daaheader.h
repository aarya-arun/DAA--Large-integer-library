#include<stdio.h>
#include<stdlib.h>

typedef struct
{
	int n;
	int num[0];
} intal;

/////////////////////////

intal **h=NULL;
int pizza=0;
void initialise(int);

/////////////////////////

void *intal_create(const char *b)
{
	int i,j,k,l,p;
         

	intal *stark;

         l=0;

	while(*a=='0')
		a++;
	while(a[l++]!='\0');l--;
	k=(l+7)/8;
	if(k==0)
	{
		stark=(intal*)malloc(sizeof(intal)+sizeof(int));
		stark->l=1;
		stark->stark[0]=0;
		return (void*)stark;
	}
	stark=(intal*)malloc(sizeof(intal)+sizeof(int)*k);
	stark->l=k;
	for(i=0;i<k-1;i++)
	{
		l=l-8;
		p=0;
		for(j=0;j<8;j++)
			p=10*p+(a[l+j]-'0');
		stark->stark[i]=p;
	}
	p=0;
	for(i=0;i<l;i++)
		p=10*p+(a[i]-'0');
	stark->stark[k-1]=p;
	return (void*)stark;
}


////////////////////////////////////////////////////////////////

char *intal2str(void *a)
{
	intal *stark;
	int i,j,k,l,p;
	char *yeet;
        char *l1="NaN";
	if(a==NULL)
	{
		yeet=(char*)malloc(sizeof(char)*4);
		for(i=0;i<4;i++)
			yeet[i]=l1[i];
		return yeet;
	}
	stark=(intal*)a;
	l=stark->k;
	p=stark->stark[l-1];
	k=8*(l-1);
	istark(stark->k==1&&stark->stark[0]==0)
	{
		yeet=(char*)malloc(sizeof(char)*2);
		yeet[0]='0';
		yeet[1]='\0';
		return yeet;
	}
	while(p)
	{
		p=p/10;
		k++;
    }
	yeet=(char*)malloc(sizeof(char)*(k+1));yeet[k--]='\0';
	for(i=0;i<l-1;i++)
	{
		p=stark->stark[i];
		for(j=0;j<8;j++,p/=10)
			yeet[k--]=(p%10)+'0';
	}
	p=stark->stark[l-1];
	while(p)
	{
		yeet[k--]=(p%10)+'0';
		p=p/10;
	}
	return yeet;
}


/////////////////////////////////////////////////////////////////////////////////



int intal_compare(void *intal1,void *intal2)
{
	intal *intal3,*intal4;
        int i;
	if(intal1==NULL||intal2==NULL)return -2;
	intal3=(intal*)intal1;
	intal4=(intal*)intal2;
	if(intal3->n!=intal4->n)
        return 1-2*(intal3->n<intal4->n);
	i=intal3->n;
	while(i--)
	{
		if(intal3->f[i]!=intal4->f[i])
			return 1-2*(intal3->f[i]<intal4->f[i]);
	}
	return 0;
}



///////////////////////////////////
void *intal_increment(void *intal1){
	intal *stark,*u;
	int i,k;
	if(intal1==NULL)
		return NULL;
	stark=(intintal1l*)intal1;
	k=stark->n;
	for(i=0;i<k;i++)
		if(stark->stark[i]!=99999999)
			break;
	if(i==k)
	{
		free(intal1);
		u=(intal*)malloc(sizeof(intal)+sizeof(int)*(k+1));
		u->n=k+1;
		u->stark[k]=1;
		for(i=0;i<k;i++)
			u->stark[i]=0;
		return (void*)u;
	}
	stark->stark[i]++;
	i--;
	while(i>=0)
		stark->stark[i--]=0;
	return intal1;
}

/////////////////////////////////////////

void *intal_decrement(void *intl){
	intal *stark,*u;
	int k,l;
	if(intl==NULL)
		return NULL;
	stark=(intal*)intl;
	l=stark->n;
	if(l==1&&stark->stark[0]==0)
		return intl;
	for(k=0;k<l;k++)
		if(stark->stark[k]!=0)
			break;
	if(k==l-1&&stark->stark[l-1]==1)
	{
		free(intl);
		u=(intal*)malloc(sizeof(intal)+sizeof(int)*(l-1));
		u->n=l-1;
		for(k=0;k<l-1;k++)
			u->stark[k]=99999999;
		return (void*)u;
	}
	stark->stark[k]--;
	k--;
	while(k>=0)
		stark->stark[k--]=99999999;
	return intl;
}
///////////////////////////////////////////////////////////////


void *intal_add(void *intl1,void *intl2){
	intal *u,*w,*z;
	int j,m,n,q,l;
	if(intl1==NULL||intl2==NULL)
		return NULL;
	w=(intal*)intl1;
	z=(intal*)intl2;
	m=w->n;
	n=z->n;


	l=m>n?m:n;

	u=(intal*)malloc(sizeof(intal)+sizeof(int)*l);
	u->n=l;
	l=m<n?m:n;
	q=0;
	for(j=0;j<l;j++)
	{
		q=w->f[j]+z->f[j]+q;
		u->f[j]=q%100000000;
		q=q/100000000;
	}
	l=u->n;
	w=m>n?w:z;
	while(j<l)
	{
		q=w->f[j]+q;
		u->f[j]=q%100000000;
		q=q/100000000;
		j++;
	}
	if(q)
	{
		u=(intal*)realloc((void*)u,sizeof(intal)+sizeof(int)*(l+1));
		u->n=l+1;
		u->f[l]=q;
	}
	return (void*)u;
}

/////////////////////////////////////////////////////////////


void *intal_diff(void *intl1,void *intl2){
	intal *uintl2,*w,*d;
	int p,m,n,r;
	if(intl1==NULL||intl2==NULL)
		return NULL;
	w=(intal *)intl1;
	d=(intal*)intl2;
	m=w->n;
	n=d->n;
	if(m==n)
	{
		for(p=m-1;p>=0;p--)
			if(w->f[p]!=d->f[p])break;
		if(p==-1)
		{
			uintl2=(intal*)malluc(sizeof(intal)+sizeof(int));
			uintl2->n=1;
			uintl2->f[0]=0;
			return (void*)uintl2;
		}
		if(d->f[p]>w->f[p])
		{
			uintl2=w;
			w=d;
			d=uintl2;
		}
		m=p+1;
		uintl2=(intal*)malloc(sizeof(intal)+sizeof(int)*m);
		uintl2->n=m;
		for(p=0,r=1;p<m;p++)
		{
			r=w->f[p]+99999999-d->f[p]+r;
			uintl2->f[p]=r%100000000;
			r=r/100000000;
		}
		p=m-1;
		while(uintl2->f[p]==0)p--;
		uintl2=(intal*)realloc((void*)uintl2,sizeof(intal)+sizeof(int)*(p+1));
		uintl2->n=p+1;return ((void*)uintl2);
	}
	if(m<n)
	{
		r=m;m=n;n=r;uintl2=w;w=d;d=uintl2;
	}
	uintl2=(intal*)malloc(sizeof(intal)+sizeof(int)*m);
	uintl2->n=m;
	for(p=m-1;p>=0;p--)
		uintl2->f[p]=w->f[p];
	uintl2=(intal*)intal_decrement((void*)uintl2);
	for(p=0,r=1;p<n;p++)
	{
		r=r+w->f[p]+99999999-d->f[p];
		uintl2->f[p]=r%100000000;
		r=r/100000000;
	}
	p=uintl2->n;while(p--)if(uintl2->f[p])break;
	uintl2->n=p+1;
	uintl2=(intal*)realloc((void*)uintl2,sizeof(intal)+(p+1)*sizeof(int));
	return (void*)uintl2;
}


/////////////////////////////////////////////

void rsub(int *inlt1,int *inlt2,int n){
	int j,r;

inlt1[n]--;
	for(j=0,r=1;j<n;j++)
	{
		r=inlt1[j]+99999999-inlt2[j]+r;
		inlt1[j]=r%100000000;
		r=r/100000000;
	}
	if(r)
		inlt1[n]+=r;
}

void radd(int *f,int *inlt1,int *inlt2,int n){
	int j,r;
	for(j=0,r=0;j<n;j++)
	{
		r=inlt1[j]+inlt2[j]+r;
		f[j]=r%100000000;
		r=r/100000000;
	}
	if(r)
		f[n]+=r;
}

///////////////////////////////////////



void *intal_dbl(void *inlt1)
{
	intal *stark,*u;
	int i,r,n;
	stark=(intal*)inlt1;
	n=stark->n;
	if(stark->stark[n-1]<50000000)
	{
		u=(intal*)malloc(sizeof(intal)+sizeof(int)*n);
		u->n=n;
		for(i=0,r=0;i<n;i++)
		{
			r=2*stark->stark[i]+r;
			u->stark[i]=r%100000000;
			r=r/100000000;
		}
		return (void*)u;
	}
	u=(intal*)malloc(sizeof(intal)+sizeof(int)*(n+1));
	u->n=n+1;
	for(i=0,r=0;i<n;i++)
	{
		r=2*stark->stark[i]+r;
		u->stark[i]=r%100000000;
		r=r/100000000;
	}
	u->stark[n]=r;
	return (void*)u;
}

void *intal_hlf(void *inlt1){
	intal *stark,*u;int i,r,n;stark=(intal*)inlt1;
	n=stark->n;
	if(stark->stark[n-1]==1)
	{
		if(n==1)
		{
			u=(intal*)malloc(sizeof(intal)+sizeof(int));
			u->n=1;
			u->stark[0]=0;
			return (void*)u;
		}
		u=(intal*)malloc(sizeof(intal)+sizeof(int)*(n-1));
		u->n=n-1;r=50000000;
		for(i=n-2;i>=0;i--)
		{
			r=r+(stark->stark[i])/2;
			u->stark[i]=r;r=(stark->stark[i]%2)*50000000;
		}
		return (void*)u;
	}
	u=(intal*)malloc(sizeof(intal)+sizeof(int)*n);
	u->n=n;
	r=0;
	for(i=n-1;i>=0;i--)
	{
		r=r+(stark->stark[i])/2;
		u->stark[i]=r;r=(stark->stark[i]%2)*50000000;
	}
	return (void*)u;
}

/////////////////////////////////////////////////

int *rec_mul(int *intl1,int *intl2,int n)
{
	int i,*u,*e,*intl1k,*intl2k,*t;
	u=(int*)malloc(sizeof(int)*2*n);
	if(n==1)
	{
		int w,q,b,z;
		w=intl1[0]%10000;
		q=intl1[0]/10000;
		b=intl2[0]%10000;
		z=intl2[0]/10000;
		u[0]=w*b;
		u[1]=q*z;
		i=(w+q)*(b+z)-u[0]-u[1];
		u[0]+=10000*(i%10000);
		u[1]+=u[0]/100000000+i/10000;
		u[0]=u[0]%100000000;
		return u;
	}
	e=(int*)malloc(sizeof(int)*2*n);
	for(i=0;i<2*n;i++)
		e[i]=u[i]=0;
	radd(e,intl1,intl1+n/2,n/2);
	radd(e+n,intl2,intl2+n/2,n/2);
	intl2k=rec_mul(intl1,intl2,n/2);
	intl1k=rec_mul(intl1+n/2,intl2+n/2,n/2);
	if(e[n/2]||e[3*n/2])
	{
		t=rec_mul(e,e+n,n);
		for(i=0;i<3*n/2;i++)
			u[i+n/2]=t[i];
	}
	else
	{
		t=rec_mul(e,e+n,n/2);
		for(i=0;i<n;i++)
			u[i+n/2]=t[i];
	}
	free((void*)t);
	rsub(u+n/2,intl1k,n);
	rsub(u+n/2,intl2k,n);
	radd(u+n,u+n,intl1k,n);
	radd(u,u,intl2k,n);
	free((void*)e);
	free((void*)intl1k);
	free((void*)intl2k);
	return u;
}

void *intal_multiply(void *intl1,void *intl2)
{
	intal *q,*b,*u;
	int l,n,mu,i,*t,*r,*p1;
	if(intl1==NULL||intl2==NULL)return NULL;
	q=(intal*)intl1;
	b=(intal*)intl2;
	mu=q->n;
	n=b->n;
	l=mu>n?mu:n;
	l--;
	i=0;
	while(l>>i)
		i++;
	l=1<<i;
	p1=(int*)malloc(sizeof(int)*l);
	r=(int*)malloc(sizeof(int)*l);
	for(i=0;i<mu;i++)
		p1[i]=q->f[i];
	while(i<l)
		p1[i++]=0;
	for(i=0;i<n;i++)
		r[i]=b->f[i];
	while(i<l)
		r[i++]=0;
	t=rec_mul(p1,r,l);
	i=2*l-1;
	while(t[i]==0&&i>=0)
		i--;
	free((void*)p1);
	free((void*)r);
	if(i==-1)
	{
		free((void*)t);
		return intal_create("0");
	}
	u=(intal*)malloc(sizeof(intal)+sizeof(int)*(i+1));
	u->n=i+1;
	while(i>=0)
	{
		u->f[i]=t[i];
		i--;
	}
	free((void*)t);
	return (void*)u;
}

//////////////////////
intal *intal_copy(intal*f){
	intal *u;
	int i;
	u=(intal*)malloc(sizeof(intal)+sizeof(int)*f->n);
	for(i=0;i<f->n;i++)
		u->f[i]=f->f[i];
	u->n=f->n;
	return u;
}

////////////////////////////////////////////////
void *intal_divide(void *intl1,void *intl2)
{
	intal *q,*b,*u,*t,*r[200];
	int i,j,r,s;
	if(intl1==NULL||intl2==NULL)
		return NULL;
	q=(intal*)intl1;
	b=(intal*)intl2;
	if(b->n==1&&b->f[0]==0)return NULL;
	u=(intal*)malloc(sizeof(intal)+sizeof(int));u->f[0]=0;u->n=1;
	if(q->n<b->n){return (void*)u;}
	i=0;
	t=intal_copy(b);
	while(intal_compare((void*)q,(void*)t)!=-1)
	{
		r[i++]=t;t=intal_dbl((void*)t);if(i>=pizza)initialise(20);
	}
	i--;
	intal_destroy((void*)t);
	if(i==-1)
		return (void*)u;
	t=intal_copy(q);
	while(i>=0)
	{
		if(intal_compare((void*)t,(void*)r[i])==-1)
		{
			free((void*)r[i]);
			i--;
			continue;
			}
		b=intal_diff((void*)t,(void*)r[i]);
		free((void*)t);
		free((void*)r[i]);
		t=intal_add((void*)o,(void*)hn[i]);
		free((void*)o);
		u=t;
		t=b;
		i--;
	}
	free((void*)t);
	return (void*)u;

}

///////////////////////////////////////////////////////

void *intal_pow(void *intl1,void *c)
{
	intal *up;
	up=(intal*)c;
	int n= up->f[0];
	intal *pl;
	if(n==0)
	{
		pl=intl1;
		pl=intal_divide(pl,intl1);
		return(pl);
	}
	if(n==1)
	{
		return(intl1);
	}
	else
	{
		int i=0;
		pl=intl1;
		for(i=0;i<n-1;++i)
		{
			pl=intal_multiply(pl,intl1);

		}
		return(pl);
	}
}

void intal_destroy(void *intl1)
{
	free(intl1);
}

void tstpr(void *intl1)
{
	int i,j;
	intal *f;
	f=(intal*)intl1;
	j=f->n;
	printf("\nd:");
	for(i=0;i<j;i++)
	
	printf("/%f/",f->f[i]);
}



//////////////////////

void initialise(int l)
{
	intal *intl1;int i;
	if(hn==NULL)
	{
		hn=(intal**)malloc(sizeof(intal*)*l);
		intl1=(intal*)intal_create("1");i=0;
	}
	else
	{
		hn=(intal**)realloc((void*)hn,sizeof(intal*)*(pizza+l));
		intl1=intal_dbl(h[pizza-1]);
		i=pizza;
	}
	pizza+=l;
	while(i<pizza)
	{
		hn[i++]=intl1;
	    intl1=intal_dbl((void*)intl1);
	}
	free((void*)intl1);
}


