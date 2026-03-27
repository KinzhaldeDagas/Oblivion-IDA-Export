_DWORD *__thiscall sub_6B9B40(_DWORD *this, int a2)
{
  int v3; // esi
  _DWORD *result; // eax

  v3 = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  result = sub_7C16B0(this + 4, &a2);
  if ( v3 )
  {
    result = (_DWORD *)InterlockedDecrement((volatile LONG *)(v3 + 4));
    if ( !result )
      return (**(_DWORD *(__thiscall ***)(int, int))v3)(v3, 1);
  }
  return result;
}
