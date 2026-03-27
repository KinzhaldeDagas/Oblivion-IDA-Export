std::_Lockit *__thiscall std::_Lockit::_Lockit(std::_Lockit *this, char a2)
{
  int v2; // eax

  v2 = a2 & 3;
  *(_DWORD *)this = v2;
  sub_980D6F((LPCRITICAL_SECTION)(&stru_BA9AF0 + v2));
  return this;
}
