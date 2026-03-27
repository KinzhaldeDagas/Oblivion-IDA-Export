UInt8 ContainerMenuCallback()
{
  UInt8 result; // al
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v7; // esi

  result = sub_578D70();
  if ( result == 1 )
  {
    byte_B3B27A = 1;
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0);
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    v7 = OblivionDynamicCast(
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ContainerMenu `RTTI Type Descriptor',
           0);
    result = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v7 + 0xC))(v7, dword_B3B284, dword_B3B280);
    v7[0x55] = 1;
  }
  g_ContainerMenu_Quantity = 0xFFFFFFFF;
  byte_B3B27A = 0;
  return result;
}
