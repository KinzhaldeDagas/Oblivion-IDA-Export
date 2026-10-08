int __thiscall sub_8DE350(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8de351*/
  *this = (int)&off_A9A4E4; /*0x8de35b*/
  v3 = *(this + 0x19); /*0x8de361*/
  v4 = MEMORY[0xBA9DE4]; /*0x8de367*/
  if ( v3 >= 0 ) /*0x8de36d*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8de372*/
    if ( !v5 ) /*0x8de37a*/
      v5 = unk_BA7D9C; /*0x8de37c*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0x17), 4 * v3, 0x14); /*0x8de391*/
  }
  v6 = *(this + 0x13); /*0x8de396*/
  if ( v6 >= 0 ) /*0x8de39b*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8de3a0*/
    if ( !v7 ) /*0x8de3a8*/
      v7 = unk_BA7D9C; /*0x8de3aa*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0x11), 4 * v6, 0x14); /*0x8de3bf*/
  }
  result = *(this + 0xF); /*0x8de3c4*/
  if ( result >= 0 ) /*0x8de3c9*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8de3ce*/
    if ( !v9 ) /*0x8de3d6*/
      v9 = unk_BA7D9C; /*0x8de3d8*/
    result = sub_8A75D0(v9, (_DWORD *)*(this + 0xD), 4 * result, 0x14); /*0x8de3ed*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x8de3f3*/
  return result; /*0x8de3f2*/
}
