float *__thiscall sub_75C7A0(float *this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x68u);
  if ( v3 )
    v4 = sub_75C250(v3);
  else
    v4 = 0;
  sub_75E830(this, (int)v4, a2);
  sub_75C1C0(v4, this + 0x10);
  return v4;
}
