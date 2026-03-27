void __usercall SaveMenu::~SaveMenu(SaveMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  *(_DWORD *)this = &SaveMenu::`vftable';
  FormHeapFree(*((_DWORD *)this + 0x14));
  *((_DWORD *)this + 0x14) = 0;
  *((_WORD *)this + 0x2B) = 0;
  *((_WORD *)this + 0x2A) = 0;
  Menu::~Menu((Menu *)this, a2, a3, a4);
}
