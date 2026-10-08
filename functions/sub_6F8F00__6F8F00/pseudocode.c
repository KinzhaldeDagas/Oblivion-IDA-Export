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

  v2 = sub_6F6E60(this, &v9); /*0x6f8f2b*/
  v11 = 0; /*0x6f8f31*/
  v3 = sub_6F8C00(v2); /*0x6f8f39*/
  v4 = v9; /*0x6f8f3e*/
  v5 = v3; /*0x6f8f47*/
  v11 = 0xFFFFFFFF; /*0x6f8f49*/
  if ( v9 )
  {
    std::_Lockit::_Lockit((std::_Lockit *)v10, 0); /*0x6f8f59*/
    v6 = *(_DWORD *)(v4 + 4); /*0x6f8f5e*/
    if ( v6 ) /*0x6f8f63*/
    {
      if ( v6 != 0xFFFFFFFF ) /*0x6f8f68*/
        *(_DWORD *)(v4 + 4) = v6 - 1; /*0x6f8f6d*/
    }
    v7 = *(_DWORD *)(v4 + 4) == 0 ? (void (__thiscall ***)(_DWORD, int))v4 : 0;
    std::_Lockit::~_Lockit((std::_Lockit *)v10); /*0x6f8f7f*/
    if ( v7 ) /*0x6f8f86*/
      (**v7)(v7, 1); /*0x6f8f90*/
  }
  return (*(int (__thiscall **)(struct std::locale::facet *, int))(*(_DWORD *)v5 + 0x18))(v5, a2); /*0x6f8fa0*/
}
