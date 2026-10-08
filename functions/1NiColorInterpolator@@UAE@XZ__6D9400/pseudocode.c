void __thiscall NiColorInterpolator::~NiColorInterpolator(NiColorInterpolator *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 7); /*0x6d9429*/
  if ( v2 ) /*0x6d9436*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x6d943c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6d9452*/
  }
  sub_6EC250(this); /*0x6d945e*/
}
