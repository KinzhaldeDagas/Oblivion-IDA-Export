unsigned int __thiscall sub_8DE800(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  unsigned int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8de801*/
  result = *(this + 0x15); /*0x8de80c*/
  v4 = MEMORY[0xBA9DE4]; /*0x8de814*/
  if ( !result ) /*0x8de81a*/
  {
    v5 = *(this + 0x16); /*0x8de81c*/
    if ( v5 >= 0 ) /*0x8de821*/
    {
      v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8de826*/
      if ( !v6 ) /*0x8de82e*/
        v6 = unk_BA7D9C; /*0x8de830*/
      sub_8A75D0(v6, (_DWORD *)*(this + 0x14), 4 * v5, 0x14); /*0x8de845*/
    }
    result = *(this + 0x16) & 0x40000000 | 0x80000000; /*0x8de852*/
    *(this + 0x14) = 0; /*0x8de857*/
    *(this + 0x15) = 0; /*0x8de85a*/
    *(this + 0x16) = result; /*0x8de85d*/
  }
  if ( !*(this + 0x18) ) /*0x8de860*/
  {
    v7 = *(this + 0x19); /*0x8de865*/
    if ( v7 >= 0 ) /*0x8de86a*/
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8de86f*/
      if ( !v8 ) /*0x8de877*/
        v8 = unk_BA7D9C; /*0x8de879*/
      sub_8A75D0(v8, (_DWORD *)*(this + 0x17), 4 * v7, 0x14); /*0x8de88e*/
    }
    result = *(this + 0x19) & 0x40000000 | 0x80000000; /*0x8de89b*/
    *(this + 0x17) = 0; /*0x8de8a0*/
    *(this + 0x18) = 0; /*0x8de8a3*/
    *(this + 0x19) = result; /*0x8de8a6*/
  }
  return result; /*0x8de8a9*/
}
