const void *__cdecl sub_8A6F90(const void **a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // ebx
  int v5; // edi
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  const void *result; // eax

  v4 = a3;
  if ( a3 && (v5 = a4, (int)a1[1] < a4) )
  {
    v6 = 0x80000000;
  }
  else
  {
    v7 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    v5 = ((int)a1[2] >> 1) & 0x1FFFFFFF;
    if ( !v7 )
      v7 = dword_BA7D9C;
    v4 = sub_8A7560(v7, a2 * v5, 0x14);
    v6 = 0;
  }
  sub_8B1890(v4, *a1, a2 * (_DWORD)a1[1]);
  v8 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  if ( !v8 )
    v8 = dword_BA7D9C;
  sub_8A75D0(v8, *a1, a2 * ((unsigned int)a1[2] & 0x3FFFFFFF), 0x14);
  result = (const void *)(v5 | v6 | (unsigned int)a1[2] & 0x40000000);
  *a1 = v4;
  a1[2] = result;
  return result;
}
