void *__thiscall TESObjectMISC_SaveModifiedForm(TESForm *this, char a2)
{
  TESForm_SaveModifiedForm(this, a2);
  return TESValueForm_SaveModified((int)(this + 4), a2);
}
