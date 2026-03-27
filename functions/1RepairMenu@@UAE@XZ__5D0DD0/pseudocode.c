void __usercall RepairMenu::~RepairMenu(int **this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  NiTPointerList__BSImageSpaceShader *v6; // edi

  *this = (int *)&RepairMenu::`vftable';
  v6 = (NiTPointerList__BSImageSpaceShader *)(this + 0x1A);
  sub_5D0D50(this + 0x1A);
  RepairMenu::RepairMenuList::~RepairMenuList(v6);
  Menu::~Menu((Menu *)this, a2, a3, a4);
}
