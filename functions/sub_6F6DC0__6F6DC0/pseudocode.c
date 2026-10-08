int __fastcall sub_6F6DC0(int a1)
{
  int v2; // eax
  int v3; // esi
  _BYTE v5[4]; // [esp+8h] [ebp-4h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)v5, 0); /*0x6f6dcb*/
  v2 = *(_DWORD *)(a1 + 4); /*0x6f6dd0*/
  if ( v2 ) /*0x6f6dd5*/
  {
    if ( v2 != 0xFFFFFFFF ) /*0x6f6dda*/
      *(_DWORD *)(a1 + 4) = v2 - 1; /*0x6f6ddf*/
  }
  v3 = *(_DWORD *)(a1 + 4) == 0 ? a1 : 0;
  std::_Lockit::~_Lockit((std::_Lockit *)v5); /*0x6f6df1*/
  return v3; /*0x6f6df6*/
}
