void __thiscall NiBSplineInterpolator::~NiBSplineInterpolator(NiBSplineInterpolator *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  *(_DWORD *)this = &NiBSplineInterpolator::`vftable'; /*0x6ed1da*/
  v2 = *((_DWORD *)this + 6); /*0x6ed1e0*/
  v3 = InterlockedDecrement; /*0x6ed1e5*/
  if ( v2 ) /*0x6ed1f3*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6ed1f9*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ed20b*/
  }
  v4 = *((_DWORD *)this + 5); /*0x6ed20d*/
  if ( v4 ) /*0x6ed217*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6ed21d*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6ed22f*/
  }
  sub_6EBA30(this); /*0x6ed23b*/
}
