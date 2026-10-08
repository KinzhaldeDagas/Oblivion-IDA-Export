int __cdecl sub_8FCDB0(__m128 **a1, _DWORD *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x8fcdc3*/
  v5[1] = 0x7F7FFFFF; /*0x8fcdce*/
  v5[0] = (int)&off_A9B4E0; /*0x8fcdd6*/
  return sub_8FC860(a2, a1, a3, v5); /*0x8fcde6*/
}
