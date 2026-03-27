char __thiscall sub_67D510(_DWORD *this)
{
  int v3; // eax
  int v4; // eax
  size_t v6; // [esp-4h] [ebp-10h]
  size_t v7; // [esp-4h] [ebp-10h]
  size_t v8; // [esp-4h] [ebp-10h]
  size_t v9; // [esp-4h] [ebp-10h]
  size_t v10; // [esp-4h] [ebp-10h]
  int v11; // [esp+4h] [ebp-8h] BYREF
  int v12; // [esp+8h] [ebp-4h] BYREF

  sub_567E00(this);
  LODWORD(v6) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0xF), v6);
  LODWORD(v7) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x10), v7);
  LODWORD(v8) = 4;
  TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x13), v8);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Cu )
  {
    LODWORD(v9) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x14), v9);
    LODWORD(v10) = 4;
    TESForm_SaveDataToCurrentSaveGame((TESForm *)(this + 0x15), v10);
  }
  v3 = *(this + 0x11);
  v11 = 0;
  if ( v3 )
    v11 = *(_DWORD *)(v3 + 0xC);
  TESForm_SaveFormIDToCurrentSaveGame((int)&v11, 4u);
  v4 = *(this + 0x12);
  v12 = 0;
  if ( v4 )
    v12 = *(_DWORD *)(v4 + 0xC);
  return TESForm_SaveFormIDToCurrentSaveGame((int)&v12, 4u);
}
