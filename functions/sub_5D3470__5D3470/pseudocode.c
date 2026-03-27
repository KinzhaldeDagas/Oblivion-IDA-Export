void __userpurge sub_5D3470(
        int a1@<ecx>,
        char bp0@<bpl>,
        double st0_0@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        signed int a11,
        _DWORD *a12)
{
  bool v15; // zf
  double Float; // st7
  Tile *v17; // esi
  Tile *v18; // ecx
  double v19; // st7
  int v20; // eax
  float a2; // [esp+0h] [ebp-18h]
  float a2a; // [esp+0h] [ebp-18h]
  float a2b; // [esp+0h] [ebp-18h]
  float a2c; // [esp+0h] [ebp-18h]
  float a2d; // [esp+0h] [ebp-18h]
  float a2e; // [esp+0h] [ebp-18h]
  float a2f; // [esp+0h] [ebp-18h]
  int v29; // [esp+1Ch] [ebp+4h]

  if ( a12 )
  {
    if ( a11 < 0x65 )
    {
      v18 = *(Tile **)(a1 + 0x2C);
      if ( !v18 )
        return;
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 0x2C) == 0;
      *(_DWORD *)(a1 + 0x30) = 0;
      if ( v15 )
        return;
      sub_57DE50(4);
      Float = Tile_GetFloat(a12, 0xFE0);
      v29 = Double_To_SInt32(Float);
      sub_588D90(a12, Float);
      __asm { fstp    qword ptr [esp+14h+a3]; a3 }
      Tile_GetFloat(*(_DWORD **)(a1 + 0x2C), 0xFBD);
      __asm { fsubr   qword ptr [esp+14h+a3] }
      __asm
      {
        fstp    [esp+18h+arg_4]
        fld     [esp+18h+arg_4]
        fstp    [esp+18h+a2]; a3
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAB, a2);
      __asm { fild    [esp+14h+arg_0] }
      __asm { fstp    [esp+18h+arg_4] }
      Tile_GetFloat(a12, 0xFCB);
      __asm { fsub    [esp+14h+arg_4] }
      __asm
      {
        fstp    [esp+18h+arg_0]
        fld     [esp+18h+arg_0]
        fstp    [esp+18h+a2]; a3
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCB, a2a);
      Tile_GetFloat(a12, 0xFCA);
      __asm { fsub    [esp+14h+arg_4] }
      __asm
      {
        fstp    [esp+18h+arg_4]
        fld     [esp+18h+arg_4]
        fstp    [esp+18h+a2]; a3
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCA, a2b);
      sub_588C50(a12);
      __asm { fstp    [esp+18h+a2]; a3 }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAD, a2c);
      sub_588CF0(a12);
      __asm { fstp    [esp+18h+a2]; a3 }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAC, a2d);
      __asm { fld     dword ptr ds:0A379B4h }
      __asm { fstp    [esp+18h+a2]; a3 }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFA1, a2e);
      *(_DWORD *)(a1 + 0x30) = a12;
      if ( a11 != 0x65 )
      {
        v19 = Tile_GetFloat(a12, 0xFAE);
        v20 = Double_To_SInt32(v19);
        sub_5D3060(a1, st0_0, a4, a5, a6, a7, a8, a9, v19, v20);
        return;
      }
      Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, (char *)dword_B387C8);
      v17 = (Tile *)OblivionDynamicCast(
                      *(void **)(a1 + 0x40),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileImage `RTTI Type Descriptor',
                      0);
      if ( !v17 )
        return;
      sub_591A80(v17, 0);
      v18 = v17;
    }
    __asm
    {
      fld1
      fstp    [esp+18h+a2]; a3
    }
    Tile_SetFloat(v18, (_DWORD *)0xFA1, a2f);
  }
}
