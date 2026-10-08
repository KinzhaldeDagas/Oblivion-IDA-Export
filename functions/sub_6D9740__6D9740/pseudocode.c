_DWORD *__thiscall sub_6D9740(int **this, int a2, int a3)
{
  _DWORD *result; // eax
  int *v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  bool v8; // zf

  result = (_DWORD *)NiInterpolator_CloneTimeRange(this, a2, a3); /*0x6d9776*/
  v5 = *(this + 7); /*0x6d977b*/
  v6 = result; /*0x6d9780*/
  if ( v5 ) /*0x6d9782*/
  {
    sub_6D8E70(v5, &a3, *(float *)&a2, *(float *)&a3); /*0x6d979b*/
    sub_6DABF0(v6, a3); /*0x6d97af*/
    v7 = a3; /*0x6d97b4*/
    v8 = a3 == 0; /*0x6d97b8*/
    v6[8] = 0; /*0x6d97ba*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6d97cf*/
    {
      if ( v7 ) /*0x6d97db*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6d97e5*/
    }
    return v6; /*0x6d97e7*/
  }
  return result; /*0x6d97e9*/
}
