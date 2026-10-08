LONG __thiscall sub_75DF80(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement; /*0x75df81*/
  *this = &NiPSysUpdateTask::`vftable'; /*0x75df8b*/
  v3 = *(this + 3); /*0x75df91*/
  if ( v3 ) /*0x75df96*/
  {
    if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x75df9c*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x75dfae*/
    *(this + 3) = 0; /*0x75dfb0*/
  }
  v4 = *(this + 3); /*0x75dfb7*/
  if ( v4 ) /*0x75dfbc*/
  {
    if ( !v1((volatile LONG *)(v4 + 4)) ) /*0x75dfc2*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x75dfd4*/
  }
  *this = &NiTask::`vftable'; /*0x75dfd6*/
  return NiRefObject_destr(this); /*0x75dfde*/
}
