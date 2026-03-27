char *__cdecl sub_54FEB0(BSStringT *a1, char *arg4)
{
  char *v2; // eax
  char v4; // cl
  char *v5; // eax
  char Str[260]; // [esp+4h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+108h] [ebp-108h] BYREF

  v2 = arg4;
  if ( !arg4 )
    return 0;
  do
  {
    v4 = *v2;
    v2[Str - arg4] = *v2;
    ++v2;
  }
  while ( v4 );
  v5 = strrchr(Str, 0x2E);
  if ( !v5 )
    return 0;
  *v5 = 0;
  _sprintf(a2, "%s.egm", Str);
  BSStringT_Set(a1, a2, 0);
  return a1->m_data;
}
