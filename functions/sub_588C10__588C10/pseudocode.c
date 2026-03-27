CHAR *__thiscall sub_588C10(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = (_DWORD *)*(this + 6);
  if ( !v2 )
    return EmptyString;
  while ( 1 )
  {
    v3 = v2[2];
    v4 = *(unsigned __int16 *)(v3 + 0x18);
    v2 = (_DWORD *)*v2;
    if ( v4 == a2 )
      break;
    if ( v4 > a2 || !v2 )
      return EmptyString;
  }
  return *(CHAR **)(v3 + 8);
}
