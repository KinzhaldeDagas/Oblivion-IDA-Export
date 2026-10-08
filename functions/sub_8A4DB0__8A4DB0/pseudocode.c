void __thiscall sub_8A4DB0(int *this)
{
  int *v2; // edi
  int v3; // ebp
  int v4; // esi
  int v5; // esi

  if ( *(this + 1) ) /*0x8a4db3*/
  {
    do /*0x8a4dfa*/
    {
      v2 = (int *)*(this + 1); /*0x8a4dc0*/
      v3 = v2[1]; /*0x8a4dc5*/
      if ( v2 ) /*0x8a4dc8*/
      {
        v4 = *v2; /*0x8a4dca*/
        if ( *v2 ) /*0x8a4dca*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x8a4dd4*/
          {
            if ( v4 ) /*0x8a4de0*/
              (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x8a4dea*/
          }
        }
        FormHeapFree((unsigned int)v2); /*0x8a4ded*/
      }
      *(this + 1) = v3; /*0x8a4df7*/
    }
    while ( v3 ); /*0x8a4dfa*/
  }
  v5 = *this; /*0x8a4dfe*/
  if ( *this ) /*0x8a4dfe*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x8a4e08*/
    {
      if ( v5 ) /*0x8a4e14*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x8a4e1e*/
    }
    *this = 0; /*0x8a4e20*/
  }
}
