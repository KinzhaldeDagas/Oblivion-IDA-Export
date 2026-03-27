void __usercall HUDSubtitleMenu::~HUDSubtitleMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  unsigned int **v6; // edi
  unsigned int *v7; // esi

  this->__vftable = (MenuVtbl *)&HUDSubtitleMenu::`vftable';
  v6 = (unsigned int **)((char *)this + 0x2C);
  while ( v6[1] || *v6 )
  {
    v7 = *v6;
    BSSimpleList_Remove(v6, (int)*v6);
    if ( v7 )
    {
      sub_5A9060(v7);
      FormHeapFree((unsigned int)v7);
    }
  }
  Menu::~Menu(this, a2, a3, a4);
}
