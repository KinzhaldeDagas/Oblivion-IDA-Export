int __thiscall sub_60E120(float *this, int *a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x44u); /*0x60e147*/
  v4 = (int)v3; /*0x60e14c*/
  if ( v3 ) /*0x60e15f*/
  {
    NiTimeController::NiTimeController(v3); /*0x60e163*/
    *(float *)(v4 + 0x3C) = 0.0; /*0x60e16a*/
    *(_DWORD *)v4 = &BSPlayerDistanceCheckController::`vftable'; /*0x60e16d*/
    *(_DWORD *)(v4 + 0x40) = 0; /*0x60e173*/
  }
  else
  {
    v4 = 0; /*0x60e17c*/
  }
  *(float *)(v4 + 0x40) = *(this + 0x10); /*0x60e186*/
  *(float *)(v4 + 0x3C) = *(this + 0xF); /*0x60e18d*/
  NiTimeController_CopyMembers(this, v4, a2); /*0x60e19a*/
  return v4; /*0x60e1a1*/
}
