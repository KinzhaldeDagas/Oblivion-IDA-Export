void __thiscall sub_538B60(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *this;
  v3 = InterlockedDecrement;
  if ( *this )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
    {
      if ( v2 )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
    *this = 0;
  }
  v4 = *this;
  if ( *this )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
    {
      if ( v4 )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
  }
}
