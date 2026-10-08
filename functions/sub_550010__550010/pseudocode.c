char *__cdecl sub_550010(BSStringT *a1, char *arg4)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  char Str[260]; // [esp+4h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = arg4; /*0x550024*/
  if ( !arg4 ) /*0x550035*/
    return 0; /*0x550035*/
  do /*0x55005f*/
  {
    v4 = *v2; /*0x550055*/
    v2[Str - arg4] = *v2; /*0x550057*/
    ++v2; /*0x55005a*/
  }
  while ( v4 ); /*0x55005f*/
  v5 = strrchr(Str, 0x2E); /*0x550068*/
  if ( !v5 ) /*0x550072*/
    return 0; /*0x550037*/
  *v5 = 0; /*0x550086*/
  _sprintf(a2, "%s.tri", Str); /*0x550089*/
  BSStringT_Set(a1, a2, 0); /*0x55009d*/
  return a1->m_data; /*0x550039*/
}
