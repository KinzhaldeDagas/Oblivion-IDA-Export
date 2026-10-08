float *__thiscall sub_6E5B40(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  float *v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x60u); /*0x6e5b67*/
  v4 = 0; /*0x6e5b73*/
  if ( v3 ) /*0x6e5b7b*/
    v4 = (float *)sub_6E5920(v3, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0); /*0x6e5b95*/
  sub_6E4B20(this, (int)v4, a2); /*0x6e5ba7*/
  v4[0x12] = *(this + 0x12); /*0x6e5baf*/
  v4[0x13] = *(this + 0x13); /*0x6e5bb7*/
  v4[0x14] = *(this + 0x14); /*0x6e5bbd*/
  v4[0x15] = *(this + 0x15); /*0x6e5bc3*/
  v4[0x16] = *(this + 0x16); /*0x6e5bc9*/
  v4[0x17] = *(this + 0x17); /*0x6e5bcf*/
  return v4; /*0x6e5bd2*/
}
