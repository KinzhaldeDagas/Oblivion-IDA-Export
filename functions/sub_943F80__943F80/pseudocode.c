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

  v6 = *(unsigned __int8 **)(a3 + 0x20); /*0x943f8c*/
  *(_DWORD *)a1 = a5; /*0x943f8f*/
  v13 = (*a4 - *(float *)(a3 + 0x10)) * *(float *)(a3 + 0x1C); /*0x943f9e*/
  *(_DWORD *)(a1 + 0x10) = (int)v13 - 1; /*0x943faf*/
  v14 = (a4[1] - *(float *)(a3 + 0x14)) * *(float *)(a3 + 0x1C); /*0x943fbb*/
  *(_DWORD *)(a1 + 0x14) = (int)v14 - 1; /*0x943fcc*/
  v15 = (a4[2] - *(float *)(a3 + 0x18)) * *(float *)(a3 + 0x1C); /*0x943fd8*/
  *(_DWORD *)(a1 + 0x18) = (int)v15 - 1; /*0x943fe9*/
  v16 = a4[3] * *(float *)(a3 + 0x1C); /*0x943ff2*/
  v7 = *(__int16 *)(a1 + 0x12); /*0x944002*/
  v8 = (int)v16 + 2; /*0x944006*/
  *(_DWORD *)(a1 + 0x1C) = v8; /*0x944009*/
  v12[0] = v7; /*0x94400f*/
  v9 = *(__int16 *)(a1 + 0x16); /*0x944013*/
  v12[3] = (v8 >> 0x10) + 1; /*0x944018*/
  v12[1] = v9; /*0x94401e*/
  v10 = *(__int16 *)(a1 + 0x1A); /*0x944022*/
  memset(&v12[4], 0, 0x10); /*0x944026*/
  v12[9] = 0; /*0x944036*/
  v12[2] = v10; /*0x944040*/
  v12[8] = 0x10; /*0x944044*/
  return sub_943900((int *)a1, a2, v12, v6); /*0x944051*/
}
