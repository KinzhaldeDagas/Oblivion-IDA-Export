int __cdecl sub_90A0F0(int *a1, __m128 **a2, _DWORD *a3, int a4)
{
  int (__stdcall **v5)(char); // [esp+0h] [ebp-Ch] BYREF
  char v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  v7 = a4; /*0x90a103*/
  v6 = 0; /*0x90a10e*/
  v5 = &off_A9B4F0; /*0x90a113*/
  return sub_909F50(a2, a1, a3, (int)&v5); /*0x90a123*/
}
