char __thiscall sub_6CE290(_BYTE *this)
{
  char result; // al
  int v3; // ecx

  result = *(this + 8) >> 5;
  if ( (*(this + 8) & 0x20) == 0 )
  {
    result = sub_6D0510((int)this);
    v3 = *((_DWORD *)this + 0xF);
    if ( v3 )
      return (*(char (__thiscall **)(int, _BYTE *, _BYTE *))(*(_DWORD *)v3 + 0x80))(v3, this + 0x14, this + 0x18);
  }
  return result;
}
