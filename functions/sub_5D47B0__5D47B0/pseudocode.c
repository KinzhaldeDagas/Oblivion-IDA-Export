void __usercall sub_5D47B0(int a1@<ecx>, int ebx0@<ebx>)
{
  int v3; // eax
  int *v4; // edi
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 8) + 4) == 0x21 ) /*0x5d47be*/
  {
    v3 = *(_DWORD *)(a1 + 0x28); /*0x5d47c4*/
    *(_DWORD *)(a1 + 0x7C) = 0; /*0x5d47c9*/
    if ( v3 ) /*0x5d47d0*/
    {
      v4 = (int *)(v3 + 0x7C); /*0x5d47d3*/
      if ( v3 != 0xFFFFFF84 ) /*0x5d47d8*/
      {
        do /*0x5d480a*/
        {
          v5 = *v4; /*0x5d47e0*/
          if ( !*v4 ) /*0x5d47e0*/
            break; /*0x5d47e4*/
          v6 = *(_DWORD *)(v5 + 0x10); /*0x5d47e6*/
          if ( v6 == 1 || v6 == 2 ) /*0x5d47f1*/
          {
            v7 = EffectItem_MagickaCostForCaster(v5, ebx0, 0); /*0x5d47f5*/
            *(_DWORD *)(a1 + 0x7C) = Double_To_SInt32(v7 + (double)*(int *)(a1 + 0x7C)); /*0x5d4802*/
          }
          v4 = (int *)v4[1]; /*0x5d4805*/
        }
        while ( v4 ); /*0x5d480a*/
      }
    }
    a2 = (float)*(int *)(a1 + 0x7C); /*0x5d4814*/
    Tile_SetFloat(*(Tile **)(a1 + 4), 0xFAEu, a2); /*0x5d481c*/
    a2a = (float)*(unsigned __int8 *)(*(_DWORD *)(a1 + 0x28) + 0x74); /*0x5d4834*/
    Tile_SetFloat(*(Tile **)(a1 + 4), 0xFAFu, a2a); /*0x5d483c*/
    *(_DWORD *)(a1 + 0x7C) *= *(unsigned __int8 *)(*(_DWORD *)(a1 + 0x28) + 0x74); /*0x5d484c*/
  }
  else
  {
    Tile_SetFloat(*(Tile **)(a1 + 4), 0xFAEu, 0.0); /*0x5d4860*/
    Tile_SetFloat(*(Tile **)(a1 + 4), 0xFAFu, 0.0); /*0x5d4873*/
  }
}
