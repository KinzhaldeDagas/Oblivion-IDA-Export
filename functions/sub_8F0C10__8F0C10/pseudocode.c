_DWORD *__thiscall sub_8F0C10(_WORD *this, int a2, int a3)
{
  sub_9156C0(this); /*0x8f0c13*/
  *(_DWORD *)this = &off_A9B198; /*0x8f0c20*/
  *((_DWORD *)this + 4) = a2; /*0x8f0c26*/
  *((_DWORD *)this + 5) = a3; /*0x8f0c29*/
  if ( *(_WORD *)(a2 + 4) ) /*0x8f0c2c*/
    ++*(_WORD *)(a2 + 6); /*0x8f0c33*/
  return this; /*0x8f0c39*/
}
