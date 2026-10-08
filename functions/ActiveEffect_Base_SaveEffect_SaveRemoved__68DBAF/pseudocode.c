void *__userpurge ActiveEffect_Base_SaveEffect_::SaveRemoved@<eax>(
        int a1@<ebp>,
        _DWORD *edi0@<edi>,
        int a3,
        int Src,
        int a5,
        int a6,
        int a7,
        TESForm::ModReferenceList *bufferCursor,
        _BYTE *a9,
        int a10,
        int a11,
        char a12)
{
  TESSaveLoadGame_SerializationView *v12; // ecx

  SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(a1 + 0x12), 1u); /*0x68dbbb*/
  v12 = g_TESSaveLoadGame; /*0x68dbc0*/
  if ( g_TESSaveLoadGame->currentVersion < 0x2Au ) /*0x68dbca*/
    return ActiveEffect_Base_SaveEffect_::SkipDataList(v12, a1, a3, Src, a5, a6, a7, (int)bufferCursor, (int)a9, a10); /*0x68dbca*/
  HIBYTE(Src) = 0; /*0x68dbcd*/
  bufferCursor = (TESForm::ModReferenceList *)v12->bufferCursor; /*0x68dbdc*/
  SaveLoad_SaveData(v12, (char *)&Src + 3, 1u); /*0x68dbe0*/
  return (void *)ActiveEffect_Base_SaveEffect_::SaveDataList(
                   a1,
                   edi0,
                   a3,
                   Src,
                   a5,
                   a6,
                   a7,
                   (int)bufferCursor,
                   a9,
                   a10,
                   a11,
                   a12);
}
