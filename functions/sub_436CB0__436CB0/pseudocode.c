void __thiscall sub_436CB0(unsigned int *this)
{
  int v2; // edi
  int v3; // edi
  int v4; // edi
  int v5; // esi

  FormHeapFree(*this);
  v2 = *(this + 1);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 1) = 0;
  }
  v3 = *(this + 2);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *(this + 2) = 0;
  }
  v4 = *(this + 2);
  if ( v4 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *(this + 1);
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
}
