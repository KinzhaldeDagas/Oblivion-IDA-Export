VideoMenu *__thiscall VideoMenu::VideoMenu(VideoMenu *this)
{
  Menu::Menu((Menu *)this); /*0x587bc4*/
  *(_DWORD *)this = &VideoMenu::`vftable'; /*0x587bd0*/
  *((_DWORD *)this + 0x43) = 0; /*0x587bdb*/
  *((_DWORD *)this + 0x41) = 0; /*0x587be1*/
  *((_DWORD *)this + 0x42) = 0; /*0x587be7*/
  *((_DWORD *)this + 0x40) = &NiTList<VideoMenu::VideoRes>::`vftable'; /*0x587bed*/
  _memset((int)this + 0x28, 0, 0xC0u); /*0x587bf7*/
  *((_DWORD *)this + 0x3A) = 0; /*0x587bff*/
  return this; /*0x587c05*/
}
