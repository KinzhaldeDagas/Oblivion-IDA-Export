void __usercall SpellMakingMenu::~SpellMakingMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v6; // ecx
  unsigned int v7; // edi

  this->__vftable = (MenuVtbl *)&SpellMakingMenu::`vftable';
  v6 = *((_DWORD **)this + 0x16);
  if ( v6 )
  {
    BSSimpleList_Clear(v6);
    FormHeapFree(*((_DWORD *)this + 0x16));
  }
  v7 = *((_DWORD *)this + 0x1C);
  if ( v7 )
  {
    sub_57FEB0(*((_DWORD **)this + 0x1C));
    FormHeapFree(v7);
  }
  Menu::~Menu(this, a2, a3, a4);
}
