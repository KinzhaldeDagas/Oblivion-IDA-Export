char __cdecl sub_6BB730(float a1, int **a2, unsigned int *a3)
{
  unsigned int *v3; // edi
  int *v4; // ebp
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  char *v8; // ebx
  float *v9; // esi
  double v10; // st6
  int *v11; // edi
  int v13; // [esp+1Ch] [ebp-48h]
  int v14; // [esp+3Ch] [ebp-28h] BYREF
  int v15; // [esp+40h] [ebp-24h] BYREF
  int v16; // [esp+44h] [ebp-20h] BYREF
  float v17; // [esp+48h] [ebp-1Ch]
  float v18; // [esp+4Ch] [ebp-18h]
  int v19; // [esp+50h] [ebp-14h] BYREF
  int v20; // [esp+54h] [ebp-10h] BYREF
  unsigned int v21; // [esp+60h] [ebp-4h]

  v3 = a3; /*0x6bb757*/
  v4 = *a2; /*0x6bb765*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)*a2, *a3, (unsigned int *)&v14, 0x10u) ) /*0x6bb774*/
    return 0; /*0x6bb945*/
  v5 = *a3 + 1; /*0x6bb786*/
  v6 = (unsigned __int64)(unsigned int)v5 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v5;
  v7 = FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
  v20 = v7; /*0x6bb7b0*/
  v8 = 0; /*0x6bb7b4*/
  v21 = 0; /*0x6bb7b8*/
  if ( v7 ) /*0x6bb7bc*/
  {
    v8 = (char *)(v7 + 4); /*0x6bb7c9*/
    *(_DWORD *)v7 = v5; /*0x6bb7cf*/
    ArrayConstructor( /*0x6bb7d1*/
      (char *)(v7 + 4),
      0x10u,
      v5,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
  }
  v21 = 0xFFFFFFFF; /*0x6bb7e0*/
  memcpy(v8, v4, 0x10 * v14); /*0x6bb7e8*/
  if ( *a3 > v14 ) /*0x6bb7f8*/
    memcpy(&v8[0x10 * v14 + 0x10], &v4[4 * v14], 0x10 * (*a3 - v14)); /*0x6bb80e*/
  *(float *)&v16 = sub_6BB4D0(a1, (float *)v4, 2, *(float *)a3, 0x10); /*0x6bb82f*/
  v9 = (float *)&v8[0x10 * v14]; /*0x6bb83a*/
  *v9 = a1; /*0x6bb83c*/
  v10 = *(float *)&v16; /*0x6bb841*/
  v9[1] = *(float *)&v16; /*0x6bb845*/
  v9[2] = 0.0; /*0x6bb84a*/
  v9[3] = 0.0; /*0x6bb84d*/
  if ( v14 ) /*0x6bb856*/
  {
    if ( v14 != *a3 ) /*0x6bb85e*/
    {
      v11 = (int *)&v8[0x10 * v14]; /*0x6bb86b*/
      v20 = v11[0xFFFFFFFD]; /*0x6bb86e*/
      v19 = v11[0xFFFFFFFC]; /*0x6bb87a*/
      v15 = v11[0xFFFFFFFF]; /*0x6bb886*/
      v18 = *((float *)v11 + 5); /*0x6bb894*/
      v17 = *((float *)v11 + 4); /*0x6bb89f*/
      v16 = v11[6]; /*0x6bb8a6*/
      *(float *)&v13 = v10; /*0x6bb8aa*/
      sub_6D3720( /*0x6bb8d7*/
        *(float *)&v20,
        *(float *)&v19,
        (float *)&v15,
        v18,
        v17,
        (float *)&v16,
        a1,
        v13,
        (float *)&v20,
        (float *)&v19);
      v11[0xFFFFFFFF] = v15; /*0x6bb8e3*/
      v9[2] = *(float *)&v20; /*0x6bb8ea*/
      v9[3] = *(float *)&v19; /*0x6bb8f1*/
      v11[6] = v16; /*0x6bb8f8*/
      v3 = a3; /*0x6bb8fb*/
    }
  }
  ++*v3; /*0x6bb905*/
  if ( v4 ) /*0x6bb90a*/
  {
    _LN21((char *)v4, 0x10u, v4[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6bb91b*/
    FormHeapFree((unsigned int)(v4 + 0xFFFFFFFF)); /*0x6bb921*/
  }
  *a2 = (int *)v8; /*0x6bb92d*/
  return 1; /*0x6bb931*/
}
