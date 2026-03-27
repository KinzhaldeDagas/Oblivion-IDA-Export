char __thiscall sub_6E0A20(_BYTE *this, int a2)
{
  char result; // al

  result = sub_6EC5C0(a2);
  if ( result )
    return (*(this + 0x40) ^ ~*(_BYTE *)(a2 + 0x40)) & 1;
  return result;
}
