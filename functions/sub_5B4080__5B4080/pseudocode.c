void __usercall sub_5B4080(int a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v6; // edi
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // ebx
  double v10; // st7
  double v11; // st6
  double v12; // st7
  Tile *v13; // ecx
  _DWORD *v14; // ebx
  double v15; // st7
  double v16; // st6
  float a2; // [esp+0h] [ebp-1Ch]
  float v18; // [esp+10h] [ebp-Ch]
  float v19; // [esp+10h] [ebp-Ch]
  double Float; // [esp+14h] [ebp-8h]
  double v21; // [esp+14h] [ebp-8h]

  v6 = ((int (__usercall *)@<eax>(double@<st0>, double@<st1>, double@<st2>))GetTickCount)(a4, a3, st5_0);
  v7 = *(_DWORD *)(a1 + 0x58);
  if ( v7 == 1 )
  {
    v8 = *(_DWORD *)(a1 + 0x24);
    if ( v8 == 4 || v8 == 2 )
      sub_584390(a1);
    v9 = *(_DWORD **)(a1 + 4);
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAD);
    v10 = Tile_GetFloat(v9, 0xFB0);
    v11 = (double)(v6 - *(_DWORD *)(a1 + 0x5C));
    if ( v6 - *(_DWORD *)(a1 + 0x5C) < 0 )
      v11 = v11 + flt_A2FC78;
    v18 = v10 * v11 + Float;
    v12 = v18;
    if ( *(float *)(a1 + 0x54) > (double)v18 )
      v12 = *(float *)(a1 + 0x54);
    a3 = *(float *)(a1 + 0x50);
    v13 = *(Tile **)(a1 + 0x28);
    if ( a3 <= v12 )
    {
      *(_DWORD *)(a1 + 0x58) = 0;
      v12 = *(float *)(a1 + 0x50);
    }
  }
  else
  {
    if ( v7 != 3 )
      goto LABEL_18;
    v14 = *(_DWORD **)(a1 + 4);
    v21 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFAD);
    v15 = Tile_GetFloat(v14, 0xFB0);
    v16 = (double)(v6 - *(_DWORD *)(a1 + 0x5C));
    if ( v6 - *(_DWORD *)(a1 + 0x5C) < 0 )
      v16 = v16 + flt_A2FC78;
    v19 = v21 - v15 * v16;
    v12 = v19;
    a3 = *(float *)(a1 + 0x54);
    if ( a3 >= v19 )
    {
      *(_DWORD *)(a1 + 0x58) = 2;
      sub_584740((_DWORD *)a1, st5_0, a3);
      v12 = *(float *)(a1 + 0x54);
    }
    v13 = *(Tile **)(a1 + 0x28);
  }
  a2 = v12;
  Tile_SetFloat(v13, (_DWORD *)0xFAD, a2);
LABEL_18:
  if ( !InterfaceManager_IsMenuMode() )
  {
    *(_DWORD *)(a1 + 0x58) = 2;
    sub_584740((_DWORD *)a1, st5_0, a3);
    Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFAD, *(float *)(a1 + 0x54));
  }
  *(_DWORD *)(a1 + 0x5C) = v6;
}
