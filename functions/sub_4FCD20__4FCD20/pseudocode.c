int __thiscall sub_4FCD20(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // eax
  unsigned int v4; // edx
  int v5; // ecx

  if ( !a2 || a2 > *(this + 0xB) ) /*0x4fcd32*/
    return 0; /*0x4fcd29*/
  v3 = this + 0x11; /*0x4fcd34*/
  v4 = 1; /*0x4fcd39*/
  if ( this != (_DWORD *)0xFFFFFFBC ) /*0x4fcd3e*/
  {
    do /*0x4fcd56*/
    {
      v5 = v3[1]; /*0x4fcd40*/
      if ( !v5 && !*v3 ) /*0x4fcd47*/
        break; /*0x4fcd49*/
      if ( v4 >= a2 ) /*0x4fcd4d*/
        break; /*0x4fcd4d*/
      v3 = (_DWORD *)v3[1]; /*0x4fcd4f*/
      ++v4; /*0x4fcd51*/
    }
    while ( v5 ); /*0x4fcd56*/
  }
  return *v3; /*0x4fcd2b*/
}
