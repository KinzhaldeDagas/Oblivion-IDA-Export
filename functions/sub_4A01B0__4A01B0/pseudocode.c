unsigned __int8 __thiscall sub_4A01B0(_BYTE *this, int a2)
{
  unsigned __int8 result; // al
  int v3; // edx

  result = *(this + 0xEC);
  if ( result != 1 )
  {
    v3 = result;
    result = a2;
    if ( a2 != v3 )
      *(this + 0xEC) = a2;
  }
  return result;
}
