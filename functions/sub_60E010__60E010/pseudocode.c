int __thiscall sub_60E010(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x40u); /*0x60e037*/
  v4 = (int)v3; /*0x60e03c*/
  if ( v3 ) /*0x60e04f*/
  {
    NiTimeController::NiTimeController(v3); /*0x60e053*/
    *(_DWORD *)v4 = &BSDoorHavokController::`vftable'; /*0x60e058*/
    *(_BYTE *)(v4 + 0x3C) = 0; /*0x60e05e*/
  }
  else
  {
    v4 = 0; /*0x60e064*/
  }
  NiTimeController_CopyMembers(this, v4, a2); /*0x60e076*/
  *(_WORD *)(v4 + 8) &= ~8u; /*0x60e07b*/
  return v4; /*0x60e083*/
}
