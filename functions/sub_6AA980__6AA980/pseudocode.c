LONG __thiscall sub_6AA980(_DWORD **this, int a2, LONG a3)
{
  LONG result; // eax
  int v5; // [esp+0h] [ebp-4h]

  result = a3; /*0x6aa980*/
  if ( a3 ) /*0x6aa989*/
  {
    InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x6aa998*/
    return sub_6AA3B0(*(this + 0xC1), a2, a3, v5); /*0x6aa9a9*/
  }
  return result; /*0x6aa9ae*/
}
