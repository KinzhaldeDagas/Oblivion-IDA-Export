void __thiscall sub_573950(unsigned int *this)
{
  int v2; // ebp
  unsigned int *v3; // ebx
  unsigned int v4; // esi

  v2 = 0; /*0x573954*/
  if ( *(this + 0xE) ) /*0x573956*/
  {
    v3 = this + 3; /*0x57395c*/
    do /*0x573996*/
    {
      if ( v2 >= *(_DWORD *)(*(this + 0xE) + 4) ) /*0x573966*/
        break; /*0x573966*/
      v4 = *v3; /*0x573968*/
      if ( *v3 ) /*0x573968*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x573972*/
        {
          if ( v4 ) /*0x57397e*/
            (**(void (__thiscall ***)(unsigned int, int))v4)(v4, 1); /*0x573988*/
        }
        *v3 = 0; /*0x57398a*/
      }
      ++v2; /*0x573990*/
      ++v3; /*0x573993*/
    }
    while ( *(this + 0xE) ); /*0x573996*/
  }
  FormHeapFree(*(this + 0xE)); /*0x5739a2*/
  *(this + 0xE) = 0; /*0x5739aa*/
}
