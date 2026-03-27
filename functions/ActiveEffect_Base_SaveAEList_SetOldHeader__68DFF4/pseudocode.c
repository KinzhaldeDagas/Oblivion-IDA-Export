int __cdecl ActiveEffect_Base_SaveAEList_::SetOldHeader(int a1, int a2, int a3, int a4, _WORD *a5)
{
  UInt32 v5; // esi

  v5 = SaveLoad_CurrentSavegame->unk000[5];
  if ( v5 > (unsigned int)a5 + 0xFFFF )
    PrintError(
      "Save Game Block in file %s on line %i is greater than maximum short size",
      ".\\Magic\\ActiveEffect.cpp",
      0x36B);
  *a5 = v5 - (_WORD)a5;
  return ActiveEffect_Base_SaveAEList_::Epilogue();
}
