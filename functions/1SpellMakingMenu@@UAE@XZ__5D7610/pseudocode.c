void __usercall SpellMakingMenu::~SpellMakingMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // ecx
  unsigned int v6; // edi

  this->__vftable = (MenuVtbl *)&SpellMakingMenu::`vftable'; /*0x5d7639*/
  v5 = *((_DWORD **)this + 0x16); /*0x5d763f*/
  if ( v5 ) /*0x5d764c*/
  {
    BSSimpleList_Clear(v5); /*0x5d764e*/
    FormHeapFree(*((_DWORD *)this + 0x16)); /*0x5d7657*/
  }
  v6 = *((_DWORD *)this + 0x1C); /*0x5d765f*/
  if ( v6 ) /*0x5d7664*/
  {
    sub_57FEB0(*((_DWORD **)this + 0x1C)); /*0x5d7668*/
    FormHeapFree(v6); /*0x5d766e*/
  }
  Menu::~Menu(this, a2, a3, a4); /*0x5d7680*/
}
