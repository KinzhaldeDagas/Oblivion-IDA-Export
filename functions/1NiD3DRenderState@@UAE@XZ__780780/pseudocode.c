void __thiscall NiD3DRenderState::~NiD3DRenderState(NiD3DRenderState *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // edi

  v1 = InterlockedDecrement; /*0x780781*/
  *(_DWORD *)this = &NiD3DRenderState::`vftable'; /*0x78078b*/
  v3 = *((_DWORD *)this + 0x1D); /*0x780791*/
  if ( v3 ) /*0x780796*/
  {
    if ( !v1((volatile LONG *)(v3 + 4)) ) /*0x78079c*/
      (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7807ae*/
    *((_DWORD *)this + 0x1D) = 0; /*0x7807b0*/
  }
  v4 = *((_DWORD *)this + 0x3FE); /*0x7807b7*/
  *((_DWORD *)this + 0x3FF) = 0; /*0x7807bf*/
  if ( v4 ) /*0x7807c9*/
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x7807d1*/
  *((_DWORD *)this + 0x3FE) = 0; /*0x7807d3*/
  v5 = *((_DWORD *)this + 0x3FC); /*0x7807dd*/
  if ( v5 ) /*0x7807e5*/
  {
    if ( !v1((volatile LONG *)(v5 + 4)) ) /*0x7807eb*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7807fd*/
  }
  sub_780990((_DWORD *)this + 0x3E); /*0x780805*/
  v6 = *((_DWORD *)this + 0x1D); /*0x78080a*/
  if ( v6 ) /*0x78080f*/
  {
    if ( !v1((volatile LONG *)(v6 + 4)) ) /*0x780815*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x780827*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x78082e*/
  v1(&MEMORY[0xB3FD64]); /*0x780834*/
}
