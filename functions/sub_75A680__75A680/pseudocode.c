LONG __thiscall sub_75A680(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  int v5; // ebx

  sub_752CB0(a2);
  result = sub_7124A0(a2);
  v4 = *(this + 6);
  v5 = result;
  if ( v4 != result )
  {
    if ( v4 )
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *(this + 6) = v5;
    if ( v5 )
      return InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  return result;
}
