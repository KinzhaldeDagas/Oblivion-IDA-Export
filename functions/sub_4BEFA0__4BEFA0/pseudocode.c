void __thiscall sub_4BEFA0(unsigned int *this)
{
  unsigned int v2; // edi

  if ( *(this + 9) ) /*0x4befa3*/
  {
    do /*0x4befc4*/
    {
      v2 = *(_DWORD *)(*(this + 9) + 4); /*0x4befb3*/
      FormHeapFree(*(this + 9)); /*0x4befb7*/
      *(this + 9) = v2; /*0x4befc1*/
    }
    while ( v2 ); /*0x4befc4*/
  }
  *(this + 8) = 0; /*0x4befc7*/
  Shared_NoOpVirtual_60D0A0(this); /*0x4befd1*/
}
