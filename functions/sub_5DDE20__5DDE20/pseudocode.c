void __usercall sub_5DDE20(double a1@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v3; // edi
  void *ParentMenu; // eax
  _BYTE *v5; // esi

  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3FA); /*0x5dde26*/
  v3 = OpenMenuTile; /*0x5dde2b*/
  if ( OpenMenuTile ) /*0x5dde32*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5dde45*/
    v5 = OblivionDynamicCast( /*0x5dde50*/
           ParentMenu,
           0,
           (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
           &VideoMenu `RTTI Type Descriptor',
           0);
    if ( v5 ) /*0x5dde57*/
    {
      Tile_SetFloat(v3, 0x1772u, fConstant_2); /*0x5dde6a*/
      Menu::StartFadeOut(v5, a1); /*0x5dde71*/
      if ( bDisplayLODLand != v5[0x114] ) /*0x5dde81*/
        unk_B3B740 = 1; /*0x5dde83*/
      if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] < 5 ) /*0x5dde91*/
        byte_B06F14 = 0; /*0x5dde93*/
    }
  }
}
