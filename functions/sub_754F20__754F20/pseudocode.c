int __thiscall sub_754F20(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x754f26*/
  v4 = (int)v3; /*0x754f2b*/
  if ( v3 ) /*0x754f32*/
  {
    NiTimeController::NiTimeController(v3); /*0x754f36*/
    *(_DWORD *)v4 = &NiPSysResetOnLoopCtlr::`vftable'; /*0x754f3f*/
    *(float *)(v4 + 0x3C) = -flt_A7DEB4; /*0x754f4f*/
    NiTimeController_CopyMembers(this, v4, a2); /*0x754f54*/
    return v4; /*0x754f5a*/
  }
  else
  {
    NiTimeController_CopyMembers(this, 0, a2); /*0x754f6a*/
    return 0; /*0x754f70*/
  }
}
