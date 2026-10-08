int __thiscall sub_8A66A0(int *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // ecx
  int result; // eax
  int v8; // ecx

  v2 = *(this + 5); /*0x8a66a4*/
  *this = (int)&off_A97598; /*0x8a66aa*/
  if ( v2 ) /*0x8a66b0*/
  {
    if ( *(_WORD *)(v2 + 4) ) /*0x8a66b2*/
    {
      if ( !--*(_WORD *)(v2 + 6) ) /*0x8a66bd*/
        (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x8a66c8*/
    }
  }
  v3 = *(this + 0x13); /*0x8a66ca*/
  v4 = MEMORY[0xBA9DE4]; /*0x8a66cf*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8a66d5*/
  if ( v3 >= 0 ) /*0x8a66dc*/
  {
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a66e1*/
    if ( !v6 ) /*0x8a66e9*/
      v6 = unk_BA7D9C; /*0x8a66eb*/
    sub_8A75D0(v6, (_DWORD *)*(this + 0x11), 0x10 * v3, 0x14); /*0x8a6700*/
  }
  result = *(this + 0x10); /*0x8a6705*/
  if ( result >= 0 ) /*0x8a670a*/
  {
    v8 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8a670f*/
    if ( !v8 ) /*0x8a6717*/
      v8 = unk_BA7D9C; /*0x8a6719*/
    result = sub_8A75D0(v8, (_DWORD *)*(this + 0xE), 8 * result, 0x14); /*0x8a672e*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8a6734*/
  return result; /*0x8a6733*/
}
