bool __stdcall sub_5878B0(int a1)
{
  _DWORD *v1; // esi
  _DWORD *v2; // ecx
  _DWORD *ParentMenu; // eax
  _DWORD *v4; // edi

  v1 = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD); /*0x5878bf*/
  if ( !v1 ) /*0x5878c7*/
    return 0; /*0x5878c7*/
  while ( 1 ) /*0x5878d4*/
  {
    InterfaceManager_GetSingleton(0, 1); /*0x5878d4*/
    v2 = (_DWORD *)v1[2]; /*0x5878d9*/
    v1 = (_DWORD *)*v1; /*0x5878df*/
    if ( v2 ) /*0x5878e6*/
    {
      ParentMenu = (_DWORD *)Tile_GetParentMenu(v2); /*0x5878e8*/
      v4 = ParentMenu; /*0x5878ed*/
      if ( ParentMenu ) /*0x5878f1*/
      {
        if ( ParentMenu[1] && (*(int (__thiscall **)(_DWORD *))(*ParentMenu + 0x34))(ParentMenu) == a1 ) /*0x587904*/
          break; /*0x587904*/
      }
    }
    if ( !v1 ) /*0x587908*/
      return 0; /*0x587908*/
  }
  return Tile_GetFloat((_DWORD *)v4[1], 0xFA1) != fConstant_1 && v4[9] != 2; /*0x58790c*/
}
