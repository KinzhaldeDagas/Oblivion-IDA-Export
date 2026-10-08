int __thiscall sub_8CB180(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cb181*/
  *this = (int)&off_A99B70; /*0x8cb18b*/
  v3 = *(this + 0xB); /*0x8cb191*/
  v4 = MEMORY[0xBA9DE4]; /*0x8cb197*/
  if ( v3 >= 0 ) /*0x8cb19d*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cb1a2*/
    if ( !v5 ) /*0x8cb1aa*/
      v5 = unk_BA7D9C; /*0x8cb1ac*/
    sub_8A75D0(v5, (_DWORD *)*(this + 9), 4 * v3, 0x14); /*0x8cb1c1*/
  }
  result = *(this + 4); /*0x8cb1c6*/
  if ( result >= 0 ) /*0x8cb1cb*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C); /*0x8cb1d0*/
    if ( !v7 ) /*0x8cb1d8*/
      v7 = unk_BA7D9C; /*0x8cb1da*/
    return sub_8A75D0(v7, (_DWORD *)*(this + 2), 4 * result, 0x14); /*0x8cb1ef*/
  }
  return result; /*0x8cb1f4*/
}
