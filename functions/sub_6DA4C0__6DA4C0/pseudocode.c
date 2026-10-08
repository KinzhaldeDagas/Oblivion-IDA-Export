_DWORD *__thiscall sub_6DA4C0(int **this, int a2, int a3)
{
  _DWORD *result; // eax
  int *v5; // ecx
  _DWORD *v6; // esi
  int v7; // edi
  bool v8; // zf

  result = (_DWORD *)NiInterpolator_CloneTimeRange(this, a2, a3); /*0x6da4f6*/
  v5 = *(this + 6); /*0x6da4fb*/
  v6 = result; /*0x6da500*/
  if ( v5 ) /*0x6da502*/
  {
    sub_6D9EA0(v5, &a3, *(float *)&a2, *(float *)&a3); /*0x6da51b*/
    sub_6DABA0(v6, a3); /*0x6da52f*/
    v7 = a3; /*0x6da534*/
    v8 = a3 == 0; /*0x6da538*/
    v6[7] = 0; /*0x6da53a*/
    if ( !v8 && !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6da54f*/
    {
      if ( v7 ) /*0x6da55b*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6da565*/
    }
    return v6; /*0x6da567*/
  }
  return result; /*0x6da569*/
}
