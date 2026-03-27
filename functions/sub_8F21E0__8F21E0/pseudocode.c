int __cdecl sub_8F21E0(int *a1, int *a2, int a3)
{
  int result; // eax
  int v4[3]; // [esp+4h] [ebp-410h] BYREF
  int v5; // [esp+10h] [ebp-404h]

  sub_933D80(v4);
  sub_8F1ED0(a1, v4, a2, a3);
  sub_931A30((int)v4, (int)a2);
  result = v5;
  if ( v5 >= 0 )
    return sub_8A75D0(
             *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C),
             (_DWORD *)v4[1],
             8 * v5,
             0x14);
  return result;
}
