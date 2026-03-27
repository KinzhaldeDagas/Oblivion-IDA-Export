int __thiscall sub_477E90(_DWORD *this, int a2)
{
  int result; // eax
  _DWORD *i; // edx

  result = 0;
  if ( a2 )
  {
    for ( i = this + 0x13; *i != a2; i += 4 )
    {
      if ( ++result >= 0x10 )
        return 0;
    }
    return (int)(this + 4 * result + 0x13);
  }
  return result;
}
