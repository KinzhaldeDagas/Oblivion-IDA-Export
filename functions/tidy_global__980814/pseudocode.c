void __thiscall tidy_global(void *this)
{
  void *v1; // [esp+0h] [ebp-4h] BYREF

  v1 = this;
  std::_Lockit::_Lockit((std::_Lockit *)&v1, 0);
  _Deletegloballocale(&dword_BA9B58);
  dword_BA9B58 = 0;
  std::_Lockit::~_Lockit((std::_Lockit *)&v1);
}
