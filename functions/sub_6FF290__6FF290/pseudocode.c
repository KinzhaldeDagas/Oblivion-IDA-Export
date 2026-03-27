float *__thiscall sub_6FF290(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x3Cu);
  v4 = 0;
  if ( v3 )
    v4 = sub_6FEEE0(v3);
  sub_752C40(this, (int)v4, a2);
  v4[8] = *(this + 8);
  return v4;
}
