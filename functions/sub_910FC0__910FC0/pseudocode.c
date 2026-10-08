long double __cdecl sub_910FC0(float a1)
{
  if ( fabs(a1) < fConstant_1 ) /*0x910fd1*/
    return asin(a1); /*0x910ff6*/
  if ( a1 <= (double)*(float *)&SrcStr ) /*0x910fe2*/
    return flt_A3721C; /*0x910feb*/
  return flt_A3F3E0; /*0x910fea*/
}
