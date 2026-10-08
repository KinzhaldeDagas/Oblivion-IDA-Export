Menu *__userpurge sub_5A4810@<eax>(Menu *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, char a5)
{
  a1->__vftable = (MenuVtbl *)&HUDInfoMenu::`vftable'; /*0x5a4813*/
  dword_B3B0B4[0xA2] = 0; /*0x5a4819*/
  Menu::~Menu(a1, a2, a3, a4); /*0x5a4823*/
  if ( (a5 & 1) != 0 ) /*0x5a482d*/
    FormHeapFree((unsigned int)a1); /*0x5a4830*/
  return a1; /*0x5a483a*/
}
