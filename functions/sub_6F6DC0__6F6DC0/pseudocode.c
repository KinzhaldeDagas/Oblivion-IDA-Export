int __fastcall sub_6F6DC0(int a1)
{
  int v2; // eax
  int v3; // esi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v5, 0);
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 )
  {
    if ( v2 != 0xFFFFFFFF )
      *(_DWORD *)(a1 + 4) = v2 - 1;
  }
  v3 = *(_DWORD *)(a1 + 4) == 0 ? a1 : 0;
  std::_Lockit::~_Lockit((std::_Lockit *)v5);
  return v3;
}
