_DWORD *__thiscall sub_6AA6F0(_DWORD *this, char a2)
{
  int v3; // esi

  v3 = *(this + 4); /*0x6aa6f4*/
  if ( v3 ) /*0x6aa6f9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6aa6ff*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6aa715*/
  }
  if ( (a2 & 1) != 0 ) /*0x6aa71c*/
    FormHeapFree((unsigned int)this); /*0x6aa71f*/
  return this; /*0x6aa729*/
}
