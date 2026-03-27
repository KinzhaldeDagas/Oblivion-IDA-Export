void *__thiscall sub_4B5330(TESForm *this, char a2)
{
  void *result; // eax
  size_t v4; // [esp-4h] [ebp-Ch]

  TESForm_SaveModifiedForm(this, a2);
  result = TESValueForm_SaveModified((int)this + 0x70, a2);
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v4) = 1;
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)this + 0x89, v4);
  }
  return result;
}
