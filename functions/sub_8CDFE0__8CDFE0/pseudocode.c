_DWORD *__thiscall sub_8CDFE0(_DWORD *this, float *a2, int a3)
{
  double v3; // st7

  *(this + 3) = a3; /*0x8cdfe4*/
  *((_WORD *)this + 3) = 1; /*0x8cdfec*/
  *(this + 2) = 0; /*0x8cdff2*/
  *this = &off_A99D60; /*0x8cdff9*/
  *(this + 4) = *(_DWORD *)a2; /*0x8ce007*/
  *(this + 5) = *((_DWORD *)a2 + 1); /*0x8ce00c*/
  *(this + 6) = *((_DWORD *)a2 + 2); /*0x8ce012*/
  *(this + 7) = *((_DWORD *)a2 + 3); /*0x8ce018*/
  if ( *((float *)this + 4) >= (double)*((float *)this + 5) ) /*0x8ce027*/
    v3 = *((float *)this + 5); /*0x8ce02d*/
  else
    v3 = *((float *)this + 4); /*0x8ce029*/
  *((float *)this + 7) = v3; /*0x8ce030*/
  if ( v3 > *((float *)this + 6) ) /*0x8ce03b*/
    v3 = *((float *)this + 6); /*0x8ce03f*/
  *((float *)this + 7) = v3; /*0x8ce042*/
  return this; /*0x8ce047*/
}
