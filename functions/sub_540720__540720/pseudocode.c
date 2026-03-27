void *__thiscall sub_540720(_DWORD *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  TESSaveLoad *v5; // ecx
  int v6; // eax
  void *result; // eax
  size_t v8; // [esp-4h] [ebp-1Ch]
  size_t v9; // [esp-4h] [ebp-1Ch]
  size_t v10; // [esp-4h] [ebp-1Ch]
  size_t v11; // [esp-4h] [ebp-1Ch]
  size_t v12; // [esp-4h] [ebp-1Ch]
  size_t v13; // [esp-4h] [ebp-1Ch]
  int v14; // [esp+8h] [ebp-10h] BYREF
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h] BYREF
  int v17; // [esp+14h] [ebp-4h] BYREF

  v2 = *(this + 4);
  v14 = 0;
  if ( v2 )
    v14 = *(_DWORD *)(v2 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v14, 4u);
  v3 = *(this + 5);
  v15 = 0;
  if ( v3 )
    v15 = *(_DWORD *)(v3 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v15, 4u);
  v4 = *(this + 6);
  v16 = 0;
  if ( v4 )
    v16 = *(_DWORD *)(v4 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v16, 4u);
  v5 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Du )
  {
    v6 = *(this + 7);
    v17 = 0;
    if ( v6 )
      v17 = *(_DWORD *)(v6 + 0xC);
    SaveLoad_SaveFormID(v5, (int)&v17, 4u);
    v5 = SaveLoad_CurrentSavegame;
  }
  LODWORD(v8) = 4;
  SaveLoad_SaveData((int)v5, this + 0x34, v8);
  LODWORD(v9) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x35, v9);
  LODWORD(v10) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x36, v10);
  LODWORD(v11) = 4;
  result = SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x37, v11);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x69u )
  {
    LODWORD(v12) = 4;
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x3F, v12);
    LODWORD(v13) = 4;
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, this + 0x3D, v13);
  }
  return result;
}
