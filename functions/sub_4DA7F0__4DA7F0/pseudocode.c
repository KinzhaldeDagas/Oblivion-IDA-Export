__int16 __usercall sub_4DA7F0@<ax>(int a1@<ecx>, int a2@<edi>, int a3@<esi>, int a4, float a5)
{
  TESSaveLoad *v5; // ecx
  unsigned int v6; // edi
  _WORD *v7; // ebp
  unsigned int v8; // eax
  int v9; // ebx
  int v10; // esi
  const char *v11; // eax
  char v12; // dl
  unsigned int v13; // eax
  TESSaveLoad *v14; // ecx
  size_t v16; // [esp+0h] [ebp-18h]
  size_t v17; // [esp+0h] [ebp-18h]
  size_t v18; // [esp+4h] [ebp-14h]
  int Src; // [esp+14h] [ebp-4h] BYREF

  Src = a1;
  if ( flt_A30634 == a5 )
    a5 = flt_B33A30;
  v5 = SaveLoad_CurrentSavegame;
  HIDWORD(v18) = a2;
  LODWORD(v18) = 2;
  v6 = 0;
  Src = 0;
  v7 = (_WORD *)v5->unk000[5];
  LOWORD(v8) = (unsigned __int16)SaveLoad_SaveData((int)v5, &Src, v18);
  v9 = a4;
  if ( !a4 )
  {
    LOWORD(v8) = Src;
    *v7 = Src;
    return v8;
  }
  if ( (*(_BYTE *)(a4 + 8) & 8) != 0 )
  {
    if ( !*(_WORD *)(a4 + 0x46) )
    {
      *v7 = Src;
      return v8;
    }
    HIDWORD(v16) = a3;
    do
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v9 + 0x40) + 4 * v6);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 0x44) )
        {
          v11 = *(const char **)(v10 + 8);
          v12 = (_BYTE)v11 + 1;
          v13 = (unsigned int)&v11[strlen(v11) + 1];
          v14 = SaveLoad_CurrentSavegame;
          LOBYTE(a4) = v13 - v12;
          LODWORD(v16) = 1;
          SaveLoad_SaveData((int)v14, &a4, v16);
          LODWORD(v17) = (unsigned __int8)a4;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, *(void **)(v10 + 8), v17);
          sub_49F570((float *)v10, a5);
          ++Src;
        }
      }
      v8 = *(unsigned __int16 *)(v9 + 0x46);
      ++v6;
    }
    while ( v6 < v8 );
  }
  *v7 = Src;
  return v8;
}
