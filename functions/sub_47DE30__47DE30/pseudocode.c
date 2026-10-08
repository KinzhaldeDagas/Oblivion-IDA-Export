double __thiscall sub_47DE30(_DWORD *this)
{
  int v1; // eax

  if ( !this ) /*0x47de33*/
    return (float)0.0; /*0x47de33*/
  v1 = *(this + 2); /*0x47de35*/
  if ( !v1 ) /*0x47de3a*/
    return (float)0.0; /*0x47de51*/
  return (float)sub_89DA90((float *)*(_DWORD *)(v1 + 0x50)); /*0x47de4b*/
}
