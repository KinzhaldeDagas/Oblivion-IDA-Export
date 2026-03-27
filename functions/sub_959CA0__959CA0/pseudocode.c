void __thiscall sub_959CA0(_WORD *this)
{
  unsigned int v2; // ebp
  int v3; // ecx
  int *v4; // ebx
  unsigned __int16 v5; // ax
  int v6; // esi
  int v7; // esi

  if ( *(this + 0x11) )
  {
    v2 = 0;
    do
    {
      if ( v2 < (unsigned __int16)*(this + 0x11) )
      {
        v3 = *((_DWORD *)this + 7);
        v4 = *(int **)(v3 + 4 * v2);
        *(_DWORD *)(v3 + 4 * v2) = 0;
        if ( v4 )
          --*(this + 0x12);
        v5 = *(this + 0x11);
        if ( v2 == v5 - 1 )
          *(this + 0x11) = v5 - 1;
        if ( v4 )
        {
          v6 = v4[1];
          if ( v6 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) )
              (**(void (__thiscall ***)(int, int))v6)(v6, 1);
          }
          v7 = *v4;
          if ( *v4 )
          {
            if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
            {
              if ( v7 )
                (**(void (__thiscall ***)(int, int))v7)(v7, 1);
            }
          }
          FormHeapFree((unsigned int)v4);
        }
      }
      ++v2;
    }
    while ( v2 < (unsigned __int16)*(this + 0x11) );
  }
}
