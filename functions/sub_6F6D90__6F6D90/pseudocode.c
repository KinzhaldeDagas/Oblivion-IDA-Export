void __thiscall sub_6F6D90(_DWORD *this)
{
  int v2; // eax
  _BYTE v3[4]; // [esp+4h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v3, 0); /*0x6f6d9a*/
  v2 = *(this + 1); /*0x6f6d9f*/
  if ( v2 != 0xFFFFFFFF ) /*0x6f6da5*/
    *(this + 1) = v2 + 1; /*0x6f6daa*/
  std::_Lockit::~_Lockit((std::_Lockit *)v3); /*0x6f6db1*/
}
