void __userpurge sub_593370(int a1@<ecx>, double st7_0@<st0>, signed int a3, _DWORD *a4)
{
  bool v9; // zf
  double Float; // st5
  Tile *v11; // ecx
  float a2; // [esp+0h] [ebp-14h]
  float a2a; // [esp+0h] [ebp-14h]
  int v14; // [esp+18h] [ebp+4h]
  float v15; // [esp+18h] [ebp+4h]
  float v16; // [esp+1Ch] [ebp+8h]
  float v17; // [esp+1Ch] [ebp+8h]
  float v18; // [esp+1Ch] [ebp+8h]

  if ( a4 )
  {
    if ( a3 >= 8 && a3 <= 0xB || a3 == 2 )
    {
      v9 = *(_DWORD *)(a1 + 0x54) == 0;
      *(_DWORD *)(a1 + 0x90) = 0;
      if ( !v9 )
      {
        Float = Tile_GetFloat(a4, 0xFE0);
        v14 = Double_To_SInt32(st7_0);
        sub_588D90(a4, st7_0);
        v16 = st7_0 - Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x54), 0xFBD);
        Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAB, v16);
        a2 = Tile_GetFloat(a4, 0xFCB);
        Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFCB, a2);
        a2a = Tile_GetFloat(a4, 0xFCA);
        Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFCA, a2a);
        v17 = (float)v14;
        v15 = sub_588C50(a4) + v17;
        Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAD, v15);
        sub_588CF0(a4);
        v18 = Float + v17;
        Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFAC, v18);
        Tile_SetFloat(*(Tile **)(a1 + 0x54), (_DWORD *)0xFA1, fConstant_2);
        *(_DWORD *)(a1 + 0x90) = a4;
      }
    }
    else
    {
      v11 = *(Tile **)(a1 + 0x54);
      if ( v11 )
        Tile_SetFloat(v11, (_DWORD *)0xFA1, 1.0);
    }
  }
}
