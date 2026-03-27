TESWorldSpace *__thiscall TESObjectREFR_GetWorldSpace(TESObjectREFR *this)
{
  TESObjectCELL *parentCell; // eax

  parentCell = this->member.parentCell;
  if ( parentCell )
    return TESObjectCELL_GetWorldSpace(parentCell);
  parentCell = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell);
  if ( parentCell )
    return TESObjectCELL_GetWorldSpace(parentCell);
  else
    return 0;
}
