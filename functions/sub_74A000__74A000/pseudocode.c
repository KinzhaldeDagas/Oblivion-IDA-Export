int *__thiscall sub_74A000(int *this, char a2)
{
  _DWORD *v3; // ebx
  int v4; // ebp
  int *v5; // edi
  int i; // ebp
  int v7; // esi
  int v9; // esi

  if ( (a2 & 2) != 0 )
  {
    v3 = this + 0xFFFFFFFF;
    v4 = *(this + 0xFFFFFFFF);
    v5 = this + v4;
    for ( i = v4 - 1; i >= 0; --i )
    {
      v7 = v5[0xFFFFFFFF];
      v5 += 0xFFFFFFFF;
      if ( v7 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
          (**(void (__thiscall ***)(int, int))v7)(v7, 1);
      }
    }
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)v3);
    return v3;
  }
  else
  {
    v9 = *this;
    if ( *this )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
      {
        if ( v9 )
          (**(void (__thiscall ***)(int, int))v9)(v9, 1);
      }
    }
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
