void __thiscall sub_6DE0D0(unsigned int *this)
{
  int v2; // esi

  FormHeapFree(*this);
  FormHeapFree(*(this + 1));
  v2 = *(this + 2);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}
