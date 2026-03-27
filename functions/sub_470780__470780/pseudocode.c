int __cdecl sub_470780(int a1)
{
  int v1; // ecx
  int result; // eax
  size_t v3; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v3) = v1;
  LODWORD(v3) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v3 + 4, v3);
  result = HIDWORD(v3);
  if ( WORD2(v3) )
    return sub_458E50(SaveLoad_CurrentSavegame, a1, WORD2(v3));
  return result;
}
