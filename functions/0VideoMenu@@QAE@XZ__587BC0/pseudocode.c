VideoMenu *__thiscall VideoMenu::VideoMenu(VideoMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &VideoMenu::`vftable';
  *((_DWORD *)this + 0x43) = 0;
  *((_DWORD *)this + 0x41) = 0;
  *((_DWORD *)this + 0x42) = 0;
  *((_DWORD *)this + 0x40) = &NiTList<VideoMenu::VideoRes>::`vftable';
  _memset((char *)this + 0x28, 0, 0xC0);
  *((_DWORD *)this + 0x3A) = 0;
  return this;
}
