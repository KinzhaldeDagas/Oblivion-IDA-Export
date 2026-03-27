unsigned int __thiscall sub_7738C0(_DWORD *this)
{
  unsigned int result; // eax
  _DWORD *i; // ecx

  result = 0;
  for ( i = this + 5; *i != 0x13; i += 3 )
  {
    if ( ++result >= 4 )
      return 4;
  }
  return result;
}
