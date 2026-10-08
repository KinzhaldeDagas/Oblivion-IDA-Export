void __thiscall sub_557CF0(_DWORD *this)
{
  int v2; // eax
  unsigned int *v3; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v2 = *(this + 0x25); /*0x557cf5*/
  v3 = this + 0x24; /*0x557cfb*/
  if ( v2 ) /*0x557d06*/
  {
    sub_5570D0(v2, *(this + 0x26)); /*0x557d13*/
    FormHeapFree(v3[1]); /*0x557d1c*/
  }
  v3[1] = 0; /*0x557d24*/
  v3[2] = 0; /*0x557d27*/
  v3[3] = 0; /*0x557d2a*/
  v4 = *(this + 0x21); /*0x557d2d*/
  if ( v4 ) /*0x557d3b*/
  {
    sub_5573D0(v4, *(this + 0x22)); /*0x557d48*/
    FormHeapFree(*(this + 0x21)); /*0x557d51*/
  }
  *(this + 0x21) = 0; /*0x557d59*/
  *(this + 0x22) = 0; /*0x557d5c*/
  *(this + 0x23) = 0; /*0x557d5f*/
  v5 = *(this + 0x1D); /*0x557d62*/
  if ( v5 ) /*0x557d6a*/
  {
    sub_557080(v5, *(this + 0x1E)); /*0x557d77*/
    FormHeapFree(*(this + 0x1D)); /*0x557d80*/
  }
  *(this + 0x1D) = 0; /*0x557d88*/
  *(this + 0x1E) = 0; /*0x557d8b*/
  *(this + 0x1F) = 0; /*0x557d8e*/
  v6 = *(this + 0x19); /*0x557d91*/
  if ( v6 ) /*0x557d99*/
  {
    sub_557030(v6, *(this + 0x1A)); /*0x557da6*/
    FormHeapFree(*(this + 0x19)); /*0x557daf*/
  }
  *(this + 0x19) = 0; /*0x557db7*/
  *(this + 0x1A) = 0; /*0x557dba*/
  *(this + 0x1B) = 0; /*0x557dbd*/
  if ( *(this + 0x15) ) /*0x557dc0*/
    FormHeapFree(*(this + 0x15)); /*0x557dc8*/
  *(this + 0x15) = 0; /*0x557dd0*/
  *(this + 0x16) = 0; /*0x557dd3*/
  *(this + 0x17) = 0; /*0x557dd6*/
  if ( *(this + 0x11) ) /*0x557dd9*/
    FormHeapFree(*(this + 0x11)); /*0x557de1*/
  *(this + 0x11) = 0; /*0x557de9*/
  *(this + 0x12) = 0; /*0x557dec*/
  *(this + 0x13) = 0; /*0x557def*/
  if ( *(this + 0xD) ) /*0x557df2*/
    FormHeapFree(*(this + 0xD)); /*0x557dfa*/
  *(this + 0xD) = 0; /*0x557e02*/
  *(this + 0xE) = 0; /*0x557e05*/
  *(this + 0xF) = 0; /*0x557e08*/
  if ( *(this + 9) ) /*0x557e0b*/
    FormHeapFree(*(this + 9)); /*0x557e13*/
  *(this + 9) = 0; /*0x557e1b*/
  *(this + 0xA) = 0; /*0x557e1e*/
  *(this + 0xB) = 0; /*0x557e21*/
  if ( *(this + 5) ) /*0x557e24*/
    FormHeapFree(*(this + 5)); /*0x557e2c*/
  *(this + 5) = 0; /*0x557e34*/
  *(this + 6) = 0; /*0x557e37*/
  *(this + 7) = 0; /*0x557e3a*/
  if ( *(this + 1) ) /*0x557e3d*/
    FormHeapFree(*(this + 1)); /*0x557e45*/
  *(this + 1) = 0; /*0x557e4d*/
  *(this + 2) = 0; /*0x557e50*/
  *(this + 3) = 0; /*0x557e53*/
}
