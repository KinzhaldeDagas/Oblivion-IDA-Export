unsigned __int16 __thiscall sub_74ED40(unsigned __int16 *this)
{
  unsigned __int16 v1; // dx
  unsigned __int16 result; // ax
  bool v3; // cf
  unsigned __int16 v4; // ax

  v1 = *(this + 0x32);
  if ( v1 )
  {
    v4 = *(this + 0x33);
    if ( v1 + v4 < *(this + 4) )
    {
      *(this + 0x32) = v1 + 1;
      return v1 + v4;
    }
  }
  else
  {
    result = *(this + 0x24);
    v3 = result < *(this + 4);
    *(this + 0x33) = result;
    if ( v3 )
    {
      *(this + 0x32) = 1;
      return result;
    }
  }
  return word_A877E8;
}
