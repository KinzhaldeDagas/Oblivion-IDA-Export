double __thiscall TesObjectREF_GetDistance(TESObjectREFR *this, TESObjectREFR *a2, char unk000)
{
  TESForm::FormFlags flags; // eax
  TESObjectCELL *parentCell; // ecx
  TESWorldSpace *WorldSpace; // ebx
  float *v7; // eax
  float v9; // [esp+4h] [ebp-4h]

  v9 = flt_A32048;
  if ( a2 )
  {
    flags = a2->member.super.flags;
    if ( ((flags & 0x800) == 0 || unk000) && (flags & 0x20) == 0 )
    {
      parentCell = a2->member.parentCell;
      if ( parentCell
        && this->member.parentCell
        && (TESObjectCELL_IsInterior(parentCell) || TESObjectCELL_IsInterior(this->member.parentCell)) )
      {
        if ( this->member.parentCell == a2->member.parentCell )
        {
LABEL_14:
          v7 = a2->vtbl->GetPos(a2);
          return (float)sub_4D7E30((float *)this, v7);
        }
      }
      else
      {
        WorldSpace = TESObjectREFR_GetWorldSpace(a2);
        if ( TESObjectREFR_GetWorldSpace(this) == WorldSpace
          && TESObjectREFR_GetWorldSpace(this)
          && TESObjectREFR_GetWorldSpace(a2) )
        {
          goto LABEL_14;
        }
      }
    }
  }
  return v9;
}
