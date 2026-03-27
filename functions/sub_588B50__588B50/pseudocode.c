int __thiscall sub_588B50(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // edx

  v2 = (_DWORD *)*(this + 6);
  if ( !v2 )
    return 0;
  while ( 1 )
  {
    result = v2[2];
    v4 = *(unsigned __int16 *)(result + 0x18);
    v2 = (_DWORD *)*v2;
    if ( v4 == a2 )
      break;
    if ( v4 > a2 || !v2 )
      return 0;
  }
  return result;
}
