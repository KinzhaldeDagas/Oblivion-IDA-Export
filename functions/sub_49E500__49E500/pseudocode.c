void __thiscall sub_49E500(_DWORD *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // edi

  sub_49D1A0((int)this); /*0x49e532*/
  v2 = *(this + 9); /*0x49e537*/
  v3 = InterlockedDecrement; /*0x49e53c*/
  if ( v2 ) /*0x49e547*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x49e54d*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x49e55f*/
  }
  v4 = *(this + 8); /*0x49e561*/
  if ( v4 ) /*0x49e56b*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x49e571*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x49e583*/
  }
  v5 = *(this + 7); /*0x49e585*/
  if ( v5 ) /*0x49e58f*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x49e595*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x49e5a7*/
  }
  v6 = *(this + 4); /*0x49e5a9*/
  if ( v6 ) /*0x49e5b3*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x49e5b9*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x49e5cb*/
  }
  v7 = *(this + 1); /*0x49e5cd*/
  if ( v7 ) /*0x49e5da*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x49e5e0*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x49e5f2*/
  }
}
