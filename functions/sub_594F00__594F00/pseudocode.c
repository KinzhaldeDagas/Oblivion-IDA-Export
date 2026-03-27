void __userpurge sub_594F00(int a1@<ecx>, double a2@<st1>, double Health@<st0>, char a4)
{
  int v6; // edi
  int v7; // ebx
  double v8; // st5
  ExtraDataList ***v9; // edi
  _DWORD *v10; // ebx
  Tile *v11; // ebp
  CHAR *v12; // eax
  float v13; // [esp+0h] [ebp-120h]
  char *v14; // [esp+0h] [ebp-120h]
  float v15; // [esp+14h] [ebp-10Ch]
  char v16[260]; // [esp+18h] [ebp-108h] BYREF

  v15 = 0.0;
  *(float *)(a1 + 0x98) = 0.0;
  *(_DWORD *)(a1 + 0x9C) = 0;
  v6 = a1 + 0xB0;
  v7 = 4;
  do
  {
    if ( *(_DWORD *)v6 )
    {
      ++*(_DWORD *)(a1 + 0x9C);
      v15 = TESWeightForm_GetWeightForForm_Fast(*(_DWORD *)(*(_DWORD *)v6 + 8)) + v15;
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v6 - 0x48), (_DWORD *)0xFA1, 1.0);
    }
    v6 += 4;
    --v7;
  }
  while ( v7 );
  v8 = v15 / (double)*(int *)(a1 + 0x9C);
  *(float *)(a1 + 0x98) = v8;
  v9 = *(ExtraDataList ****)(a1 + 4 * dword_B3B270 + 0xB0);
  v10 = *(_DWORD **)(a1 + 4 * dword_B3B270 + 0x40);
  v11 = *(Tile **)(a1 + 4 * dword_B3B270 + 0x68);
  if ( v9 )
  {
    v12 = sub_4851B0(v9, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
    _sprintf(v16, "%s\\%s", "Icons", v12);
    Tile_SetString(v11, (_DWORD *)0xFE6, v16);
    Tile_SetFloat(v11, (_DWORD *)0xFA1, fConstant_2);
    Health = (double)(int)TESHealthForm_GetHealth((Sky *)v9);
    v13 = Health;
    Tile_SetFloat(v11, (_DWORD *)0xFAE, v13);
    v14 = sub_488DF0((EntryData *)v9);
    Tile_SetString(v10, (_DWORD *)0xFAE, v14);
  }
  else
  {
    Tile_SetString(v10, (_DWORD *)0xFAE, (char *)dword_B388F8);
  }
  if ( a4 )
  {
    if ( *(_BYTE *)(a1 + 0xA4) == 3 )
      *(_BYTE *)(a1 + 0xA4) = 1;
    sub_58E870((int)v10, v8, a2, Health);
    AlchemyMenu_CalcPotion_((_DWORD *)a1, v8, a2, Health);
    dword_B3B270 = 0;
  }
}
