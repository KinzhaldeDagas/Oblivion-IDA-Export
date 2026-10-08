int NiParallelUpdateTaskManager_DestroyGlobal()
{
  int result; // eax

  if ( g_NiParallelUpdateTaskManager ) /*0x701a80*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)g_NiParallelUpdateTaskManager + 0x5C))(g_NiParallelUpdateTaskManager); /*0x701a8f*/
    if ( g_NiParallelUpdateTaskManager ) /*0x701a91*/
      result = (**(int (__thiscall ***)(int, int))g_NiParallelUpdateTaskManager)(g_NiParallelUpdateTaskManager, 1); /*0x701aa1*/
    g_NiParallelUpdateTaskManager = 0;          // 3DTheft decode 2026-05-16: shutdown path clears g_NiParallelUpdateTaskManager after vfunc +0x5C and scalar destructor. This pass did not find the construction/assignment xref. /*0x701aa3*/
  }
  return result; /*0x701aad*/
}
