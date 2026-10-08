int __cdecl sub_923B10(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  int v7; // ecx
  double v8; // st7
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v11; // eax
  unsigned int v12; // edi
  int v13; // edx
  int v14; // eax
  int v15; // edi
  int v16; // ecx
  int result; // eax

  *a6 = a1; /*0x923b27*/
  a6[1] = a2; /*0x923b31*/
  a6[2] = a3; /*0x923b34*/
  v6 = a5 - a5 % 0x10; /*0x923b3e*/
  v7 = 0xA * v6 / 0x3C; /*0x923b67*/
  v8 = (double)(0xA * v6) * flt_A9DD90; /*0x923b70*/
  v9 = (a4 + 0xF) & 0xFFFFFFF0; /*0x923b79*/
  a6[3] = v9; /*0x923b81*/
  v10 = (v7 + v9 + 0xF) & 0xFFFFFFF0; /*0x923b8d*/
  v11 = (0x1E * v6 / 0x3C + v10 + 0xF) & 0xFFFFFFF0; /*0x923b96*/
  a6[4] = v10; /*0x923b99*/
  a6[5] = v10; /*0x923b9c*/
  v12 = (v7 + v11 + 0xF) & 0xFFFFFFF0; /*0x923ba3*/
  a6[6] = v11; /*0x923ba6*/
  a6[7] = v11; /*0x923ba9*/
  a6[8] = v12; /*0x923bac*/
  a6[9] = v12; /*0x923baf*/
  v13 = a6[3]; /*0x923bbb*/
  v14 = a6[5]; /*0x923bc0*/
  v15 = (v12 - (unsigned __int64)v8 + 0xF) & 0xFFFFFFF0; /*0x923bc6*/
  a6[0xE] = v6 + a4; /*0x923bcb*/
  v16 = a6[7]; /*0x923bce*/
  a6[0x12] = v14; /*0x923bd1*/
  result = a6[9]; /*0x923bd4*/
  a6[0xA] = v15; /*0x923bd7*/
  a6[0xD] = v15; /*0x923bda*/
  a6[0xF] = v15; /*0x923bdd*/
  a6[0x10] = v15; /*0x923be0*/
  a6[0x11] = v13; /*0x923be4*/
  a6[0x13] = v16; /*0x923be7*/
  a6[0xB] = result; /*0x923bea*/
  a6[0xC] = result; /*0x923bed*/
  return result; /*0x923be3*/
}
