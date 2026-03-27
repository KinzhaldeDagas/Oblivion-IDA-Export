_DWORD *__thiscall sub_67A230(EntryData *this)
{
  _DWORD *v1; // esi
  _DWORD *result; // eax
  unsigned int v3; // ecx
  int *i; // eax

  v1 = this + 8;
  sub_5B27A0(this + 8, (int (__cdecl *)(tListVoid *, tListVoid *))sub_673B70);
LABEL_2:
  while ( 1 )
  {
    result = v1;
    v3 = 0;
    if ( !v1 )
      return result;
    do
    {
      if ( *result )
        ++v3;
      result = (_DWORD *)result[1];
    }
    while ( result );
    if ( v3 <= dword_B36CD0 )
      return result;
    for ( i = v1; *i; i = (int *)i[1] )
    {
      if ( !i[1] )
      {
        BSSimpleList_Remove(v1, *i);
        goto LABEL_2;
      }
    }
  }
}
