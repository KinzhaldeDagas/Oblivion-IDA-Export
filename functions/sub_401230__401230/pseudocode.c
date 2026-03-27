int __thiscall sub_401230(_DWORD *this, signed int a2)
{
  if ( a2 <= 0x1000 )
    return (a2 - *(this + 1)) / 0x100;
  else
    return 0xFFFFFFFF;
}
