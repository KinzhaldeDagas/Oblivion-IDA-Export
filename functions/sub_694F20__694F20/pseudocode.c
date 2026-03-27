void __userpurge sub_694F20(int ecx0@<ecx>, int a2@<edi>, int a3, TESForm a1)
{
  size_t v5; // [esp-8h] [ebp-Ch]
  size_t v6; // [esp-8h] [ebp-Ch]
  size_t v7; // [esp-4h] [ebp-8h]
  size_t v8; // [esp-4h] [ebp-8h]
  size_t v9; // [esp-4h] [ebp-8h]

  (*(void (__thiscall **)(int))(*(_DWORD *)ecx0 + 0x148))(ecx0);
  sub_69F800(ecx0, a3, a1.vtbl);
  LODWORD(v7) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x7C), v7);
  LODWORD(v8) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x5C), v8);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x64u )
  {
    LODWORD(v9) = 4;
    TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x60), v9);
  }
  HIDWORD(v5) = a2;
  LODWORD(v5) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(ecx0 + 0x80), v5);
  LODWORD(v6) = 4;
  TESForm_LoadDataFromCurrentSaveGame((TESForm *)(ecx0 + 0x84), v6);
  if ( *(_DWORD *)(ecx0 + 0x80) == 2 )
  {
    LODWORD(v9) = 4;
    TESForm_LoadDataFromCurrentSaveGame(&a1, v9);
    *(_DWORD *)(ecx0 + 0x8C) = a1.vtbl;
  }
}
