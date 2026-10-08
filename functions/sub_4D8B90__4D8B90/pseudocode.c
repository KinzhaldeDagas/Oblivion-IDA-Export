bool __thiscall sub_4D8B90(TESObjectREFR *this)
{
  TESObjectCELL *v2; // eax

  if ( this->member.parentCell ) /*0x4d8b90*/
    return TESObjectCELL_IsInterior(this->member.parentCell); /*0x4d8b99*/
  v2 = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell); /*0x4d8ba6*/
  return !v2 || !TESObjectCELL_GetWorldSpace(v2); /*0x4d8bb9*/
}
