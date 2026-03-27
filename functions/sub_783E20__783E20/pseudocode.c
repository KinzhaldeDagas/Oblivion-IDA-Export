const char *__usercall sub_783E20@<eax>(const char *a1@<eax>, const char *a2@<edi>)
{
  const char *v2; // esi
  int v3; // ecx

  v2 = a1;
  if ( isspace(*a1) )
  {
    do
      v3 = *++v2;
    while ( isspace(v3) );
  }
  sscanf(v2, "%s", a2);
  return &v2[strlen(a2)];
}
