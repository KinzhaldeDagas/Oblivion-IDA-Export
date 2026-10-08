void __stdcall sub_862600(int a1, unsigned int a2)
{
  unsigned int i; // ebx
  int v3; // edi
  int v4; // esi

  for ( i = a2; i < *(_DWORD *)(a1 + 0x18); ++i ) /*0x86260d*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x24) + 4 * i); /*0x862614*/
    if ( v3 ) /*0x862619*/
    {
      v4 = *(_DWORD *)(v3 + 4); /*0x86261b*/
      if ( v4 ) /*0x862620*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x862626*/
          (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x86263c*/
        *(_DWORD *)(v3 + 4) = 0; /*0x86263e*/
      }
    }
  }
}
