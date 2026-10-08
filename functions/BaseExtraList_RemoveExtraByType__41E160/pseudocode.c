int __thiscall BaseExtraList_RemoveExtraByType(_DWORD *this, unsigned __int8 a2)
{
  int v3; // ecx
  int v4; // eax
  unsigned int v5; // eax
  int v6; // eax

  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&MEMORY[0xB33800], (int)&aBaseextralistR); /*0x41e16f*/
  v3 = *(this + 1); /*0x41e174*/
  v4 = 0; /*0x41e17b*/
  if ( v3 ) /*0x41e17f*/
  {
    while ( *(_BYTE *)(v3 + 4) != a2 ) /*0x41e184*/
    {
      v4 = v3; /*0x41e186*/
      v3 = *(_DWORD *)(v3 + 8); /*0x41e188*/
      if ( !v3 ) /*0x41e18d*/
        goto LABEL_9; /*0x41e18d*/
    }
    if ( v4 ) /*0x41e193*/
      *(_DWORD *)(v4 + 8) = *(_DWORD *)(v3 + 8); /*0x41e198*/
    else
      *(this + 1) = *(_DWORD *)(v3 + 8); /*0x41e1a0*/
    (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x41e1a9*/
  }
LABEL_9:
  v5 = a2 >> 3; /*0x41e1ab*/
  if ( v5 < 0xC ) /*0x41e1b6*/
    *((_BYTE *)this + v5 + 8) &= ~(1 << (a2 & 7)); /*0x41e1cd*/
  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x41e1dd*/
  if ( this == *(_DWORD **)(v6 + 8) && a2 <= 0x5Cu ) /*0x41e1eb*/
    *(_DWORD *)(v6 + 4 * a2 + 0x10) = 0; /*0x41e1ed*/
  return NiLeaveCriticalSection_0(&MEMORY[0xB33800]); /*0x41e202*/
}
