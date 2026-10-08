void __cdecl ContainerMenuCallback()
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _BYTE *v2; // esi

  if ( InterfaceManager_ConsumeMessageButton() == 1 ) /*0x597b17*/
  {
    BYTE2(dword_B3B0B4[0x71]) = 1; /*0x597b1f*/
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F0); /*0x597b24*/
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x597b2e*/
    v2 = OblivionDynamicCast( /*0x597b53*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &ContainerMenu `RTTI Type Descriptor',
           0);
    (*(void (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)v2 + 0xC))(v2, dword_B3B0B4[0x74], dword_B3B0B4[0x73]); /*0x597b61*/
    v2[0x55] = 1; /*0x597b63*/
  }
  g_ContainerMenu_Quantity = 0xFFFFFFFF; /*0x597b68*/
  BYTE2(dword_B3B0B4[0x71]) = 0; /*0x597b72*/
}
