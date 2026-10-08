int __usercall AlchMenu_Create@<eax>(
        double st7_0@<st0>,
        double st6_0@<st1>,
        ExtraDataList ***a3,
        ExtraDataList ***a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        int a9,
        char a10)
{
  void (__thiscall ***OpenMenuTile)(_DWORD, int); // eax
  InterfaceManager *Singleton; // esi
  double Depth; // st7
  Tile *File; // esi
  int ParentMenu; // eax
  Menu *v16; // ebp
  TileMenu *v17; // eax
  void *v18; // esi
  Tile *v20; // [esp+14h] [ebp-11Ch]
  float v21; // [esp+20h] [ebp-110h]

  OpenMenuTile = (void (__thiscall ***)(_DWORD, int))Menu_GetOpenMenuTile(0x410); /*0x593851*/
  if ( OpenMenuTile ) /*0x59385b*/
    (**OpenMenuTile)(OpenMenuTile, 1); /*0x593865*/
  Singleton = InterfaceManager_GetSingleton(0, 1); /*0x593873*/
  Depth = InterfaceManager_GetDepth(st7_0); /*0x593875*/
  v21 = Depth; /*0x59387a*/
  File = Tile::ReadFile(Singleton->menuRoot, "Data\\Menus\\dialog\\Alchemy.xml"); /*0x59388b*/
  v20 = File; /*0x59388f*/
  ParentMenu = Tile_GetParentMenu(File); /*0x593893*/
  v16 = (Menu *)ParentMenu; /*0x593898*/
  if ( !ParentMenu ) /*0x59389c*/
    goto LABEL_14; /*0x59389c*/
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)ParentMenu + 0x34))(ParentMenu) != 0x410 ) /*0x5938b1*/
    JUMPOUT(0x593AC3); /*0x593ac3*/
  v17 = (TileMenu *)OblivionDynamicCast( /*0x5938c6*/
                      File,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&Tile `RTTI Type Descriptor',
                      &TileMenu `RTTI Type Descriptor',
                      0);
  Menu_SetTileMenu(v16, st6_0, Depth, v17); /*0x5938d1*/
  v18 = OblivionDynamicCast( /*0x5938ea*/
          v16,
          0,
          (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
          &AlchemyMenu `RTTI Type Descriptor',
          0);
  if ( !v18 ) /*0x5938f1*/
LABEL_14:
    JUMPOUT(0x593AD4); /*0x593ad4*/
  if ( Tile_GetFloat(v20, 0xFA5) == fXMLI_StackingType6006 || Tile_GetFloat(v20, 0xFA5) == fXMLI_NoClickPast ) /*0x59392b*/
    Tile_SetFloat(v20, 0xFABu, v21); /*0x59393e*/
  return AlchMenu_Create_::HandleMPST(a4, (int)v18, a3, (int)a3, (int)a4, a5, a6, a7, a8, a9);
}
