void __userpurge sub_5D3060(
        int a1@<ecx>,
        double st0_0@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10)
{
  int v11; // esi
  int v12; // eax
  Tile *v13; // edi
  NiSourceTexture *v14; // esi
  _DWORD *v15; // ecx
  Tile *v16; // ecx
  _DWORD *a2; // [esp+0h] [ebp-724h] BYREF
  int v18; // [esp+10h] [ebp-714h] BYREF
  _DWORD **p_a2; // [esp+14h] [ebp-710h]
  char v20[300]; // [esp+18h] [ebp-70Ch] BYREF
  char v21[300]; // [esp+144h] [ebp-5E0h] BYREF
  char v22[300]; // [esp+270h] [ebp-4B4h] BYREF
  char Dst[300]; // [esp+39Ch] [ebp-388h] BYREF
  char v24[300]; // [esp+4C8h] [ebp-25Ch] BYREF
  char v25[300]; // [esp+5F4h] [ebp-130h] BYREF

  v11 = *(_DWORD *)(a1 + 0x4C);
  v12 = 1;
  if ( v11 )
  {
    while ( *(_DWORD *)v11 )
    {
      if ( a10 == v12 )
      {
        v13 = (Tile *)OblivionDynamicCast(
                        *(void **)(a1 + 0x40),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &TileImage `RTTI Type Descriptor',
                        0);
        if ( v13 )
        {
          p_a2 = &a2;
          sub_591A80(v13, 0);
          __asm { fld     dword ptr ds:0A379B4h }
          __asm { fstp    [esp+724h+a2]; a3 }
          Tile_SetFloat(v13, (_DWORD *)0xFA1, *(float *)&a2);
        }
        v14 = sub_4610F0(
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
                v21,
                (unsigned int)v24,
                v20,
                v22,
                0,
                &v18,
                0);
        _sprintf(v25, "%s\n%s\n%s\n%s\n%s", Dst, v21, v24, v20, v22);
        Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, v25);
        __asm { fild    [esp+720h+var_714] }
        a2 = v15;
        v16 = *(Tile **)(a1 + 0x40);
        __asm { fstp    [esp+724h+a2]; a3 }
        Tile_SetFloat(v16, (_DWORD *)0xFAE, *(float *)&a2);
        if ( v13 )
        {
          p_a2 = &a2;
          a2 = v14;
          if ( v14 )
            InterlockedIncrement((volatile LONG *)&v14->members);
          sub_591A80(v13, (int)a2);
          if ( !v14 )
          {
            __asm { fld1 }
            __asm { fstp    [esp+724h+a2]; a3 }
            Tile_SetFloat(v13, (_DWORD *)0xFA1, *(float *)&a2);
            Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, (char *)dword_B38750);
            return;
          }
        }
        else if ( !v14 )
        {
          return;
        }
        if ( !InterlockedDecrement((volatile LONG *)&v14->members) )
          v14->vtbl->super.super.super.Destructor((NiRefObject *)v14, 1);
        return;
      }
      v11 = *(_DWORD *)(v11 + 4);
      ++v12;
      if ( !v11 )
        return;
    }
  }
}
