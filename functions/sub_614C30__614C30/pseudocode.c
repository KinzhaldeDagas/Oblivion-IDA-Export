char __userpurge sub_614C30@<al>(double st7_0@<st0>, int a2@<esi>, int *a3)
{
  TESSaveLoad *v3; // ecx
  _WORD *v4; // ebp
  char result; // al
  int *v6; // edi
  int v7; // esi
  int *v8; // ecx
  void *v9; // ecx
  bool v10; // zf
  size_t v11; // [esp-8h] [ebp-18h]
  size_t v12; // [esp-4h] [ebp-14h]
  int Src; // [esp+8h] [ebp-8h] BYREF
  int FormID; // [esp+Ch] [ebp-4h] BYREF

  v3 = SaveLoad_CurrentSavegame;
  LODWORD(v12) = 2;
  Src = 0;
  v4 = (_WORD *)v3->unk000[5];
  result = (unsigned __int8)SaveLoad_SaveData((int)v3, &Src, v12);
  v6 = a3;
  if ( a3 )
  {
    HIDWORD(v11) = a2;
    while ( v6[1] || *v6 )
    {
      v7 = *v6;
      if ( *v6 )
      {
        LODWORD(v11) = 1;
        LOBYTE(a3) = *(_DWORD *)(v7 + 4) != 0;
        SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a3, v11);
        v8 = *(int **)(v7 + 4);
        if ( v8 )
          SaveGame(v8, st7_0);
        v9 = *(void **)v7;
        v10 = *(_DWORD *)v7 == 0;
        FormID = 0;
        if ( !v10 )
          FormID = MagicItem_GetFormID(v9);
        result = SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&FormID, 4u);
      }
      ++Src;
      v6 = (int *)v6[1];
      if ( !v6 )
      {
        *v4 = Src;
        return result;
      }
    }
    *v4 = Src;
  }
  else
  {
    result = Src;
    *v4 = Src;
  }
  return result;
}
