int *__thiscall sub_4027F0(int *this, char a2)
{
  int v4; // esi

  if ( (a2 & 2) != 0 )
  {
    _LN21(this, 4u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7016A0);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF));
    return this + 0xFFFFFFFF;
  }
  else
  {
    v4 = *this;
    if ( *this )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
      {
        if ( v4 )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
    }
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
