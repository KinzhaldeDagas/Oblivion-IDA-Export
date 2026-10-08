// Verified Oblivion setter: toggles TESFormMembr.flags bit 0x20 and marks the form modified. The TESForm_SetDeleted symbol, TESObjectREFR_destr call with true, and both low-path filters establish that this is the deleted flag.
int __thiscall TESForm_SetDeleted(TESForm *this, bool a2)
{
  if ( a2 ) /*0x46a9e5*/
    this->member.flags |= 0x20u; /*0x46a9e7*/
  else
    this->member.flags &= ~0x20u; /*0x46a9ed*/
  return ((int (__thiscall *)(TESForm *, int))this->vtbl->MarkAsModified)(this, 0x40000001);
}
