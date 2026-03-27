int __cdecl sub_8A6E40(const void **a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // ebx
  int result; // eax
  int v7; // ecx
  const void *v8; // ecx
  int v9; // [esp+0h] [ebp-4h]

  v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v4 = *(_DWORD *)(v3 + 0x19C);
  v9 = v3;
  if ( !v4 )
    v4 = dword_BA7D9C;
  v5 = sub_8A7560(v4, a3 * a2, 0x14);
  sub_8B1890(v5, *a1, a3 * (_DWORD)a1[1]);
  result = (int)a1[2];
  if ( result >= 0 )
  {
    v7 = *(_DWORD *)(v9 + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    result = sub_8A75D0(v7, *a1, a3 * (result & 0x3FFFFFFF), 0x14);
  }
  v8 = (const void *)(a2 | (unsigned int)a1[2] & 0x40000000);
  *a1 = v5;
  a1[2] = v8;
  return result;
}
