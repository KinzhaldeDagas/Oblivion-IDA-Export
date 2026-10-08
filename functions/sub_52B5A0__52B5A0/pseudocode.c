void __thiscall sub_52B5A0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x24) ) /*0x52b5a3*/
  {
    do /*0x52b5ca*/
    {
      v2 = *(_DWORD *)(*(this + 0x24) + 4); /*0x52b5b6*/
      FormHeapFree(*(this + 0x24)); /*0x52b5ba*/
      *(this + 0x24) = v2; /*0x52b5c4*/
    }
    while ( v2 ); /*0x52b5ca*/
  }
  *(this + 0x23) = 0; /*0x52b5cd*/
}
