void __usercall sub_5D47B0(int a1@<ecx>, int ebx0@<ebx>)
{
  int v3; // eax
  int *v4; // edi
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  float a2; // [esp+0h] [ebp-Ch]
  float a2a; // [esp+0h] [ebp-Ch]

  if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 0x2C) + 8) + 4) == 0x21 )
  {
    v3 = *(_DWORD *)(a1 + 0x28);
    *(_DWORD *)(a1 + 0x7C) = 0;
    if ( v3 )
    {
      v4 = (int *)(v3 + 0x7C);
      if ( v3 != 0xFFFFFF84 )
      {
        do
        {
          v5 = *v4;
          if ( !*v4 )
            break;
          v6 = *(_DWORD *)(v5 + 0x10);
          if ( v6 == 1 || v6 == 2 )
          {
            v7 = EffectItem_MagickaCostForCaster(v5, ebx0, 0);
            *(_DWORD *)(a1 + 0x7C) = Double_To_SInt32(v7 + (double)*(int *)(a1 + 0x7C));
          }
          v4 = (int *)v4[1];
        }
        while ( v4 );
      }
    }
    a2 = (float)*(int *)(a1 + 0x7C);
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAE, a2);
    a2a = (float)*(unsigned __int8 *)(*(_DWORD *)(a1 + 0x28) + 0x74);
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAF, a2a);
    *(_DWORD *)(a1 + 0x7C) *= *(unsigned __int8 *)(*(_DWORD *)(a1 + 0x28) + 0x74);
  }
  else
  {
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAE, 0.0);
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAF, 0.0);
  }
}
