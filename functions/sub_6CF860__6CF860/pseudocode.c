float *__thiscall sub_6CF860(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x58u);
  v4 = 0;
  if ( v3 )
    v4 = sub_6CE4C0(v3);
  sub_6CF490(this, (int)v4, a2);
  return v4;
}
