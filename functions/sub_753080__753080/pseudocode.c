bool __thiscall sub_753080(float *this, int a2)
{
  if ( !sub_74F160(this, (float *)a2) ) /*0x753089*/
    return 0; /*0x753090*/
  if ( *((_DWORD *)this + 0x14) ) /*0x753099*/
    return *(_DWORD *)(a2 + 0x50) != 0; /*0x753096*/
  return !*(_DWORD *)(a2 + 0x50); /*0x7530aa*/
}
