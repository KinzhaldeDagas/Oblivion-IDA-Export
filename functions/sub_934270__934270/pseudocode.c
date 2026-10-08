_DWORD *__cdecl sub_934270(int a1)
{
  bool v1; // zf
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  v1 = (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) == 0; /*0x934275*/
  *(_DWORD *)(a1 + 4) = 0; /*0x93427c*/
  if ( v1 ) /*0x934283*/
    sub_8A6EE0((const void **)a1, 4); /*0x934288*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x934293*/
  ++*(_DWORD *)(a1 + 4); /*0x93429b*/
  v3 = *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x19C); /*0x9342a6*/
  v4 = *(_DWORD **)(v3 + 0x64); /*0x9342ac*/
  if ( v4 ) /*0x9342b1*/
  {
    --*(_DWORD *)(v3 + 0xA8); /*0x9342b3*/
    *(_DWORD *)(v3 + 0x64) = *v4; /*0x9342bb*/
    result = v4; /*0x9342be*/
  }
  else
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x18))(unk_BA7D98, 0xC, 0x1C); /*0x9342ce*/
  }
  if ( result ) /*0x9342d3*/
    *result = 0; /*0x9342d5*/
  else
    result = 0; /*0x9342dd*/
  **(_DWORD **)a1 = result; /*0x9342e1*/
  *((_BYTE *)result + 0x13) = 0x10; /*0x9342e3*/
  *((_BYTE *)result + 0x10) = 1; /*0x9342e7*/
  result[6] = 0xFFFFFFFF; /*0x9342eb*/
  *result = 0x10; /*0x9342f2*/
  return result; /*0x9342f8*/
}
