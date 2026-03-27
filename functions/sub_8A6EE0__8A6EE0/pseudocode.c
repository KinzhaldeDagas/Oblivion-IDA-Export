int __cdecl sub_8A6EE0(const void **a1, int a2)
{
  const void *v3; // eax
  int v4; // ebp
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // ebx
  int result; // eax
  int v9; // ecx
  int v10; // ecx
  int v11; // [esp+14h] [ebp+4h]

  v3 = a1[1];
  v4 = 2 * (_DWORD)v3;
  if ( !v3 )
    v4 = 1;
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = *(_DWORD *)(v5 + 0x19C);
  v11 = v5;
  if ( !v6 )
    v6 = dword_BA7D9C;
  v7 = sub_8A7560(v6, a2 * v4, 0x14);
  sub_8B1890(v7, *a1, a2 * (_DWORD)a1[1]);
  result = (int)a1[2];
  if ( result >= 0 )
  {
    v9 = *(_DWORD *)(v11 + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    result = sub_8A75D0(v9, *a1, a2 * (result & 0x3FFFFFFF), 0x14);
  }
  v10 = v4 | (unsigned int)a1[2] & 0x40000000;
  *a1 = v7;
  a1[2] = (const void *)v10;
  return result;
}
