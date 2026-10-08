void __thiscall sub_556DC0(unsigned int *this)
{
  if ( *(this + 9) ) /*0x556dc4*/
    FormHeapFree(*(this + 9)); /*0x556dce*/
  *(this + 9) = 0; /*0x556dd6*/
  *(this + 0xA) = 0; /*0x556dd9*/
  *(this + 0xB) = 0; /*0x556ddc*/
  if ( *(this + 6) >= 0x10 ) /*0x556de3*/
    FormHeapFree(*(this + 1)); /*0x556de9*/
  *(this + 5) = 0; /*0x556df1*/
  *(this + 6) = 0xF; /*0x556df4*/
  *((_BYTE *)this + 4) = 0; /*0x556dfb*/
}
