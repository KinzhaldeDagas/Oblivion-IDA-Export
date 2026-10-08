int __thiscall sub_929870(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x929871*/
  v3 = *(this + 0xC); /*0x92987b*/
  v4 = MEMORY[0xBA9DE4]; /*0x929881*/
  if ( v3 >= 0 ) /*0x929887*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x92988c*/
    if ( !v5 ) /*0x929894*/
      v5 = unk_BA7D9C; /*0x929896*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0xA), v3 & 0x3FFFFFFF, 0x14); /*0x9298a8*/
  }
  v6 = *(this + 9); /*0x9298ad*/
  if ( v6 >= 0 ) /*0x9298b2*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x9298b7*/
    if ( !v7 ) /*0x9298bf*/
      v7 = unk_BA7D9C; /*0x9298c1*/
    sub_8A75D0(v7, (_DWORD *)*(this + 7), 0xC * (v6 & 0x3FFFFFFF), 0x14); /*0x9298d9*/
  }
  result = *(this + 6); /*0x9298de*/
  if ( result >= 0 ) /*0x9298e3*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x9298e8*/
    if ( !v9 ) /*0x9298f0*/
      v9 = unk_BA7D9C; /*0x9298f2*/
    result = sub_8A75D0(v9, (_DWORD *)*(this + 4), 0x10 * result, 0x14); /*0x929907*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x92990d*/
  return result; /*0x92990c*/
}
