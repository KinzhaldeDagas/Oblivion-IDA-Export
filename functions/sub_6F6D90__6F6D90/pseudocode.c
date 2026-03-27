void __thiscall sub_6F6D90(_DWORD *this)
{
  int v2; // eax
  _BYTE v3[4]; // [esp+4h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v3, 0);
  v2 = *(this + 1);
  if ( v2 != 0xFFFFFFFF )
    *(this + 1) = v2 + 1;
  std::_Lockit::~_Lockit((std::_Lockit *)v3);
}
