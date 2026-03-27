_DWORD *__thiscall sub_6AA6F0(_DWORD *this, char a2)
{
  int v3; // esi

  v3 = *(this + 4);
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
  }
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
