BOOL __thiscall BSTaskManagerThread<__int64>::~BSTaskManagerThread<__int64>(HANDLE *this)
{
  void *v3; // [esp-4h] [ebp-Ch]

  v3 = *(this + 1); /*0x430e77*/
  *this = &BSTaskThread::`vftable'; /*0x430e78*/
  SuspendThread(v3); /*0x430e7e*/
  CloseHandle(*(this + 1)); /*0x430e8e*/
  CloseHandle(*(this + 8)); /*0x430e94*/
  return CloseHandle(*(this + 5)); /*0x430e9c*/
}
