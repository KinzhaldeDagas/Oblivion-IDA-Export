void __thiscall NiD3DRenderState::~NiD3DRenderState(NiD3DRenderState *this)
{
  LONG (__stdcall *v1)(volatile LONG *); // ebp
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // edi

  v1 = InterlockedDecrement;
  *(_DWORD *)this = &NiD3DRenderState::`vftable';
  v3 = *((_DWORD *)this + 0x1D);
  if ( v3 )
  {
    if ( !v1((volatile LONG *)(v3 + 4)) )
      (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    *((_DWORD *)this + 0x1D) = 0;
  }
  v4 = *((_DWORD *)this + 0x3FE);
  *((_DWORD *)this + 0x3FF) = 0;
  if ( v4 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v4 + 8))(v4);
  *((_DWORD *)this + 0x3FE) = 0;
  v5 = *((_DWORD *)this + 0x3FC);
  if ( v5 )
  {
    if ( !v1((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  sub_780990((_DWORD *)this + 0x3E);
  v6 = *((_DWORD *)this + 0x1D);
  if ( v6 )
  {
    if ( !v1((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  v1(&NiRefObject_objcount);
}
