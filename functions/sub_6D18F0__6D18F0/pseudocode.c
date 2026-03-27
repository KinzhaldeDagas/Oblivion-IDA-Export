char __thiscall sub_6D18F0(_DWORD *this, int a2)
{
  char result; // al

  result = sub_6EC5C0(a2);
  if ( result )
    return *(this + 0x15) == *(_DWORD *)(a2 + 0x54);
  return result;
}
