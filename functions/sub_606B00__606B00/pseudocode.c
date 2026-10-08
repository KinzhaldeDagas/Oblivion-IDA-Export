void __thiscall sub_606B00(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // eax

  v2 = (_DWORD *)*(this + 0xF); /*0x606b01*/
  if ( a2 ) /*0x606b0b*/
  {
    if ( *v2 ) /*0x606b0d*/
    {
      v3 = (_DWORD *)FormHeapAlloc(8u); /*0x606b14*/
      if ( v3 ) /*0x606b1e*/
      {
        *v3 = *v2; /*0x606b22*/
        v3[1] = 0; /*0x606b24*/
        v3[1] = v2[1]; /*0x606b2e*/
        *v2 = a2; /*0x606b31*/
        v2[1] = v3; /*0x606b34*/
        return; /*0x606b38*/
      }
      *(_DWORD *)4 = v2[1]; /*0x606b40*/
      v2[1] = 0; /*0x606b43*/
    }
    *v2 = a2; /*0x606b46*/
  }
}
