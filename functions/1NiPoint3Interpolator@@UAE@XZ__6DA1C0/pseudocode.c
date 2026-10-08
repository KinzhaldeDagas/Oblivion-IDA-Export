void __thiscall NiPoint3Interpolator::~NiPoint3Interpolator(NiPoint3Interpolator *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 6); /*0x6da1e9*/
  if ( v2 ) /*0x6da1f6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6da1fc*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6da212*/
  }
  sub_6EC250(this); /*0x6da21e*/
}
