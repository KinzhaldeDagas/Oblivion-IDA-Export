int __thiscall sub_4954B0(_DWORD *this, unsigned int a2)
{
  int result; // eax
  _DWORD *v3; // ecx
  int v4; // edx
  int *v5; // eax
  int v6; // edi

  if ( a2 >= *(this + 0x34) )
    return 0;
  v3 = (_DWORD *)*(this + 0x32);
  v4 = 0;
  if ( !v3 )
    return 0;
  while ( 1 )
  {
    v5 = v3 + 2;
    v3 = (_DWORD *)*v3;
    result = *v5;
    v6 = v4++;
    if ( v6 == a2 )
      break;
    if ( !v3 )
      return 0;
  }
  return result;
}
