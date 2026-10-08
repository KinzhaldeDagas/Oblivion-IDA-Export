void __usercall RepairMenu::~RepairMenu(int ***this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  NiTPointerList__BSImageSpaceShader *v5; // edi

  *this = (int **)&RepairMenu::`vftable'; /*0x5d0df9*/
  v5 = (NiTPointerList__BSImageSpaceShader *)(this + 0x1A); /*0x5d0dff*/
  sub_5D0D50(this + 0x1A); /*0x5d0e0c*/
  RepairMenu::RepairMenuList::~RepairMenuList(v5); /*0x5d0e18*/
  Menu::~Menu((Menu *)this, a2, a3, a4); /*0x5d0e27*/
}
