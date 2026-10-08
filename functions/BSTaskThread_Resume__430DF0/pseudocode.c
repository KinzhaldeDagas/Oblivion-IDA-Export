DWORD __thiscall BSTaskThread::Resume(PULONG *this)
{
  return ResumeThread(*(this + 1)); /*0x430dfa*/
}
