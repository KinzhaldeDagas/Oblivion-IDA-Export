_DWORD *__thiscall sub_6E3B20(int **this, int a2, int a3)
{
  _DWORD *result; // eax
  int *v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  bool v8; // zf

  result = (_DWORD *)NiInterpolator_CloneTimeRange(this, a2, a3); /*0x6e3b56*/
  v5 = *(this + 7); /*0x6e3b5b*/
  v6 = result; /*0x6e3b60*/
  if ( v5 ) /*0x6e3b62*/
  {
    sub_6E46A0(v5, &a3, *(float *)&a2, *(float *)&a3); /*0x6e3b7b*/
    sub_6DABF0(v6, a3); /*0x6e3b8f*/
    v7 = a3; /*0x6e3b94*/
    v8 = a3 == 0; /*0x6e3b98*/
    v6[8] = 0; /*0x6e3b9a*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6e3baf*/
    {
      if ( v7 ) /*0x6e3bbb*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6e3bc5*/
    }
    return v6; /*0x6e3bc7*/
  }
  return result; /*0x6e3bc9*/
}
