void __thiscall sub_6EBB40(_DWORD *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *(this + 4); /*0x6ebb6a*/
  v3 = InterlockedDecrement; /*0x6ebb6f*/
  if ( v2 ) /*0x6ebb7d*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x6ebb83*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x6ebb95*/
  }
  v4 = *(this + 3); /*0x6ebb97*/
  if ( v4 ) /*0x6ebba1*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x6ebba7*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6ebbb9*/
  }
  *this = &NiTask::`vftable'; /*0x6ebbc5*/
  NiRefObject_destr(this); /*0x6ebbcb*/
}
