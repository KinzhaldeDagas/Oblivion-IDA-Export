void __thiscall sub_556EC0(unsigned int *this)
{
  if ( *(this + 8) ) /*0x556ec4*/
    FormHeapFree(*(this + 8)); /*0x556ece*/
  *(this + 8) = 0; /*0x556ed6*/
  *(this + 9) = 0; /*0x556ed9*/
  *(this + 0xA) = 0; /*0x556edc*/
  if ( *(this + 6) >= 0x10 ) /*0x556ee3*/
    FormHeapFree(*(this + 1)); /*0x556ee9*/
  *(this + 5) = 0; /*0x556ef1*/
  *(this + 6) = 0xF; /*0x556ef4*/
  *((_BYTE *)this + 4) = 0; /*0x556efb*/
}
