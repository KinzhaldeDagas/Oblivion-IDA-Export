char __userpurge sub_943F80@<al>(int a1@<ecx>, int a2@<ebx>, int a3, float *a4, int a5)
{
  unsigned __int8 *v6; // esi
  int v7; // edx
  int v8; // eax
  int v9; // edx
  int v10; // edx
  int v12[10]; // [esp+8h] [ebp-28h] BYREF
  float v13; // [esp+34h] [ebp+4h]
  float v14; // [esp+34h] [ebp+4h]
  float v15; // [esp+34h] [ebp+4h]
  float v16; // [esp+34h] [ebp+4h]

  v6 = *(unsigned __int8 **)(a3 + 0x20);
  *(_DWORD *)a1 = a5;
  v13 = (*a4 - *(float *)(a3 + 0x10)) * *(float *)(a3 + 0x1C);
  *(_DWORD *)(a1 + 0x10) = (int)v13 - 1;
  v14 = (a4[1] - *(float *)(a3 + 0x14)) * *(float *)(a3 + 0x1C);
  *(_DWORD *)(a1 + 0x14) = (int)v14 - 1;
  v15 = (a4[2] - *(float *)(a3 + 0x18)) * *(float *)(a3 + 0x1C);
  *(_DWORD *)(a1 + 0x18) = (int)v15 - 1;
  v16 = a4[3] * *(float *)(a3 + 0x1C);
  v7 = *(__int16 *)(a1 + 0x12);
  v8 = (int)v16 + 2;
  *(_DWORD *)(a1 + 0x1C) = v8;
  v12[0] = v7;
  v9 = *(__int16 *)(a1 + 0x16);
  v12[3] = (v8 >> 0x10) + 1;
  v12[1] = v9;
  v10 = *(__int16 *)(a1 + 0x1A);
  memset(&v12[4], 0, 0x10);
  v12[9] = 0;
  v12[2] = v10;
  v12[8] = 0x10;
  return sub_943900((int *)a1, a2, v12, v6);
}
