void __thiscall sub_4418A0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x21) ) /*0x4418a3*/
  {
    do /*0x4418ca*/
    {
      v2 = *(_DWORD *)(*(this + 0x21) + 4); /*0x4418b6*/
      FormHeapFree(*(this + 0x21)); /*0x4418ba*/
      *(this + 0x21) = v2; /*0x4418c4*/
    }
    while ( v2 ); /*0x4418ca*/
  }
  *(this + 0x20) = 0; /*0x4418cd*/
}
