char __thiscall sub_4A3E60(_DWORD *this, char **a2)
{
  int v3; // edx
  unsigned int v4; // eax
  char *v5; // eax

  v3 = *(this + 2);
  if ( !v3 )
    return 0;
  LOWORD(v4) = *(_WORD *)(v3 + 8);
  v4 = (_WORD)v4 == 0xFFFF ? strlen(*(const char **)(v3 + 4)) : (unsigned __int16)v4;
  if ( v4 )
  {
    v5 = *(char **)(v3 + 4);
    if ( !v5 )
      v5 = EmptyString;
    if ( !_strcmp(v5, *a2) )
      return 0;
  }
  BSStringT_Set((BSStringT *)(*(this + 2) + 4), *a2, 0);
  return 1;
}
