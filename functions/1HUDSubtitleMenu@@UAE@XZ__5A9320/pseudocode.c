void __usercall HUDSubtitleMenu::~HUDSubtitleMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int *v5; // edi
  unsigned int *v6; // esi

  this->__vftable = (MenuVtbl *)&HUDSubtitleMenu::`vftable'; /*0x5a934a*/
  v5 = (int *)((char *)this + 0x2C); /*0x5a9358*/
  while ( v5[1] || *v5 ) /*0x5a9369*/
  {
    v6 = (unsigned int *)*v5; /*0x5a936b*/
    BSSimpleList_Remove(v5, *v5); /*0x5a9370*/
    if ( v6 ) /*0x5a9377*/
    {
      sub_5A9060(v6); /*0x5a937b*/
      FormHeapFree((unsigned int)v6); /*0x5a9381*/
    }
  }
  Menu::~Menu(this, a2, a3, a4); /*0x5a9395*/
}
