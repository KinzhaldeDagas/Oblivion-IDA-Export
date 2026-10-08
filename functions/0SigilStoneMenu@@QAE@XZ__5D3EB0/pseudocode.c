SigilStoneMenu *__thiscall SigilStoneMenu::SigilStoneMenu(SigilStoneMenu *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax

  Menu::Menu((Menu *)this); /*0x5d3edb*/
  *(_DWORD *)this = &SigilStoneMenu::`vftable'; /*0x5d3ee8*/
  *((_DWORD *)this + 0xC) = 0; /*0x5d3eee*/
  *((_DWORD *)this + 0xD) = 0; /*0x5d3ef1*/
  *((_DWORD *)this + 0xE) = 0; /*0x5d3ef4*/
  *((_DWORD *)this + 0xF) = 0; /*0x5d3ef7*/
  *((_DWORD *)this + 0x10) = 0; /*0x5d3efa*/
  *((_DWORD *)this + 0x11) = 0; /*0x5d3efd*/
  *((_DWORD *)this + 0x12) = 0; /*0x5d3f00*/
  *((_DWORD *)this + 0x13) = 0; /*0x5d3f03*/
  *((_DWORD *)this + 0x14) = 0; /*0x5d3f06*/
  *((_DWORD *)this + 0x15) = 0; /*0x5d3f09*/
  *((_DWORD *)this + 0x16) = 0; /*0x5d3f0c*/
  *((_DWORD *)this + 0x17) = 0; /*0x5d3f0f*/
  *((_DWORD *)this + 0x18) = 0; /*0x5d3f12*/
  *((_DWORD *)this + 0xB) = 0; /*0x5d3f15*/
  *((_BYTE *)this + 0x78) = 1; /*0x5d3f18*/
  *((_DWORD *)this + 0x1B) = 0; /*0x5d3f1c*/
  *((_DWORD *)this + 0xA) = 0; /*0x5d3f1f*/
  *((_DWORD *)this + 0x1C) = 0; /*0x5d3f22*/
  *((_DWORD *)this + 0x19) = 0; /*0x5d3f25*/
  *((_DWORD *)this + 0x1A) = 0; /*0x5d3f28*/
  v2 = (_DWORD *)FormHeapAlloc(0x28u); /*0x5d3f2b*/
  if ( v2 ) /*0x5d3f3e*/
    v3 = sub_57FE70(v2); /*0x5d3f42*/
  else
    v3 = 0; /*0x5d3f49*/
  *((_DWORD *)this + 0x1D) = v3; /*0x5d3f4b*/
  *((_DWORD *)this + 0x1F) = 0; /*0x5d3f4e*/
  return this; /*0x5d3f53*/
}
