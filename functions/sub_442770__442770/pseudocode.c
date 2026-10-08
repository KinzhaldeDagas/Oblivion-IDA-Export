int __stdcall sub_442770(int a1, int a2)
{
  int v2; // ebx
  unsigned int i; // edi
  volatile LONG *v5; // esi

  v2 = 0; /*0x44279d*/
  if ( !a1 ) /*0x4427a1*/
    return 0; /*0x4427a3*/
  for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i ) /*0x4427aa*/
  {
    v5 = *(volatile LONG **)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x4427c9*/
    if ( v5 ) /*0x4427d2*/
    {
      InterlockedIncrement(v5 + 1); /*0x4427d8*/
      if ( (*(int (__thiscall **)(volatile LONG *))(*v5 + 8))(v5) ) /*0x4427f1*/
      {
        v2 += sub_442770((int)v5, a2); /*0x442806*/
      }
      else if ( (*(int (__thiscall **)(volatile LONG *))(*v5 + 0x10))(v5) ) /*0x442811*/
      {
        if ( (_BYTE)a2 || (v5[6] & 1) == 0 ) /*0x442822*/
          v2 += *(unsigned __int16 *)(*((_DWORD *)v5 + 0x2D) + 0x40); /*0x442831*/
      }
    }
    if ( v5 ) /*0x44283d*/
    {
      if ( !InterlockedDecrement(v5 + 1) ) /*0x442843*/
        (**(void (__thiscall ***)(volatile LONG *, int))v5)(v5, 1); /*0x442855*/
    }
  }
  return v2; /*0x44286b*/
}
