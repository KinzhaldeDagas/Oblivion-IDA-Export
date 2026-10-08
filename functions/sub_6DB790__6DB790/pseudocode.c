_DWORD *__thiscall sub_6DB790(int **this, int a2, int a3)
{
  _DWORD *result; // eax
  int *v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  bool v8; // zf

  result = (_DWORD *)NiInterpolator_CloneTimeRange(this, a2, a3); /*0x6db7c6*/
  v5 = *(this + 7); /*0x6db7cb*/
  v6 = result; /*0x6db7d0*/
  if ( v5 ) /*0x6db7d2*/
  {
    sub_6E35A0(v5, &a3, *(float *)&a2, *(float *)&a3); /*0x6db7eb*/
    sub_6DABF0(v6, a3); /*0x6db7ff*/
    v7 = a3; /*0x6db804*/
    v8 = a3 == 0; /*0x6db808*/
    v6[5] = 0; /*0x6db80a*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6db81f*/
    {
      if ( v7 ) /*0x6db82b*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6db835*/
    }
    return v6; /*0x6db837*/
  }
  return result; /*0x6db839*/
}
