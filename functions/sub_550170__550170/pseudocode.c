char *__cdecl sub_550170(BSStringT *a1, const char *arg4)
{
  char *v3; // eax
  char Str[260]; // [esp+8h] [ebp-20Ch] BYREF
  char a2[260]; // [esp+10Ch] [ebp-108h] BYREF

  if ( !arg4 )
    return 0;
  strcpy(Str, arg4);
  v3 = strrchr(Str, 0x5F);
  if ( !v3 )
    return (char *)arg4;
  *v3 = 0;
  _sprintf(a2, "%s.nif", Str);
  BSStringT_Set(a1, a2, 0);
  return a1->m_data;
}
