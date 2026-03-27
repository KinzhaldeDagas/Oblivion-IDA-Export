unsigned int __stdcall sub_8A70C0(signed int a1)
{
  if ( a1 <= 0x10 )
    return a1 + 8;
  else
    return ((a1 + 0xF) & 0xFFFFFFF0) + 0x10;
}
