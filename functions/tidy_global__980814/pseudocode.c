void __thiscall tidy_global(void *this)
{
  void *v1; // [esp+0h] [ebp-4h] BYREF

  v1 = this; /*0x980817*/
  std::_Lockit::_Lockit((std::_Lockit *)&v1, 0); /*0x98081d*/
  _Deletegloballocale(&unk_BA9B58); /*0x980827*/
  unk_BA9B58 = 0; /*0x98082c*/
  std::_Lockit::~_Lockit((std::_Lockit *)&v1); /*0x980837*/
}
