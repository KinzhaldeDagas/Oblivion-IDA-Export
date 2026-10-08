void *__thiscall TESForm_SaveModifiedForm(TESForm *this, char a2)
{
  void *result; // eax

  if ( (a2 & 1) != 0 ) /*0x46b5e5*/
    return SaveLoad_SaveData(g_TESSaveLoadGame, &this->member.flags, 4u); /*0x46b5f3*/
  return result; /*0x46b5f8*/
}
