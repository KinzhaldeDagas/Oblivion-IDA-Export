// positive sp value has been detected, the output may be wrong!
void *__userpurge ActiveEffect_Base_SaveEffect_::SkipDataList@<eax>(
        TESSaveLoadGame_SerializationView *a1@<ecx>,
        int a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10)
{
  char currentVersion; // al

  currentVersion = a1->currentVersion; /*0x68dc46*/
  if ( (unsigned __int8)currentVersion < 0x48u ) /*0x68dc4b*/
    return (void *)ActiveEffect_Base_SaveEffect_::LowbitUnk14(currentVersion, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10); /*0x68dc4b*/
  else
    return SaveLoad_SaveData(a1, (const void *)(a2 + 0x14), 4u); /*0x68dc53*/
}
