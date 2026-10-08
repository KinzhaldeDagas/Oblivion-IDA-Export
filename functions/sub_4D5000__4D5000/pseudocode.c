bhkWorld *__cdecl sub_4D5000(float *a1)
{
  int v1; // ebx
  double v2; // st7
  float v3; // eax
  float v4; // ecx
  int v5; // eax
  FreeEntry *v6; // eax
  unsigned __int8 v7; // cl
  bhkWorld *v8; // eax
  bhkWorld *v9; // eax
  bhkWorld *v10; // edi
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  UInt32 *p_unk64; // esi
  TESTrapListener *v15; // eax
  TESTrapListener *v16; // eax
  float *v17; // ebx
  _DWORD *v18; // eax
  _DWORD *v19; // eax
  _DWORD *v20; // ebx
  _DWORD *v21; // eax
  double v22; // st7
  UInt32 unk68; // edx
  UInt32 v24; // eax
  __int128 v25; // xmm0
  double v26; // st7
  double v27; // st7
  bhkWorld *result; // eax
  float v29; // [esp+0h] [ebp-F8h]
  int v30; // [esp+4h] [ebp-F4h]
  float v31[3]; // [esp+1Ch] [ebp-DCh] BYREF
  __int128 v32; // [esp+28h] [ebp-D0h]
  __m128 v33; // [esp+38h] [ebp-C0h] BYREF
  __int128 v34; // [esp+48h] [ebp-B0h]
  float v35; // [esp+88h] [ebp-70h]
  int v36; // [esp+F4h] [ebp-4h]
  int savedregs; // [esp+F8h] [ebp+0h] BYREF

  sub_88A4F0(v33.m128_f32); /*0x4d5047*/
  *(float *)&v32 = 0.0; /*0x4d504e*/
  *((float *)&v32 + 1) = 0.0; /*0x4d5053*/
  v1 = 0; /*0x4d5057*/
  *((float *)&v32 + 2) = flt_A46B20; /*0x4d5063*/
  v36 = 0; /*0x4d5067*/
  *((float *)&v32 + 3) = 0.0; /*0x4d506e*/
  v2 = flt_A46B30; /*0x4d5077*/
  v34 = v32; /*0x4d507d*/
  v29 = v2; /*0x4d5082*/
  sub_8A9460(&v33, v29); /*0x4d5085*/
  v3 = *a1; /*0x4d508f*/
  v4 = a1[1]; /*0x4d5091*/
  v31[2] = 0.0; /*0x4d5098*/
  v31[0] = v3; /*0x4d509e*/
  v5 = iNumHavokThreads; /*0x4d50a2*/
  v35 = 1.0; /*0x4d50a7*/
  v31[1] = v4; /*0x4d50b0*/
  havokThreads = v5; /*0x4d50be*/
  v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000000C0uLL, v30); /*0x4d50c3*/
  v7 = 0x10 - ((unsigned __int8)v6 & 0xF); /*0x4d50cf*/
  v8 = (bhkWorld *)((char *)v6 + v7); /*0x4d50d4*/
  HIBYTE(v8[0xFFFFFFFF].unk78) = v7; /*0x4d50d6*/
  LOBYTE(v36) = 1; /*0x4d50e4*/
  v9 = sub_8A7B20(v8, (int)&v33); /*0x4d50ec*/
  v10 = v9; /*0x4d50f1*/
  LOBYTE(v36) = 0; /*0x4d50f5*/
  if ( v9 ) /*0x4d50fc*/
    v9->__vftable[1].Unk_03(v9); /*0x4d5105*/
  v11 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4d5109*/
  v12 = v11; /*0x4d510e*/
  LOBYTE(v36) = 2; /*0x4d5119*/
  if ( v11 ) /*0x4d5121*/
  {
    sub_8984C0(v11); /*0x4d5125*/
    *v12 = &TESWindListener::`vftable'; /*0x4d512a*/
    v1 = (int)v12; /*0x4d5130*/
  }
  LOBYTE(v36) = 0; /*0x4d5134*/
  if ( v10 ) /*0x4d513c*/
  {
    v13 = (_DWORD *)v10->__vftable[1].Unk_03(v10); /*0x4d5145*/
    if ( v13 ) /*0x4d5149*/
      sub_899CA0(v13, v1); /*0x4d514e*/
  }
  p_unk64 = &v10->unk64; /*0x4d5156*/
  if ( v10->unk68 == (v10->unk6C & 0x3FFFFFFF) ) /*0x4d5162*/
    sub_8A6EE0((const void **)&v10->unk64, 4); /*0x4d5167*/
  *(_DWORD *)(*p_unk64 + 4 * v10->unk68++) = v1; /*0x4d5174*/
  v15 = (TESTrapListener *)FormHeapAlloc(0x20u); /*0x4d517d*/
  LOBYTE(v36) = 3; /*0x4d518b*/
  if ( v15 ) /*0x4d5193*/
    v16 = TESTrapListener::TESTrapListener(v15); /*0x4d5197*/
  else
    v16 = 0; /*0x4d519e*/
  LOBYTE(v36) = 0; /*0x4d51a3*/
  sub_4CD320((const void **)&v10->__vftable, v16); /*0x4d51ab*/
  v17 = sub_537CC0(); /*0x4d51b7*/
  if ( v10 ) /*0x4d51b9*/
  {
    v18 = (_DWORD *)v10->__vftable[1].Unk_03(v10); /*0x4d51c2*/
    if ( v18 ) /*0x4d51c6*/
      sub_899CA0(v18, (int)v17); /*0x4d51cb*/
  }
  if ( v10->unk68 == (v10->unk6C & 0x3FFFFFFF) ) /*0x4d51dc*/
    sub_8A6EE0((const void **)&v10->unk64, 4); /*0x4d51e1*/
  *(_DWORD *)(*p_unk64 + 4 * v10->unk68++) = v17; /*0x4d51ee*/
  v19 = (_DWORD *)FormHeapAlloc(0x14u); /*0x4d51f7*/
  LOBYTE(v36) = 4; /*0x4d5205*/
  if ( v19 ) /*0x4d520d*/
    v20 = sub_5360F0(v19); /*0x4d5216*/
  else
    v20 = 0; /*0x4d521a*/
  LOBYTE(v36) = 0; /*0x4d521e*/
  if ( v10 ) /*0x4d5226*/
  {
    v21 = (_DWORD *)v10->__vftable[1].Unk_03(v10); /*0x4d522f*/
    if ( v21 ) /*0x4d5233*/
      sub_899CA0(v21, (int)v20); /*0x4d5238*/
  }
  if ( v10->unk68 == (v10->unk6C & 0x3FFFFFFF) ) /*0x4d5249*/
    sub_8A6EE0((const void **)&v10->unk64, 4); /*0x4d524e*/
  v22 = flt_A46B2C; /*0x4d5256*/
  unk68 = v10->unk68; /*0x4d525c*/
  v24 = *p_unk64; /*0x4d525f*/
  *(float *)&v32 = v22; /*0x4d5261*/
  *((float *)&v32 + 1) = v22; /*0x4d5265*/
  *(_DWORD *)(v24 + 4 * unk68) = v20; /*0x4d5269*/
  ++v10->unk68; /*0x4d526c*/
  *((float *)&v32 + 2) = v22; /*0x4d5270*/
  v25 = v32; /*0x4d5274*/
  v26 = flt_A46B28; /*0x4d5279*/
  *(float *)&v32 = v26; /*0x4d527f*/
  *((float *)&v32 + 1) = v26; /*0x4d5287*/
  *(_OWORD *)&v10[1].hkObject = v25; /*0x4d528b*/
  *((float *)&v32 + 2) = v26; /*0x4d5293*/
  *(__int128 *)&v10[1].unk1C = v32; /*0x4d529e*/
  sub_88D260((__m128 *)v10, v31); /*0x4d52a5*/
  v10->__vftable[1].Unk_03(v10); /*0x4d52b1*/
  ((void (__thiscall *)(bhkWorld *))v10->__vftable[1].DumpChildAttributes)(v10); /*0x4d52bd*/
  v10->unk1D = MEMORY[0xB33A34] == 0; /*0x4d52cb*/
  sub_88B680((int *)v10, 0); /*0x4d52d0*/
  v27 = 1.0; /*0x4d52d5*/
  result = v10; /*0x4d52e4*/
  if ( flt_B097C0 < 1.0 ) /*0x4d52e6*/
    v27 = flt_B097C0; /*0x4d52e8*/
  fMaxTime = v27; /*0x4d52ee*/
  return result; /*0x4d52f4*/
}
