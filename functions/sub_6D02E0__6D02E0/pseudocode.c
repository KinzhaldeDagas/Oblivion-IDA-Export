int __thiscall sub_6D02E0(_WORD *this, int a2)
{
  NiTimeController *v3; // eax
  int v4; // esi

  v3 = (NiTimeController *)FormHeapAlloc(0x48u); /*0x6d0308*/
  v4 = (int)v3; /*0x6d030d*/
  if ( v3 ) /*0x6d031e*/
  {
    NiInterpController_Construct(v3); /*0x6d0322*/
    *(_DWORD *)v4 = &NiMultiTargetTransformController::`vftable'; /*0x6d0327*/
    *(_DWORD *)(v4 + 0x3C) = 0; /*0x6d032d*/
    *(_DWORD *)(v4 + 0x40) = 0; /*0x6d0330*/
    *(_WORD *)(v4 + 0x44) = 0; /*0x6d0333*/
  }
  else
  {
    v4 = 0; /*0x6d0339*/
  }
  sub_6D0170(this, v4, a2); /*0x6d034b*/
  return v4; /*0x6d0352*/
}
