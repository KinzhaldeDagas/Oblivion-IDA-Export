// OFE exact world scope authority: speaker/initiating actor TESObjectREFR worldspace, not always player. Uses actual parent/child CELL. 4C9CF0 explicitly returns null when CELL interior flag bit0 is set; unresolved/interior contexts do not match an exterior rule. No geographic-parent or last-exterior inference.
TESWorldSpace *__thiscall TESObjectREFR_GetWorldSpace(TESObjectREFR *this)
{
  TESObjectCELL *parentCell; // eax

  parentCell = this->member.parentCell; /*0x4d6670*/
  if ( parentCell ) /*0x4d6678*/
    return TESObjectCELL_GetWorldSpace(parentCell); /*0x4d6678*/
  parentCell = (TESObjectCELL *)(*(int (__thiscall **)(TESChildCELLVtbl *))this->member.childCell.GetChildCell)(&this->member.childCell); /*0x4d6682*/
  if ( parentCell ) /*0x4d6686*/
    return TESObjectCELL_GetWorldSpace(parentCell); /*0x4d668b*/
  else
    return 0; /*0x4d6690*/
}
