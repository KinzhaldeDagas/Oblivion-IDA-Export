int __thiscall sub_753D60(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x3Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(float *)(v4 + 0x18) = 0.0;
    *(float *)(v4 + 0x14) = 0.0;
    *(_DWORD *)v4 = &NiPSysUpdateCtlr::`vftable';
    sub_715D80(this, v4, a2);
    return v4;
  }
  else
  {
    sub_715D80(this, 0, a2);
    return 0;
  }
}
