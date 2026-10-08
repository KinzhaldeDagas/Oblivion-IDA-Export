int __thiscall sub_7493D0(_DWORD *this, float a2)
{
  float *v3; // eax
  float *v4; // esi
  int result; // eax

  if ( unk_B4081C ) /*0x7493d0*/
  {
    if ( g_NiParallelUpdateTaskManager ) /*0x7493dd*/
    {                                           // 3DTheft decode 2026-05-16: NiPSys path only submits a NiPSysUpdateTask when manager byte +0x1B0 is set and the current thread matches dword_B40820.
      if ( *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0) ) /*0x7493e6*/
      {
        if ( *(float *)(*(this + 0x2D) + 0x18) > 0.0 && GetCurrentThreadId() == unk_B40820 ) /*0x74940e*/
        {
          v3 = (float *)sub_75E2E0(); /*0x749410*/
          v4 = v3; /*0x749415*/
          if ( v3 ) /*0x749419*/
          {
            sub_75DFF0(v3, (int)this, a2); /*0x749426*/
            result = (*(int (__thiscall **)(int, float *, int))(*(_DWORD *)g_NiParallelUpdateTaskManager + 0x4C))( /*0x749439*/
                       g_NiParallelUpdateTaskManager,
                       v4,
                       3);                      // 3DTheft decode 2026-05-16: NiPSysUpdateTask is submitted through g_NiParallelUpdateTaskManager vfunc +0x4C with mode 3; on failure cleanup vfunc +0x54 runs.
            if ( (_BYTE)result ) /*0x74943d*/
              return result; /*0x74943d*/
            (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 0x54))(v4); /*0x749446*/
          }
        }
      }
    }
  }
  return (*(int (__thiscall **)(_DWORD *, _DWORD))(*this + 0x9C))(this, LODWORD(a2)); /*0x74945c*/
}
