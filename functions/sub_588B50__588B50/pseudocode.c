int __thiscall sub_588B50(_DWORD *this, int a2)
{
  _DWORD *v2; // ecx
  int result; // eax
  int v4; // edx

  v2 = (_DWORD *)*(this + 6); /*0x588b50*/
  if ( !v2 ) /*0x588b56*/
    return 0; /*0x588b75*/
  while ( 1 ) /*0x588b63*/
  {
    result = v2[2]; /*0x588b63*/
    v4 = *(unsigned __int16 *)(result + 0x18); /*0x588b65*/
    v2 = (_DWORD *)*v2; /*0x588b6b*/
    if ( v4 == a2 ) /*0x588b6d*/
      break; /*0x588b6d*/
    if ( v4 > a2 || !v2 ) /*0x588b73*/
      return 0; /*0x588b73*/
  }
  return result; /*0x588b77*/
}
