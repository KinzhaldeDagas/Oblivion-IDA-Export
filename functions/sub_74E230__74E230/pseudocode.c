int __thiscall sub_74E230(float *this, _DWORD **a2)
{
  _DWORD *v3; // eax
  int v4; // esi

  v3 = (_DWORD *)FormHeapAlloc(0x38u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_752BF0(v3);
    *(float *)(v4 + 0x18) = 0.0;
    *(_DWORD *)v4 = &NiPSysRotationModifier::`vftable';
    *(float *)(v4 + 0x1C) = 0.0;
    *(float *)(v4 + 0x20) = 0.0;
    *(float *)(v4 + 0x24) = 0.0;
    *(_DWORD *)(v4 + 0x28) = dword_B258D0;
    *(_DWORD *)(v4 + 0x2C) = dword_B258D4;
    *(_DWORD *)(v4 + 0x30) = dword_B258D8;
    *(_BYTE *)(v4 + 0x34) = 1;
    *(_BYTE *)(v4 + 0x35) = 0;
    sub_74E160(this, v4, a2);
    return v4;
  }
  else
  {
    sub_74E160(this, 0, a2);
    return 0;
  }
}
