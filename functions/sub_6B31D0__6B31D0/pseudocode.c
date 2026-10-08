void __thiscall sub_6B31D0(unsigned int *this)
{
  unsigned int v2; // esi

  if ( *(this + 1) ) /*0x6b31d3*/
  {
    FormHeapFree(*(this + 1)); /*0x6b31db*/
    *(this + 1) = 0; /*0x6b31e3*/
  }
  v2 = *(this + 2); /*0x6b31ea*/
  if ( v2 ) /*0x6b31ef*/
    FormHeapFree(v2); /*0x6b31f2*/
}
