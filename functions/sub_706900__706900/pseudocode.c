char __thiscall sub_706900(_BYTE *this, int a2)
{
  char result; // al

  result = sub_6D7E00(this, a2);
  if ( result )
    return (*(this + 0x18) ^ ~*(_BYTE *)(a2 + 0x18)) & 1;
  return result;
}
