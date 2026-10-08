LONG __stdcall sub_7B26C0(int a1, LONG a2, int a3)
{
  LONG result; // eax
  LONG (__stdcall *v4)(volatile LONG *); // ebp
  int v5; // esi

  result = a2; /*0x7b26e8*/
  v4 = InterlockedDecrement; /*0x7b26f0*/
  *(_DWORD *)(a1 + 4) = a2; /*0x7b26f6*/
  v5 = *(_DWORD *)(a1 + 8); /*0x7b26f9*/
  if ( v5 != a3 ) /*0x7b2706*/
  {
    if ( v5 ) /*0x7b270a*/
    {
      result = v4((volatile LONG *)(v5 + 4)); /*0x7b2710*/
      if ( !result ) /*0x7b2714*/
        result = (**(int (__thiscall ***)(int, int))v5)(v5, 1); /*0x7b2722*/
    }
    *(_DWORD *)(a1 + 8) = a3; /*0x7b2726*/
    if ( a3 ) /*0x7b2729*/
      result = InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x7b272f*/
  }
  if ( a3 ) /*0x7b273f*/
  {
    result = v4((volatile LONG *)(a3 + 4)); /*0x7b2745*/
    if ( !result ) /*0x7b2749*/
      return (**(LONG (__thiscall ***)(int, int))a3)(a3, 1); /*0x7b2753*/
  }
  return result; /*0x7b2755*/
}
