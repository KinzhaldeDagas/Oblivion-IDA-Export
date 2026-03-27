float *__thiscall sub_751800(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x3Cu);
  if ( v3 )
    v4 = sub_750B50(v3);
  else
    v4 = 0;
  sub_752C40(this, (int)v4, a2);
  v4[7] = *(this + 7);
  v4[8] = *(this + 8);
  v4[9] = *(this + 9);
  v4[0xA] = *(this + 0xA);
  v4[0xB] = *(this + 0xB);
  v4[0xC] = *(this + 0xC);
  v4[0xD] = *(this + 0xD);
  v4[0xE] = *(this + 0xE);
  return v4;
}
