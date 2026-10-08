void __thiscall sub_52B660(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 0x2B) ) /*0x52b663*/
  {
    do /*0x52b68a*/
    {
      v2 = *(_DWORD *)(*(this + 0x2B) + 4); /*0x52b676*/
      FormHeapFree(*(this + 0x2B)); /*0x52b67a*/
      *(this + 0x2B) = v2; /*0x52b684*/
    }
    while ( v2 ); /*0x52b68a*/
  }
  *(this + 0x2A) = 0; /*0x52b68d*/
}
