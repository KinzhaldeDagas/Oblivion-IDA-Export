void __usercall sub_5BEA10(int a1@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  int ParentMenu; // eax
  int v6; // edi
  Tile *v7; // esi
  void *v8; // eax
  void **v9; // eax
  void **v10; // ebx
  UInt32 v11; // eax
  InterfaceManager *Singleton; // eax
  double Float; // st5
  float a2; // [esp+0h] [ebp-10h]

  Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0xBC), 0xFAF); /*0x5bea1b*/
  if ( a3 == fConstant_2 ) /*0x5bea2b*/
  {
    OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x40A); /*0x5be276*/
    v4 = OpenMenuTile; /*0x5be27b*/
    if ( OpenMenuTile ) /*0x5be282*/
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5be28b*/
      v6 = ParentMenu; /*0x5be290*/
      if ( ParentMenu ) /*0x5be294*/
      {
        a3 = fConstant_2; /*0x5be29a*/
        a2 = fConstant_2; /*0x5be2a8*/
        *(_DWORD *)(*(_DWORD *)(ParentMenu + 0xD8) + 0x70) = 7; /*0x5be2b2*/
        Tile_SetFloat(v4, 0x1772u, a2); /*0x5be2b9*/
        Menu::StartFadeOut((_DWORD *)v6, st6_0); /*0x5be2c0*/
        v7 = (Tile *)Menu_GetOpenMenuTile(0x3F1); /*0x5be2d9*/
        v8 = (void *)Tile_GetParentMenu(v7); /*0x5be2e4*/
        v9 = (void **)OblivionDynamicCast( /*0x5be2ea*/
                        v8,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                        &DialogMenu `RTTI Type Descriptor',
                        0);
        v10 = v9; /*0x5be2f4*/
        if ( v7 ) /*0x5be2f6*/
        {
          if ( v9 ) /*0x5be2fa*/
          {
            if ( *(_BYTE *)(v6 + 0x8C) ) /*0x5be2fc*/
              sub_59DF70(v9); /*0x5be307*/
            *((_BYTE *)v10 + 0x96) = 1;         // Persuasion/submenu return marks the current topic cursor for abandonment before rebuilding the dialogue choices. /*0x5be312*/
            DialogMenu::AdvanceTopicList((DialogMenu *)v10, 0, 0);// Rebuild with processCurrentInfo=false. AdvanceTopicList first nulls the current cursor because +0x96 is set, so the abandoned INFO receives neither AddTopicList nor RunResult; the preserved GREETING seed is used to repopulate choices. /*0x5be319*/
            sub_58FBA0((int)v7, Float, st6_0, a3, 0); /*0x5be322*/
            a3 = fConstant_2; /*0x5be327*/
            Tile_SetFloat(v7, 0xFA1u, fConstant_2); /*0x5be338*/
          }
        }
        v11 = sub_5E12B0(*(Actor **)(v6 + 0xD8)); /*0x5be343*/
        if ( v11 ) /*0x5be34b*/
          *(_BYTE *)(v11 + 0x1DB) = 0; /*0x5be34d*/
      }
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5be358*/
      sub_57DA20((int)Singleton, Float, st6_0, a3, "Menus\\Misc\\cursor.dds", 1); /*0x5be369*/
    }
  }
}
