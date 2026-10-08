int __stdcall sub_8FCD70(__m128 **a1, _DWORD *a2, int a3, int a4)
{
  int v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v5[2] = a4; /*0x8fcd77*/
  v5[1] = 0x7F7FFFFF; /*0x8fcd8e*/
  v5[0] = (int)&off_A9B4E0; /*0x8fcd96*/
  return sub_8FC570(a2, a1, a3, v5); /*0x8fcda3*/
}
