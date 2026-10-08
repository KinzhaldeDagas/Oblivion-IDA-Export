// [Controller decode 2026-07-09] Controls menu constructor. Initializes child tile pointer block this+0x28..0x58 and controller/rebind state fields.
Menu *__thiscall ControlsMenu::Construct(Menu *this)
{
  Menu::Menu(this); /*0x5874a3*/
  this->__vftable = (MenuVtbl *)&ControlsMenu::`vftable'; /*0x5874b0*/
  _memset((int)(this + 1), 0, 0x34u); /*0x5874b6*/
  _memset((int)this + 0x60, 0, 0x74u); /*0x5874c3*/
  *((_DWORD *)this + 0x17) = 0xFF; /*0x5874cb*/
  *((_BYTE *)this + 0xD4) = 0; /*0x5874d2*/
  *((_DWORD *)this + 0x36) = 0; /*0x5874d9*/
  *((_BYTE *)this + 0xE4) = 0; /*0x5874e3*/
  return this; /*0x5874ec*/
}
