TextEditMenu *__thiscall TextEditMenu::TextEditMenu(TextEditMenu *this)
{
  Menu::Menu((Menu *)this); /*0x5879e9*/
  *(_DWORD *)this = &TextEditMenu::`vftable'; /*0x5879f7*/
  sub_57FE70((_DWORD *)this + 0xD); /*0x5879fd*/
  *((_DWORD *)this + 0xA) = 0; /*0x587a04*/
  *((_DWORD *)this + 0xB) = 0; /*0x587a07*/
  *((_DWORD *)this + 0xC) = 0; /*0x587a0a*/
  FormHeapFree((unsigned int)unk_B3B738.m_data); /*0x587a13*/
  unk_B3B738.m_data = 0; /*0x587a1b*/
  word_B3B73E = 0; /*0x587a21*/
  word_B3B73C = 0; /*0x587a28*/
  return this; /*0x587a31*/
}
