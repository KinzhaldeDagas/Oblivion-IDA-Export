char __cdecl sub_6C2410(float a1, int **a2, unsigned int *a3)
{
  int *v3; // ebp
  int v4; // esi
  unsigned int v5; // ecx
  int v6; // eax
  char *v7; // ebx
  char *v8; // esi
  float *v9; // eax
  int v11; // [esp+28h] [ebp-14h] BYREF
  float v12; // [esp+2Ch] [ebp-10h]
  unsigned int v13; // [esp+38h] [ebp-4h]

  v3 = *a2; /*0x6c2445*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)&v11, 8u) ) /*0x6c2454*/
    return 0; /*0x6c2571*/
  v4 = *a3 + 1; /*0x6c2466*/
  v5 = (unsigned __int64)(unsigned int)v4 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v4;
  v6 = FormHeapAlloc(__CFADD__(v5, 4) ? 0xFFFFFFFF : v5 + 4);
  v12 = *(float *)&v6; /*0x6c2490*/
  v13 = 0; /*0x6c2496*/
  if ( v6 ) /*0x6c249e*/
  {
    v7 = (char *)(v6 + 4); /*0x6c24ab*/
    *(_DWORD *)v6 = v4; /*0x6c24b1*/
    ArrayConstructor( /*0x6c24b3*/
      (char *)(v6 + 4),
      8u,
      v4,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
    v8 = v7; /*0x6c24b8*/
  }
  else
  {
    v8 = 0; /*0x6c24bc*/
  }
  v13 = 0xFFFFFFFF; /*0x6c24cc*/
  memcpy(v8, v3, 8 * v11); /*0x6c24d4*/
  if ( *a3 > v11 ) /*0x6c24e4*/
    memcpy(&v8[8 * v11 + 8], &v3[2 * v11], 8 * (*a3 - v11)); /*0x6c24f9*/
  v12 = sub_6BB4D0(a1, (float *)v3, 5, *(float *)a3, 8); /*0x6c251a*/
  v9 = (float *)&v8[8 * v11]; /*0x6c2522*/
  *v9 = a1; /*0x6c2525*/
  v9[1] = v12; /*0x6c252e*/
  ++*a3; /*0x6c2531*/
  if ( v3 ) /*0x6c2536*/
  {
    _LN21((char *)v3, 8u, v3[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6c2547*/
    FormHeapFree((unsigned int)(v3 + 0xFFFFFFFF)); /*0x6c254d*/
  }
  *a2 = (int *)v8; /*0x6c2559*/
  return 1; /*0x6c255d*/
}
