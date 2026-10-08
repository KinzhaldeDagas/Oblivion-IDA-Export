void __thiscall hkCharControllerShape::~hkCharControllerShape(hkCharControllerShape *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx

  v2 = *((_DWORD *)this + 0x12); /*0x8d250a*/
  v3 = MEMORY[0xBA9DE4]; /*0x8d250f*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8d2515*/
  if ( v2 >= 0 ) /*0x8d2524*/
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8d2529*/
    if ( !v5 ) /*0x8d2531*/
      v5 = unk_BA7D9C; /*0x8d2533*/
    sub_8A75D0(v5, *((_DWORD **)this + 0x10), 0x10 * v2, 0x14); /*0x8d2548*/
  }
  v6 = *((_DWORD *)this + 0xE); /*0x8d254d*/
  if ( v6 >= 0 ) /*0x8d2557*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C); /*0x8d255c*/
    if ( !v7 ) /*0x8d2564*/
      v7 = unk_BA7D9C; /*0x8d2566*/
    sub_8A75D0(v7, *((_DWORD **)this + 0xC), 0x30 * (v6 & 0x3FFFFFFF), 0x14); /*0x8d257e*/
  }
  *(_DWORD *)this = &hkBaseObject::`vftable'; /*0x8d2583*/
}
