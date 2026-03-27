int __thiscall sub_755180(float *this, _DWORD **a2)
{
  float *v3; // eax
  int v4; // esi

  v3 = (float *)FormHeapAlloc(0x34u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_75E800(v3);
    *(float *)(v4 + 0x30) = 0.0;
    *(_DWORD *)v4 = &NiPSysRadialFieldModifier::`vftable';
    sub_75E830(this, v4, a2);
    return v4;
  }
  else
  {
    sub_75E830(this, 0, a2);
    return 0;
  }
}
