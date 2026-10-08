int __thiscall sub_753D60(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x3Cu); /*0x753d66*/
  v4 = (int)v3; /*0x753d6b*/
  if ( v3 ) /*0x753d72*/
  {
    NiTimeController::NiTimeController(v3); /*0x753d76*/
    *(float *)(v4 + 0x18) = 0.0; /*0x753d81*/
    *(float *)(v4 + 0x14) = 0.0; /*0x753d85*/
    *(_DWORD *)v4 = &NiPSysUpdateCtlr::`vftable'; /*0x753d8b*/
    NiTimeController_CopyMembers(this, v4, a2); /*0x753d91*/
    return v4; /*0x753d97*/
  }
  else
  {
    NiTimeController_CopyMembers(this, 0, a2); /*0x753da7*/
    return 0; /*0x753dad*/
  }
}
