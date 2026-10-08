float *__thiscall sub_6FEB80(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x68u); /*0x6feba7*/
  v4 = 0; /*0x6febb3*/
  if ( v3 ) /*0x6febbb*/
    v4 = sub_6FE760(v3); /*0x6febc4*/
  sub_6FE860(this, (int)v4, a2); /*0x6febd6*/
  return v4; /*0x6febdd*/
}
