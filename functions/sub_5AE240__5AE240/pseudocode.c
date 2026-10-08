// Preview path reused by CharacterSpecificSaves: LoadgameMenu+0x54 list, +0x40 TileImage, +0x44 info TileText. Vanilla omits playtime; plugin appends it from ESS header.
void __userpurge LoadgameMenu_UpdateSavePreview(
        int a1@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        _DWORD *a10)
{
  int v11; // esi
  Tile *v12; // ecx
  _DWORD *v13; // eax
  Tile *v14; // edi
  NiSourceTexture *v15; // esi
  _DWORD *v16; // ecx
  Tile *v17; // ecx
  _DWORD *v18; // ecx
  _DWORD *a2; // [esp+0h] [ebp-724h] BYREF
  int v20; // [esp+10h] [ebp-714h] BYREF
  _DWORD **p_a2; // [esp+14h] [ebp-710h]
  int v22; // [esp+18h] [ebp-70Ch] BYREF
  int v23; // [esp+144h] [ebp-5E0h] BYREF
  int v24; // [esp+270h] [ebp-4B4h] BYREF
  char Dst[4]; // [esp+39Ch] [ebp-388h] BYREF
  char v26[4]; // [esp+4C8h] [ebp-25Ch] BYREF
  char v27[4]; // [esp+5F4h] [ebp-130h] BYREF

  if ( (g_TESSaveLoadGame->flags & 0x10000) == 0 ) /*0x5ae262*/
  {
    v11 = *(_DWORD *)(a1 + 0x54); /*0x5ae272*/
    if ( a10 == (_DWORD *)0xFFFFFFFF ) /*0x5ae275*/
    {
      __asm { fld1 } /*0x5ae277*/
      a2 = a10; /*0x5ae279*/
      v12 = *(Tile **)(a1 + 0x40); /*0x5ae27a*/
      __asm { fstp    [esp+724h+a2]; value } /*0x5ae27d*/
      Tile_SetFloat(v12, (_DWORD *)0xFA1, *(float *)&a2); /*0x5ae285*/
      Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, EmptyString); /*0x5ae297*/
    }
    else
    {
      v13 = 0; /*0x5ae2a1*/
      if ( v11 ) /*0x5ae2a5*/
      {
        while ( *(_DWORD *)v11 ) /*0x5ae2b3*/
        {
          if ( a10 == v13 ) /*0x5ae2bb*/
          {
            v14 = (Tile *)OblivionDynamicCast( /*0x5ae2e3*/
                            *(void **)(a1 + 0x40),
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileImage `RTTI Type Descriptor',
                            0);
            if ( v14 ) /*0x5ae2ea*/
            {
              p_a2 = &a2; /*0x5ae2f1*/
              sub_591A80(v14, 0); /*0x5ae2fb*/
              __asm { fld     dword ptr ds:0A379B4h } /*0x5ae300*/
              __asm { fstp    [esp+724h+a2]; value }
              Tile_SetFloat(v14, (_DWORD *)0xFA1, *(float *)&a2); /*0x5ae311*/
            }
            v15 = TESSaveLoadGame_BuildSavePreview( /*0x5ae354*/
                    g_TESSaveLoadGame,
                    st0_0,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    a8,
                    a9,
                    *(char **)v11,
                    0,
                    Dst,
                    (char *)&v23,
                    (unsigned int)v26,
                    (char *)&v22,
                    (char *)&v24,
                    0,
                    &v20,
                    0);
            _sprintf(v27, "%s\n%s\n%s\n%s\n%s", Dst, (const char *)&v23, v26, (const char *)&v22, (const char *)&v24); /*0x5ae388*/
            Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, v27); /*0x5ae3a0*/
            __asm { fild    [esp+720h+var_714] } /*0x5ae3a5*/
            a2 = v16; /*0x5ae3a9*/
            v17 = *(Tile **)(a1 + 0x40); /*0x5ae3aa*/
            __asm { fstp    [esp+724h+a2]; value } /*0x5ae3ad*/
            Tile_SetFloat(v17, (_DWORD *)0xFAE, *(float *)&a2); /*0x5ae3b5*/
            if ( v14 ) /*0x5ae3bc*/
            {
              a2 = v18; /*0x5ae3be*/
              p_a2 = &a2; /*0x5ae3c1*/
              sub_405070(&a2, (int)v15); /*0x5ae3c6*/
              sub_591A80(v14, (int)a2); /*0x5ae3cd*/
              if ( !v15 ) /*0x5ae3d4*/
              {
                __asm { fld1 } /*0x5ae3d6*/
                __asm { fstp    [esp+724h+a2]; value }
                Tile_SetFloat(v14, (_DWORD *)0xFA1, *(float *)&a2); /*0x5ae3e3*/
                Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, (char *)stru_B38750); /*0x5ae3f6*/
                return; /*0x5ae3fb*/
              }
            }
            else if ( !v15 ) /*0x5ae3ff*/
            {
              return; /*0x5ae3ff*/
            }
            sub_401050((volatile LONG *)v15); /*0x5ae403*/
            return; /*0x5ae403*/
          }
          v11 = *(_DWORD *)(v11 + 4); /*0x5ae2bd*/
          v13 = (_DWORD *)((char *)v13 + 1); /*0x5ae2c0*/
          if ( !v11 ) /*0x5ae2c5*/
            return; /*0x5ae2c5*/
        }
      }
    }
  }
}
