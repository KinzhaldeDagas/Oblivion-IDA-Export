float *__thiscall sub_757520(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x48u);
  if ( v3 )
    v4 = sub_7572B0(v3);
  else
    v4 = 0;
  sub_75E830(this, (int)v4, a2);
  v4[0xC] = *(this + 0xC);
  v4[0xD] = *(this + 0xD);
  v4[0xE] = *(this + 0xE);
  v4[0xF] = *(this + 0xC);
  v4[0x10] = *(this + 0xD);
  v4[0x11] = *(this + 0xE);
  sub_43F350(v4 + 0xF);
  return v4;
}
