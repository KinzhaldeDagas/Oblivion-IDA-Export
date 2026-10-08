int sub_5877D0()
{
  int v0; // ebx
  _DWORD *i; // edi
  _DWORD *v2; // ecx
  int ParentMenu; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  float Float; // [esp+8h] [ebp-4h]

  Float = flt_A6A044; /*0x5877d9*/
  v0 = 0; /*0x5877dd*/
  for ( i = *((_DWORD **)InterfaceManager_GetSingleton(0, 1)->menuRoot + 0xD); i; i = (_DWORD *)*i ) /*0x5877f2*/
  {
    InterfaceManager_GetSingleton(0, 1); /*0x587804*/
    v2 = (_DWORD *)i[2]; /*0x587809*/
    if ( v2 ) /*0x587811*/
    {
      ParentMenu = Tile_GetParentMenu(v2); /*0x587813*/
      v4 = ParentMenu; /*0x587818*/
      if ( ParentMenu ) /*0x58781c*/
      {
        v5 = *(_DWORD **)(ParentMenu + 4); /*0x58781e*/
        if ( v5 ) /*0x587823*/
        {
          if ( Tile_GetFloat(v5, 0xFA1) != fConstant_1 /*0x587874*/
            && Float < Tile_GetFloat((_DWORD *)*(_DWORD *)(v4 + 4), 0xFAB)
            && Tile_GetFloat((_DWORD *)*(_DWORD *)(v4 + 4), 0xFA5) != flt_A6A040
            && *(_DWORD *)(v4 + 0x24) != 2 )
          {
            Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(v4 + 4), 0xFAB); /*0x587883*/
            v0 = v4; /*0x587887*/
          }
        }
      }
    }
    InterfaceManager_GetSingleton(0, 1); /*0x58788d*/
  }
  return v0; /*0x5878a0*/
}
