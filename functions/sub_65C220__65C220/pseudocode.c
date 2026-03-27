char __fastcall sub_65C220(int a1, float Src)
{
  char v4; // cl
  size_t v5; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v5) = a1;
  if ( Src == 0.0 )
    return 0;
  v4 = *(_BYTE *)LODWORD(Src);
  LODWORD(v5) = 1;
  *((float *)&v5 + 1) = *(float *)(LODWORD(Src) + 4);
  LOBYTE(Src) = v4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &Src, v5);
  LODWORD(v5) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, (char *)&v5 + 4, v5);
  return 1;
}
