void __thiscall sub_51FB00(int *this)
{
  unsigned int v2; // edi
  int *v3; // eax

  while ( *(this + 0x10) || *(this + 0xF) ) /*0x51fb0e*/
  {
    v2 = *(this + 0xF); /*0x51fb10*/
    if ( v2 ) /*0x51fb15*/
    {
      sub_51F2D0(*(this + 0xF)); /*0x51fb19*/
      FormHeapFree(v2); /*0x51fb1f*/
    }
    v3 = (int *)*(this + 0x10); /*0x51fb27*/
    if ( v3 ) /*0x51fb2c*/
    {
      *(this + 0x10) = v3[1]; /*0x51fb31*/
      *(this + 0xF) = *v3; /*0x51fb37*/
      FormHeapFree((unsigned int)v3); /*0x51fb3a*/
    }
    else
    {
      *(this + 0xF) = 0; /*0x51fb44*/
    }
  }
}
