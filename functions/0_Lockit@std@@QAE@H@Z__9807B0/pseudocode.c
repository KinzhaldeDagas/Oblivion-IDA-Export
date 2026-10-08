std::_Lockit *__thiscall std::_Lockit::_Lockit(std::_Lockit *this, char a2)
{
  int v2; // eax

  v2 = a2 & 3; /*0x9807b4*/
  *(_DWORD *)this = v2; /*0x9807ba*/
  sub_980D6F((LPCRITICAL_SECTION)(&unk_BA9AF0 + v2)); /*0x9807c5*/
  return this; /*0x9807cd*/
}
