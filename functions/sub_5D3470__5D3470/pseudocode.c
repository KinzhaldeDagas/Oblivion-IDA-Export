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

  if ( a12 ) /*0x5d347e*/
  {
    if ( a11 < 0x65 ) /*0x5d348b*/
    {
      v18 = *(Tile **)(a1 + 0x2C); /*0x5d360d*/
      if ( !v18 ) /*0x5d3612*/
        return; /*0x5d3612*/
    }
    else
    {
      v15 = *(_DWORD *)(a1 + 0x2C) == 0; /*0x5d3491*/
      *(_DWORD *)(a1 + 0x30) = 0; /*0x5d3495*/
      if ( v15 ) /*0x5d349c*/
        return; /*0x5d349c*/
      sub_57DE50(4); /*0x5d34a4*/
      Float = Tile_GetFloat(a12, 0xFE0); /*0x5d34b3*/
      v29 = Double_To_SInt32(Float); /*0x5d34bf*/
      sub_588D90(a12, Float); /*0x5d34c3*/
      __asm { fstp    qword ptr [esp+14h+a3]; a3 } /*0x5d34c8*/
      Tile_GetFloat(*(_DWORD **)(a1 + 0x2C), 0xFBD); /*0x5d34d4*/
      __asm { fsubr   qword ptr [esp+14h+a3] } /*0x5d34d9*/
      __asm
      {
        fstp    [esp+18h+arg_4]
        fld     [esp+18h+arg_4]
        fstp    [esp+18h+a2]; value
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAB, a2); /*0x5d34f1*/
      __asm { fild    [esp+14h+arg_0] } /*0x5d34f6*/
      __asm { fstp    [esp+18h+arg_4] }
      Tile_GetFloat(a12, 0xFCB); /*0x5d3505*/
      __asm { fsub    [esp+14h+arg_4] } /*0x5d350a*/
      __asm
      {
        fstp    [esp+18h+arg_0]
        fld     [esp+18h+arg_0]
        fstp    [esp+18h+a2]; value
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCB, a2a); /*0x5d3522*/
      Tile_GetFloat(a12, 0xFCA); /*0x5d352e*/
      __asm { fsub    [esp+14h+arg_4] } /*0x5d3533*/
      __asm
      {
        fstp    [esp+18h+arg_4]
        fld     [esp+18h+arg_4]
        fstp    [esp+18h+a2]; value
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFCA, a2b); /*0x5d354b*/
      sub_588C50(a12); /*0x5d3552*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5d355b*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAD, a2c); /*0x5d3563*/
      sub_588CF0(a12); /*0x5d356a*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5d3573*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFAC, a2d); /*0x5d357b*/
      __asm { fld     dword ptr ds:0A379B4h } /*0x5d3580*/
      __asm { fstp    [esp+18h+a2]; value }
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFA1, a2e); /*0x5d3592*/
      *(_DWORD *)(a1 + 0x30) = a12; /*0x5d359a*/
      if ( a11 != 0x65 ) /*0x5d359d*/
      {
        v19 = Tile_GetFloat(a12, 0xFAE); /*0x5d35f2*/
        v20 = Double_To_SInt32(v19); /*0x5d35f7*/
        sub_5D3060(a1, st0_0, a4, a5, a6, a7, a8, a9, v19, v20); /*0x5d35ff*/
        return; /*0x5d360a*/
      }
      Tile_SetString(*(_DWORD **)(a1 + 0x44), (_DWORD *)0xFDE, (char *)stru_B387C8); /*0x5d35ad*/
      v17 = (Tile *)OblivionDynamicCast( /*0x5d35c9*/
                      *(void **)(a1 + 0x40),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileImage `RTTI Type Descriptor',
                      0);
      if ( !v17 ) /*0x5d35d0*/
        return; /*0x5d35d0*/
      sub_591A80(v17, 0); /*0x5d35e1*/
      v18 = v17; /*0x5d35e7*/
    }
    __asm /*0x5d3615*/
    {
      fld1
      fstp    [esp+18h+a2]; value
    }
    Tile_SetFloat(v18, (_DWORD *)0xFA1, a2f); /*0x5d361f*/
  }
}
