// 3DTheft decode 2026-05-16: if manager exists, calls manager vfunc +0x60 with args (1, manager+0x19C, 0, 0), then clears byte +0x1B0. manager+0x19C is the observed embedded signal-task argument.
int NiParallelUpdateTaskManager_SubmitSignalTask()
{
  int result; // eax

  if ( g_NiParallelUpdateTaskManager ) /*0x701ad0*/
  {
    result = (*(int (__stdcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)g_NiParallelUpdateTaskManager + 0x60))( /*0x701aec*/
               1,
               g_NiParallelUpdateTaskManager + 0x19C,
               0,
               0);
    *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0) = 0; /*0x701af4*/
  }
  return result; /*0x701afb*/
}
