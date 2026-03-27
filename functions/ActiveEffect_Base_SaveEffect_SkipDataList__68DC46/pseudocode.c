// positive sp value has been detected, the output may be wrong!
void *__userpurge ActiveEffect_Base_SaveEffect_::SkipDataList@<eax>(
        _BYTE *a1@<ecx>,
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
  char v10; // al
  size_t v12; // [esp-20h] [ebp-20h]

  v10 = a1[0x7C];
  if ( (unsigned __int8)v10 < 0x48u )
    return (void *)ActiveEffect_Base_SaveEffect_::LowbitUnk14(v10, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  LODWORD(v12) = 4;
  return SaveLoad_SaveData((int)a1, (void *)(a2 + 0x14), v12);
}
