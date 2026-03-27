float *__thiscall sub_721230(char **this, _DWORD **a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x10u);
  v4 = v3;
  if ( v3 )
  {
    sub_721350(v3);
    v4[3] = 0.0;
    *(_DWORD *)v4 = &NiFloatExtraData::`vftable';
  }
  else
  {
    v4 = 0;
  }
  sub_7214A0(this, (unsigned int *)v4, a2);
  v4[3] = *((float *)this + 3);
  return v4;
}
