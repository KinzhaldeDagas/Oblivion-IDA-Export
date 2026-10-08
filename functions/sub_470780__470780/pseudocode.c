int __cdecl sub_470780(int a1)
{
  int v1; // ecx
  int result; // eax
  size_t v3; // [esp-4h] [ebp-8h] BYREF

  HIDWORD(v3) = v1; /*0x470780*/
  LODWORD(v3) = 2; /*0x470787*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, (char *)&v3 + 4, v3); /*0x47078e*/
  result = HIDWORD(v3); /*0x470793*/
  if ( WORD2(v3) ) /*0x470799*/
    return SaveLoad_QueueAnimationBlob(g_TESSaveLoadGame, a1, WORD2(v3)); /*0x4707a7*/
  return result; /*0x4707ad*/
}
