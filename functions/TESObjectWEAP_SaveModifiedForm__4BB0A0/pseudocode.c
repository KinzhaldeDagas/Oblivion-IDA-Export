void *__thiscall TESObjectWEAP_SaveModifiedForm(TESForm *this, char a2)
{
  TESForm_SaveModifiedForm(this, a2);
  return TESValueForm_SaveModified((int)this + 0x70, a2);
}
