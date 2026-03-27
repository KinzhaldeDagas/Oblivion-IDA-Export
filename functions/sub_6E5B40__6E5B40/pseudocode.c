float *__thiscall sub_6E5B40(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  float *v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x60u);
  v4 = 0;
  if ( v3 )
    v4 = (float *)sub_6E5920(v3, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0);
  sub_6E4B20(this, (int)v4, a2);
  v4[0x12] = *(this + 0x12);
  v4[0x13] = *(this + 0x13);
  v4[0x14] = *(this + 0x14);
  v4[0x15] = *(this + 0x15);
  v4[0x16] = *(this + 0x16);
  v4[0x17] = *(this + 0x17);
  return v4;
}
