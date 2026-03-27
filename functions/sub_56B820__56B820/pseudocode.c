void __thiscall sub_56B820(_DWORD *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  *this = &BSTECreateTask::`vftable';
  v2 = *(this + 3);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 3) = 0;
  }
  v4 = *(this + 3);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  *this = &NiTask::`vftable';
  NiRefObject_destr(this);
}
