// Type-2 cubic position boundary insertion: allocate count+1 0x40-byte records, insert evaluated position, split/repair adjacent cubic tangent state when interior, free old array, replace pointer, then recompute derived coefficients.
char __cdecl NiPosKey_InsertType2Cubic(float a1, void **a2, unsigned int *a3)
{
  unsigned int v3; // edx
  int *v4; // edi
  int v5; // esi
  unsigned int v6; // ecx
  int v7; // eax
  char *v8; // ebx
  char *v9; // esi
  float v10; // ecx
  float v11; // edx
  char *v12; // edi
  float v13; // eax
  int v14; // ecx
  int v15; // edx
  double v16; // st6
  int v17; // eax
  float v18; // ecx
  float v19; // edx
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  int v23; // ecx
  int v24; // edx
  int v25; // eax
  int v27; // [esp+1Ch] [ebp-9Ch]
  size_t v28; // [esp+24h] [ebp-94h]
  size_t v29; // [esp+24h] [ebp-94h]
  int v30; // [esp+3Ch] [ebp-7Ch] BYREF
  float v31; // [esp+40h] [ebp-78h]
  float v32; // [esp+44h] [ebp-74h]
  void *v33; // [esp+48h] [ebp-70h]
  int v34; // [esp+4Ch] [ebp-6Ch] BYREF
  int v35; // [esp+50h] [ebp-68h] BYREF
  int v36; // [esp+54h] [ebp-64h] BYREF
  int v37; // [esp+58h] [ebp-60h] BYREF
  int v38; // [esp+5Ch] [ebp-5Ch] BYREF
  int v39[2]; // [esp+60h] [ebp-58h] BYREF
  int v40; // [esp+68h] [ebp-50h]
  int v41; // [esp+6Ch] [ebp-4Ch]
  float v42; // [esp+70h] [ebp-48h]
  float v43; // [esp+74h] [ebp-44h]
  float v44; // [esp+78h] [ebp-40h]
  float v45; // [esp+7Ch] [ebp-3Ch]
  float v46; // [esp+80h] [ebp-38h]
  float v47; // [esp+84h] [ebp-34h]
  int v48; // [esp+88h] [ebp-30h] BYREF
  int v49; // [esp+8Ch] [ebp-2Ch] BYREF
  int v50; // [esp+90h] [ebp-28h] BYREF
  int v51; // [esp+94h] [ebp-24h] BYREF
  int v52; // [esp+98h] [ebp-20h] BYREF
  int v53; // [esp+9Ch] [ebp-1Ch] BYREF
  int v54[3]; // [esp+A0h] [ebp-18h] BYREF
  unsigned int v55; // [esp+B4h] [ebp-4h]

  v3 = *a3; /*0x6bc9df*/
  v4 = (int *)*a2; /*0x6bc9e2*/
  v33 = v4; /*0x6bc9f1*/
  if ( !NiAnimationKey_FindInsertionIndex(a1, (int)v4, v3, (unsigned int *)&v30, 0x40u) ) /*0x6bc9f5*/
    return 0; /*0x6bcd7e*/
  v5 = *a3 + 1; /*0x6bca08*/
  v6 = (unsigned __int64)(unsigned int)v5 >> 0x1A != 0 ? 0xFFFFFFFF : v5 << 6;
  *(float *)&v7 = COERCE_FLOAT(FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4));
  v32 = *(float *)&v7; /*0x6bca32*/
  v8 = 0; /*0x6bca36*/
  v55 = 0; /*0x6bca3a*/
  if ( *(float *)&v7 != 0.0 ) /*0x6bca41*/
  {
    v8 = (char *)(v7 + 4); /*0x6bca4e*/
    *(_DWORD *)v7 = v5; /*0x6bca54*/
    ArrayConstructor( /*0x6bca56*/
      (char *)(v7 + 4),
      0x40u,
      v5,
      (void (__thiscall *)(char *))ActorList_ReturnHead,
      Shared_NoOpVirtual_60D0A0);
  }
  LODWORD(v28) = v30 << 6; /*0x6bca62*/
  v55 = 0xFFFFFFFF; /*0x6bca65*/
  memcpy(v8, v4, v28); /*0x6bca70*/
  if ( *a3 > v30 ) /*0x6bca81*/
  {
    LODWORD(v29) = (*a3 - v30) << 6; /*0x6bca8d*/
    memcpy(&v8[0x40 * v30 + 0x40], &v4[0x10 * v30], v29); /*0x6bca97*/
  }
  NiPosKey_EvaluateClamped(v54, a1, (int)v4, 2, *a3, 0x40u); /*0x6bcabb*/
  v9 = &v8[0x40 * v30]; /*0x6bcace*/
  *(float *)v9 = a1; /*0x6bcad0*/
  *((_DWORD *)v9 + 1) = v54[0]; /*0x6bcad9*/
  *((_DWORD *)v9 + 2) = v54[1]; /*0x6bcae3*/
  *((_DWORD *)v9 + 3) = v54[2]; /*0x6bcaed*/
  *((float *)v9 + 4) = g_zeroNiPoint3; /*0x6bcaf5*/
  *((float *)v9 + 5) = *(&g_zeroNiPoint3 + 1); /*0x6bcafe*/
  *((float *)v9 + 6) = MEMORY[0xB3F9B0][0]; /*0x6bcb07*/
  *((float *)v9 + 7) = g_zeroNiPoint3; /*0x6bcb0f*/
  *((float *)v9 + 8) = *(&g_zeroNiPoint3 + 1); /*0x6bcb18*/
  *((float *)v9 + 9) = MEMORY[0xB3F9B0][0]; /*0x6bcb21*/
  if ( v30 ) /*0x6bcb2d*/
  {
    if ( v30 != *a3 ) /*0x6bcb36*/
    {
      v10 = *(float *)&v8[0x40 * v30 - 0x38]; /*0x6bcb3f*/
      v11 = *(float *)&v8[0x40 * v30 - 0x34]; /*0x6bcb47*/
      v32 = *(float *)&v8[0x40 * v30 - 0x40]; /*0x6bcb4b*/
      v12 = &v8[0x40 * v30]; /*0x6bcb4f*/
      v45 = *((float *)v12 + 0xFFFFFFF1); /*0x6bcb55*/
      v34 = *((_DWORD *)v12 + 0xFFFFFFF7); /*0x6bcb5c*/
      v13 = *((float *)v9 + 1); /*0x6bcb60*/
      v46 = v10; /*0x6bcb63*/
      v35 = *((_DWORD *)v12 + 0xFFFFFFF8); /*0x6bcb6a*/
      v14 = *((_DWORD *)v9 + 2); /*0x6bcb6e*/
      v47 = v11; /*0x6bcb71*/
      v36 = *((_DWORD *)v12 + 0xFFFFFFF9); /*0x6bcb78*/
      v15 = *((_DWORD *)v9 + 3); /*0x6bcb7f*/
      v31 = *((float *)v12 + 0x10); /*0x6bcb82*/
      *(float *)&v39[1] = v13; /*0x6bcb86*/
      v16 = v13; /*0x6bcb8a*/
      v42 = *((float *)v12 + 0x11); /*0x6bcb91*/
      v17 = *((_DWORD *)v12 + 0x14); /*0x6bcb95*/
      v40 = v14; /*0x6bcb98*/
      v18 = *((float *)v12 + 0x12); /*0x6bcb9c*/
      v41 = v15; /*0x6bcb9f*/
      v19 = *((float *)v12 + 0x13); /*0x6bcba3*/
      v37 = v17; /*0x6bcba6*/
      v43 = v18; /*0x6bcbaa*/
      v38 = *((_DWORD *)v12 + 0x15); /*0x6bcbb1*/
      *(float *)&v27 = v16; /*0x6bcbc2*/
      v44 = v19; /*0x6bcbc6*/
      v39[0] = *((_DWORD *)v12 + 0x16); /*0x6bcbd0*/
      sub_6D3720(v45, v32, (float *)&v34, v42, v31, (float *)&v37, a1, v27, (float *)&v48, (float *)&v51); /*0x6bcc02*/
      sub_6D3720(v46, v32, (float *)&v35, v43, v31, (float *)&v38, a1, v40, (float *)&v49, (float *)&v52); /*0x6bcc5a*/
      sub_6D3720(v47, v32, (float *)&v36, v44, v31, (float *)v39, a1, v41, (float *)&v50, (float *)&v53); /*0x6bccb2*/
      *((_DWORD *)v12 + 0xFFFFFFF7) = v34; /*0x6bccbb*/
      *((_DWORD *)v12 + 0xFFFFFFF8) = v35; /*0x6bccc2*/
      *((_DWORD *)v12 + 0xFFFFFFF9) = v36; /*0x6bccc9*/
      v20 = v49; /*0x6bccd3*/
      v21 = v50; /*0x6bccda*/
      *((_DWORD *)v9 + 4) = v48; /*0x6bcce1*/
      v22 = v51; /*0x6bcce4*/
      *((_DWORD *)v9 + 5) = v20; /*0x6bcceb*/
      v23 = v52; /*0x6bccee*/
      *((_DWORD *)v9 + 6) = v21; /*0x6bccf5*/
      v24 = v53; /*0x6bccf8*/
      *((_DWORD *)v9 + 7) = v22; /*0x6bccff*/
      v25 = v37; /*0x6bcd02*/
      *((_DWORD *)v9 + 8) = v23; /*0x6bcd06*/
      *((_DWORD *)v9 + 9) = v24; /*0x6bcd09*/
      *((_DWORD *)v12 + 0x14) = v25; /*0x6bcd0c*/
      *((_DWORD *)v12 + 0x15) = v38; /*0x6bcd13*/
      *((_DWORD *)v12 + 0x16) = v39[0]; /*0x6bcd1a*/
      v4 = (int *)v33; /*0x6bcd1d*/
    }
  }
  ++*a3; /*0x6bcd28*/
  if ( v4 ) /*0x6bcd2e*/
  {
    _LN21((char *)v4, 0x40u, v4[0xFFFFFFFF], Shared_NoOpVirtual_60D0A0); /*0x6bcd3f*/
    FormHeapFree((unsigned int)(v4 + 0xFFFFFFFF)); /*0x6bcd45*/
  }
  *a2 = v8; /*0x6bcd54*/
  sub_6BC600((int)v8, *a3); /*0x6bcd5d*/
  return 1; /*0x6bcd67*/
}
