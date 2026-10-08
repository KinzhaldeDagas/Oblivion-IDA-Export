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

  *(_DWORD *)a1 = a5; /*0x94495f*/
  *(_DWORD *)(a1 + 0x30) = a3; /*0x944964*/
  v9 = (*a4 - *(float *)(a3 + 0x10)) * *(float *)(a3 + 0x1C); /*0x94496f*/
  *(_DWORD *)(a1 + 0x20) = (int)v9 - 1; /*0x944980*/
  v10 = (a4[4] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x10)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C); /*0x94498f*/
  *(_DWORD *)(a1 + 0x10) = (int)v10 + 1; /*0x9449a0*/
  v11 = (a4[1] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x14)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C); /*0x9449af*/
  *(_DWORD *)(a1 + 0x24) = (int)v11 - 1; /*0x9449c0*/
  v12 = (a4[5] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x14)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C); /*0x9449cf*/
  *(_DWORD *)(a1 + 0x14) = (int)v12 + 1; /*0x9449e0*/
  v13 = (a4[2] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x18)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C); /*0x9449ef*/
  *(_DWORD *)(a1 + 0x28) = (int)v13 - 1; /*0x944a00*/
  v14 = (a4[6] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x18)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C); /*0x944a0f*/
  v15[4] = *(__int16 *)(a1 + 0x22); /*0x944a23*/
  v5 = (int)v14 + 1; /*0x944a2b*/
  v15[0] = *(__int16 *)(a1 + 0x12) + 1; /*0x944a2d*/
  v15[5] = *(__int16 *)(a1 + 0x26); /*0x944a35*/
  v6 = *(__int16 *)(a1 + 0x16); /*0x944a39*/
  *(_DWORD *)(a1 + 0x18) = v5; /*0x944a3d*/
  v15[1] = v6 + 1; /*0x944a45*/
  v7 = *(__int16 *)(a1 + 0x2A); /*0x944a49*/
  v15[2] = (v5 >> 0x10) + 1; /*0x944a4d*/
  v15[6] = v7; /*0x944a53*/
  memset(&v15[8], 0, 0x18); /*0x944a57*/
  return sub_944060((int *)a1, a2, v15, *(unsigned __int8 **)(*(_DWORD *)(a1 + 0x30) + 0x20)); /*0x944a80*/
}
