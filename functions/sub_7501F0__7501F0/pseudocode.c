int __thiscall sub_7501F0(_DWORD *this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = (NiTimeController *)FormHeapAlloc(0x64u);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_75E540(v3);
    *(_DWORD *)v4 = &NiPSysEmitterCtlr::`vftable';
    *(_DWORD *)(v4 + 0x48) = 0;
    v5 = flt_A7DEB4;
    *(_BYTE *)(v4 + 0x54) = 0;
    *(float *)(v4 + 0x50) = -v5;
    *(_DWORD *)(v4 + 0x58) = 0;
    *(_DWORD *)(v4 + 0x5C) = 0;
    *(_DWORD *)(v4 + 0x60) = 0;
    sub_74FD50(this, v4, a2);
    return v4;
  }
  else
  {
    sub_74FD50(this, 0, a2);
    return 0;
  }
}
