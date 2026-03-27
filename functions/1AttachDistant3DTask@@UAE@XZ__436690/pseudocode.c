void __thiscall AttachDistant3DTask::~AttachDistant3DTask(AttachDistant3DTask *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 7);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  *(_DWORD *)this = &BSTask<__int64>::`vftable';
  InterlockedDecrement(&Addend);
}
