void __thiscall sub_677060(char *this)
{
  char *v3; // edi
  TESSaveLoad *v4; // ecx
  _WORD *v5; // ebx
  int i; // esi
  bool v7; // zf
  size_t v8; // [esp-4h] [ebp-18h]
  size_t v9; // [esp-4h] [ebp-18h]
  int Src; // [esp+Ch] [ebp-8h] BYREF
  int v11; // [esp+10h] [ebp-4h]

  LODWORD(v8) = 4;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &flt_B3BCF0, v8);
  v3 = this + 0x28;
  v11 = 6;
  do
  {
    v4 = SaveLoad_CurrentSavegame;
    LODWORD(v9) = 2;
    Src = 0;
    v5 = (_WORD *)v4->unk000[5];
    SaveLoad_SaveData((int)v4, &Src, v9);
    for ( i = *(_DWORD *)v3; i; i = *(_DWORD *)(i + 4) )
    {
      if ( !*(_DWORD *)(i + 4) && !*(_DWORD *)i )
        break;
      sub_6062B0(*(_DWORD **)i);
      ++Src;
    }
    v3 += 4;
    v7 = v11-- == 1;
    *v5 = Src;
  }
  while ( !v7 );
}
