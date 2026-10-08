int __thiscall ThreadSpecificInterfaceManager_AddInterface(
        ThreadSpecificInterfaceManager *this,
        int (__thiscall ***a2)(_DWORD, unsigned int))
{
  UInt32 v3; // esi
  int v4; // ebx
  DWORD CurrentThreadId; // eax
  UInt32 maxThread; // [esp-4h] [ebp-11Ch]
  CHAR OutputString[260]; // [esp+10h] [ebp-108h] BYREF

  v3 = InterlockedIncrement((volatile LONG *)&this->numCurrentThreads) - 1; /*0x431d91*/
  if ( v3 >= this->maxThread )
  {
    maxThread = this->maxThread; /*0x431dc5*/
    CurrentThreadId = GetCurrentThreadId(); /*0x431dc6*/
    _sprintf(
      OutputString,
      "Could not add new interface for thread %08X in ThreadSpecificInterfaceManager::AddInterface.  Max threads is: %i\n",
      CurrentThreadId,
      maxThread);
    OutputDebugStringA(OutputString); /*0x431de4*/
    DebugBreak(); /*0x431dea*/
    return 0; /*0x431df0*/
  }
  else
  {
    v4 = (**a2)(a2, v3); /*0x431da4*/
    *((_DWORD *)this->unk08 + 2 * v3 + 1) = v4; /*0x431da6*/
    *((_DWORD *)this->unk08 + 2 * v3) = GetCurrentThreadId(); /*0x431db3*/
    TlsSetValue(this->tlsStorage, (LPVOID)v4); /*0x431dbb*/
    return v4; /*0x431dc1*/
  }
}
