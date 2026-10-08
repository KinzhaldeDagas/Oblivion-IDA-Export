void __thiscall BSFaceGenModelMap::Entry::~Entry(BSFaceGenModelMap::Entry *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx

  v2 = *((_DWORD *)this + 2); /*0x5504fa*/
  v3 = InterlockedDecrement; /*0x5504ff*/
  if ( v2 ) /*0x55050d*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x550513*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x550525*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x55052c*/
  v3(&MEMORY[0xB3FD64]); /*0x550532*/
}
