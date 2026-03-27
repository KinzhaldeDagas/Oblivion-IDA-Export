void __usercall sub_5D5520(int a1@<ecx>, int a2@<ebx>, double a3@<st1>, double a4@<st0>)
{
  double v7; // st5
  CHAR *v8; // eax
  char *v9; // eax
  char *v10; // eax
  char v11[260]; // [esp+8h] [ebp-108h] BYREF

  if ( *(_DWORD *)(a1 + 0x2C) )
  {
    v7 = fConstant_2;
    Tile_SetFloat(*(Tile **)(a1 + 0x68), (_DWORD *)0xFA1, fConstant_2);
    v8 = sub_4851B0(*(ExtraDataList ****)(a1 + 0x2C), (TESObjectREFR *)TESDataHandler_g_PlayerRef);
    _sprintf(v11, "%s\\%s", "Icons", v8);
    v9 = sub_488DF0(*(EntryData **)(a1 + 0x2C));
    Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFAE, v9);
    Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFAF, v11);
    Tile_SetString(*(_DWORD **)(a1 + 0x68), (_DWORD *)0xFE6, v11);
    sub_58FBA0(*(_DWORD *)(a1 + 0x5C), v7, a3, a4, 0);
    sub_5D4BE0((char *)a1, v7, a3, a4);
    sub_5D47B0(a1, a2);
  }
  if ( sub_57D2F0(*(void **)(a1 + 0x74)) )
  {
    sub_57DDE0(*(_DWORD *)(a1 + 0x74));
    v10 = sub_580120(*(char **)(a1 + 0x74));
    Tile_SetString(*(_DWORD **)(a1 + 0x30), (_DWORD *)0xFDE, v10);
  }
}
