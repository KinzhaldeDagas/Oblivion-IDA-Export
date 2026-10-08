double __usercall sub_5D5A50@<st0>(double result@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void **v3; // esi
  void *v4; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x408); /*0x5d5a64*/
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5d5a6e*/
  v3 = (void **)OblivionDynamicCast( /*0x5d5a79*/
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &SkillsMenu `RTTI Type Descriptor',
                  0);
  if ( v3 ) /*0x5d5a80*/
  {
    if ( InterfaceManager_ConsumeMessageButton() == 2 ) /*0x5d5a89*/
    {
      v4 = sub_447350(v3[0x10]); /*0x5d5a95*/
      Player_SetBirthsign((MagicTarget *)reference, (int)v4); /*0x5d5aa1*/
      return sub_5D5720(result); /*0x5d5aa7*/
    }
  }
  return result; /*0x5d5aa6*/
}
