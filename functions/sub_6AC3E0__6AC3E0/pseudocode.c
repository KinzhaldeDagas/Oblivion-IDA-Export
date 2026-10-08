LONG __thiscall sub_6AC3E0(_DWORD **this, int a2, LONG a3)
{
  LONG result; // eax
  int v5; // [esp-4h] [ebp-8h]
  int v6; // [esp+0h] [ebp-4h]

  result = a3; /*0x6ac3e0*/
  if ( a3 ) /*0x6ac3e9*/
  {
    result = *(_DWORD *)(a3 + 0x3C); /*0x6ac3eb*/
    if ( result ) /*0x6ac3f0*/
    {
      v5 = *(_DWORD *)(a3 + 0x3C); /*0x6ac3f5*/
      InterlockedIncrement((volatile LONG *)(result + 4)); /*0x6ac3ff*/
      return sub_6AA3B0(*(this + 0xC1), a2, v5, v6); /*0x6ac410*/
    }
  }
  return result; /*0x6ac415*/
}
