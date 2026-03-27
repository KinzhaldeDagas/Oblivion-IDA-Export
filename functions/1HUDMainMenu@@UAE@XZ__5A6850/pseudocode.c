void __usercall HUDMainMenu::~HUDMainMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&HUDMainMenu::`vftable';
  sub_5A66A0(this);
  IconArray::~IconArray((IconArray *)(this + 3));
  Menu::~Menu(this, a2, a3, a4);
}
