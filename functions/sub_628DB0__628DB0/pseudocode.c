signed int __thiscall sub_628DB0(_BYTE *this)
{
  signed int result; // eax

  result = 4;
  while ( !*(this + result + 0x2DC) )
  {
    if ( --result < 0 )
      return 0;
  }
  return result;
}
