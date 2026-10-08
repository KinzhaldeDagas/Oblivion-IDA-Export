int __thiscall sub_9A4310(_WORD *this)
{
  int result; // eax
  unsigned __int16 i; // bp
  int v4; // edx
  int v5; // esi
  _DWORD *v6; // ebx

  result = 0; /*0x9a4314*/
  for ( i = 0; i < *(this + 5); ++i ) /*0x9a4318*/
  {
    v4 = *((_DWORD *)this + 1); /*0x9a4320*/
    v5 = *(_DWORD *)(v4 + 4 * i); /*0x9a4326*/
    v6 = (_DWORD *)(v4 + 4 * i); /*0x9a432b*/
    if ( v5 ) /*0x9a432e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x9a4334*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x9a434a*/
      *v6 = 0; /*0x9a434c*/
      result = 0; /*0x9a4352*/
    }
  }
  *(this + 6) = 0; /*0x9a435f*/
  *(this + 5) = 0; /*0x9a4363*/
  return result; /*0x9a4367*/
}
