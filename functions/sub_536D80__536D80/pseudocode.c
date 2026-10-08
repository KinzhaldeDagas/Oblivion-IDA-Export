void __thiscall sub_536D80(_DWORD *this, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)*(this + 2); /*0x536d87*/
  if ( v2 && (*(_BYTE *)(a2 + 0x30) & 0x3F) == 0xC ) /*0x536d9a*/
  {
    v3 = (_DWORD *)*(this + 2); /*0x536d9d*/
    while ( v3[2] != a2 + 0x14 ) /*0x536da3*/
    {
      v3 = (_DWORD *)v3[1]; /*0x536da5*/
      if ( !v3 ) /*0x536daa*/
        return; /*0x536daa*/
    }
    *(this + 2) = sub_536980(v3, v2); /*0x536dbe*/
    FormHeapFree((unsigned int)v3); /*0x536dc1*/
  }
}
