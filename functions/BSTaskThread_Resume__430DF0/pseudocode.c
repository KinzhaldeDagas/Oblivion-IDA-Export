DWORD __thiscall BSTaskThread::Resume(PULONG *this)
{
  return ResumeThread(*(this + 1));
}
