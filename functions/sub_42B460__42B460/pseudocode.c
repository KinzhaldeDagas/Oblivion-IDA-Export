// ExtraTeleport_GetTargetCell-style helper: returns parent cell of ExtraTeleport+0 target ref if present.
TESObjectCELL *__thiscall sub_42B460(TESObjectREFR **this)
{
  TESObjectREFR *v1; // ecx

  v1 = *this; /*0x42b460*/
  if ( v1 ) /*0x42b464*/
    return Shared_GetDwordAtOffset40(v1); /*0x42b466*/
  else
    return 0; /*0x42b46b*/
}
