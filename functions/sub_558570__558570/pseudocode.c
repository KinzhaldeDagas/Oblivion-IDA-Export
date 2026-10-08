void __thiscall sub_558570(int *this)
{
  int v2; // eax

  v2 = *(this + 1); /*0x558574*/
  if ( v2 ) /*0x558579*/
  {
    sub_557430(v2, *(this + 2)); /*0x558586*/
    FormHeapFree(*(this + 1)); /*0x55858f*/
  }
  *(this + 1) = 0; /*0x558597*/
  *(this + 2) = 0; /*0x55859e*/
  *(this + 3) = 0; /*0x5585a5*/
}
