bool __thiscall sub_4D8B90(TESObjectREFR *this)
{
  TESObjectCELL *v2; // eax

  if ( this->member.parentCell )
    return TESObjectCELL_IsInterior(this->member.parentCell);
  v2 = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell);
  return !v2 || !TESObjectCELL_GetWorldSpace(v2);
}
