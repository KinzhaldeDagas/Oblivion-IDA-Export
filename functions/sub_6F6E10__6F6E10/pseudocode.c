void __thiscall sub_6F6E10(int *this)
{
  int v1; // edi
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // esi
  _BYTE v4[4]; // [esp+4h] [ebp-4h] BYREF

  v1 = *this; /*0x6f6e12*/
  if ( *this )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v4, 0); /*0x6f6e1e*/
    v2 = *(_DWORD *)(v1 + 4); /*0x6f6e23*/
    if ( v2 ) /*0x6f6e28*/
    {
      if ( v2 != 0xFFFFFFFF ) /*0x6f6e2d*/
        *(_DWORD *)(v1 + 4) = v2 - 1; /*0x6f6e32*/
    }
    v3 = *(_DWORD *)(v1 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v1 : 0;
    std::_Lockit::~_Lockit((std::_Lockit *)v4); /*0x6f6e45*/
    if ( v3 ) /*0x6f6e4c*/
      (**v3)(v3, 1); /*0x6f6e56*/
  }
}
