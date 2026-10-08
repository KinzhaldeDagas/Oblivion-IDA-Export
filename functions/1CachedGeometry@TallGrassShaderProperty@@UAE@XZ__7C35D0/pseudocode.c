void __thiscall TallGrassShaderProperty::CachedGeometry::~CachedGeometry(TallGrassShaderProperty::CachedGeometry *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi

  v2 = *((_DWORD *)this + 9); /*0x7c35fa*/
  v3 = InterlockedDecrement; /*0x7c35ff*/
  if ( v2 ) /*0x7c360d*/
  {
    if ( !v3((volatile LONG *)(v2 + 8)) ) /*0x7c3613*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x7c3625*/
  }
  v4 = *((_DWORD *)this + 8); /*0x7c3627*/
  if ( v4 ) /*0x7c3631*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x7c3637*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7c3649*/
  }
  v5 = *((_DWORD *)this + 7); /*0x7c364b*/
  if ( v5 ) /*0x7c3655*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x7c365b*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c366d*/
  }
  v6 = *((_DWORD *)this + 6); /*0x7c366f*/
  if ( v6 ) /*0x7c3679*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x7c367f*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x7c3691*/
  }
  v7 = *((_DWORD *)this + 5); /*0x7c3693*/
  if ( v7 ) /*0x7c369d*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x7c36a3*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7c36b5*/
  }
  v8 = *((_DWORD *)this + 2); /*0x7c36b7*/
  if ( v8 ) /*0x7c36c1*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x7c36c7*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x7c36d9*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7c36e0*/
  v3(&MEMORY[0xB3FD64]); /*0x7c36e6*/
}
