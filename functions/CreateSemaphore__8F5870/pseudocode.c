HANDLE *__thiscall CreateSemaphore(HANDLE *this, LONG lInitialCount, LONG lMaximumCount)
{
  *this = CreateSemaphoreA(0, lInitialCount, lMaximumCount, 0);
  return this;
}
