void __thiscall sub_6B3500(unsigned int **this)
{
  unsigned int v2; // edi
  unsigned int v3; // edi

  v2 = (unsigned int)*(this + 1); /*0x6b3504*/
  if ( v2 ) /*0x6b3509*/
  {
    sub_6AF6D0(*(this + 1)); /*0x6b350d*/
    FormHeapFree(v2); /*0x6b3513*/
    *(this + 1) = 0; /*0x6b351b*/
  }
  if ( *(this + 2) ) /*0x6b3522*/
  {
    FormHeapFree((unsigned int)*(this + 2)); /*0x6b352a*/
    *(this + 2) = 0; /*0x6b3532*/
  }
  v3 = (unsigned int)*(this + 3); /*0x6b3539*/
  if ( v3 ) /*0x6b353e*/
  {
    sub_732A20(*(this + 3)); /*0x6b3542*/
    FormHeapFree(v3); /*0x6b3548*/
    *(this + 3) = 0; /*0x6b3550*/
  }
}
