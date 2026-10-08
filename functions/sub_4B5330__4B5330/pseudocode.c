void *__thiscall sub_4B5330(TESForm *this, char a2)
{
  void *result; // eax

  TESForm_SaveModifiedForm(this, a2); /*0x4b5339*/
  result = TESValueForm_SaveModified((int)this + 0x70, a2); /*0x4b5342*/
  if ( (a2 & 4) != 0 ) /*0x4b534a*/
    return SaveLoad_SaveData(g_TESSaveLoadGame, (char *)this + 0x89, 1u); /*0x4b535b*/
  return result; /*0x4b5360*/
}
