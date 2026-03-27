int __thiscall sub_754F20(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiTimeController::NiTimeController(v3);
    *(_DWORD *)v4 = &NiPSysResetOnLoopCtlr::`vftable';
    *(float *)(v4 + 0x3C) = -flt_A7DEB4;
    sub_715D80(this, v4, a2);
    return v4;
  }
  else
  {
    sub_715D80(this, 0, a2);
    return 0;
  }
}
