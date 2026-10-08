void __thiscall sub_7724D0(unsigned int **this)
{
  unsigned int *v2; // ecx
  unsigned int **v3; // esi

  v2 = *this; /*0x7724d3*/
  if ( v2 ) /*0x7724d7*/
    sub_7722B0(v2, 3); /*0x7724db*/
  v3 = (unsigned int **)*(this + 2); /*0x7724e0*/
  if ( v3 ) /*0x7724e5*/
  {
    sub_7724D0(v3); /*0x7724e9*/
    FormHeapFree((unsigned int)v3); /*0x7724ef*/
  }
}
