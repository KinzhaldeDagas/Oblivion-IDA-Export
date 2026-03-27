void __thiscall sub_7B7170(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi
  int v5; // esi
  int v6; // esi

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
  v4 = *(this + 1);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 1) = 0;
  }
  v5 = *(this + 1);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  v6 = *this;
  if ( *this )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
    {
      if ( v6 )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
  }
}
