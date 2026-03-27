int __thiscall sub_6F8F00(_DWORD **this, int a2)
{
  int *v2; // eax
  struct std::locale::facet *v3; // eax
  int v4; // edi
  struct std::locale::facet *v5; // ebx
  int v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v9; // [esp+10h] [ebp-14h] BYREF
  _BYTE v10[4]; // [esp+14h] [ebp-10h] BYREF
  unsigned int v11; // [esp+20h] [ebp-4h]

  v2 = sub_6F6E60(this, &v9);
  v11 = 0;
  v3 = sub_6F8C00(v2);
  v4 = v9;
  v5 = v3;
  v11 = 0xFFFFFFFF;
  if ( v9 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v10, 0);
    v6 = *(_DWORD *)(v4 + 4);
    if ( v6 )
    {
      if ( v6 != 0xFFFFFFFF )
        *(_DWORD *)(v4 + 4) = v6 - 1;
    }
    v7 = *(_DWORD *)(v4 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v4 : 0;
    std::_Lockit::~_Lockit((std::_Lockit *)v10);
    if ( v7 )
      (**v7)(v7, 1);
  }
  return (*(int (__thiscall **)(struct std::locale::facet *, int))(*(_DWORD *)v5 + 0x18))(v5, a2);
}
