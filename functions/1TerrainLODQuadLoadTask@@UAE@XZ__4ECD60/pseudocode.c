void __thiscall TerrainLODQuadLoadTask::~TerrainLODQuadLoadTask(TerrainLODQuadLoadTask *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // edi

  *(_DWORD *)this = &TerrainLODQuadLoadTask::`vftable'; /*0x4ecd8b*/
  v2 = *((_DWORD *)this + 0xF); /*0x4ecd91*/
  v3 = InterlockedDecrement; /*0x4ecd94*/
  if ( v2 ) /*0x4ecda6*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x4ecdac*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4ecdbe*/
    *((_DWORD *)this + 0xF) = 0; /*0x4ecdc0*/
  }
  v4 = *((_DWORD *)this + 0x10); /*0x4ecdc3*/
  if ( v4 ) /*0x4ecdc8*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x4ecdce*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x4ecde0*/
    *((_DWORD *)this + 0x10) = 0; /*0x4ecde2*/
  }
  v5 = *((_DWORD *)this + 0x11); /*0x4ecde5*/
  if ( v5 ) /*0x4ecdea*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x4ecdf0*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4ece02*/
    *((_DWORD *)this + 0x11) = 0; /*0x4ece04*/
  }
  v6 = *((_DWORD *)this + 0x11); /*0x4ece07*/
  if ( v6 ) /*0x4ece11*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x4ece17*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x4ece29*/
  }
  v7 = *((_DWORD *)this + 0x10); /*0x4ece2b*/
  if ( v7 ) /*0x4ece35*/
  {
    if ( !v3((volatile LONG *)(v7 + 4)) ) /*0x4ece3b*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4ece4d*/
  }
  v8 = *((_DWORD *)this + 0xF); /*0x4ece4f*/
  if ( v8 ) /*0x4ece58*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x4ece5e*/
      (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x4ece70*/
  }
  LipTask::~LipTask(this); /*0x4ece7c*/
}
