void __thiscall sub_6F9030(struct std::ios_base *this, int a2, char a3)
{
  char v4; // al
  bool v5; // zf

  sub_6F8AF0(this);
  *((_DWORD *)this + 0xA) = a2;
  *((_DWORD *)this + 0xB) = 0;
  v4 = sub_6F8F00((_DWORD **)this, 0x20);
  v5 = *((_DWORD *)this + 0xA) == 0;
  *((_BYTE *)this + 0x30) = v4;
  if ( v5 )
    sub_6F89A0(this, *((_BYTE *)this + 8) | 4, 0);
  if ( a3 )
    std::ios_base::_Addstd(this);
  else
    *((_DWORD *)this + 1) = 0;
}
