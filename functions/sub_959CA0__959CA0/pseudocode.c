void __thiscall sub_959CA0(_WORD *this)
{
  unsigned int v2; // ebp
  int v3; // ecx
  int *v4; // ebx
  unsigned __int16 v5; // ax
  int v6; // esi
  int v7; // esi

  if ( *(this + 0x11) ) /*0x959ca3*/
  {
    v2 = 0; /*0x959cb1*/
    do /*0x959d55*/
    {
      if ( v2 < (unsigned __int16)*(this + 0x11) ) /*0x959cc6*/
      {
        v3 = *((_DWORD *)this + 7); /*0x959ccc*/
        v4 = *(int **)(v3 + 4 * v2); /*0x959ccf*/
        *(_DWORD *)(v3 + 4 * v2) = 0; /*0x959cd7*/
        if ( v4 ) /*0x959cdd*/
          --*(this + 0x12); /*0x959cdf*/
        v5 = *(this + 0x11); /*0x959ce5*/
        if ( v2 == v5 - 1 ) /*0x959cf1*/
          *(this + 0x11) = v5 - 1; /*0x959cf6*/
        if ( v4 ) /*0x959cfc*/
        {
          v6 = v4[1]; /*0x959cfe*/
          if ( v6 ) /*0x959d03*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x959d09*/
              (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x959d1f*/
          }
          v7 = *v4; /*0x959d21*/
          if ( *v4 ) /*0x959d21*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x959d2b*/
            {
              if ( v7 ) /*0x959d37*/
                (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x959d41*/
            }
          }
          FormHeapFree((unsigned int)v4); /*0x959d44*/
        }
      }
      ++v2; /*0x959d50*/
    }
    while ( v2 < (unsigned __int16)*(this + 0x11) ); /*0x959d55*/
  }
}
