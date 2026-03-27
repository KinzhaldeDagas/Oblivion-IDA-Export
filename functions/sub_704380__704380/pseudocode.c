char __thiscall sub_704380(_DWORD *this, int a2)
{
  char result; // al

  result = sub_704290(this, a2);
  if ( result )
    return *(this + 4) == *(_DWORD *)(a2 + 0x10);
  return result;
}
