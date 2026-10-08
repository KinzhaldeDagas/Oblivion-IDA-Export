void __usercall SaveMenu::~SaveMenu(SaveMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  *(_DWORD *)this = &SaveMenu::`vftable'; /*0x5d3344*/
  FormHeapFree(*((_DWORD *)this + 0x14)); /*0x5d334e*/
  *((_DWORD *)this + 0x14) = 0; /*0x5d335a*/
  *((_WORD *)this + 0x2B) = 0; /*0x5d335d*/
  *((_WORD *)this + 0x2A) = 0; /*0x5d3361*/
  Menu::~Menu((Menu *)this, a2, a3, a4); /*0x5d336d*/
}
