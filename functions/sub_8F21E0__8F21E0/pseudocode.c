int __cdecl sub_8F21E0(int *a1, const void **a2, int a3)
{
  int result; // eax
  int v4[3]; // [esp+4h] [ebp-410h] BYREF
  int v5; // [esp+10h] [ebp-404h]

  sub_933D80(v4); /*0x8f21eb*/
  sub_8F1ED0(a1, v4, a2, a3); /*0x8f220d*/
  sub_931A30((int)v4, (int)a2); /*0x8f2218*/
  result = v5; /*0x8f221d*/
  if ( v5 >= 0 ) /*0x8f2227*/
    return sub_8A75D0( /*0x8f224e*/
             *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C),
             (_DWORD *)v4[1],
             8 * v5,
             0x14);
  return result; /*0x8f2226*/
}
