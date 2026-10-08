int __thiscall sub_9294E0(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9294e1*/
  v3 = *(this + 0xD); /*0x9294eb*/
  v4 = MEMORY[0xBA9DE4]; /*0x9294f1*/
  if ( v3 >= 0 ) /*0x9294f7*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x9294fc*/
    if ( !v5 ) /*0x929504*/
      v5 = unk_BA7D9C; /*0x929506*/
    sub_8A75D0(v5, (_DWORD *)*(this + 0xB), 4 * v3, 0x14); /*0x92951b*/
  }
  result = *(this + 0xA); /*0x929520*/
  if ( result >= 0 ) /*0x929525*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x92952a*/
    if ( !v7 ) /*0x929532*/
      v7 = unk_BA7D9C; /*0x929534*/
    result = sub_8A75D0(v7, (_DWORD *)*(this + 8), 0x10 * result, 0x14); /*0x929549*/
  }
  *this = (int)&hkBaseObject::`vftable'; /*0x92954f*/
  return result; /*0x92954e*/
}
