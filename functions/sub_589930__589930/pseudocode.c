int __thiscall sub_589930(_DWORD *this, unsigned __int8 *a2)
{
  _DWORD *v2; // esi
  int v3; // edi
  int result; // eax

  v2 = (_DWORD *)*(this + 0xD);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    v3 = v2[2];
    v2 = (_DWORD *)*v2;
    if ( !_mbscmp(*(const unsigned __int8 **)(v3 + 8), a2) )
      break;
    result = sub_589930((_DWORD *)v3, a2);
    if ( result )
      return result;
    if ( !v2 )
      return 0;
  }
  return v3;
}
