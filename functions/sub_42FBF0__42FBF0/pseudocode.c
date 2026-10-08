LONG __thiscall sub_42FBF0(LONG *this)
{
  LONG result; // eax
  volatile LONG *v2; // esi

  result = *(this + 3); /*0x42fbf0*/
  if ( result ) /*0x42fbf5*/
  {
    v2 = (volatile LONG *)(result + 0x2C); /*0x42fbf8*/
    result = WaitForSingleObject(*(HANDLE *)(result + 0x34), 0xFFFFFFFF); /*0x42fc01*/
    if ( result != 0x102 ) /*0x42fc0c*/
      return InterlockedDecrement(v2); /*0x42fc0f*/
  }
  return result; /*0x42fc16*/
}
