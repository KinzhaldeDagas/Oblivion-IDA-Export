char __thiscall TESSaveLoadGame_ClearFormModifier(_DWORD **this, int a2, int a3)
{
  char result; // al

  result = a2;
  if ( (*(_DWORD *)(a2 + 8) & 0x4000) == 0 )
    return sub_452D60(*this, a2, a3);
  return result;
}
