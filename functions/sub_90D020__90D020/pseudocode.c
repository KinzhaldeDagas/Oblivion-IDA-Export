int __thiscall sub_90D020(int *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v9; // ecx
  int result; // eax
  int v11; // ecx

  v2 = *(this + 0x11); /*0x90d024*/
  v3 = 0; /*0x90d027*/
  *this = (int)&off_A9C4D4; /*0x90d02c*/
  if ( v2 > 0 ) /*0x90d032*/
  {
    do /*0x90d05b*/
    {
      v4 = *(this + 0x10); /*0x90d034*/
      v5 = *(_DWORD *)(v4 + 4 * v3); /*0x90d037*/
      if ( v5 ) /*0x90d03c*/
      {
        sub_90C940(*(_DWORD **)(v4 + 4 * v3)); /*0x90d040*/
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v5, 0x48, 0x22); /*0x90d052*/
      }
      ++v3; /*0x90d058*/
    }
    while ( v3 < *(this + 0x11) ); /*0x90d05b*/
  }
  v6 = *(this + 0x12); /*0x90d05d*/
  v7 = MEMORY[0xBA9DE4]; /*0x90d062*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90d068*/
  if ( v6 >= 0 ) /*0x90d06f*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v7] + 0x19C); /*0x90d074*/
    if ( !v9 ) /*0x90d07c*/
      v9 = unk_BA7D9C; /*0x90d07e*/
    sub_8A75D0(v9, (_DWORD *)*(this + 0x10), 4 * v6, 0x14); /*0x90d093*/
  }
  result = *(this + 0xB); /*0x90d098*/
  if ( result >= 0 ) /*0x90d09d*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v7] + 0x19C); /*0x90d0a2*/
    if ( !v11 ) /*0x90d0aa*/
      v11 = unk_BA7D9C; /*0x90d0ac*/
    result = sub_8A75D0(v11, (_DWORD *)*(this + 9), 0x30 * (result & 0x3FFFFFFF), 0x14); /*0x90d0c4*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x90d0ca*/
  return result; /*0x90d0c9*/
}
