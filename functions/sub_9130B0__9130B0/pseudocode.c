int __thiscall sub_9130B0(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9130b1*/
  v3 = *(this + 0xF); /*0x9130bb*/
  v4 = MEMORY[0xBA9DE4]; /*0x9130c1*/
  if ( v3 >= 0 ) /*0x9130c7*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x9130cc*/
    if ( !v5 ) /*0x9130d4*/
      v5 = unk_BA7D9C; /*0x9130d6*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0xD), 4 * v3, 0x14); /*0x9130eb*/
  }
  v6 = *(this + 0xC); /*0x9130f0*/
  if ( v6 >= 0 ) /*0x9130f5*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x9130fa*/
    if ( !v7 ) /*0x913102*/
      v7 = unk_BA7D9C; /*0x913104*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0xA), 4 * v6, 0x14); /*0x913119*/
  }
  v8 = *(this + 9); /*0x91311e*/
  if ( v8 >= 0 ) /*0x913123*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x913128*/
    if ( !v9 ) /*0x913130*/
      v9 = unk_BA7D9C; /*0x913132*/
    sub_8A75D0(v9, (_DWORD *)*(this + 7), 4 * v8, 0x14); /*0x913147*/
  }
  result = *(this + 6); /*0x91314c*/
  if ( result >= 0 ) /*0x913151*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x913156*/
    if ( !v11 ) /*0x91315e*/
      v11 = unk_BA7D9C; /*0x913160*/
    return sub_8A75D0(v11, (_DWORD *)*(this + 4), 0x10 * result, 0x14); /*0x913175*/
  }
  return result; /*0x91317a*/
}
