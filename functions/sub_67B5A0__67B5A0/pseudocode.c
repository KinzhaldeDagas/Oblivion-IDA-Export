void __thiscall sub_67B5A0(TESPackage *this)
{
  TESPackage_LoadGame(this); /*0x67b5a3*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x40, 4u); /*0x67b5b0*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x44, 0xCu); /*0x67b5bd*/
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)this, (char *)this + 0x50, 4u); /*0x67b5ca*/
}
