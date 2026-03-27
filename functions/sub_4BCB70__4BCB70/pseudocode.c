int *__thiscall sub_4BCB70(int *this, int a2)
{
  int v3; // esi

  v3 = *this;
  if ( *this != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 8)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *this = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 8));
  }
  return this;
}
