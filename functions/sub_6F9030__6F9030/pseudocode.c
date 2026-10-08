void __thiscall sub_6F9030(struct std::ios_base *this, int a2, char a3)
{
  char v4; // al
  bool v5; // zf

  sub_6F8AF0(this); /*0x6f9033*/
  *((_DWORD *)this + 0xA) = a2; /*0x6f9040*/
  *((_DWORD *)this + 0xB) = 0; /*0x6f9043*/
  v4 = sub_6F8F00((_DWORD **)this, 0x20); /*0x6f904a*/
  v5 = *((_DWORD *)this + 0xA) == 0; /*0x6f904f*/
  *((_BYTE *)this + 0x30) = v4; /*0x6f9053*/
  if ( v5 ) /*0x6f9056*/
    sub_6F89A0(this, *((_BYTE *)this + 8) | 4, 0); /*0x6f9063*/
  if ( a3 ) /*0x6f906d*/
    std::ios_base::_Addstd(this); /*0x6f9070*/
  else
    *((_DWORD *)this + 1) = 0; /*0x6f907c*/
}
