_DWORD *__thiscall sub_7562D0(_DWORD *this, char a2)
{
  int v3; // esi

  v3 = *(this + 0xA); /*0x7562d4*/
  if ( v3 ) /*0x7562d9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x7562df*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7562f5*/
  }
  NiRefObject_destr(this); /*0x7562f9*/
  if ( (a2 & 1) != 0 ) /*0x756303*/
    FormHeapFree((unsigned int)this); /*0x756306*/
  return this; /*0x756310*/
}
