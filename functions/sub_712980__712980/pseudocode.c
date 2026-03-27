LONG __thiscall sub_712980(unsigned int *this, int a2)
{
  int v3; // esi
  LONG result; // eax

  v3 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  result = sub_8BCD40(this + 0x7B, *(this + 0x9A), &a2);
  if ( v3 )
  {
    result = InterlockedDecrement((volatile LONG *)(v3 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v3)(v3, 1);
  }
  return result;
}
