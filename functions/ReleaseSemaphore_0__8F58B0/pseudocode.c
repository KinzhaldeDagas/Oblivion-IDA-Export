BOOL __thiscall ReleaseSemaphore_0(HANDLE *this, LONG lReleaseCount)
{
  return ReleaseSemaphore(*this, lReleaseCount, 0); /*0x8f58c0*/
}
