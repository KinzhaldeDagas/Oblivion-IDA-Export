void __userpurge sub_5AE240(
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

  if ( (SaveLoad_CurrentSavegame->flags & 0x10000) == 0 )
  {
    v11 = *(_DWORD *)(a1 + 0x54);
    if ( a10 == (_DWORD *)0xFFFFFFFF )
    {
      __asm { fld1 }
      a2 = a10;
      v12 = *(Tile **)(a1 + 0x40);
      __asm { fstp    [esp+724h+a2]; a3 }
      Tile_SetFloat(v12, (_DWORD *)0xFA1, *(float *)&a2);
      Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, EmptyString);
    }
    else
    {
      v13 = 0;
      if ( v11 )
      {
        while ( *(_DWORD *)v11 )
        {
          if ( a10 == v13 )
          {
            v14 = (Tile *)OblivionDynamicCast(
                            *(void **)(a1 + 0x40),
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                            &TileImage `RTTI Type Descriptor',
                            0);
            if ( v14 )
            {
              p_a2 = &a2;
              sub_591A80(v14, 0);
              __asm { fld     dword ptr ds:0A379B4h }
              __asm { fstp    [esp+724h+a2]; a3 }
              Tile_SetFloat(v14, (_DWORD *)0xFA1, *(float *)&a2);
            }
            v15 = sub_4610F0(
                    SaveLoad_CurrentSavegame,
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
            _sprintf(v27, "%s\n%s\n%s\n%s\n%s", Dst, (const char *)&v23, v26, (const char *)&v22, (const char *)&v24);
            Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, v27);
            __asm { fild    [esp+720h+var_714] }
            a2 = v16;
            v17 = *(Tile **)(a1 + 0x40);
            __asm { fstp    [esp+724h+a2]; a3 }
            Tile_SetFloat(v17, (_DWORD *)0xFAE, *(float *)&a2);
            if ( v14 )
            {
              a2 = v18;
              p_a2 = &a2;
              sub_405070(&a2, (int)v15);
              sub_591A80(v14, (int)a2);
              if ( !v15 )
              {
                __asm { fld1 }
                __asm { fstp    [esp+724h+a2]; a3 }
                Tile_SetFloat(v14, (_DWORD *)0xFA1, *(float *)&a2);
                Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, (char *)dword_B38750);
                return;
              }
            }
            else if ( !v15 )
            {
              return;
            }
            sub_401050((volatile LONG *)v15);
            return;
          }
          v11 = *(_DWORD *)(v11 + 4);
          v13 = (_DWORD *)((char *)v13 + 1);
          if ( !v11 )
            return;
        }
      }
    }
  }
}
