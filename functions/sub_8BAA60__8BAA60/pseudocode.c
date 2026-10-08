_DWORD *__cdecl sub_8BAA60(int a1)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v2; // ebp
  _DWORD *result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8baa61*/
  v2 = MEMORY[0xBA9DE4]; /*0x8baa69*/
  result = (_DWORD *)ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8baa6f*/
  if ( a1 != result[0x6B] - result[0x68] ) /*0x8baa87*/
  {
    v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8baa8a*/
    v5 = result[0x68]; /*0x8baa8c*/
    if ( v5 ) /*0x8baa94*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, v5); /*0x8baa9f*/
    *(_DWORD *)(v4 + 0x1A0) = (**(int (__thiscall ***)(int, int, int))unk_BA7D98)(unk_BA7D98, a1, 0x18); /*0x8baaaf*/
    result = (_DWORD *)ThreadLocalStoragePointer[v2]; /*0x8baab5*/
    result[0x69] = result[0x68]; /*0x8baabe*/
    v6 = result[0x68]; /*0x8baac4*/
    result[0x6B] = v6 + a1; /*0x8baacd*/
    result[0x6A] = v6 + a1 - 0x10; /*0x8baad6*/
  }
  return result; /*0x8baadd*/
}
