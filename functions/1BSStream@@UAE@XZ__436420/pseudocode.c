void __thiscall BSStream::~BSStream(BSStream *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // edi

  *(_DWORD *)this = &BSStream::`vftable'; /*0x436449*/
  v2 = *((void (__thiscall ****)(_DWORD, int))this + 0x122); /*0x43644f*/
  if ( v2 ) /*0x43645f*/
    (**v2)(v2, 1); /*0x436467*/
  *((_DWORD *)this + 0x122) = 0; /*0x436469*/
  v3 = *((_DWORD *)this + 0x123); /*0x436473*/
  if ( v3 ) /*0x436480*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x436486*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x43649c*/
  }
  NiStream::~NiStream(this); /*0x4364a8*/
}
