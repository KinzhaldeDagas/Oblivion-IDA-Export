void __thiscall TerrainLODQuadLoadTask::~TerrainLODQuadLoadTask(TerrainLODQuadLoadTask *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi

  *(_DWORD *)this = &TerrainLODQuadLoadTask::`vftable';
  v2 = *((_DWORD *)this + 0xF);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0xF) = 0;
  }
  v4 = *((_DWORD *)this + 0x10);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *((_DWORD *)this + 0x10) = 0;
  }
  v5 = *((_DWORD *)this + 0x11);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *((_DWORD *)this + 0x11) = 0;
  }
  v6 = *((_DWORD *)this + 0x11);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *((_DWORD *)this + 0x10);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *((_DWORD *)this + 0xF);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  LipTask::~LipTask(this);
}
