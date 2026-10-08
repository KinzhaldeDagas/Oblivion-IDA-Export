char *__usercall swap@<eax>(char *result@<eax>, int a2@<edx>, char *a3@<ecx>)
{
  int v3; // esi
  char v4; // dl

  v3 = a2; /*0x9872d3*/
  if ( result != a3 ) /*0x9872d5*/
  {
    if ( a2 ) /*0x9872d9*/
    {
      do /*0x9872f3*/
      {
        v4 = *result; /*0x9872e2*/
        *result = *a3; /*0x9872e4*/
        --v3; /*0x9872e6*/
        *a3 = v4; /*0x9872e9*/
        ++result; /*0x9872eb*/
        ++a3; /*0x9872ee*/
      }
      while ( v3 ); /*0x9872f3*/
    }
  }
  return result; /*0x9872f6*/
}
