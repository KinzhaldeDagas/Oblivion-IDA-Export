void __thiscall DistantLODShaderProperty::CachedGeometry::~CachedGeometry(
        DistantLODShaderProperty::CachedGeometry *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi

  v2 = *((_DWORD *)this + 9); /*0x7b247a*/
  v3 = InterlockedDecrement; /*0x7b247f*/
  if ( v2 ) /*0x7b248d*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x7b2493*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7b24a5*/
  }
  v4 = *((_DWORD *)this + 8); /*0x7b24a7*/
  if ( v4 ) /*0x7b24b1*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7b24b7*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7b24c9*/
  }
  v5 = *((_DWORD *)this + 7); /*0x7b24cb*/
  if ( v5 ) /*0x7b24d5*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7b24db*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7b24ed*/
  }
  v6 = *((_DWORD *)this + 6); /*0x7b24ef*/
  if ( v6 ) /*0x7b24f9*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7b24ff*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7b2511*/
  }
  v7 = *((_DWORD *)this + 2); /*0x7b2513*/
  if ( v7 ) /*0x7b251d*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x7b2523*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7b2535*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7b253c*/
  v3(&MEMORY[0xB3FD64]); /*0x7b2542*/
}
