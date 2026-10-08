char __thiscall sub_704380(_DWORD *this, int a2)
{
  char result; // al

  result = sub_704290(this, a2); /*0x704389*/
  if ( result ) /*0x704390*/
    return *(this + 4) == *(_DWORD *)(a2 + 0x10); /*0x70439e*/
  return result; /*0x704392*/
}
