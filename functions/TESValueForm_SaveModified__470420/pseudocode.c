void *__thiscall TESValueForm_SaveModified(int this, char a2)
{
  void *result; // eax

  if ( (a2 & 8) != 0 ) /*0x470425*/
    return SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(this + 4), 4u); /*0x470433*/
  return result; /*0x470438*/
}
