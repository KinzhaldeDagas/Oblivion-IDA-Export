void __thiscall sub_67B560(TESPackage *this)
{
  TESPackage_SaveGame(this); /*0x67b563*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x40, 4u); /*0x67b570*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x44, 0xCu); /*0x67b57d*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)this, (char *)this + 0x50, 4u); /*0x67b58a*/
}
