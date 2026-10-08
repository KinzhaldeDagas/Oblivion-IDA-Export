void __thiscall sub_4C2180(char *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi

  v2 = *((_DWORD *)this + 0x25); /*0x4c21aa*/
  v3 = InterlockedDecrement; /*0x4c21b2*/
  if ( v2 ) /*0x4c21c0*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x4c21c6*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4c21d8*/
  }
  _LN21( /*0x4c21ec*/
    this + 0x54,
    0x10u,
    4,
    (void (__thiscall *)(void *))NiTPointerMap<unsigned int,TESGrassAreaParam * *>::~NiTPointerMap<unsigned int,TESGrassAreaParam * *>);
  v4 = *((_DWORD *)this + 5); /*0x4c21f1*/
  if ( v4 ) /*0x4c21fe*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x4c2204*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x4c2216*/
  }
}
