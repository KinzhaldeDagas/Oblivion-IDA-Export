int __cdecl sub_90B570(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x90b583*/
  v5[1] = 0x7F7FFFFF; /*0x90b58e*/
  v5[0] = &off_A9B4E0; /*0x90b596*/
  return sub_90B150(a2, a1, a3, (int)v5); /*0x90b5a6*/
}
