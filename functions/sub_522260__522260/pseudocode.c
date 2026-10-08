void __thiscall sub_522260(_DWORD *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebx
  int v3; // esi
  int v4; // esi

  v1 = InterlockedDecrement; /*0x522261*/
  v3 = *(this + 0x75); /*0x52226b*/
  if ( v3 ) /*0x522273*/
  {
    if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x522279*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x52228b*/
    *(this + 0x75) = 0; /*0x52228d*/
  }
  v4 = *(this + 0x76); /*0x522297*/
  if ( v4 ) /*0x52229f*/
  {
    if ( !v1((volatile LONG *)(v4 + 4)) ) /*0x5222a5*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x5222b7*/
    *(this + 0x76) = 0; /*0x5222b9*/
  }
}
