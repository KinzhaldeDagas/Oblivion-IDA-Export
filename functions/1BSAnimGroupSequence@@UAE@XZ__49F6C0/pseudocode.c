void __thiscall BSAnimGroupSequence::~BSAnimGroupSequence(BSAnimGroupSequence *this)
{
  int v2; // esi

  *(_DWORD *)this = &BSAnimGroupSequence::`vftable'; /*0x49f6e9*/
  v2 = *((_DWORD *)this + 0x1A); /*0x49f6ef*/
  if ( v2 ) /*0x49f6fc*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x49f702*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x49f718*/
  }
  NiControllerSequence::~NiControllerSequence(this); /*0x49f724*/
}
