int __thiscall sub_940D20(void *this, char *a2)
{
  int v2; // eax
  int v3; // eax

  v2 = sub_940B80((int)this) - 1;
  if ( !v2 )
    return *a2;
  v3 = v2 - 1;
  if ( !v3 )
    return *(__int16 *)a2;
  if ( v3 == 2 )
    return *(_DWORD *)a2;
  return 0;
}
