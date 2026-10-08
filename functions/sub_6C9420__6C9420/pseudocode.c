void __thiscall sub_6C9420(unsigned int *this, int a2, _DWORD **a3)
{
  unsigned int *v3; // ebx
  unsigned int v4; // edi
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  void (__thiscall ***v6)(_DWORD, int); // esi
  char *v7; // eax
  unsigned int v8; // esi
  char *v9; // eax
  unsigned int v10; // esi

  v3 = (unsigned int *)a2; /*0x6c9422*/
  v4 = 0; /*0x6c9428*/
  if ( *(_DWORD *)(a2 + 0xC) ) /*0x6c942a*/
  {
    v5 = InterlockedDecrement; /*0x6c9434*/
    do /*0x6c9475*/
    {
      sub_6C6610(v3, &a2, v4); /*0x6c9448*/
      if ( a2 ) /*0x6c9453*/
      {
        v6 = (void (__thiscall ***)(_DWORD, int))a2; /*0x6c9455*/
        if ( !v5((volatile LONG *)(a2 + 4)) ) /*0x6c945b*/
          (**v6)(v6, 1); /*0x6c946d*/
      }
      ++v4; /*0x6c946f*/
    }
    while ( v4 < v3[3] ); /*0x6c9475*/
  }
  v7 = (char *)v3[5]; /*0x6c9478*/
  if ( v7 ) /*0x6c947d*/
  {
    v8 = (unsigned int)(v7 + 0xFFFFFFFC); /*0x6c9482*/
    _LN21(v7, 0x10u, *((_DWORD *)v7 + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6C64C0); /*0x6c948e*/
    FormHeapFree(v8); /*0x6c9494*/
  }
  v9 = (char *)v3[6]; /*0x6c949c*/
  if ( v9 ) /*0x6c94a1*/
  {
    v10 = (unsigned int)(v9 + 0xFFFFFFFC); /*0x6c94a6*/
    _LN21(v9, 0x10u, *((_DWORD *)v9 + 0xFFFFFFFF), (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6c94b2*/
    FormHeapFree(v10); /*0x6c94b8*/
  }
  sub_6C70A0(this, v3, a3); /*0x6c94ca*/
}
