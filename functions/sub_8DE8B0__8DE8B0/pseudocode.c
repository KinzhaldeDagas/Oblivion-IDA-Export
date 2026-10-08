int __thiscall sub_8DE8B0(int *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v2 = *(this + 0x18) - 1; /*0x8de8b8*/
  for ( *this = (int)&off_A97B60; v2 >= 0; --v2 ) /*0x8de8bf*/
  {
    v3 = *(_DWORD *)(*(this + 0x17) + 4 * v2); /*0x8de8c4*/
    if ( v3 ) /*0x8de8c9*/
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x10))(v3, this); /*0x8de8ce*/
  }
  v4 = *(this + 0x19); /*0x8de8d4*/
  v5 = MEMORY[0xBA9DE4]; /*0x8de8d9*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8de8df*/
  if ( v4 >= 0 ) /*0x8de8e6*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8de8eb*/
    if ( !v7 ) /*0x8de8f3*/
      v7 = unk_BA7D9C; /*0x8de8f5*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0x17), 4 * v4, 0x14); /*0x8de90a*/
  }
  v8 = *(this + 0x16); /*0x8de90f*/
  if ( v8 >= 0 ) /*0x8de914*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8de919*/
    if ( !v9 ) /*0x8de921*/
      v9 = unk_BA7D9C; /*0x8de923*/
    sub_8A75D0(v9, (_DWORD *)*(this + 0x14), 4 * v8, 0x14); /*0x8de938*/
  }
  return sub_8A66A0(this); /*0x8de93d*/
}
