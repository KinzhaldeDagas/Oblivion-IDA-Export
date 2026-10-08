void __userpurge sub_5B6C90(
        int a1@<ecx>,
        double st3_0@<st4>,
        double a3@<st3>,
        double a4@<st0>,
        double a5@<st2>,
        double a6@<st1>,
        int a7,
        Tile *a8)
{
  Tile *v9; // edi
  char *v10; // eax
  double v11; // st7
  char *v12; // eax
  double Float; // st7
  double v15; // st7
  double v16; // st7
  int v17; // ebx
  double v18; // st7
  int v19; // eax
  int v20; // ebp
  double v21; // st7
  int v22; // eax
  float v23; // [esp+0h] [ebp-20h]
  float v24; // [esp+0h] [ebp-20h]
  float v25; // [esp+0h] [ebp-20h]
  float v26; // [esp+0h] [ebp-20h]
  float v27; // [esp+0h] [ebp-20h]
  float v28; // [esp+0h] [ebp-20h]
  float a2; // [esp+8h] [ebp-18h]
  float a2a; // [esp+8h] [ebp-18h]
  float a2b; // [esp+8h] [ebp-18h]
  float a2c; // [esp+8h] [ebp-18h]
  float a2d; // [esp+8h] [ebp-18h]
  float a2e; // [esp+8h] [ebp-18h]
  float a2f; // [esp+8h] [ebp-18h]
  float a2g; // [esp+8h] [ebp-18h]
  float a2h; // [esp+8h] [ebp-18h]
  float a2i; // [esp+8h] [ebp-18h]
  float a2j; // [esp+8h] [ebp-18h]
  int v41; // [esp+18h] [ebp-8h]
  _DWORD *v42; // [esp+18h] [ebp-8h]
  Tile *v46; // [esp+28h] [ebp+8h]
  Tile *v47; // [esp+28h] [ebp+8h]

  switch ( a7 ) /*0x5b6ca7*/
  {
    case '3': /*0x5b6ca7*/
    case '4': /*0x5b6ca7*/
      Float = Tile_GetFloat(a8, 0xFE0); /*0x5b6e2e*/
      v41 = Double_To_SInt32(Float); /*0x5b6e38*/
      v46 = (Tile *)(2 * v41); /*0x5b6e3e*/
      __asm { fild    [esp+1Ch+arg_4] } /*0x5b6e42*/
      __asm { fstp    [esp+20h+arg_0] }
      v15 = Tile_GetFloat(a8, 0xFCA); /*0x5b6e51*/
      __asm { fsub    [esp+1Ch+arg_0] } /*0x5b6e56*/
      __asm { fild    [esp+1Ch+var_8] }
      v47 = (Tile *)Double_To_SInt32(v15); /*0x5b6e65*/
      __asm { fstp    [esp+1Ch+var_C]; a3 } /*0x5b6e69*/
      v16 = sub_588CF0(a8); /*0x5b6e6d*/
      __asm { fadd    [esp+1Ch+var_C] } /*0x5b6e72*/
      v17 = Double_To_SInt32(v16); /*0x5b6e81*/
      v42 = (_DWORD *)v17; /*0x5b6e83*/
      v18 = sub_588CF0((_DWORD *)*(_DWORD *)(*(_DWORD *)(a1 + 0x48) + 0x10)); /*0x5b6e87*/
      v19 = Double_To_SInt32(v18); /*0x5b6e8c*/
      v20 = v19; /*0x5b6e91*/
      if ( v17 < v19 ) /*0x5b6e95*/
      {
        v47 = (Tile *)((char *)v47 + v17 - v19); /*0x5b6e99*/
        v17 = v19; /*0x5b6e9d*/
        v42 = (_DWORD *)v19; /*0x5b6e9f*/
      }
      v21 = Tile_GetFloat((_DWORD *)*(_DWORD *)(*(_DWORD *)(a1 + 0x48) + 0x10), 0xFCA); /*0x5b6eae*/
      v22 = Double_To_SInt32(v21); /*0x5b6eb3*/
      if ( (int)v47 + v17 > v22 + v20 ) /*0x5b6ec3*/
        v47 = (Tile *)(v20 + v22 - v17); /*0x5b6ec9*/
      sub_588D90(a8, v21); /*0x5b6ecf*/
      __asm { fsub    qword ptr ds:0A2FAA0h } /*0x5b6ed4*/
      __asm
      {
        fstp    [esp+20h+var_4]
        fld     [esp+20h+var_4]
        fstp    [esp+20h+var_20]; value
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFABu, v23); /*0x5b6eee*/
      Tile_GetFloat(a8, 0xFCB); /*0x5b6efa*/
      __asm { fsub    [esp+1Ch+arg_0] } /*0x5b6eff*/
      __asm
      {
        fstp    [esp+20h+arg_0]
        fld     [esp+20h+arg_0]
        fstp    [esp+20h+var_20]; value
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFCBu, v24); /*0x5b6f17*/
      __asm { fild    [esp+1Ch+arg_4] } /*0x5b6f1c*/
      __asm { fstp    [esp+20h+var_20]; value }
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFCAu, v25); /*0x5b6f2c*/
      sub_588C50(a8); /*0x5b6f33*/
      __asm { fadd    [esp+1Ch+var_C] } /*0x5b6f38*/
      __asm
      {
        fstp    [esp+20h+arg_4]
        fld     [esp+20h+arg_4]
        fstp    [esp+20h+var_20]; value
      }
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFADu, v26); /*0x5b6f50*/
      __asm { fild    [esp+1Ch+var_8] } /*0x5b6f55*/
      __asm { fstp    [esp+20h+var_20]; value }
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFACu, v27); /*0x5b6f65*/
      __asm { fld     dword ptr ds:0A379B4h } /*0x5b6f6a*/
      __asm { fstp    [esp+20h+var_20]; value }
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), 0xFA1u, v28); /*0x5b6f7c*/
      *(_DWORD *)(a1 + 0x78) = a8; /*0x5b6f82*/
      *(_BYTE *)(a1 + 0x84) = 0xFF; /*0x5b6f85*/
      break;
    case '+': /*0x5b6ca7*/
      __asm { fld     dword ptr ds:0A2FE7Ch } /*0x5b6cb6*/
      v9 = a8; /*0x5b6cbc*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6cc1*/
      Tile_SetFloat(a8, 0xFB5u, a2); /*0x5b6ccb*/
      sub_588D90(a8, a4); /*0x5b6cd2*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6cdb*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFAEu, a2a); /*0x5b6ce3*/
      sub_588C50(a8); /*0x5b6cea*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6cf3*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFAFu, a2b); /*0x5b6cfb*/
      sub_588CF0(a8); /*0x5b6d02*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6d0b*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFB0u, a2c); /*0x5b6d13*/
      v10 = sub_588C10(a8, 0xFB2); /*0x5b6d1f*/
      Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFDE, v10); /*0x5b6d2d*/
      __asm { fld     dword ptr ds:0A379B4h } /*0x5b6d32*/
      __asm { fstp    [esp+18h+a2]; value }
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFA1u, a2d); /*0x5b6d44*/
      v11 = Tile_GetFloat(a8, 0xFB4); /*0x5b6d50*/
LABEL_5:
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6d55*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFB4u, a2e); /*0x5b6d61*/
      sub_58FBA0(*(_DWORD *)(a1 + 0x5C), a5, a6, v11, 0); /*0x5b6d6b*/
      *(_DWORD *)(a1 + 0xF4) = v9; /*0x5b6d70*/
      return; /*0x5b6d7b*/
    case '1': /*0x5b6ca7*/
      __asm { fld     dword ptr ds:0A2FE7Ch } /*0x5b6d87*/
      v9 = a8; /*0x5b6d8d*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6d92*/
      Tile_SetFloat(a8, 0xFB5u, a2f); /*0x5b6d9c*/
      sub_588D90(a8, a4); /*0x5b6da3*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6dac*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFAEu, a2g); /*0x5b6db4*/
      sub_588C50(a8); /*0x5b6dbb*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6dc4*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFAFu, a2h); /*0x5b6dcc*/
      v11 = sub_588CF0(a8); /*0x5b6dd3*/
      __asm { fstp    [esp+18h+a2]; value } /*0x5b6ddc*/
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFB0u, a2i); /*0x5b6de4*/
      v12 = sub_588C10(a8, 0xFB2); /*0x5b6df0*/
      Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFDE, v12); /*0x5b6dfe*/
      __asm { fld     dword ptr ds:0A379B4h } /*0x5b6e03*/
      __asm { fstp    [esp+18h+a2]; value }
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), 0xFA1u, a2j); /*0x5b6e15*/
      __asm { fld1 } /*0x5b6e1a*/
      goto LABEL_5; /*0x5b6e1c*/
  }
}
