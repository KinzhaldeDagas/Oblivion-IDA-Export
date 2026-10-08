void __usercall CreditsMenu::~CreditsMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  _DWORD *v7; // eax

  this->__vftable = (MenuVtbl *)&CreditsMenu::`vftable'; /*0x59c8b8*/
  if ( LOBYTE(dword_B3B0B4[0x77]) ) /*0x59c8be*/
  {
    OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x414); /*0x59c8d4*/
    if ( OpenMenuTile ) /*0x59c8de*/
    {
      ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x59c8f0*/
      v7 = OblivionDynamicCast( /*0x59c8f6*/
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &MainMenu `RTTI Type Descriptor',
             0);
      if ( v7 ) /*0x59c900*/
        sub_5B5A30(v7); /*0x59c904*/
    }
  }
  Menu::~Menu(this, a2, a3, a4); /*0x59c913*/
}
