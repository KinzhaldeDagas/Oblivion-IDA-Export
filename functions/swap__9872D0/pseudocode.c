char *__usercall swap@<eax>(char *result@<eax>, int a2@<edx>, char *a3@<ecx>)
{
  int v3; // esi
  char v4; // dl

  v3 = a2;
  if ( result != a3 )
  {
    if ( a2 )
    {
      do
      {
        v4 = *result;
        *result = *a3;
        --v3;
        *a3 = v4;
        ++result;
        ++a3;
      }
      while ( v3 );
    }
  }
  return result;
}
