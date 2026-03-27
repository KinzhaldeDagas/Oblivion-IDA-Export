_BYTE *__cdecl sub_931AF0(_BYTE *a1, float *a2, int *a3, __m128 **a4, const void **a5)
{
  int v5; // eax
  bool v6; // sf
  char v8; // [esp+Fh] [ebp-21h] BYREF
  _BYTE v9[4]; // [esp+10h] [ebp-20h] BYREF
  _DWORD *v10[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v11; // [esp+1Ch] [ebp-14h]
  __m128 v12; // [esp+20h] [ebp-10h] BYREF

  v10[0] = 0;
  v10[1] = 0;
  v11 = 0x80000000;
  sub_930040(&v8, a2, a3, a4, &v12, v9, a5, (int)v10);
  v5 = v11;
  v6 = v11 < 0;
  *a1 = v9[0];
  if ( !v6 )
    sub_8A75D0(
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
      v10[0],
      0x20 * v5,
      0x14);
  return a1;
}
