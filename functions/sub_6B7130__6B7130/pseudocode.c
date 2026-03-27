int __thiscall sub_6B7130(int this, char a2)
{
  int result; // eax

  result = 0;
  if ( a2 )
  {
    if ( *(_BYTE *)(this + 0x4A) )
      return result;
    *(_BYTE *)(this + 0x4A) = 1;
    *(_WORD *)(this + 0x46) = 0x2710;
  }
  else
  {
    if ( !*(_BYTE *)(this + 0x4A) )
      return result;
    *(_BYTE *)(this + 0x4A) = 0;
    *(_WORD *)(this + 0x46) = 0;
  }
  sub_6B6F20((float *)this, *(float *)(this + 0x3C));
  return sub_6B6F20((float *)this, *(float *)(this + 0x3C));
}
