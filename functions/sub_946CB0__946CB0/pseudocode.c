int __thiscall sub_946CB0(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x946cb1*/
  *this = (int)&off_AA297C; /*0x946cbb*/
  *(this + 2) = (int)&off_AA2964; /*0x946cc1*/
  v3 = *(this + 0x10); /*0x946cc8*/
  v4 = MEMORY[0xBA9DE4]; /*0x946cce*/
  if ( v3 >= 0 ) /*0x946cd4*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x946cd9*/
    if ( !v5 ) /*0x946ce1*/
      v5 = unk_BA7D9C; /*0x946ce3*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0xE), v3 & 0x3FFFFFFF, 0x14); /*0x946cf5*/
  }
  v6 = *(this + 0xD); /*0x946cfa*/
  if ( v6 >= 0 ) /*0x946cff*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x946d04*/
    if ( !v7 ) /*0x946d0c*/
      v7 = unk_BA7D9C; /*0x946d0e*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0xB), v6 & 0x3FFFFFFF, 0x14); /*0x946d20*/
  }
  result = *(this + 0xA); /*0x946d25*/
  if ( result >= 0 ) /*0x946d2a*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x946d2f*/
    if ( !v9 ) /*0x946d37*/
      v9 = unk_BA7D9C; /*0x946d39*/
    result = sub_8A75D0(v9, (_DWORD *)*(this + 8), 4 * result, 0x14); /*0x946d4e*/
  }
  *(this + 2) = (int)&off_A9D1C0; /*0x946d53*/
  *this = (int)&hkBaseObject::`vftable'; /*0x946d5b*/
  return result; /*0x946d5a*/
}
