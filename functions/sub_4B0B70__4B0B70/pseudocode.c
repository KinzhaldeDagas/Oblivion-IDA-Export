void *__thiscall sub_4B0B70(TESForm *this, char a2)
{
  TESForm_SaveModifiedForm(this, a2);
  return TESValueForm_SaveModified((int)this + 0x68, a2);
}
