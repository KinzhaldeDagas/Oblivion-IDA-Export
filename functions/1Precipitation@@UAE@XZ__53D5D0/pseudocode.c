void __thiscall Precipitation::~Precipitation(Precipitation *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // esi

  *(_DWORD *)this = &Precipitation::`vftable'; /*0x53d5fb*/
  v2 = *((_DWORD *)this + 1); /*0x53d601*/
  v3 = InterlockedDecrement; /*0x53d604*/
  if ( v2 ) /*0x53d616*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x53d61c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x53d62e*/
    *((_DWORD *)this + 1) = 0; /*0x53d630*/
  }
  v4 = *((_DWORD *)this + 2); /*0x53d633*/
  if ( v4 ) /*0x53d638*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x53d63e*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x53d650*/
    *((_DWORD *)this + 2) = 0; /*0x53d652*/
  }
  *((_DWORD *)this + 5) = 0; /*0x53d655*/
  v5 = *((_DWORD *)this + 2); /*0x53d658*/
  if ( v5 ) /*0x53d661*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x53d667*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x53d679*/
  }
  v6 = *((_DWORD *)this + 1); /*0x53d67b*/
  if ( v6 ) /*0x53d688*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x53d68e*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x53d6a0*/
  }
}
