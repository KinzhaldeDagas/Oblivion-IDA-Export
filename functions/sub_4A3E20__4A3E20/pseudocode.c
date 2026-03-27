BOOL __thiscall sub_4A3E20(_DWORD *this, BSStringT *a2)
{
  int v2; // eax
  const char *v4; // eax

  v2 = *(this + 2);
  if ( !v2 )
    return BSStringT_Set(a2, EmptyString, 0);
  v4 = *(const char **)(v2 + 4);
  if ( !v4 )
    v4 = EmptyString;
  return BSStringT_Set(a2, v4, 0);
}
