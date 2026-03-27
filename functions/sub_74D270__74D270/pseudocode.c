float *__thiscall sub_74D270(float *this, int a2)
{
  float *v3; // eax
  float *v4; // esi

  v3 = (float *)FormHeapAlloc(0x60u);
  v4 = v3;
  if ( v3 )
  {
    sub_752FD0(v3);
    v4[0x15] = 0.0;
    *(_DWORD *)v4 = &NiPSysBoxEmitter::`vftable';
    v4[0x16] = 0.0;
    v4[0x17] = 0.0;
  }
  else
  {
    v4 = 0;
  }
  sub_753000(v4, a2);
  v4[0x15] = *(this + 0x15);
  v4[0x16] = *(this + 0x16);
  v4[0x17] = *(this + 0x17);
  return v4;
}
