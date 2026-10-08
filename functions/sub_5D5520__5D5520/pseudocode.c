void __usercall sub_5D5520(int a1@<ecx>, int a2@<ebx>, double a3@<st1>, double a4@<st0>)
{
  double v5; // st5
  CHAR *v6; // eax
  char *v7; // eax
  char *v8; // eax
  char v9[260]; // [esp+8h] [ebp-108h] BYREF

  if ( *(_DWORD *)(a1 + 0x2C) ) /*0x5d5537*/
  {
    v5 = fConstant_2; /*0x5d5541*/
    Tile_SetFloat(*(Tile **)(a1 + 0x68), 0xFA1u, fConstant_2); /*0x5d5553*/
    v6 = sub_4851B0(*(ExtraDataList ****)(a1 + 0x2C), (TESObjectREFR *)reference); /*0x5d5561*/
    _sprintf(v9, "%s\\%s", "Icons", v6); /*0x5d5576*/
    v7 = sub_488DF0(*(EntryData **)(a1 + 0x2C)); /*0x5d5581*/
    Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFAE, v7); /*0x5d558f*/
    Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFAF, v9); /*0x5d55a1*/
    Tile_SetString(*(_DWORD **)(a1 + 0x68), (_DWORD *)0xFE6, v9); /*0x5d55b3*/
    sub_58FBA0(*(_DWORD *)(a1 + 0x5C), v5, a3, a4, 0); /*0x5d55bd*/
    sub_5D4BE0((char *)a1); /*0x5d55c4*/
    sub_5D47B0(a1, a2); /*0x5d55cb*/
  }
  if ( sub_57D2F0(*(void **)(a1 + 0x74)) ) /*0x5d55d3*/
  {
    sub_57DDE0(*(_DWORD *)(a1 + 0x74)); /*0x5d55df*/
    v8 = sub_580120(*(char **)(a1 + 0x74)); /*0x5d55e7*/
    Tile_SetString(*(_DWORD **)(a1 + 0x30), (_DWORD *)0xFDE, v8); /*0x5d55f5*/
  }
}
