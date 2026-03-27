void __userpurge sub_59FF60(
        int a1@<ecx>,
        int *ebp0@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        int a7)
{
  int v8; // eax
  char **v9; // eax
  _DWORD *v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // eax
  bool v17; // dl
  int v18; // edi
  char v19; // al
  char *RangeName; // eax
  int v21; // eax
  double v22; // st4
  int v23; // edi
  char v24; // al
  float a2; // [esp+0h] [ebp-10h]
  int v26; // [esp+8h] [ebp-8h]

  switch ( a6 )
  {
    case 0x1F:
      sub_5D6390(a3, a4, *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x14));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x1F, a7);
      return;
    case 0x20:
      sub_5D6390(a3, a4, *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x14));
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x20, a7);
      return;
    case 0x22:
      if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x40), 0xFAE) == fConstant_2 )
      {
        v26 = *(_DWORD *)(a1 + 0x98) + 1 >= 5 ? 0 : *(_DWORD *)(a1 + 0x98) + 1;
        *(_DWORD *)(a1 + 0x98) = v26;
        v8 = sub_429A30(v26);
        EffectItem_SetMagnitude(*(_DWORD *)(a1 + 0x94), v8);
        v9 = *(char ***)(4 * *(_DWORD *)(a1 + 0x98) + 0xB03E1C);
        if ( v9 )
          Tile_SetString(*(_DWORD **)(a1 + 0x40), (_DWORD *)0xFAF, *v9);
        else
          Tile_SetString(*(_DWORD **)(a1 + 0x40), (_DWORD *)0xFAF, 0);
      }
      return;
    case 0x17:
      if ( *(_BYTE *)(a1 + 0x71) )
        sub_59FE30((_DWORD *)a1, *(unsigned int **)(a1 + 0x94));
      else
        sub_59FEC0((int *)a1, *(_DWORD *)(a1 + 0x94));
      goto LABEL_13;
    case 0x15:
      v10 = *(_DWORD **)(a1 + 0x94);
      if ( (*(_DWORD *)(v10[7] + 0x58) & 0x180000) != 0 )
      {
        v11 = *(_DWORD *)(a1 + 0x78);
        if ( v11 )
        {
          v12 = *(_DWORD *)(v11 + 0x74);
          if ( v12 )
          {
            v13 = v12 + 0x28;
LABEL_24:
            while ( v13 )
            {
              v16 = *(_DWORD **)v13;
              if ( !*(_DWORD *)v13 )
                break;
              v17 = v10 != v16 && *v10 == *v16 && v10[5] == v16[5];
              v13 = *(_DWORD *)(v13 + 4);
              if ( v17 )
              {
                sub_59FE30((_DWORD *)a1, *(unsigned int **)(a1 + 0x94));
                ShowUIMessageBox(
                  (char *)dword_B389F8,
                  (char)ebp0,
                  a3,
                  a4,
                  a5,
                  (const char *)dword_B389F8,
                  0,
                  1,
                  (const char *)sOk,
                  0);
                goto LABEL_13;
              }
            }
            goto LABEL_13;
          }
        }
        else
        {
          v14 = *(_DWORD *)(a1 + 0x7C);
          if ( v14 )
          {
            v15 = *(_DWORD *)(v14 + 0x28);
            if ( v15 )
            {
              v13 = v15 + 0x28;
              goto LABEL_24;
            }
          }
        }
        v13 = 0;
        goto LABEL_24;
      }
LABEL_13:
      sub_59FC60(ebp0, a3, a4, a5);
      return;
    case 0x16:
      sub_59FE30((_DWORD *)a1, *(unsigned int **)(a1 + 0x94));
      sub_59FC60(ebp0, a3, a4, a5);
      return;
    case 0x21:
      v23 = 1;
      do
      {
        v24 = EffectItem_SetRange(*(_DWORD *)(a1 + 0x94), (v23 + *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x10)) % 3);
        ++v23;
      }
      while ( !v24 );
      break;
    case 0x27:
      v18 = 2;
      sub_57DE50(3);
      do
      {
        v19 = EffectItem_SetRange(*(_DWORD *)(a1 + 0x94), (v18 + *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x10)) % 3);
        --v18;
      }
      while ( !v19 );
      break;
    default:
      return;
  }
  RangeName = (char *)Magic_GetRangeName(*(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x10));
  Tile_SetString(*(_DWORD **)(a1 + 0x3C), (_DWORD *)0xFAE, RangeName);
  sub_58E870(*(_DWORD *)(a1 + 0x3C), a3, a4, a5);
  v21 = *(_DWORD *)(a1 + 0x94);
  if ( (*(_DWORD *)(*(_DWORD *)(v21 + 0x1C) + 0x58) & 0x200) != 0 || !*(_DWORD *)(v21 + 0x10) )
  {
    Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFC1, 1.0);
    v22 = 1.0;
  }
  else
  {
    Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFC1, fConstant_2);
    v22 = fConstant_2;
  }
  a2 = v22;
  Tile_SetFloat(*(Tile **)(a1 + 0x50), (_DWORD *)0xFA1, a2);
}
