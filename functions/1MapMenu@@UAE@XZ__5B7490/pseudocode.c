void __usercall MapMenu::~MapMenu(MapMenu *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx

  *(_DWORD *)this = &MapMenu::`vftable'; /*0x5b74b4*/
  v5 = *((_DWORD **)this + 0x31); /*0x5b74ba*/
  if ( v5 ) /*0x5b74c2*/
  {
    BSSimpleList_Clear(v5); /*0x5b74c4*/
    FormHeapFree(*((_DWORD *)this + 0x31)); /*0x5b74d0*/
  }
  v6 = *((_DWORD **)this + 0x32); /*0x5b74d8*/
  if ( v6 ) /*0x5b74e0*/
  {
    BSSimpleList_Clear(v6); /*0x5b74e2*/
    FormHeapFree(*((_DWORD *)this + 0x32)); /*0x5b74ee*/
  }
  FormHeapFree(*((_DWORD *)this + 0x2C)); /*0x5b74fd*/
  *((_DWORD *)this + 0x2C) = 0; /*0x5b7507*/
  *((_WORD *)this + 0x5B) = 0; /*0x5b7511*/
  *((_WORD *)this + 0x5A) = 0; /*0x5b751a*/
  Menu::~Menu((Menu *)this, a2, a3, a4); /*0x5b752b*/
}
