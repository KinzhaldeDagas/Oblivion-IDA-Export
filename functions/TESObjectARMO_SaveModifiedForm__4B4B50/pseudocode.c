void *__thiscall TESObjectARMO_SaveModifiedForm(TESForm *this, char a2)
{
  TESForm_SaveModifiedForm(this, a2); /*0x4b4b59*/
  return TESValueForm_SaveModified((int)this + 0x4C, a2); /*0x4b4b67*/
}
