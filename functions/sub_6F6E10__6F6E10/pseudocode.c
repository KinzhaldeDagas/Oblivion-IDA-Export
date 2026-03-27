void __thiscall sub_6F6E10(int *this)
{
  int v1; // edi
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // esi
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v1 = *this;
  if ( *this )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v4, 0);
    v2 = *(_DWORD *)(v1 + 4);
    if ( v2 )
    {
      if ( v2 != 0xFFFFFFFF )
        *(_DWORD *)(v1 + 4) = v2 - 1;
    }
    v3 = *(_DWORD *)(v1 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v1 : 0;
    std::_Lockit::~_Lockit((std::_Lockit *)v4);
    if ( v3 )
      (**v3)(v3, 1);
  }
}
