bool __thiscall sub_706370(_WORD *this, int a2)
{
  __int16 v3; // ax
  __int16 v4; // cx
  bool result; // al

  result = 0;
  if ( sub_6D7E00(this, a2) )
  {
    v3 = *(_WORD *)(a2 + 0x18);
    v4 = *(this + 0xC);
    if ( (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 0x30) == 0
      && (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 8) == 0 )
    {
      return 1;
    }
  }
  return result;
}
