char __thiscall sub_733AA0(void *this, int a2, _DWORD *a3, _DWORD *a4, void *a5, bool *a6, _DWORD *a7)
{
  int v7; // eax
  int v8; // ebx

  v7 = (*(int (__thiscall **)(void *, int, _DWORD))(*(_DWORD *)this + 8))(this, a2, 0); /*0x733ad0*/
  v8 = v7; /*0x733ad2*/
  if ( v7 ) /*0x733ad6*/
    InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x733adc*/
  if ( !v8 ) /*0x733ae4*/
    return 0; /*0x733b59*/
  *a3 = **(_DWORD **)(v8 + 0x54); /*0x733af3*/
  *a4 = **(_DWORD **)(v8 + 0x58); /*0x733afe*/
  qmemcpy(a5, (const void *)(v8 + 8), 0x44u); /*0x733b08*/
  *a6 = *(_DWORD *)(v8 + 0x60) > 1u; /*0x733b17*/
  *a7 = *(_DWORD *)(v8 + 0x6C); /*0x733b24*/
  if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x733b2e*/
    (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x733b40*/
  return 1; /*0x733b44*/
}
