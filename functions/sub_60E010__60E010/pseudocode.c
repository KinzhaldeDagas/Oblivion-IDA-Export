int __thiscall sub_60E010(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(_DWORD *)v4 = &BSDoorHavokController::`vftable';
    *(_BYTE *)(v4 + 0x3C) = 0;
  }
  else
  {
    v4 = 0;
  }
  sub_715D80(this, v4, a2);
  *(_WORD *)(v4 + 8) &= ~8u;
  return v4;
}
