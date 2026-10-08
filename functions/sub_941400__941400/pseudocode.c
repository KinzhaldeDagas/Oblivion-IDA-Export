int __thiscall sub_941400(_DWORD *this)
{
  void (__thiscall ***v2)(_DWORD, int); // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // eax
  int result; // eax

  v2 = (void (__thiscall ***)(_DWORD, int))*(this + 0xC); /*0x941404*/
  if ( v2 ) /*0x94140a*/
    (**v2)(v2, 1); /*0x941410*/
  v3 = *(this + 0xB); /*0x941412*/
  v4 = MEMORY[0xBA9DE4]; /*0x941417*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x94141d*/
  if ( v3 >= 0 ) /*0x941424*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*(this + 9), 8 * v3, 0x14); /*0x94143e*/
  v6 = *(this + 8); /*0x941443*/
  if ( v6 >= 0 ) /*0x941448*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*(this + 6), 8 * v6, 0x14); /*0x941462*/
  v7 = *(this + 5); /*0x941467*/
  if ( v7 >= 0 ) /*0x94146c*/
    sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*(this + 3), 0xC * (v7 & 0x3FFFFFFF), 0x14); /*0x941489*/
  result = *(this + 2); /*0x94148e*/
  if ( result >= 0 ) /*0x941493*/
    return sub_8A75D0(*(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C), (_DWORD *)*this, 8 * result, 0x14); /*0x9414ac*/
  return result; /*0x9414b1*/
}
