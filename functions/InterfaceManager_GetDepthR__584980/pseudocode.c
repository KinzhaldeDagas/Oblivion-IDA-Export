double __usercall InterfaceManager_GetDepthR@<st0>(double a1@<st0>)
{
  _DWORD *v1; // edi
  _DWORD *v2; // esi
  int ParentMenu; // eax
  int v4; // eax
  int v5; // eax
  double v6; // st6
  InterfaceManager *Singleton; // esi
  Tile *cursor; // ecx
  int v9; // eax
  int v10; // edx
  Tile *OpenMenuTile; // eax
  float v13; // [esp+Ch] [ebp-14h]
  int a3b; // [esp+10h] [ebp-10h]
  float a3; // [esp+10h] [ebp-10h]
  float a3c; // [esp+10h] [ebp-10h]
  float a3d; // [esp+10h] [ebp-10h]
  float a3a; // [esp+10h] [ebp-10h]
  float a3e; // [esp+10h] [ebp-10h]
  float v21; // [esp+18h] [ebp-8h]

  v13 = 0.0;
  v1 = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD);
  while ( v1 )
  {
    v2 = (_DWORD *)v1[2];
    v1 = (_DWORD *)*v1;
    if ( v2 )
    {
      if ( Tile_GetParentMenu(v2) )
      {
        ParentMenu = Tile_GetParentMenu(v2);
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x400 )
        {
          v4 = Tile_GetParentMenu(v2);
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x34))(v4) != 0x3ED )
          {
            v5 = Tile_GetParentMenu(v2);
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x34))(v5) != 0x3F2 )
            {
              a3b = *(_DWORD *)(Tile_GetParentMenu(v2) + 0x18);
              a3 = Tile_GetFloat(v2, 0xFAB) + (double)a3b;
              if ( a3 >= (double)v13 )
                v13 = a3;
            }
          }
        }
      }
    }
  }
  a3c = (float)Double_To_SInt32(a1);
  v6 = a3c;
  if ( a3c < dbl_A3F3E8 )
    v6 = flt_A31C80;
  a3d = v6;
  a3a = a3d + fCostant_100;
  Singleton = InterfaceManager_GetSingleton(0, 1);
  cursor = Singleton->cursor;
  if ( cursor )
  {
    Tile_SetFloat(cursor, (_DWORD *)0xFAB, a3a);
    v9 = *((_DWORD *)Singleton->cursor + 9);
    v21 = a3a * dbl_A68FD0;
    v10 = *(_DWORD *)(v9 + 0x5C);
    *(_DWORD *)(v9 + 0x54) = *(_DWORD *)(v9 + 0x54);
    *(float *)(v9 + 0x58) = v21;
    *(_DWORD *)(v9 + 0x5C) = v10;
  }
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F2);
  if ( OpenMenuTile )
  {
    a3e = a3a - dbl_A3F3E8;
    Tile_SetFloat(OpenMenuTile, (_DWORD *)0xFAB, a3e);
  }
  return (float)(v13 + dbl_A3D0C0);
}
