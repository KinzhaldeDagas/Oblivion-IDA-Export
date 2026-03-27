void __usercall CreditsMenu::~CreditsMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v8; // eax

  this->__vftable = (MenuVtbl *)&CreditsMenu::`vftable';
  if ( byte_B3B290 )
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414);
    if ( OpenMenuTile )
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
      v8 = OblivionDynamicCast(
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &MainMenu `RTTI Type Descriptor',
             0);
      if ( v8 )
        sub_5B5A30(v8);
    }
  }
  Menu::~Menu(this, a2, a3, a4);
}
