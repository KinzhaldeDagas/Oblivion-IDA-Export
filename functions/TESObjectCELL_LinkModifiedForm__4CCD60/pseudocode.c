void __thiscall TESObjectCELL_LinkModifiedForm(ExtraDataList *this, char a2, int a3)
{
  TESForm *Owner; // eax
  TESForm *v5; // eax

  if ( (a2 & 0x20) != 0 ) /*0x4ccd68*/
  {
    Owner = ExtraDataList_GetOwner(this + 2); /*0x4ccd70*/
    if ( Owner ) /*0x4ccd77*/
    {
      v5 = TESForm_LookupByFormID((UInt32)Owner); /*0x4ccd7a*/
      ExtraDataList::SetOrRemoveExtraOwnership(this + 2, v5); /*0x4ccd85*/
      (*((void (__thiscall **)(ExtraDataList *, int))this->vtbl + 0x10))(this, 0x20); /*0x4ccd93*/
    }
  }
}
