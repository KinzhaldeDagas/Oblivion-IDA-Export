char __thiscall sub_6CA8E0(float *this, char *Src, volatile LONG *a3)
{
  NiRTTI *v4; // eax
  double v6; // st7

  if ( !Src ) /*0x6ca8eb*/
    return 0; /*0x6ca8eb*/
  if ( !a3 ) /*0x6ca8f3*/
    return 0; /*0x6ca8f3*/
  v4 = (NiRTTI *)(*(int (__thiscall **)(volatile LONG *))(*a3 + 4))(a3); /*0x6ca8fc*/
  if ( !v4 ) /*0x6ca900*/
    return 0; /*0x6ca910*/
  while ( v4 != &stru_B3CDF8 ) /*0x6ca907*/
  {
    v4 = v4->parent; /*0x6ca909*/
    if ( !v4 ) /*0x6ca90e*/
      return 0; /*0x6ca90e*/
  }
  *((_WORD *)a3 + 4) = a3[2] & 0xFFF9 | (2 * *((_WORD *)this + 0x12)); /*0x6ca92b*/
  v6 = *(this + 0xA); /*0x6ca92f*/
  *((_WORD *)a3 + 4) &= ~0x10u; /*0x6ca932*/
  *((float *)a3 + 3) = v6; /*0x6ca938*/
  return sub_6CA160((unsigned int *)this, Src, a3); /*0x6ca910*/
}
