BOOL __thiscall BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(HANDLE *this)
{
  void *v3; // [esp-4h] [ebp-Ch]

  v3 = *(this + 1);
  *this = &BSTaskThread::`vftable';
  SuspendThread(v3);
  CloseHandle(*(this + 1));
  CloseHandle(*(this + 8));
  return CloseHandle(*(this + 5));
}
