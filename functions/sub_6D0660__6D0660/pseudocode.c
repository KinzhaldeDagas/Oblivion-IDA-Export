int __thiscall NiParallelUpdateTaskManager_SubmitTaskWrapper(void *this, int a2, int a3)
{
  return (*(int (__thiscall **)(void *, _DWORD, int, int, int))(*(_DWORD *)this + 0x60))(this, 0, a2, a3, 1); /*0x6d0675*/
}
