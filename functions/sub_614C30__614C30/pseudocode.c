void __userpurge sub_614C30(double st7_0@<st0>, int *source)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebp
  int *v5; // edi
  int v6; // esi
  int *v7; // ecx
  void *v8; // ecx
  bool v9; // zf
  int Src; // [esp+8h] [ebp-8h] BYREF
  unsigned int FormID; // [esp+Ch] [ebp-4h] BYREF

  v3 = g_TESSaveLoadGame; /*0x614c33*/
  Src = 0; /*0x614c41*/
  bufferCursor = v3->bufferCursor; /*0x614c49*/
  SaveLoad_SaveData(v3, &Src, 2u); /*0x614c4d*/
  v5 = source; /*0x614c52*/
  if ( source ) /*0x614c58*/
  {
    while ( v5[1] || *v5 ) /*0x614c69*/
    {
      v6 = *v5; /*0x614c6b*/
      if ( *v5 ) /*0x614c6b*/
      {
        LOBYTE(source) = *(_DWORD *)(v6 + 4) != 0; /*0x614c7e*/
        SaveLoad_SaveData(g_TESSaveLoadGame, &source, 1u); /*0x614c89*/
        v7 = *(int **)(v6 + 4); /*0x614c8e*/
        if ( v7 ) /*0x614c93*/
          SaveGame(v7, st7_0); /*0x614c95*/
        v8 = *(void **)v6; /*0x614c9a*/
        v9 = *(_DWORD *)v6 == 0; /*0x614c9c*/
        FormID = 0; /*0x614c9e*/
        if ( !v9 ) /*0x614ca6*/
          FormID = MagicItem_GetFormID(v8); /*0x614cad*/
        SaveLoad_SaveFormID(g_TESSaveLoadGame, &FormID, 4u); /*0x614cbe*/
      }
      ++Src; /*0x614cc3*/
      v5 = (int *)v5[1]; /*0x614cc8*/
      if ( !v5 ) /*0x614ccd*/
      {
        *(_WORD *)bufferCursor = Src; /*0x614cd6*/
        return; /*0x614cde*/
      }
    }
    *(_WORD *)bufferCursor = Src; /*0x614ce8*/
  }
  else
  {
    *(_WORD *)bufferCursor = Src; /*0x614cf9*/
  }
}
