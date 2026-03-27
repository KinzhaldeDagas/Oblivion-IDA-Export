void __thiscall sub_522260(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement;
  v3 = *(this + 0x75);
  if ( v3 )
  {
    if ( !v1((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(this + 0x75) = 0;
  }
  v4 = *(this + 0x76);
  if ( v4 )
  {
    if ( !v1((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 0x76) = 0;
  }
}
