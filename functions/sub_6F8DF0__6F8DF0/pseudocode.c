_DWORD *__thiscall sub_6F8DF0(_DWORD *this, int a2)
{
  _BYTE v5[116]; // [esp+Ch] [ebp-84h] BYREF
  int v6; // [esp+8Ch] [ebp-4h]

  *(this + 1) = a2; /*0x6f8e2f*/
  v6 = 0; /*0x6f8e3b*/
  *this = &std::codecvt<char,char,int>::`vftable'; /*0x6f8e46*/
  sub_6F84E0((struct std::_Locinfo *)v5, "C"); /*0x6f8e4c*/
  sub_6F7670((std::_Lockit *)v5); /*0x6f8e55*/
  return this; /*0x6f8e5c*/
}
