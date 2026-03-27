_DWORD *__cdecl sub_934270(int a1)
{
  bool v1; // zf
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v3; // eax
  _DWORD *v4; // ecx
  _DWORD *result; // eax

  v1 = (*(_DWORD *)(a1 + 8) & 0x3FFFFFFF) == 0;
  *(_DWORD *)(a1 + 4) = 0;
  if ( v1 )
    sub_8A6EE0((const void **)a1, 4);
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  ++*(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x19C);
  v4 = *(_DWORD **)(v3 + 0x64);
  if ( v4 )
  {
    --*(_DWORD *)(v3 + 0xA8);
    *(_DWORD *)(v3 + 0x64) = *v4;
    result = v4;
  }
  else
  {
    result = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x18))(dword_BA7D98, 0xC, 0x1C);
  }
  if ( result )
    *result = 0;
  else
    result = 0;
  **(_DWORD **)a1 = result;
  *((_BYTE *)result + 0x13) = 0x10;
  *((_BYTE *)result + 0x10) = 1;
  result[6] = 0xFFFFFFFF;
  *result = 0x10;
  return result;
}
