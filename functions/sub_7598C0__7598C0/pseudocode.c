unsigned __int16 __thiscall sub_7598C0(unsigned __int16 *this)
{
  unsigned __int16 v2; // cx
  unsigned __int16 result; // ax
  int v4; // edi
  unsigned __int16 v5; // cx

  v2 = *(this + 0x24);
  result = *(this + 0x33);
  if ( v2 >= result )
  {
    result = v2 + *(this + 0x32);
    *(this + 0x24) = result;
  }
  else
  {
    v4 = v2;
    *(this + 0x24) = result + *(this + 0x32);
    do
    {
      if ( *(this + 0x24) <= *(this + 0x33) )
        break;
      result = (*(int (__thiscall **)(unsigned __int16 *, int))(*(_DWORD *)this + 0x58))(this, v4++);
    }
    while ( (unsigned __int16)v4 < *(this + 0x33) );
    if ( (unsigned __int16)v4 < *(this + 0x33) )
    {
      *(this + 0x24) = v4;
      *(this + 0x32) = 0;
      *(this + 0x33) = v4;
      return result;
    }
  }
  v5 = *(this + 0x24);
  *(this + 0x32) = 0;
  *(this + 0x33) = v5;
  return result;
}
