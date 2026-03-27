int __thiscall sub_939340(unsigned __int8 *this, __int16 a2)
{
  int result; // eax
  unsigned __int8 *i; // edx

  result = 0;
  if ( *(this + 0x32) )
  {
    for ( i = this + 0x36; *(_WORD *)i != 0xFFFF; i += 8 )
    {
      if ( ++result >= *(this + 0x32) )
        return result;
    }
    *((_WORD *)this + 4 * result + 0x1B) = a2;
  }
  return result;
}
