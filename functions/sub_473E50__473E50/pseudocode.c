char __thiscall sub_473E50(_DWORD **this, int a2)
{
  void (__thiscall ***v2)(_DWORD, int); // esi
  int v4; // ecx

  v2 = (void (__thiscall ***)(_DWORD, int))a2;
  if ( !InterlockedDecrement((volatile LONG *)(a2 + 4)) )
  {
    if ( v2 )
      (**v2)(v2, 1);
  }
  sub_776690(*(this + 1), &a2);
  v4 = (int)*(this + 1);
  if ( *(_DWORD *)(v4 + 0xC) )
    return 0;
  if ( v4 )
    (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  *(this + 1) = 0;
  return 1;
}
