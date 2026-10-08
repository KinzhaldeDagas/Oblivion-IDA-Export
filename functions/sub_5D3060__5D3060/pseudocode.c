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

  v11 = *(_DWORD *)(a1 + 0x4C); /*0x5d3078*/
  v12 = 1; /*0x5d307e*/
  if ( v11 ) /*0x5d3083*/
  {
    while ( *(_DWORD *)v11 ) /*0x5d3093*/
    {
      if ( a10 == v12 ) /*0x5d309b*/
      {
        v13 = (Tile *)OblivionDynamicCast( /*0x5d30c3*/
                        *(void **)(a1 + 0x40),
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                        &TileImage `RTTI Type Descriptor',
                        0);
        if ( v13 ) /*0x5d30ca*/
        {
          p_a2 = &a2; /*0x5d30d1*/
          sub_591A80(v13, 0); /*0x5d30db*/
          __asm { fld     dword ptr ds:0A379B4h } /*0x5d30e0*/
          __asm { fstp    [esp+724h+a2]; value }
          Tile_SetFloat(v13, 0xFA1u, *(float *)&a2); /*0x5d30f1*/
        }
        v14 = TESSaveLoadGame_BuildSavePreview( /*0x5d313c*/
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
                v21,
                (unsigned int)v24,
                v20,
                v22,
                0,
                &v18,
                0);
        _sprintf(v25, "%s\n%s\n%s\n%s\n%s", Dst, v21, v24, v20, v22); /*0x5d3168*/
        Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, v25); /*0x5d3180*/
        __asm { fild    [esp+720h+var_714] } /*0x5d3185*/
        a2 = v15; /*0x5d3189*/
        v16 = *(Tile **)(a1 + 0x40); /*0x5d318a*/
        __asm { fstp    [esp+724h+a2]; value } /*0x5d318d*/
        Tile_SetFloat(v16, 0xFAEu, *(float *)&a2); /*0x5d3195*/
        if ( v13 ) /*0x5d319c*/
        {
          p_a2 = &a2; /*0x5d31a3*/
          a2 = v14; /*0x5d31a7*/
          if ( v14 ) /*0x5d31a9*/
            InterlockedIncrement((volatile LONG *)&v14->members); /*0x5d31af*/
          sub_591A80(v13, (int)a2); /*0x5d31b7*/
          if ( !v14 ) /*0x5d31be*/
          {
            __asm { fld1 } /*0x5d31c0*/
            __asm { fstp    [esp+724h+a2]; value }
            Tile_SetFloat(v13, 0xFA1u, *(float *)&a2); /*0x5d31cd*/
            Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, (char *)stru_B38750.value); /*0x5d31e0*/
            return; /*0x5d31e5*/
          }
        }
        else if ( !v14 ) /*0x5d31e9*/
        {
          return; /*0x5d31e9*/
        }
        if ( !InterlockedDecrement((volatile LONG *)&v14->members) ) /*0x5d31ef*/
          v14->vtbl->super.super.super.Destructor((NiRefObject *)v14, 1); /*0x5d3205*/
        return; /*0x5d3205*/
      }
      v11 = *(_DWORD *)(v11 + 4); /*0x5d309d*/
      ++v12; /*0x5d30a0*/
      if ( !v11 ) /*0x5d30a5*/
        return; /*0x5d30a5*/
    }
  }
}
