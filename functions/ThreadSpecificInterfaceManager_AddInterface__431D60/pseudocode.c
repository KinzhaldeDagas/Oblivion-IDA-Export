int __thiscall ThreadSpecificInterfaceManager_AddInterface(
        ThreadSpecificInterfaceManager *this,
        int (__thiscall ***a2)(_DWORD, unsigned int))
{
  UInt32 v3; // esi
  int v4; // ebx
  DWORD CurrentThreadId; // eax
  UInt32 maxThread; // [esp-4h] [ebp-11Ch]
  CHAR OutputString[260]; // [esp+10h] [ebp-108h] BYREF

  v3 = InterlockedIncrement((volatile LONG *)&this->numCurrentThreads) - 1;
  if ( v3 >= this->maxThread )
  {
    maxThread = this->maxThread;
    CurrentThreadId = GetCurrentThreadId();
    _sprintf(
      OutputString,
      "Could not add new interface for thread %08X in ThreadSpecificInterfaceManager::AddInterface.  Max threads is: %i\n",
      CurrentThreadId,
      maxThread);
    OutputDebugStringA(OutputString);
    DebugBreak();
    return 0;
  }
  else
  {
    v4 = (**a2)(a2, v3);
    *((_DWORD *)this->unk08 + 2 * v3 + 1) = v4;
    *((_DWORD *)this->unk08 + 2 * v3) = GetCurrentThreadId();
    TlsSetValue(this->tlsStorage, (LPVOID)v4);
    return v4;
  }
}
