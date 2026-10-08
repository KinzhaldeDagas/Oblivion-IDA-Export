LONG __stdcall sub_4A1C70(int a1, LONG a2, int a3)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // esi

  result = a2; /*0x4a1c98*/
  v4 = InterlockedDecrement; /*0x4a1ca0*/
  *(_DWORD *)(a1 + 4) = a2; /*0x4a1ca6*/
  v5 = *(_DWORD *)(a1 + 8); /*0x4a1ca9*/
  if ( v5 != a3 ) /*0x4a1cb6*/
  {
    if ( v5 ) /*0x4a1cba*/
    {
      result = v4((volatile LONG *)(v5 + 4)); /*0x4a1cc0*/
      if ( !result ) /*0x4a1cc4*/
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x4a1cd2*/
    }
    *(_DWORD *)(a1 + 8) = a3; /*0x4a1cd6*/
    if ( a3 ) /*0x4a1cd9*/
      result = InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x4a1cdf*/
  }
  if ( a3 ) /*0x4a1cef*/
  {
    result = v4((volatile LONG *)(a3 + 4)); /*0x4a1cf5*/
    if ( !result ) /*0x4a1cf9*/
      return (**(LONG (__thiscall ***)(int, int))a3)(a3, 1); /*0x4a1d03*/
  }
  return result; /*0x4a1d05*/
}
