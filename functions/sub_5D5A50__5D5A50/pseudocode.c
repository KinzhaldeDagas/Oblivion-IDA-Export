double __usercall sub_5D5A50@<st0>(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double result@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  void **v6; // esi
  void *v7; // eax

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x408);
  ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
  v6 = (void **)OblivionDynamicCast(
                  ParentMenu,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                  &SkillsMenu `RTTI Type Descriptor',
                  0);
  if ( v6 )
  {
    if ( sub_578D70() == 2 )
    {
      v7 = sub_447350(v6[0x10]);
      Player_SetBirthsign((int *)TESDataHandler_g_PlayerRef, (int)v7);
      return sub_5D5720(a1, a2, a3, result);
    }
  }
  return result;
}
