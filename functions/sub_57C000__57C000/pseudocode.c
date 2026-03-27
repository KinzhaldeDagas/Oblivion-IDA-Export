void sub_57C000()
{
  TESSaveLoad *v4; // ecx
  size_t v5; // [esp-4h] [ebp-18h] BYREF
  int v6; // [esp+4h] [ebp-10h] BYREF
  int v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int Dst; // [esp+10h] [ebp-4h] BYREF

  LODWORD(v5) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v5);
  LODWORD(v5) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v8, v5);
  LODWORD(v5) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v7, v5);
  LODWORD(v5) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v6, v5);
  LODWORD(v5) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v5 + 4, v5);
  sub_57B990(Dst, v8, v7, v6, SHIDWORD(v5));
  v4 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Du )
  {
    LODWORD(v5) = 1;
    SaveLoad_LoadData((int)v4, &byte_B14500, v5);
  }
}
