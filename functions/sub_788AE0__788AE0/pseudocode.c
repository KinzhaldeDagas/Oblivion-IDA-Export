char *__usercall sub_788AE0@<eax>(char *result@<eax>, char *a2, int a3, const void *a4)
{
  int v4; // edx

  v4 = a3;
  if ( a3 )
  {
    result = a2;
    do
    {
      if ( result )
        qmemcpy(result, a4, 0x1Cu);
      --v4;
      result += 0x1C;
    }
    while ( v4 );
  }
  return result;
}
