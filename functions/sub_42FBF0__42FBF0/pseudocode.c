LONG __thiscall sub_42FBF0(LONG *this)
{
  LONG result; // eax
  volatile LONG *v2; // esi

  result = *(this + 3);
  if ( result )
  {
    v2 = (volatile LONG *)(result + 0x2C);
    result = WaitForSingleObject(*(HANDLE *)(result + 0x34), 0xFFFFFFFF);
    if ( result != 0x102 )
      return InterlockedDecrement(v2);
  }
  return result;
}
