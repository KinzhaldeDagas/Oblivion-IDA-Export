int __thiscall sub_4CAA10(ExtraDataList *this, TESForm *a2)
{
  ExtraDataList::SetOrRemoveExtraOwnership(this + 2, a2);
  return (*((int (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x20);
}
