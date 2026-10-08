double __usercall sub_57BE30@<st0>(double result@<st0>)
{
  char v1; // al
  char v2; // al
  char v3; // al
  char v4; // al
  InterfaceManager *Singleton; // eax
  int v6; // eax
  char Src; // [esp+4h] [ebp-8h] BYREF
  char source; // [esp+5h] [ebp-7h] BYREF
  char v9; // [esp+6h] [ebp-6h] BYREF
  char v10; // [esp+7h] [ebp-5h] BYREF
  int v11; // [esp+8h] [ebp-4h] BYREF

  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57be53*/
    v1 = BYTE2(InterfaceManager_GetSingleton(0, 1)->unk008[0]); /*0x57be61*/
  else
    v1 = 0xFF; /*0x57be69*/
  Src = v1; /*0x57be6e*/
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57be89*/
    v2 = HIBYTE(InterfaceManager_GetSingleton(0, 1)->unk008[0]); /*0x57be97*/
  else
    v2 = 0xFF; /*0x57be9f*/
  source = v2; /*0x57bea4*/
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57bebf*/
    v3 = InterfaceManager_GetSingleton(0, 1)->unk008[1]; /*0x57becd*/
  else
    v3 = 0xFF; /*0x57bed5*/
  v9 = v3; /*0x57beda*/
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57bef5*/
    v4 = BYTE1(InterfaceManager_GetSingleton(0, 1)->unk008[1]); /*0x57bf03*/
  else
    v4 = 0xFF; /*0x57bf0b*/
  v10 = v4; /*0x57bf10*/
  if ( InterfaceManager_GetSingleton(0, 1) && InterfaceManager_GetSingleton(0, 1)->cursor ) /*0x57bf2b*/
  {
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x57bf34*/
    Tile_GetFloat((_DWORD *)Singleton->menuRoot, 0x1771); /*0x57bf44*/
    v6 = Double_To_SInt32(result); /*0x57bf49*/
  }
  else
  {
    v6 = 0xFFFFFFFF; /*0x57bf50*/
  }
  v11 = v6; /*0x57bf57*/
  if ( Src < 1 ) /*0x57bf5b*/
    Src = 1; /*0x57bf5d*/
  if ( source < 1 ) /*0x57bf65*/
    source = 1; /*0x57bf67*/
  if ( v9 < 1 ) /*0x57bf6f*/
    v9 = 1; /*0x57bf71*/
  if ( v10 < 1 ) /*0x57bf79*/
    v10 = 1; /*0x57bf7b*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 1u); /*0x57bf8b*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &source, 1u); /*0x57bf9c*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v9, 1u); /*0x57bfad*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v10, 1u); /*0x57bfbe*/
  SaveLoad_SaveData(g_TESSaveLoadGame, &v11, 4u); /*0x57bfd0*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Du ) /*0x57bfdf*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &byte_B14500, 1u); /*0x57bfe7*/
  return result; /*0x57bfec*/
}
