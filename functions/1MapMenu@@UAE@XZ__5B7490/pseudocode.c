void __usercall MapMenu::~MapMenu(MapMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx

  *(_DWORD *)this = &MapMenu::`vftable';
  v6 = *((_DWORD **)this + 0x31);
  if ( v6 )
  {
    BSSimpleList_Clear(v6);
    FormHeapFree(*((_DWORD *)this + 0x31));
  }
  v7 = *((_DWORD **)this + 0x32);
  if ( v7 )
  {
    BSSimpleList_Clear(v7);
    FormHeapFree(*((_DWORD *)this + 0x32));
  }
  FormHeapFree(*((_DWORD *)this + 0x2C));
  *((_DWORD *)this + 0x2C) = 0;
  *((_WORD *)this + 0x5B) = 0;
  *((_WORD *)this + 0x5A) = 0;
  Menu::~Menu((Menu *)this, a2, a3, a4);
}
