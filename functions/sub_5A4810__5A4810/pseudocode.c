Menu *__userpurge sub_5A4810@<eax>(Menu *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  a1->__vftable = (MenuVtbl *)&HUDInfoMenu::`vftable';
  g_HUDInfoMenu = 0;
  Menu::~Menu(a1, a2, a3, a4);
  if ( (a5 & 1) != 0 )
    FormHeapFree((unsigned int)a1);
  return a1;
}
