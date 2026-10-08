double __thiscall TesObjectREF_GetDistance(TESObjectREFR *this, TESObjectREFR *a2, char unk000)
{
  TESForm::FormFlags flags; // eax
  TESObjectCELL *parentCell; // ecx
  TESWorldSpace *WorldSpace; // ebx
  const float *v7; // eax
  float v9; // [esp+4h] [ebp-4h]

  v9 = flt_A32048; /*0x4d7e9c*/
  if ( a2 ) /*0x4d7ea5*/
  {
    flags = a2->member.super.flags;             // 3DTheft pass 166 crash boundary: first target-reference flags read in GetDistance. 2026-07-13 dump had ESI=0x031BA25F, exactly the logged pending decision tick, due to the former Actor_GetDisposition caller stack imbalance. /*0x4d7eab*/
    if ( ((flags & 0x800) == 0 || unk000) && (flags & 0x20) == 0 ) /*0x4d7ec4*/
    {
      parentCell = a2->member.parentCell; /*0x4d7ec6*/
      if ( parentCell /*0x4d7edf*/
        && this->member.parentCell
        && (TESObjectCELL_IsInterior(parentCell) || TESObjectCELL_IsInterior(this->member.parentCell)) )
      {
        if ( this->member.parentCell == a2->member.parentCell ) /*0x4d7eee*/
        {
LABEL_14:
          v7 = a2->vtbl->GetPos(a2); /*0x4d7f1e*/
          return TESObjectREFR::GetDistanceToPoint(this, v7); /*0x4d7f32*/
        }
      }
      else
      {
        WorldSpace = TESObjectREFR_GetWorldSpace(a2); /*0x4d7efc*/
        if ( TESObjectREFR_GetWorldSpace(this) == WorldSpace /*0x4d7f15*/
          && TESObjectREFR_GetWorldSpace(this)
          && TESObjectREFR_GetWorldSpace(a2) )
        {
          goto LABEL_14; /*0x4d7f1c*/
        }
      }
    }
  }
  return v9; /*0x4d7f3b*/
}
