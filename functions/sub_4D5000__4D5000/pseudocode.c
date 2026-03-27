bhkWorld *__cdecl sub_4D5000(float *a1)
{
  int v1; // ebx
  double v2; // st7
  float v3; // eax
  int v4; // ecx
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

  sub_88A4F0(v33.m128_f32);
  *(float *)&v32 = 0.0;
  *((float *)&v32 + 1) = 0.0;
  v1 = 0;
  *((float *)&v32 + 2) = flt_A46B20;
  v36 = 0;
  *((float *)&v32 + 3) = 0.0;
  v2 = flt_A46B30;
  v34 = v32;
  v29 = v2;
  sub_8A9460(&v33, v29);
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 1);
  v31[2] = 0.0;
  v31[0] = v3;
  v5 = iNumHavokThreads;
  v35 = 1.0;
  LODWORD(v31[1]) = v4;
  havokThreads = v5;
  v6 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x1000000C0uLL, v30);
  v7 = 0x10 - ((unsigned __int8)v6 & 0xF);
  v8 = (bhkWorld *)((char *)v6 + v7);
  HIBYTE(v8[0xFFFFFFFF].unk78) = v7;
  LOBYTE(v36) = 1;
  v9 = sub_8A7B20(v8, (int)&v33);
  v10 = v9;
  LOBYTE(v36) = 0;
  if ( v9 )
    v9->__vftable[1].Unk_03(v9);
  v11 = (_DWORD *)FormHeapAlloc(0x14u);
  v12 = v11;
  LOBYTE(v36) = 2;
  if ( v11 )
  {
    sub_8984C0(v11);
    *v12 = &TESWindListener::`vftable';
    v1 = (int)v12;
  }
  LOBYTE(v36) = 0;
  if ( v10 )
  {
    v13 = (_DWORD *)v10->__vftable[1].Unk_03(v10);
    if ( v13 )
      sub_899CA0(v13, v1);
  }
  p_unk64 = &v10->unk64;
  if ( v10->unk68 == (v10->unk6C & 0x3FFFFFFF) )
    sub_8A6EE0((int)&v10->unk64, 4);
  *(_DWORD *)(*p_unk64 + 4 * v10->unk68++) = v1;
  v15 = (TESTrapListener *)FormHeapAlloc(0x20u);
  LOBYTE(v36) = 3;
  if ( v15 )
    v16 = TESTrapListener::TESTrapListener(v15);
  else
    v16 = 0;
  LOBYTE(v36) = 0;
  sub_4CD320(v10, (int)v16);
  v17 = sub_537CC0();
  if ( v10 )
  {
    v18 = (_DWORD *)v10->__vftable[1].Unk_03(v10);
    if ( v18 )
      sub_899CA0(v18, (int)v17);
  }
  if ( v10->unk68 == (v10->unk6C & 0x3FFFFFFF) )
    sub_8A6EE0((int)&v10->unk64, 4);
  *(_DWORD *)(*p_unk64 + 4 * v10->unk68++) = v17;
  v19 = (_DWORD *)FormHeapAlloc(0x14u);
  LOBYTE(v36) = 4;
  if ( v19 )
    v20 = sub_5360F0(v19);
  else
    v20 = 0;
  LOBYTE(v36) = 0;
  if ( v10 )
  {
    v21 = (_DWORD *)v10->__vftable[1].Unk_03(v10);
    if ( v21 )
      sub_899CA0(v21, (int)v20);
  }
  if ( v10->unk68 == (v10->unk6C & 0x3FFFFFFF) )
    sub_8A6EE0((int)&v10->unk64, 4);
  v22 = flt_A46B2C;
  unk68 = v10->unk68;
  v24 = *p_unk64;
  *(float *)&v32 = v22;
  *((float *)&v32 + 1) = v22;
  *(_DWORD *)(v24 + 4 * unk68) = v20;
  ++v10->unk68;
  *((float *)&v32 + 2) = v22;
  v25 = v32;
  v26 = flt_A46B28;
  *(float *)&v32 = v26;
  *((float *)&v32 + 1) = v26;
  *(_OWORD *)&v10[1].hkObject = v25;
  *((float *)&v32 + 2) = v26;
  *(__int128 *)&v10[1].unk1C = v32;
  sub_88D260((__m128 *)v10, v31);
  v10->__vftable[1].Unk_03(v10);
  ((void (__thiscall *)(bhkWorld *))v10->__vftable[1].DumpChildAttributes)(v10);
  v10->unk1D = IsCollisionOn == 0;
  sub_88B680((int *)v10, 0);
  v27 = 1.0;
  result = v10;
  if ( flt_B097C0 < 1.0 )
    v27 = flt_B097C0;
  fMaxTime = v27;
  return result;
}
