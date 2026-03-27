int __thiscall sub_628D80(_BYTE *this)
{
  int v1; // eax

  v1 = 4;
  while ( !*(this + v1 + 0x2DC) )
  {
    if ( --v1 < 0 )
      return 0;
  }
  return *((_DWORD *)this + v1 + 0xB2);
}
