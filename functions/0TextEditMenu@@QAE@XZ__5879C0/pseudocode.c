TextEditMenu *__thiscall TextEditMenu::TextEditMenu(TextEditMenu *this)
{
  Menu::Menu((Menu *)this);
  *(_DWORD *)this = &TextEditMenu::`vftable';
  sub_57FE70((_DWORD *)this + 0xD);
  *((_DWORD *)this + 0xA) = 0;
  *((_DWORD *)this + 0xB) = 0;
  *((_DWORD *)this + 0xC) = 0;
  FormHeapFree((unsigned int)stru_B3B738.m_data);
  stru_B3B738.m_data = 0;
  stru_B3B738.m_bufLen = 0;
  stru_B3B738.m_dataLen = 0;
  return this;
}
