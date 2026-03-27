void *__usercall sub_57BE30@<eax>(double a1@<st0>)
{
  char v4; // al
  char v5; // al
  char v6; // al
  char v7; // al
  InterfaceManager *Singleton; // eax
  int v9; // eax
  void *result; // eax
  size_t v11; // [esp-4h] [ebp-10h]
  size_t v12; // [esp-4h] [ebp-10h]
  size_t v13; // [esp-4h] [ebp-10h]
  size_t v14; // [esp-4h] [ebp-10h]
  size_t v15; // [esp-4h] [ebp-10h]
  size_t v16; // [esp-4h] [ebp-10h]
  char Src; // [esp+4h] [ebp-8h] BYREF
  char v18; // [esp+5h] [ebp-7h] BYREF
  char v19; // [esp+6h] [ebp-6h] BYREF
  char v20; // [esp+7h] [ebp-5h] BYREF
  int v21; // [esp+8h] [ebp-4h] BYREF

  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
    v4 = BYTE2(InterfaceManager_GetSingleton(0, 1)->unk008[0]);
  else
    v4 = 0xFF;
  Src = v4;
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
    v5 = HIBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]);
  else
    v5 = 0xFF;
  v18 = v5;
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
    v6 = InterfaceManager_GetSingleton(0, 1)->unk008[1];
  else
    v6 = 0xFF;
  v19 = v6;
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
    v7 = BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]);
  else
    v7 = 0xFF;
  v20 = v7;
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor )
  {
    Singleton = InterfaceManager_GetSingleton(0, 1);
    Tile_GetFloat((_DWORD *)Singleton->menuRoot, 0x1771);
    v9 = Double_To_SInt32(a1);
  }
  else
  {
    v9 = 0xFFFFFFFF;
  }
  v21 = v9;
  if ( Src < 1 )
    Src = 1;
  if ( v18 < 1 )
    v18 = 1;
  if ( v19 < 1 )
    v19 = 1;
  if ( v20 < 1 )
    v20 = 1;
  LODWORD(v11) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v11);
  LODWORD(v12) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v18, v12);
  LODWORD(v13) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v19, v13);
  LODWORD(v14) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v20, v14);
  LODWORD(v15) = 4;
  result = SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v21, v15);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Du )
  {
    LODWORD(v16) = 1;
    return SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &byte_B14500, v16);
  }
  return result;
}
