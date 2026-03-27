int __thiscall sub_8E0500(float *this, __m128 *a2, float a3, float a4)
{
  int v4; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // eax
  float *v7; // ebp
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  double v12; // st7
  double v13; // st6
  double v14; // st7
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // edx
  double v20; // st7
  double v21; // st6
  __int32 v22; // ecx
  double v23; // st7
  double v24; // st6
  int v25; // eax
  int v26; // edi
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v30; // eax
  int v31; // edi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // eax
  int v35; // ebp
  _DWORD *v36; // ecx
  unsigned __int64 v37; // rax
  double v38; // st7
  double v39; // st6
  int v40; // eax
  int v41; // esi
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // edi
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  float v49; // [esp+18h] [ebp-30h] BYREF
  float v50; // [esp+1Ch] [ebp-2Ch]
  float v51; // [esp+20h] [ebp-28h]
  float v52; // [esp+24h] [ebp-24h]
  float v53; // [esp+28h] [ebp-20h]
  float v54; // [esp+2Ch] [ebp-1Ch]
  float v55; // [esp+30h] [ebp-18h]
  float v56; // [esp+34h] [ebp-14h]
  float v57; // [esp+38h] [ebp-10h]
  float v58; // [esp+3Ch] [ebp-Ch]
  float v59; // [esp+40h] [ebp-8h]
  float v60; // [esp+44h] [ebp-4h]
  int v61; // [esp+4Ch] [ebp+4h]
  float v62; // [esp+54h] [ebp+Ch]

  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  v7 = this;
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v6 + 0x1A4);
    *v9 = "TtSimulate";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v7[2] = a4;
  v62 = a4 + a4;
  a2[1].m128_f32[0] = a3 + a2[1].m128_f32[0];
  *(float *)&v61 = v62 * flt_A34BA0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( fabs(a2[1].m128_f32[0] - a2[1].m128_f32[2]) < *(float *)&v61 && a3 / v62 > flt_A2FAAC )
        a2[1].m128_i32[0] = a2[1].m128_i32[2];
      v12 = a2[1].m128_f32[2];
      v13 = a2[1].m128_f32[1];
      v49 = a2[1].m128_f32[1];
      v50 = v12;
      v51 = v12 - v13;
      v52 = v51 == *(float *)&SrcStr ? 0.0 : fConstant_1 / v51;
      v14 = a2[1].m128_f32[2];
      if ( *((_DWORD *)v7 + 3) )
        break;
      if ( v14 >= a2[1].m128_f32[0] )
        goto LABEL_35;
      v15 = sub_8992B0(a2);
      v16 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
      if ( !v16 )
        v16 = dword_BA7D9C;
      if ( v15 > *(_DWORD *)(v16 + 0x2C) - *(_DWORD *)(v16 + 0x20) - 0x10 )
      {
        v17 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
        v18 = *(_DWORD *)(dword_BA7D98 + 8);
        v19 = v18 > v17 ? v18 - v17 : 0;
        if ( v15 > v19 )
        {
          *(_DWORD *)(dword_BA7D98 + 4) = 1;
          v25 = ThreadLocalStoragePointer[v4];
          if ( *(_DWORD *)(v25 + 0x1A4) < *(_DWORD *)(v25 + 0x1A8) )
          {
            v26 = ThreadLocalStoragePointer[v4];
            v27 = *(_DWORD **)(v25 + 0x1A4);
            *v27 = "Et";
            v28 = __rdtsc();
            v27[1] = v28;
            *(_DWORD *)(v26 + 0x1A4) = v27 + 3;
          }
          return 1;
        }
      }
      v20 = v62 + a2[1].m128_f32[2];
      a2[1].m128_i32[1] = a2[1].m128_i32[2];
      a2[1].m128_f32[2] = v20;
      v21 = a2[1].m128_f32[1];
      v53 = a2[1].m128_f32[1];
      v54 = v20;
      v55 = v20 - v21;
      if ( v55 == *(float *)&SrcStr )
        v56 = 0.0;
      else
        v56 = fConstant_1 / v55;
      v49 = v53;
      v52 = v56;
      v51 = v55;
      v22 = a2[5].m128_i32[3];
      v50 = v54;
      (*(void (__thiscall **)(__int32, __m128 *, float *))(*(_DWORD *)v22 + 0xC))(v22, a2, &v49);
      v7 = this;
      a2->m128_i32[3] = a2[1].m128_i32[1];
      sub_8D6E40(a2, &v49);
      *((_DWORD *)this + 3) = 1;
    }
    if ( (v14 + a2[1].m128_f32[1]) * flt_A3D65C >= a2[1].m128_f32[0] )
    {
LABEL_35:
      a2->m128_i32[3] = a2[1].m128_i32[0];
      v34 = ThreadLocalStoragePointer[v4];
      if ( *(_DWORD *)(v34 + 0x1A4) < *(_DWORD *)(v34 + 0x1A8) )
      {
        v35 = ThreadLocalStoragePointer[v4];
        v36 = *(_DWORD **)(v34 + 0x1A4);
        *v36 = "TtPostSimulateCb";
        v37 = __rdtsc();
        v36[1] = v37;
        *(_DWORD *)(v35 + 0x1A4) = v36 + 3;
      }
      v38 = a2[1].m128_f32[0];
      v39 = v38 - a3;
      v49 = v39;
      v50 = v38;
      v51 = v38 - v39;
      if ( v51 == *(float *)&SrcStr )
        v52 = 0.0;
      else
        v52 = fConstant_1 / v51;
      sub_8DCD60((int)&v49, (int)a2, (int)&v49);
      v40 = ThreadLocalStoragePointer[v4];
      if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) )
      {
        v41 = ThreadLocalStoragePointer[v4];
        v42 = *(_DWORD **)(v40 + 0x1A4);
        *v42 = "Et";
        v43 = __rdtsc();
        v42[1] = v43;
        *(_DWORD *)(v41 + 0x1A4) = v42 + 3;
      }
      v44 = ThreadLocalStoragePointer[v4];
      if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) )
      {
        v45 = ThreadLocalStoragePointer[v4];
        v46 = *(_DWORD **)(v44 + 0x1A4);
        *v46 = "Et";
        v47 = __rdtsc();
        v46[1] = v47;
        *(_DWORD *)(v45 + 0x1A4) = v46 + 3;
      }
      return 0;
    }
    v23 = a2[1].m128_f32[2];
    v24 = a2[1].m128_f32[1];
    v57 = a2[1].m128_f32[1];
    v58 = v23;
    v59 = v23 - v24;
    v60 = v59 == *(float *)&SrcStr ? 0.0 : fConstant_1 / v59;
    v50 = v58;
    v49 = v57;
    v51 = v59;
    v52 = v60;
    sub_8D7920((int)a2, &v49);
    if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
      break;
    v7[3] = 0.0;
    a2->m128_f32[3] = (a2[1].m128_f32[2] + a2[1].m128_f32[1]) * flt_A3D65C;
  }
  v30 = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v30 + 0x1A4) < *(_DWORD *)(v30 + 0x1A8) )
  {
    v31 = ThreadLocalStoragePointer[v4];
    v32 = *(_DWORD **)(v30 + 0x1A4);
    *v32 = "Et";
    v33 = __rdtsc();
    v32[1] = v33;
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3;
  }
  return 2;
}
