char __thiscall TESForm_SaveForm(TESForm *this, Data *file)
{
  TESForm::FormFlags flags; // eax

  flags = this->member.flags;
  if ( (flags & 0x4000) != 0 )
    return 0;
  if ( (flags & 0x20) == 0 )
    return ((char (__thiscall *)(TESForm *, Data *))this->vtbl->Unk_08)(this, file);
  TESFile_WriteEmptyFormRecord(file, (int)this);
  sub_450A80(file);
  return 1;
}
