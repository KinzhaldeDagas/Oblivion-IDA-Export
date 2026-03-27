void __userpurge sub_5B6C90(int a1@<ecx>, double st3_0@<st4>, double a3@<st3>, double a4@<st0>, int a5, Tile *a6)
{
  double v10; // st5
  Tile *v11; // edi
  double v12; // st6
  double v13; // st5
  char *v14; // eax
  double v15; // st7
  double v16; // st5
  char *v17; // eax
  double v19; // st5
  int v20; // ebx
  int v21; // eax
  int v22; // ebp
  double Float; // st7
  int v24; // eax
  float v25; // [esp+0h] [ebp-20h]
  float v26; // [esp+0h] [ebp-20h]
  float a2; // [esp+8h] [ebp-18h]
  float a2a; // [esp+8h] [ebp-18h]
  float a2b; // [esp+8h] [ebp-18h]
  float a2c; // [esp+8h] [ebp-18h]
  float a2d; // [esp+8h] [ebp-18h]
  float a2e; // [esp+8h] [ebp-18h]
  float a2f; // [esp+8h] [ebp-18h]
  float v34; // [esp+14h] [ebp-Ch]
  int v35; // [esp+18h] [ebp-8h]
  _DWORD *v36; // [esp+18h] [ebp-8h]
  float v37; // [esp+1Ch] [ebp-4h]
  float v38; // [esp+24h] [ebp+4h]
  float v39; // [esp+24h] [ebp+4h]
  Tile *v40; // [esp+28h] [ebp+8h]
  float v41; // [esp+28h] [ebp+8h]

  switch ( a5 )
  {
    case '3':
    case '4':
      Tile_GetFloat(a6, 0xFE0);
      v35 = Double_To_SInt32(a4);
      v38 = (float)(2 * v35);
      Tile_GetFloat(a6, 0xFCA);
      v40 = (Tile *)Double_To_SInt32(a4);
      v34 = (float)v35;
      v19 = sub_588CF0(a6);
      v20 = Double_To_SInt32(a4);
      v36 = (_DWORD *)v20;
      sub_588CF0(*(_DWORD **)(*(_DWORD *)(a1 + 0x48) + 0x10));
      v21 = Double_To_SInt32(a4);
      v22 = v21;
      if ( v20 < v21 )
      {
        v40 = (Tile *)((char *)v40 + v20 - v21);
        v20 = v21;
        v36 = (_DWORD *)v21;
      }
      Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(*(_DWORD *)(a1 + 0x48) + 0x10), 0xFCA);
      v24 = Double_To_SInt32(Float);
      if ( (int)v40 + v20 > v24 + v22 )
        v40 = (Tile *)(v22 + v24 - v20);
      v37 = sub_588D90(a6, Float) - dbl_A2FAA0;
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFAB, v37);
      v39 = Tile_GetFloat(a6, 0xFCB) - v38;
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFCB, v39);
      v25 = (float)(int)v40;
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFCA, v25);
      sub_588C50(a6);
      v41 = v19 + v34;
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFAD, v41);
      v26 = (float)(int)v36;
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFAC, v26);
      Tile_SetFloat(*(Tile **)(a1 + 0x4C), (_DWORD *)0xFA1, fConstant_2);
      *(_DWORD *)(a1 + 0x78) = a6;
      *(_BYTE *)(a1 + 0x84) = 0xFF;
      break;
    case '+':
      v10 = flt_A2FE7C;
      v11 = a6;
      Tile_SetFloat(a6, (_DWORD *)0xFB5, flt_A2FE7C);
      v12 = sub_588D90(a6, a4);
      a2 = v10;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFAE, a2);
      v13 = sub_588C50(a6);
      a2a = st3_0;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFAF, a2a);
      sub_588CF0(a6);
      a2b = a3;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFB0, a2b);
      v14 = sub_588C10(a6, 0xFB2);
      Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFDE, v14);
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFA1, fConstant_2);
      v15 = Tile_GetFloat(a6, 0xFB4);
LABEL_5:
      a2c = v15;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFB4, a2c);
      sub_58FBA0(*(_DWORD *)(a1 + 0x5C), v13, v12, v15, 0);
      *(_DWORD *)(a1 + 0xF4) = v11;
      return;
    case '1':
      v16 = flt_A2FE7C;
      v11 = a6;
      Tile_SetFloat(a6, (_DWORD *)0xFB5, flt_A2FE7C);
      v12 = sub_588D90(a6, a4);
      a2d = v16;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFAE, a2d);
      v13 = sub_588C50(a6);
      a2e = st3_0;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFAF, a2e);
      sub_588CF0(a6);
      a2f = a3;
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFB0, a2f);
      v17 = sub_588C10(a6, 0xFB2);
      Tile_SetString(*(_DWORD **)(a1 + 0x5C), (_DWORD *)0xFDE, v17);
      Tile_SetFloat(*(Tile **)(a1 + 0x5C), (_DWORD *)0xFA1, fConstant_2);
      v15 = 1.0;
      goto LABEL_5;
  }
}
