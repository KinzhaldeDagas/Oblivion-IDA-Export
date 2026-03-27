char __thiscall sub_6E2C40(_DWORD *this, int a2)
{
  char result; // al

  result = sub_6ECF50(this, a2);
  if ( result )
    return *(this + 0x12) == *(_DWORD *)(a2 + 0x48);
  return result;
}
