void __userpurge sub_59FF60(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        int a9,
        int a10)
{
  int v12; // eax
  char **v13; // eax
  _DWORD *v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  bool v21; // dl
  int v22; // edi
  char v23; // al
  char *RangeName; // eax
  int v25; // eax
  double v26; // st4
  int v27; // edi
  char v28; // al
  float a2; // [esp+0h] [ebp-10h]
  int v30; // [esp+8h] [ebp-8h]

  switch ( a9 )
  {
    case 0x1F:
      SkillsMenu_Create(st5_0, a4, *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x14)); /*0x59ff78*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x1F, a10); /*0x59ff8e*/
      return; /*0x59ff91*/
    case 0x20:
      SkillsMenu_Create(st5_0, a4, *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x14)); /*0x59ffa5*/
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a1 + 0x14))(a1, 0x20, a10); /*0x59ffbb*/
      return; /*0x59ffbe*/
    case 0x22:
      if ( Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x40), 0xFAE) == fConstant_2 )
      {
        v30 = *(_DWORD *)(a1 + 0x98) + 1 >= 5 ? 0 : *(_DWORD *)(a1 + 0x98) + 1;
        *(_DWORD *)(a1 + 0x98) = v30; /*0x59ffff*/
        v12 = sub_429A30(v30); /*0x5a0005*/
        EffectItem_SetMagnitude(*(_DWORD *)(a1 + 0x94), v12); /*0x5a0014*/
        v13 = *(char ***)(4 * *(_DWORD *)(a1 + 0x98) + 0xB03E1C); /*0x5a001f*/
        if ( v13 ) /*0x5a0028*/
          Tile_SetString(*(_DWORD **)(a1 + 0x40), (_DWORD *)0xFAF, *v13); /*0x5a0035*/
        else
          Tile_SetString(*(_DWORD **)(a1 + 0x40), (_DWORD *)0xFAF, 0); /*0x5a0049*/
      }
      return; /*0x5a003b*/
    case 0x17:
      if ( *(_BYTE *)(a1 + 0x71) ) /*0x5a0057*/
        sub_59FE30((_DWORD *)a1, *(unsigned int **)(a1 + 0x94)); /*0x5a0064*/
      else
        sub_59FEC0((int *)a1, *(_DWORD *)(a1 + 0x94)); /*0x5a007b*/
      goto LABEL_13; /*0x5a0064*/
    case 0x15:
      v14 = *(_DWORD **)(a1 + 0x94); /*0x5a0093*/
      if ( (*(_DWORD *)(v14[7] + 0x58) & 0x180000) != 0 ) /*0x5a00a5*/
      {
        v15 = *(_DWORD *)(a1 + 0x78); /*0x5a00a7*/
        if ( v15 ) /*0x5a00ac*/
        {
          v16 = *(_DWORD *)(v15 + 0x74); /*0x5a00ae*/
          if ( v16 ) /*0x5a00b3*/
          {
            v17 = v16 + 0x28; /*0x5a00b5*/
LABEL_24:
            while ( v17 ) /*0x5a00d2*/
            {
              v20 = *(_DWORD **)v17; /*0x5a00d4*/
              if ( !*(_DWORD *)v17 ) /*0x5a00d4*/
                break; /*0x5a00d4*/
              v21 = v14 != v20 && *v14 == *v20 && v14[5] == v20[5]; /*0x5a00ec*/
              v17 = *(_DWORD *)(v17 + 4); /*0x5a00f4*/
              if ( v21 ) /*0x5a00f7*/
              {
                sub_59FE30((_DWORD *)a1, *(unsigned int **)(a1 + 0x94)); /*0x5a0102*/
                ShowUIMessageBox( /*0x5a011a*/
                  (char *)stru_B389F8.value,
                  st5_0,
                  a3,
                  a4,
                  (char *)stru_B389F8.value,
                  0,
                  1,
                  (char *)MEMORY[0xB38CF0].value,
                  0);
                goto LABEL_13; /*0x5a00f9*/
              }
            }
            goto LABEL_13; /*0x5a00d8*/
          }
        }
        else
        {
          v18 = *(_DWORD *)(a1 + 0x7C); /*0x5a00ba*/
          if ( v18 ) /*0x5a00bf*/
          {
            v19 = *(_DWORD *)(v18 + 0x28); /*0x5a00c1*/
            if ( v19 ) /*0x5a00c6*/
            {
              v17 = v19 + 0x28; /*0x5a00c8*/
              goto LABEL_24; /*0x5a00cb*/
            }
          }
        }
        v17 = 0; /*0x5a00cd*/
        goto LABEL_24; /*0x5a00cd*/
      }
LABEL_13:
      sub_59FC60(st5_0, a3, a4, a5, a6, a7, a8); /*0x5a0069*/
      return; /*0x5a006f*/
    case 0x16:
      sub_59FE30((_DWORD *)a1, *(unsigned int **)(a1 + 0x94)); /*0x5a0138*/
      sub_59FC60(st5_0, a3, a4, a5, a6, a7, a8); /*0x5a013d*/
      return; /*0x5a0144*/
    case 0x21:
      v27 = 1; /*0x5a01f1*/
      do /*0x5a021e*/
      {
        v28 = EffectItem_SetRange(*(_DWORD *)(a1 + 0x94), (v27 + *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x10)) % 3); /*0x5a0214*/
        ++v27; /*0x5a0219*/
      }
      while ( !v28 ); /*0x5a021e*/
      break;
    case 0x27:
      v22 = 2; /*0x5a015c*/
      sub_57DE50(3); /*0x5a0161*/
      do /*0x5a018e*/
      {
        v23 = EffectItem_SetRange(*(_DWORD *)(a1 + 0x94), (v22 + *(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x10)) % 3); /*0x5a0184*/
        --v22; /*0x5a0189*/
      }
      while ( !v23 ); /*0x5a018e*/
      break;
    default:
      return; /*0x5a0154*/
  }
  RangeName = (char *)Magic_GetRangeName(*(_DWORD *)(*(_DWORD *)(a1 + 0x94) + 0x10)); /*0x5a019a*/
  Tile_SetString(*(_DWORD **)(a1 + 0x3C), (_DWORD *)0xFAE, RangeName); /*0x5a01ab*/
  sub_58E870(*(_DWORD *)(a1 + 0x3C), st5_0, a3, a4); /*0x5a01b3*/
  v25 = *(_DWORD *)(a1 + 0x94); /*0x5a01b8*/
  if ( (*(_DWORD *)(*(_DWORD *)(v25 + 0x1C) + 0x58) & 0x200) != 0 || !*(_DWORD *)(v25 + 0x10) ) /*0x5a01cc*/
  {
    Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFC1u, 1.0); /*0x5a0233*/
    v26 = 1.0; /*0x5a0238*/
  }
  else
  {
    Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFC1u, fConstant_2); /*0x5a01e4*/
    v26 = fConstant_2; /*0x5a01e9*/
  }
  a2 = v26; /*0x5a023e*/
  Tile_SetFloat(*(Tile **)(a1 + 0x50), 0xFA1u, a2); /*0x5a0246*/
}
