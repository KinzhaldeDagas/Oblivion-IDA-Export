int __stdcall sub_912690(_DWORD *a1, int **a2, int a3, int a4, int a5, int a6)
{
  int v6; // edx
  _DWORD *v7; // edi
  _DWORD *v8; // eax
  int v9; // edx
  int result; // eax
  _DWORD v11[4]; // [esp+Ch] [ebp-10h] BYREF

  v6 = *(_DWORD *)(a5 + 0x28); /*0x91269b*/
  v7 = (_DWORD *)(*a1 + 4); /*0x9126a7*/
  *a1 = v7; /*0x9126aa*/
  v11[0] = a4 + 0x10 * (*v7 + 5); /*0x9126bc*/
  v8 = *a2; /*0x9126c0*/
  *a2 += 4; /*0x9126c5*/
  v11[2] = *v8; /*0x9126c9*/
  v9 = v6 + 8 * *(_DWORD *)(a4 + 0xB8); /*0x9126d3*/
  v11[3] = 1; /*0x9126e1*/
  v11[1] = v9; /*0x9126e9*/
  sub_8F1460((int)v11, a5, a6); /*0x9126ed*/
  result = *(_DWORD *)(a4 + 0xB8) + 1; /*0x9126fb*/
  *(_DWORD *)(a4 + 0xB8) = result; /*0x9126fd*/
  return result; /*0x9126fc*/
}
