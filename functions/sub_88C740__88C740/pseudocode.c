char __thiscall sub_88C740(_BYTE *this, int a2, NiAVObject *a3)
{
  NiAVObject *v3; // edi
  char result; // al
  NiObject *v5; // eax
  volatile LONG *v6; // eax
  volatile LONG *v7; // esi
  UInt32 v8; // eax
  UInt32 v9; // edi
  NiObject *v10; // eax
  bhkRefObject *v11; // eax
  bhkRefObject *v12; // esi
  void (__thiscall *v13)(_DWORD, __int128 *); // edx
  void (__thiscall *Unk_12)(NiObject *, UInt32); // eax
  __m128 v15; // xmm1
  __m128 v16; // xmm3
  double v17; // st5
  double v18; // st6
  __m128 v19; // xmm2
  __m128 v20; // xmm0
  __m128 v21; // xmm4
  __m128 v22; // xmm0
  __m128 v23; // xmm4
  double v24; // st4
  double v25; // rt2
  NiAVObject *v26; // ecx
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm3
  __m128 v30; // xmm5
  __int16 v31; // ax
  bool v32; // zf
  void (__cdecl *v33)(int, int); // eax
  volatile LONG *v34; // [esp-4h] [ebp-128h]
  float v35; // [esp+1Ch] [ebp-108h] BYREF
  char v36; // [esp+23h] [ebp-101h]
  NiAVObject *v37; // [esp+24h] [ebp-100h]
  volatile LONG *v38; // [esp+28h] [ebp-FCh]
  int v39; // [esp+2Ch] [ebp-F8h]
  _BYTE *v40; // [esp+30h] [ebp-F4h]
  _BYTE *v41; // [esp+34h] [ebp-F0h] BYREF
  int v42; // [esp+38h] [ebp-ECh]
  int v43; // [esp+3Ch] [ebp-E8h]
  int v44; // [esp+40h] [ebp-E4h]
  __int64 v45; // [esp+44h] [ebp-E0h]
  int v46; // [esp+4Ch] [ebp-D8h]
  bhkRefObject *v47; // [esp+50h] [ebp-D4h]
  __m128 v48; // [esp+54h] [ebp-D0h]
  __m128 v49; // [esp+64h] [ebp-C0h] BYREF
  __m128 v50; // [esp+74h] [ebp-B0h] BYREF
  __m128 v51; // [esp+84h] [ebp-A0h] BYREF
  __m128 v52; // [esp+94h] [ebp-90h] BYREF
  __int128 v53; // [esp+A4h] [ebp-80h] BYREF
  __int128 v54; // [esp+B4h] [ebp-70h] BYREF
  __m128 v55[4]; // [esp+C4h] [ebp-60h] BYREF
  unsigned int v56; // [esp+120h] [ebp-4h]

  v3 = a3;
  result = 0;
  v40 = this;
  v37 = a3;
  v36 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v5 = sub_6FA970((NiObjectNET *)a3);
      if ( v5 )
      {
        if ( (v5[1].members.m_uiRefCount & 2) != 0 )
        {
          v39 = 0;
          v6 = (volatile LONG *)sub_4A05E0(a2);
          v7 = v6;
          v38 = v6;
          if ( v6 )
          {
            v8 = *((UInt32 *)v6 + 4);
            v39 = 1;
            v35 = *(float *)&v8;
            if ( *(float *)&v8 != 0.0 && !(*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v7 + 0x74))(v7) )
            {
              v40[0x18] = 1;
              v36 = 1;
              if ( a3 != (NiAVObject *)a2 )
              {
                v9 = 0;
                if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_BA8018, (NiObject *)LODWORD(v35)) )
                {
                  v9 = LODWORD(v35);
                }
                else
                {
                  v10 = NiRTTI_Cast((BSStringT *)dword_BA7D84, (NiObject *)LODWORD(v35));
                  sub_405070(&v35, (int)v10);
                  v56 = 0;
                  if ( v35 != 0.0 )
                  {
                    sub_897670(v7, 0);
                    v11 = (bhkRefObject *)sub_8896A0(0x40);
                    v47 = v11;
                    LOBYTE(v56) = 1;
                    if ( v11 )
                      v12 = sub_8B96D0(v11, (_DWORD *)LODWORD(v35));
                    else
                      v12 = 0;
                    v13 = *(void (__thiscall **)(_DWORD, __int128 *))(*(_DWORD *)LODWORD(v35) + 0x8C);
                    LOBYTE(v56) = 0;
                    v9 = (UInt32)v12;
                    v13(LODWORD(v35), &v54);
                    (*(void (__thiscall **)(float, __int128 *))(*(_DWORD *)LODWORD(v35) + 0x90))(
                      COERCE_FLOAT(LODWORD(v35)),
                      &v53);
                    Unk_12 = v12->__vftable[1].Unk_12;
                    *(__int128 *)&v12[4].__vftable = v54;
                    *(__int128 *)&v12[2].hkObject = v53;
                    Unk_12(v12, (UInt32)&stru_BA7A40);
                    v12->__vftable[2].super.Destructor((NiRefObject *)v12, (bool)&flt_B2F080);
                    sub_897670(v38, (int)v12);
                    v7 = v38;
                  }
                  NiSmartPointer_Set__((Ni2DBuffer **)&v35, 0);
                  v56 = 0xFFFFFFFF;
                  sub_7016A0((NiD3DVertexShader *)&v35);
                }
                if ( v9 )
                {
                  sub_5398E0((int)v55, (float *)(a2 + 0x30));
                  v35 = *(float *)(v9 + 0x2C);
                  v15 = *(__m128 *)(v9 + 0x30);
                  v16 = 0;
                  v17 = dbl_A3D0C0;
                  v18 = v35 * v17;
                  v35 = v35 * v18 - dbl_A2F928;
                  v16.m128_f32[0] = v35;
                  v48 = *(__m128 *)(v9 + 0x20);
                  v48.m128_f32[3] = 0.0;
                  v19 = v48;
                  v20 = _mm_mul_ps(v48, v15);
                  v48.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
                                  + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
                  v21 = 0;
                  v35 = v17 * v48.m128_f32[0];
                  v21.m128_f32[0] = v35;
                  v35 = v18;
                  v22 = 0;
                  v22.m128_f32[0] = v35;
                  v49 = _mm_add_ps(
                          _mm_mul_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xC9), _mm_shuffle_ps(v15, v15, 0xD2)),
                              _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xD2), _mm_shuffle_ps(v15, v15, 0xC9))),
                            _mm_shuffle_ps(v22, v22, 0)),
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v19),
                            _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v15)));
                  sub_88FCC0(&v50, v55, &v49);
                  sub_8B1B40(v52.m128_f32, v55[0].m128_f32);
                  sub_889470(&v51, (__m128 *)(v9 + 0x20), &v52);
                  v35 = *(float *)(v9 + 0x2C);
                  v23 = 0;
                  v24 = v35;
                  v34 = v38;
                  v25 = dbl_A3D0C0;
                  v26 = v37;
                  v35 = v35 * v25 * v35 - dbl_A2F928;
                  v23.m128_f32[0] = v35;
                  v48 = *(__m128 *)(v9 + 0x20);
                  v48.m128_f32[3] = 0.0;
                  v27 = v48;
                  v28 = _mm_mul_ps(v48, v50);
                  v48.m128_f32[0] = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
                                  + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
                  v29 = 0;
                  v30 = 0;
                  v35 = v48.m128_f32[0] * v25;
                  v30.m128_f32[0] = v35;
                  v35 = v25 * -v24;
                  v29.m128_f32[0] = v35;
                  v49 = _mm_add_ps(
                          _mm_mul_ps(
                            _mm_sub_ps(
                              _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xC9), _mm_shuffle_ps(v50, v50, 0xD2)),
                              _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xD2), _mm_shuffle_ps(v50, v50, 0xC9))),
                            _mm_shuffle_ps(v29, v29, 0)),
                          _mm_add_ps(
                            _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v27),
                            _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v50)));
                  *(__m128 *)(v9 + 0x30) = v49;
                  *(__m128 *)(v9 + 0x20) = v51;
                  sub_435CE0(v26, v34);
                  sub_435CE0((NiAVObject *)a2, 0);
                  *(_WORD *)(a2 + 0x18) = *(_WORD *)(a2 + 0x18) & 0xFFE9 | 6;
                }
                else
                {
                  sub_435CE0(v37, v7);
                  sub_435CE0((NiAVObject *)a2, 0);
                  qmemcpy((void *)(a2 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
                  *(float *)(a2 + 0x54) = Vector3_InitValue_;
                  v31 = *(_WORD *)(a2 + 0x18);
                  *(float *)(a2 + 0x58) = *(&Vector3_InitValue_ + 1);
                  *(float *)(a2 + 0x5C) = dword_B3F9B0;
                  *(_WORD *)(a2 + 0x18) = v31 & 0xFFE9 | 6;
                }
                v3 = v37;
              }
            }
          }
          v32 = byte_BA7908 == 0;
          v41 = v40;
          LOBYTE(v42) = 1;
          if ( !v32 )
          {
            v43 = 0xA;
            sub_88BBB0(v3, (int)&v41);
          }
          v44 = v39;
          v33 = (void (__cdecl *)(int, int))off_B2E300;
          v32 = off_B2E300 == 0;
          v43 = 0;
          v45 = 0;
          v46 = 1;
          if ( !v32 )
            sub_88A7D0(v3, (int)&v41, v33);
        }
      }
      return v36;
    }
  }
  return result;
}
