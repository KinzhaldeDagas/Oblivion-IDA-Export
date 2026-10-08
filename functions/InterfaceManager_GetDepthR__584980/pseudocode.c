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

  v13 = 0.0; /*0x584987*/
  v1 = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD); /*0x584997*/
  while ( v1 ) /*0x58499f*/
  {
    v2 = (_DWORD *)v1[2]; /*0x5849a5*/
    v1 = (_DWORD *)*v1; /*0x5849ad*/
    if ( v2 ) /*0x5849af*/
    {
      if ( Tile_GetParentMenu(v2) ) /*0x5849b7*/
      {
        ParentMenu = Tile_GetParentMenu(v2); /*0x5849c6*/
        if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x400 ) /*0x5849d9*/
        {
          v4 = Tile_GetParentMenu(v2); /*0x5849dd*/
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x34))(v4) != 0x3ED ) /*0x5849f0*/
          {
            v5 = Tile_GetParentMenu(v2); /*0x5849f4*/
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x34))(v5) != 0x3F2 ) /*0x584a07*/
            {
              a3b = *(_DWORD *)(Tile_GetParentMenu(v2) + 0x18); /*0x584a13*/
              a3 = Tile_GetFloat(v2, 0xFAB) + (double)a3b; /*0x584a27*/
              if ( a3 >= (double)v13 ) /*0x584a3c*/
                v13 = a3; /*0x584a3e*/
            }
          }
        }
      }
    }
  }
  a3c = (float)Double_To_SInt32(a1); /*0x584a5f*/
  v6 = a3c; /*0x584a63*/
  if ( a3c < dbl_A3F3E8 ) /*0x584a72*/
    v6 = flt_A31C80; /*0x584a76*/
  a3d = v6; /*0x584a7c*/
  a3a = a3d + fCostant_100; /*0x584a8e*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x584a97*/
  cursor = Singleton->cursor; /*0x584a99*/
  if ( cursor ) /*0x584aa1*/
  {
    Tile_SetFloat(cursor, (_DWORD *)0xFAB, a3a); /*0x584ab0*/
    v9 = *((_DWORD *)Singleton->cursor + 9); /*0x584ac2*/
    v21 = a3a * dbl_A68FD0; /*0x584acf*/
    v10 = *(_DWORD *)(v9 + 0x5C); /*0x584ad3*/
    *(_DWORD *)(v9 + 0x54) = *(_DWORD *)(v9 + 0x54); /*0x584ad6*/
    *(float *)(v9 + 0x58) = v21; /*0x584add*/
    *(_DWORD *)(v9 + 0x5C) = v10; /*0x584ae0*/
  }
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F2); /*0x584ae8*/
  if ( OpenMenuTile ) /*0x584af4*/
  {
    a3e = a3a - dbl_A3F3E8; /*0x584b03*/
    Tile_SetFloat(OpenMenuTile, (_DWORD *)0xFAB, a3e); /*0x584b13*/
  }
  return (float)(v13 + dbl_A3D0C0); /*0x584b29*/
}
