void __thiscall NiBoolInterpolator::~NiBoolInterpolator(NiBoolInterpolator *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 4); /*0x6e7bb9*/
  if ( v2 ) /*0x6e7bc6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6e7bcc*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6e7be2*/
  }
  sub_6EC250(this); /*0x6e7bee*/
}
