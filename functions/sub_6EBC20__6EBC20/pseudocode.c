void __thiscall sub_6EBC20(_DWORD *this, int a2, int a3)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v5; // esi
  int v6; // esi

  v3 = InterlockedDecrement;
  v5 = *(this + 3);
  if ( v5 != a2 )
  {
    if ( v5 )
    {
      if ( !v3((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(this + 3) = a2;
    if ( a2 )
      InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v6 = *(this + 4);
  if ( v6 != a3 )
  {
    if ( v6 )
    {
      if ( !v3((volatile LONG *)(v6 + 4)) )
        (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    }
    *(this + 4) = a3;
    if ( a3 )
      InterlockedIncrement((volatile LONG *)(a3 + 4));
  }
}
