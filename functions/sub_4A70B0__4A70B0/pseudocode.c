void __thiscall sub_4A70B0(unsigned int *this)
{
  unsigned int *v2; // eax
  unsigned int v3; // edi
  double v4; // st7
  double v5; // st7

  while ( *(this + 9) ) /*0x4a70b3*/
  {
    v2 = (unsigned int *)*(this + 1); /*0x4a70c0*/
    v3 = *this; /*0x4a70c5*/
    if ( v2 ) /*0x4a70c7*/
    {
      *(this + 1) = v2[1]; /*0x4a70cc*/
      *this = *v2; /*0x4a70d2*/
      FormHeapFree((unsigned int)v2); /*0x4a70d4*/
    }
    else
    {
      *this = 0; /*0x4a70de*/
    }
    --*(this + 9); /*0x4a70e4*/
    if ( v3 ) /*0x4a70ea*/
    {
      if ( *((_BYTE *)this + 0xC) ) /*0x4a70ec*/
        FormHeapFree(v3); /*0x4a70f3*/
    }
  }
  v4 = flt_A32048; /*0x4a7102*/
  *(this + 9) = 0; /*0x4a7108*/
  *((float *)this + 5) = v4; /*0x4a710f*/
  *((float *)this + 4) = v4; /*0x4a7112*/
  v5 = flt_A3B888; /*0x4a7115*/
  *((float *)this + 7) = flt_A3B888; /*0x4a711b*/
  *((float *)this + 6) = v5; /*0x4a711e*/
}
