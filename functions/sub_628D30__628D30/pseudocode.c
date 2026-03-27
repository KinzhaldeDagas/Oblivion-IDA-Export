char __thiscall sub_628D30(_BYTE *this)
{
  int v1; // eax

  v1 = 4;
  while ( !*(this + v1 + 0x2DC) )
  {
    if ( --v1 <= 0 )
      return 1;
  }
  return 0;
}
