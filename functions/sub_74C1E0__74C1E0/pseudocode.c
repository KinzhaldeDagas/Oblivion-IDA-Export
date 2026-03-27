float *__thiscall sub_74C1E0(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x84u);
  if ( v3 )
    v4 = sub_74ACC0(v3);
  else
    v4 = 0;
  sub_74EE00(this, (int)v4, a2);
  sub_74A8C0((unsigned __int16 *)v4 + 0x28, *((unsigned __int16 *)this + 0x2D));
  v4[0x1C] = *(this + 0x1C);
  v4[0x1D] = *(this + 0x1D);
  v4[0x1E] = *(this + 0x1E);
  v4[0x1F] = *(this + 0x1F);
  v4[0x20] = *(this + 0x20);
  return v4;
}
