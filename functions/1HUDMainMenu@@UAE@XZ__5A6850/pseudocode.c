void __usercall HUDMainMenu::~HUDMainMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&HUDMainMenu::`vftable'; /*0x5a6878*/
  sub_5A66A0(this); /*0x5a6886*/
  IconArray::~IconArray((IconArray *)(this + 3)); /*0x5a6893*/
  Menu::~Menu(this, a2, a3, a4); /*0x5a68a2*/
}
