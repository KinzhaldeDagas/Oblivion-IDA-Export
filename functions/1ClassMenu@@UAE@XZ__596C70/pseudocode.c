// ClassMenu destruction boundary. Sidecar staged custom-class selections are menu-lifetime state and must be discarded here (as well as on back/cancel) without committing them; a wrapper must preserve the caller's integer and x87 state before tail-calling the relocated prologue.
void __usercall ClassMenu::~ClassMenu(Menu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  this->__vftable = (MenuVtbl *)&ClassMenu::`vftable'; /*0x596c94*/
  FormHeapFree(*((_DWORD *)this + 0x21)); /*0x596ca1*/
  *((_DWORD *)this + 0x21) = 0; /*0x596cad*/
  *((_DWORD *)this + 0x22) = 0; /*0x596cb3*/
  Menu::~Menu(this, a2, a3, a4); /*0x596cc9*/
}
