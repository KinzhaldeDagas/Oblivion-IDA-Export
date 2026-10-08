double __thiscall sub_535AC0(_DWORD *this)
{
  _DWORD **v2; // ecx
  float *v3; // eax
  int v5; // esi

  if ( !this ) /*0x535ac6*/
    return (float)0.0; /*0x535ac6*/
  v2 = (_DWORD **)*(this + 2); /*0x535ac8*/
  if ( v2 ) /*0x535acd*/
  {
    v3 = (float *)sub_8A98D0(v2); /*0x535acf*/
    if ( v3 ) /*0x535ad6*/
      return (float)sub_89DA90(v3); /*0x535ae9*/
  }
  v5 = *(this + 2); /*0x535aea*/
  if ( !v5 ) /*0x535aef*/
    return (float)0.0; /*0x535b0a*/
  return (float)sub_89DA90((float *)*(_DWORD *)(v5 + 0x50)); /*0x535ae7*/
}
