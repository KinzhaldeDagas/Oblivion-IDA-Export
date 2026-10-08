_DWORD *__thiscall sub_5592A0(int *this, _DWORD *a2, int a3, float *a4, int a5, float *a6)
{
  void *v7; // edi

  if ( !a3 || a3 != a5 ) /*0x5592b1*/
    _invalid_parameter_noinfo(); /*0x5592b3*/
  if ( a4 != a6 ) /*0x5592c2*/
  {
    v7 = (void *)sub_558610(a6, (float *)*(this + 2), (int)a4); /*0x5592d6*/
    FaceGenEgtBasisRecordArray_Destruct(v7, (void *)*(this + 2)); /*0x5592dc*/
    *(this + 2) = (int)v7; /*0x5592e1*/
  }
  *a2 = a3; /*0x5592ea*/
  a2[1] = a4; /*0x5592ed*/
  return a2; /*0x5592e9*/
}
