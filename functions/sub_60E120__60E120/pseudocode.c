int __thiscall sub_60E120(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(float *)(v4 + 0x3C) = 0.0;
    *(_DWORD *)v4 = &BSPlayerDistanceCheckController::`vftable';
    *(_DWORD *)(v4 + 0x40) = 0;
  }
  else
  {
    v4 = 0;
  }
  *(float *)(v4 + 0x40) = *(this + 0x10);
  *(float *)(v4 + 0x3C) = *(this + 0xF);
  sub_715D80(this, v4, a2);
  return v4;
}
