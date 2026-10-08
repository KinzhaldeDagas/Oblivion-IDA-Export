_DWORD *__thiscall sub_6F6E60(_DWORD **this, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // eax

  v2 = **(this + 9); /*0x6f6e65*/
  v3 = a2; /*0x6f6e68*/
  *a2 = v2; /*0x6f6e7a*/
  std::_Lockit::_Lockit((std::_Lockit *)&a2, 0); /*0x6f6e7c*/
  v4 = *(_DWORD *)(v2 + 4); /*0x6f6e81*/
  if ( v4 != 0xFFFFFFFF ) /*0x6f6e87*/
    *(_DWORD *)(v2 + 4) = v4 + 1; /*0x6f6e8c*/
  std::_Lockit::~_Lockit((std::_Lockit *)&a2); /*0x6f6e93*/
  return v3; /*0x6f6e9a*/
}
