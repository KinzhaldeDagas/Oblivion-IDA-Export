_DWORD *__thiscall sub_532DF0(_DWORD *this, int a2)
{
  *this = 0;
  if ( a2 )
  {
    *this = a2;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  *(this + 1) = 0;
  if ( a2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
      (**(void (__thiscall ***)(int, int))a2)(a2, 1);
  }
  return this;
}
