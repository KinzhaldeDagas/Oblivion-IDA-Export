_DWORD *__thiscall sub_6F6E60(_DWORD **this, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  int v4; // eax

  v2 = **(this + 9);
  v3 = a2;
  *a2 = v2;
  std::_Lockit::_Lockit((std::_Lockit *)&a2, 0);
  v4 = *(_DWORD *)(v2 + 4);
  if ( v4 != 0xFFFFFFFF )
    *(_DWORD *)(v2 + 4) = v4 + 1;
  std::_Lockit::~_Lockit((std::_Lockit *)&a2);
  return v3;
}
