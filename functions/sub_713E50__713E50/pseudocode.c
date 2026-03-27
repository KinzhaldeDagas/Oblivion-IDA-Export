LONG __thiscall sub_713E50(_DWORD *this, int a2)
{
  int v3; // ebx
  unsigned int v4; // edi
  _DWORD *v5; // esi
  LONG result; // eax

  v3 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  v4 = *(this + 0x84);
  v5 = this + 0x81;
  if ( v4 >= v5[2] )
    sub_8BCA30(v5, v4 + v5[5]);
  result = sub_8BCD40(v5, v4, &a2);
  if ( v3 )
  {
    result = InterlockedDecrement((volatile LONG *)(v3 + 4));
    if ( !result )
      return (**(LONG (__thiscall ***)(int, int))v3)(v3, 1);
  }
  return result;
}
