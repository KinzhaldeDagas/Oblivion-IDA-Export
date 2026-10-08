bool __thiscall TESForm_SaveFormRecord(TESForm *this, Data *a2)
{
  if ( (this->member.flags & 0x4000) != 0 ) /*0x46b34b*/
    return 0; /*0x46b34d*/
  this->vtbl->Unk_09(this); /*0x46b358*/
  return TESFile_WriteFormRecord(a2, (int)this) == 0; /*0x46b34f*/
}
