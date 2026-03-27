bool __thiscall TESForm_SaveFormRecord(TESForm *this, Data *a2)
{
  if ( (this->member.flags & 0x4000) != 0 )
    return 0;
  this->vtbl->Unk_09(this);
  return TESFile_WriteFormRecord(a2, (int)this) == 0;
}
