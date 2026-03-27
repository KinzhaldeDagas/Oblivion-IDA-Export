bool __thiscall sub_706BD0(_WORD *this, int a2)
{
  __int16 v3; // ax
  __int16 v4; // cx
  bool result; // al

  result = 0;
  if ( sub_6D7E00(this, a2) )
  {
    if ( ((*((_BYTE *)this + 0x18) ^ *(_BYTE *)(a2 + 0x18)) & 1) == 0 )
    {
      v3 = *(_WORD *)(a2 + 0x18);
      v4 = *(this + 0xC);
      if ( ((((unsigned __int8)v4 >> 1) ^ ((unsigned __int8)v3 >> 1)) & 1) == 0
        && (((unsigned __int8)v4 ^ (unsigned __int8)v3) & 0x3C) == 0 )
      {
        return 1;
      }
    }
  }
  return result;
}
