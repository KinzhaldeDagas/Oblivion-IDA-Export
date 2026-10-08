void __userpurge sub_594F00(int a1@<ecx>, double a2@<st1>, double Health@<st0>, char a4)
{
  int v5; // edi
  int v6; // ebx
  double v7; // st5
  ExtraDataList ***v8; // edi
  _DWORD *v9; // ebx
  Tile *v10; // ebp
  CHAR *v11; // eax
  float v12; // [esp+0h] [ebp-120h]
  char *v13; // [esp+0h] [ebp-120h]
  float v14; // [esp+14h] [ebp-10Ch]
  char v15[260]; // [esp+18h] [ebp-108h] BYREF

  v14 = 0.0; /*0x594f18*/
  *(float *)(a1 + 0x98) = 0.0; /*0x594f1e*/
  *(_DWORD *)(a1 + 0x9C) = 0; /*0x594f25*/
  v5 = a1 + 0xB0; /*0x594f2f*/
  v6 = 4; /*0x594f35*/
  do /*0x594f7d*/
  {
    if ( *(_DWORD *)v5 ) /*0x594f40*/
    {
      ++*(_DWORD *)(a1 + 0x9C); /*0x594f45*/
      v14 = TESWeightForm_GetWeightForForm_Fast(*(_DWORD *)(*(_DWORD *)v5 + 8)) + v14; /*0x594f5e*/
    }
    else
    {
      Tile_SetFloat(*(Tile **)(v5 - 0x48), 0xFA1u, 1.0); /*0x594f72*/
    }
    v5 += 4; /*0x594f77*/
    --v6; /*0x594f7a*/
  }
  while ( v6 ); /*0x594f7d*/
  v7 = v14 / (double)*(int *)(a1 + 0x9C); /*0x594f84*/
  *(float *)(a1 + 0x98) = v7; /*0x594f8a*/
  v8 = *(ExtraDataList ****)(a1 + 4 * dword_B3B0B4[0x6F] + 0xB0); /*0x594f95*/
  v9 = *(_DWORD **)(a1 + 4 * dword_B3B0B4[0x6F] + 0x40); /*0x594f9e*/
  v10 = *(Tile **)(a1 + 4 * dword_B3B0B4[0x6F] + 0x68); /*0x594fa2*/
  if ( v8 ) /*0x594fa6*/
  {
    v11 = sub_4851B0(v8, (TESObjectREFR *)reference); /*0x594fb1*/
    _sprintf(v15, "%s\\%s", "Icons", v11); /*0x594fc6*/
    Tile_SetString(v10, (_DWORD *)0xFE6, v15); /*0x594fda*/
    Tile_SetFloat(v10, 0xFA1u, fConstant_2); /*0x594ff0*/
    Health = (double)(int)TESHealthForm_GetHealth((TESHealthForm *)v8); /*0x595000*/
    v12 = Health; /*0x595007*/
    Tile_SetFloat(v10, 0xFAEu, v12); /*0x59500f*/
    v13 = sub_488DF0((EntryData *)v8); /*0x59501b*/
    Tile_SetString(v9, (_DWORD *)0xFAE, v13); /*0x59501c*/
  }
  else
  {
    Tile_SetString(v9, (_DWORD *)0xFAE, (char *)stru_B388F8.value); /*0x59502c*/
  }
  if ( a4 ) /*0x59503a*/
  {
    if ( *(_BYTE *)(a1 + 0xA4) == 3 ) /*0x595043*/
      *(_BYTE *)(a1 + 0xA4) = 1; /*0x595045*/
    sub_58E870((int)v9, v7, a2, Health); /*0x59504e*/
    AlchemyMenu_CalcPotion_((_DWORD *)a1, v7, a2, Health); /*0x595055*/
    dword_B3B0B4[0x6F] = 0; /*0x59505a*/
  }
}
