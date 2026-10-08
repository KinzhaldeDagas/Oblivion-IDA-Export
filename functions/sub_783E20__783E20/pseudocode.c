const char *__usercall sub_783E20@<eax>(const char *a1@<eax>, const char *a2@<edi>)
{
  const char *v2; // esi
  int v3; // ecx

  v2 = a1; /*0x783e21*/
  if ( isspace(*a1) ) /*0x783e27*/
  {
    do /*0x783e3b*/
      v3 = *++v2; /*0x783e33*/
    while ( isspace(v3) ); /*0x783e3b*/
  }
  sscanf(v2, "%s", a2); /*0x783e4e*/
  return &v2[strlen(a2)]; /*0x783e6d*/
}
