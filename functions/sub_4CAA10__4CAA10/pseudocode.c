int __thiscall sub_4CAA10(ExtraDataList *this, TESForm *owner)
{
  ExtraDataList::SetOrRemoveExtraOwnership(this + 2, owner); /*0x4caa1b*/
  return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x20); /*0x4caa2b*/
}
