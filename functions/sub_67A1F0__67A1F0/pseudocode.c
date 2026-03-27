int *__thiscall sub_67A1F0(int *this, char a2)
{
  int v3; // esi

  v3 = *this;
  if ( *this )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
    {
      if ( v3 )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
