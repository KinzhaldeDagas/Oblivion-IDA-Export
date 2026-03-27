int *__thiscall sub_8C6880(int *this, int *a2)
{
  int v3; // esi
  int v4; // eax
  bool v5; // zf

  v3 = *this;
  if ( *this != *a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
    v4 = *a2;
    v5 = *a2 == 0;
    *this = *a2;
    if ( !v5 )
      InterlockedIncrement((volatile LONG *)(v4 + 4));
  }
  *(this + 1) = a2[1];
  return this;
}
