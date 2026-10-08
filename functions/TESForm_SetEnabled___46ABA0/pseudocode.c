// Verified Oblivion setter: the bool parameter sets or clears TESFormMembr.flags bit 0x800. TESObjectREFR_LinkModifiedForm propagates this bit through ExtraEnableStateParent and the enable-state activation routine clears it. CalcLowPathToPoint independently appends '-Disabled' when this bit is set. Fallout's mangled TESForm::SetDisabled directly writes the same 0x800 mask; this is a cross-check, not the basis of the Oblivion interpretation.
int __thiscall TESForm_SetDisabledFlag(TESForm *this, bool disabled)
{
  if ( disabled ) /*0x46aba5*/
    this->member.flags |= 0x800u; /*0x46aba7*/
  else
    this->member.flags &= ~0x800u; /*0x46abb0*/
  return ((int (__thiscall *)(TESForm *, int))this->vtbl->MarkAsModified)(this, 0x40000001);
}
