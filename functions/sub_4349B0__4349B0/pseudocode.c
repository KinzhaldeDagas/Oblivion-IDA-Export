void __thiscall sub_4349B0(unsigned int *this)
{
  int v2; // esi
  int v3; // edi

  nullsub_returnTrue_0arg();
  v2 = *(this + 2);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 2) = 0;
  }
  nullsub_returnTrue_0arg();
  FormHeapFree(*this);
  v3 = *(this + 2);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
}
