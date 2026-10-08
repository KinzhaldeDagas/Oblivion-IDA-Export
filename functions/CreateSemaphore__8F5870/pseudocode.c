HANDLE *__thiscall CreateSemaphore(HANDLE *this, LONG lInitialCount, LONG lMaximumCount)
{
  *this = CreateSemaphoreA(0, lInitialCount, lMaximumCount, 0); /*0x8f5887*/
  return this; /*0x8f588b*/
}
