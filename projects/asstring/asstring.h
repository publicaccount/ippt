#ifndef ASSTRING_H_INCLUDED
#define ASSTRING_H_INCLUDED

void *memcpy(void *dst, const void *src, size_t n)
{
for(int i = 0; i < n; i++ )
{
    ((char*)dst)[i] = ((char*)src)[i];
}
return dst;
}

void *memmove(void *dst, const void *src, size_t n)
{
for(int i = 0; i < n; i++ )
{
    ((char*)dst)[i] = ((char*)src)[i];
}
return dst;
}

void *memchr(const void *s, char c, size_t n)
{
for(int i=0; i<n; i++)
{
    if(((char*)s)[i]==((char)c))
    {
        return (char*) s;
    }
    else
    {
        if(i==n)
        {
            return NULL;
        }
    }
}
}

void * memset ( void * ptr, int value, size_t num )
{
    for(int i=0; i<num; i++)
    {
        ((char*)ptr)[i]=(int)value;
    }
    return (void*)ptr;
}

int strlen (char* s)
{
    int size = 0;
    while (s[size] != '\0')
   {
         size++;
    }
     return size;
}

char * strcat(char * dest, const char * src)
{
    char * r = dest;

    while (*dest != '\0')
        dest++;

    while ((*dest++ = *src++) != '\0')
        continue;

    return r;
}

char * strncat(char * dest, const char *src, size_t count)
{
    char * r = dest;

    while(*dest != 0)
        ++dest;

    char c;
    while((count-- > 0) && ((c = *src++) != 0))
        *dest++ = c;

    *dest++ = 0;

    return r;
}

char * strchr(char * sp, int c)
{
    do
    {
        if(*sp == static_cast<char>(c))
        {
            return sp;
        }
    }
    while(*sp++ != 0);
    return 0;
}

char * strrchr(char * sp, int c)
{
    for(int i=strlen(sp);i>0;i--)
    {
        if(*sp == static_cast<char>(c))
        {
            return sp;
        }
    }
    return 0;
}

#endif // ASSTRING_H_INCLUDED
