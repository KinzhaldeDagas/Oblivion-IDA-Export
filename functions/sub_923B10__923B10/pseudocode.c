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

  *a6 = a1;
  a6[1] = a2;
  a6[2] = a3;
  v6 = a5 - a5 % 0x10;
  v7 = 0xA * v6 / 0x3C;
  v8 = (double)(0xA * v6) * flt_A9DD90;
  v9 = (a4 + 0xF) & 0xFFFFFFF0;
  a6[3] = v9;
  v10 = (v7 + v9 + 0xF) & 0xFFFFFFF0;
  v11 = (0x1E * v6 / 0x3C + v10 + 0xF) & 0xFFFFFFF0;
  a6[4] = v10;
  a6[5] = v10;
  v12 = (v7 + v11 + 0xF) & 0xFFFFFFF0;
  a6[6] = v11;
  a6[7] = v11;
  a6[8] = v12;
  a6[9] = v12;
  v13 = a6[3];
  v14 = a6[5];
  v15 = (v12 - (unsigned __int64)v8 + 0xF) & 0xFFFFFFF0;
  a6[0xE] = v6 + a4;
  v16 = a6[7];
  a6[0x12] = v14;
  result = a6[9];
  a6[0xA] = v15;
  a6[0xD] = v15;
  a6[0xF] = v15;
  a6[0x10] = v15;
  a6[0x11] = v13;
  a6[0x13] = v16;
  a6[0xB] = result;
  a6[0xC] = result;
  return result;
}
