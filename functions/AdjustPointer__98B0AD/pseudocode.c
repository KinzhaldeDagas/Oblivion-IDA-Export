int __cdecl __AdjustPointer(int a1, _DWORD *a2)
{
  int result; // eax

  result = a1 + *a2; /*0x98b0b8*/
  if ( (int)a2[1] >= 0 ) /*0x98b0be*/
    result += a2[1] + *(_DWORD *)(*(_DWORD *)(a2[1] + a1) + a2[2]); /*0x98b0ce*/
  return result; /*0x98b0d0*/
}
