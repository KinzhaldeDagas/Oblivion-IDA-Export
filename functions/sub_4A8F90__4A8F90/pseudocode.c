void *__thiscall sub_4A8F90(TESForm *this, char a2)
{
  TESForm_SaveModifiedForm(this, a2);
  return TESValueForm_SaveModified((int)this + 0x64, a2);
}
