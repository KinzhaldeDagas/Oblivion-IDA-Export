void *__thiscall TESObjectMISC_SaveModifiedForm(TESForm *this, char a2)
{
  TESForm_SaveModifiedForm(this, a2); /*0x4b95b9*/
  return TESValueForm_SaveModified((int)(this + 4), a2); /*0x4b95c7*/
}
