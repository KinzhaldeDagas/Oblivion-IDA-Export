_BYTE *__cdecl sub_931AF0(_BYTE *a1, float *a2, int *a3, __m128 **a4, const void **a5)
{
  int v5; // eax
  bool v6; // sf
  char v8; // [esp+Fh] [ebp-21h] BYREF
  _BYTE v9[4]; // [esp+10h] [ebp-20h] BYREF
  _DWORD *v10[2]; // [esp+14h] [ebp-1Ch] BYREF
  int v11; // [esp+1Ch] [ebp-14h]
  __m128 v12; // [esp+20h] [ebp-10h] BYREF

  v10[0] = 0; /*0x931aff*/
  v10[1] = 0; /*0x931b03*/
  v11 = 0x80000000; /*0x931b28*/
  sub_930040(&v8, a2, a3, a4, &v12, v9, a5, (int)v10); /*0x931b30*/
  v5 = v11; /*0x931b35*/
  v6 = v11 < 0; /*0x931b43*/
  *a1 = v9[0]; /*0x931b45*/
  if ( !v6 ) /*0x931b47*/
    sub_8A75D0( /*0x931b6f*/
      *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
      v10[0],
      0x20 * v5,
      0x14);
  return a1; /*0x931b76*/
}
