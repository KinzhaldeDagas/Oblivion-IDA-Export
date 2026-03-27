NiPathController *__thiscall NiPathController::NiPathController(NiPathController *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = (NiTimeController *)FormHeapAlloc(0x6Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(_DWORD *)v4 = &NiPathController::`vftable';
    *(_DWORD *)(v4 + 0x48) = 0;
    *(_DWORD *)(v4 + 0x4C) = 0;
    *(float *)(v4 + 0x58) = 0.0;
    *(_DWORD *)(v4 + 0x40) = 0;
    *(float *)(v4 + 0x5C) = 0.0;
    *(_DWORD *)(v4 + 0x44) = 0;
    *(float *)(v4 + 0x64) = 0.0;
    *(_DWORD *)(v4 + 0x68) = 1;
    v5 = flt_A30634;
    *(_WORD *)(v4 + 0x60) = 0;
    *(float *)(v4 + 0x54) = v5;
    *(_DWORD *)(v4 + 0x50) = 0;
    *(_WORD *)(v4 + 0x3C) = 3;
  }
  else
  {
    v4 = 0;
  }
  sub_6DDC60((float *)this, v4, a2);
  return (NiPathController *)v4;
}
