char __userpurge sub_944950@<al>(int a1@<ecx>, int a2@<ebx>, int a3, float *a4, int a5)
{
  int v5; // eax
  int v6; // edx
  int v7; // edx
  float v9; // [esp+8h] [ebp-48h]
  float v10; // [esp+Ch] [ebp-44h]
  float v11; // [esp+Ch] [ebp-44h]
  float v12; // [esp+Ch] [ebp-44h]
  float v13; // [esp+Ch] [ebp-44h]
  float v14; // [esp+Ch] [ebp-44h]
  int v15[16]; // [esp+10h] [ebp-40h] BYREF

  *(_DWORD *)a1 = a5;
  *(_DWORD *)(a1 + 0x30) = a3;
  v9 = (*a4 - *(float *)(a3 + 0x10)) * *(float *)(a3 + 0x1C);
  *(_DWORD *)(a1 + 0x20) = (int)v9 - 1;
  v10 = (a4[4] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x10)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  *(_DWORD *)(a1 + 0x10) = (int)v10 + 1;
  v11 = (a4[1] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x14)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  *(_DWORD *)(a1 + 0x24) = (int)v11 - 1;
  v12 = (a4[5] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x14)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  *(_DWORD *)(a1 + 0x14) = (int)v12 + 1;
  v13 = (a4[2] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x18)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  *(_DWORD *)(a1 + 0x28) = (int)v13 - 1;
  v14 = (a4[6] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x18)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  v15[4] = *(__int16 *)(a1 + 0x22);
  v5 = (int)v14 + 1;
  v15[0] = *(__int16 *)(a1 + 0x12) + 1;
  v15[5] = *(__int16 *)(a1 + 0x26);
  v6 = *(__int16 *)(a1 + 0x16);
  *(_DWORD *)(a1 + 0x18) = v5;
  v15[1] = v6 + 1;
  v7 = *(__int16 *)(a1 + 0x2A);
  v15[2] = (v5 >> 0x10) + 1;
  v15[6] = v7;
  memset(&v15[8], 0, 0x18);
  return sub_944060((int *)a1, a2, v15, *(unsigned __int8 **)(*(_DWORD *)(a1 + 0x30) + 0x20));
}
