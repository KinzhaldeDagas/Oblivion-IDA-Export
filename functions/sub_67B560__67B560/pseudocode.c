void __thiscall sub_67B560(_DWORD *this)
{
  size_t v3; // [esp-4h] [ebp-8h]
  size_t v4; // [esp-4h] [ebp-8h]
  size_t v5; // [esp-4h] [ebp-8h]

  sub_567E00(this);
  LODWORD(v3) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x10), v3);
  LODWORD(v4) = 0xC;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x11), v4);
  LODWORD(v5) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x14), v5);
}
