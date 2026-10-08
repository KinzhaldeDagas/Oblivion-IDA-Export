void __thiscall AttachDistant3DTask::~AttachDistant3DTask(AttachDistant3DTask *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 7); /*0x4366ba*/
  if ( v2 ) /*0x4366cd*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4366d3*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4366e5*/
  }
  *(_DWORD *)this = &BSTask<__int64>::`vftable'; /*0x4366ec*/
  InterlockedDecrement(&MEMORY[0xB33A20]); /*0x4366f2*/
}
