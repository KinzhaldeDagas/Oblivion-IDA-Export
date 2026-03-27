void __thiscall TESObjectCELL_LinkModifiedForm(ExtraDataList *this, char a2, int a3)
{
  BSExtraDataVtbl *Owner; // eax
  TESForm *v5; // eax

  if ( (a2 & 0x20) != 0 )
  {
    Owner = ExtraDataList_GetOwner(this + 2);
    if ( Owner )
    {
      v5 = TESForm_LookupByFormID((UInt32)Owner);
      ExtraDataList::SetOrRemoveExtraOwnership(this + 2, v5);
      (*((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x20);
    }
  }
}
