char __thiscall sub_88C740(_BYTE *this, int a2, NiAVObject *a3)
{
  NiAVObject *v3; // edi
  char result; // al
  NiObject *v5; // eax
  int v6; // eax
  Ni2DBuffer **v7; // esi
  Ni2DBuffer *v8; // eax
  Ni2DBuffer *v9; // edi
  NiObject *v10; // eax
  bhkRefObject *v11; // eax
  bhkRefObject *v12; // esi
  void (__thiscall *v13)(Ni2DBuffer *, __int128 *); // edx
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
  Ni2DBuffer *m_uiRefCount; // [esp+1Ch] [ebp-108h] BYREF
  char v36; // [esp+23h] [ebp-101h]
  NiAVObject *v37; // [esp+24h] [ebp-100h]
  Ni2DBuffer **v38; // [esp+28h] [ebp-FCh]
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

  v3 = a3; /*0x88c783*/
  result = 0; /*0x88c786*/
  v40 = this; /*0x88c78a*/
  v37 = a3; /*0x88c78e*/
  v36 = 0; /*0x88c792*/
  if ( a2 ) /*0x88c796*/
  {
    if ( a3 ) /*0x88c79e*/
    {
      v5 = sub_6FA970((NiObjectNET *)a3); /*0x88c7a5*/
      if ( v5 ) /*0x88c7af*/
      {
        if ( (v5[1].members.m_uiRefCount & 2) != 0 ) /*0x88c7bb*/
        {
          v39 = 0; /*0x88c7c2*/
          v6 = sub_4A05E0(a2); /*0x88c7ca*/
          v7 = (Ni2DBuffer **)v6; /*0x88c7cf*/
          v38 = (Ni2DBuffer **)v6; /*0x88c7d6*/
          if ( v6 ) /*0x88c7da*/
          {
            v8 = *(Ni2DBuffer **)(v6 + 0x10); /*0x88c7e0*/
            v39 = 1; /*0x88c7e5*/
            m_uiRefCount = v8; /*0x88c7ed*/
            if ( v8 ) /*0x88c7f1*/
            {
              if ( !((unsigned __int8 (__thiscall *)(Ni2DBuffer **))(*v7)[5].members.data)(v7) ) /*0x88c7fe*/
              {
                v40[0x18] = 1; /*0x88c80e*/
                v36 = 1; /*0x88c812*/
                if ( a3 != (NiAVObject *)a2 ) /*0x88c817*/
                {
                  v9 = 0; /*0x88c827*/
                  if ( NiRTTI::IsObjectOfRTTIType(&stru_BA8018, (NiObject *)m_uiRefCount) ) /*0x88c829*/
                  {
                    v9 = m_uiRefCount; /*0x88c835*/
                  }
                  else
                  {
                    v10 = NiRTTI_Cast((BSStringT *)&stru_BA7D84, (NiObject *)m_uiRefCount); /*0x88c848*/
                    sub_405070(&m_uiRefCount, (int)v10); /*0x88c855*/
                    v56 = 0; /*0x88c85f*/
                    if ( *(float *)&m_uiRefCount != 0.0 ) /*0x88c86a*/
                    {
                      sub_897670(v7, 0); /*0x88c874*/
                      v11 = (bhkRefObject *)sub_8896A0(0x40); /*0x88c87b*/
                      v47 = v11; /*0x88c883*/
                      LOBYTE(v56) = 1; /*0x88c889*/
                      if ( v11 ) /*0x88c891*/
                        v12 = sub_8B96D0(v11, m_uiRefCount); /*0x88c89f*/
                      else
                        v12 = 0; /*0x88c8a3*/
                      v13 = *((void (__thiscall **)(Ni2DBuffer *, __int128 *))m_uiRefCount->__vftable + 0x23); /*0x88c8ab*/
                      LOBYTE(v56) = 0; /*0x88c8b9*/
                      v9 = (Ni2DBuffer *)v12; /*0x88c8c1*/
                      v13(m_uiRefCount, &v54); /*0x88c8c3*/
                      (*((void (__thiscall **)(Ni2DBuffer *, __int128 *))m_uiRefCount->__vftable + 0x24))( /*0x88c8d9*/
                        m_uiRefCount,
                        &v53);
                      Unk_12 = v12->__vftable[1].Unk_12; /*0x88c8e5*/
                      *(__int128 *)&v12[4].__vftable = v54; /*0x88c8eb*/
                      *(__int128 *)&v12[2].hkObject = v53; /*0x88c8fe*/
                      Unk_12(v12, (UInt32)&unk_BA7A40); /*0x88c902*/
                      v12->__vftable[2].super.Destructor((NiRefObject *)v12, (bool)&flt_B2F080); /*0x88c913*/
                      sub_897670(v38, (Ni2DBuffer *)v12); /*0x88c91a*/
                      v7 = v38; /*0x88c91f*/
                    }
                    NiSmartPointer_Set__(&m_uiRefCount, 0); /*0x88c929*/
                    v56 = 0xFFFFFFFF; /*0x88c932*/
                    sub_7016A0((NiD3DVertexShader *)&m_uiRefCount); /*0x88c93d*/
                  }
                  if ( v9 ) /*0x88c944*/
                  {
                    sub_5398E0((int)v55, (float *)(a2 + 0x30)); /*0x88c956*/
                    m_uiRefCount = (Ni2DBuffer *)v9[2].members.super.m_uiRefCount; /*0x88c95e*/
                    v15 = *(__m128 *)&v9[2].members.width; /*0x88c962*/
                    v16 = 0; /*0x88c96f*/
                    v17 = dbl_A3D0C0; /*0x88c972*/
                    v18 = *(float *)&m_uiRefCount * v17; /*0x88c97b*/
                    *(float *)&m_uiRefCount = *(float *)&m_uiRefCount * v18 - dbl_A2F928; /*0x88c9a6*/
                    v16.m128_f32[0] = *(float *)&m_uiRefCount; /*0x88c9b2*/
                    v48 = *(__m128 *)&v9[1].members.height; /*0x88c9b9*/
                    v48.m128_f32[3] = 0.0; /*0x88c9be*/
                    v19 = v48; /*0x88c9c2*/
                    v20 = _mm_mul_ps(v48, v15); /*0x88c9ca*/
                    v48.m128_f32[0] = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x88c9e3*/
                                    + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
                    v21 = 0; /*0x88c9ef*/
                    *(float *)&m_uiRefCount = v17 * v48.m128_f32[0]; /*0x88c9f4*/
                    v21.m128_f32[0] = *(float *)&m_uiRefCount; /*0x88c9fe*/
                    *(float *)&m_uiRefCount = v18; /*0x88ca02*/
                    v22 = 0; /*0x88ca0c*/
                    v22.m128_f32[0] = *(float *)&m_uiRefCount; /*0x88ca0f*/
                    v49 = _mm_add_ps( /*0x88ca4b*/
                            _mm_mul_ps(
                              _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xC9), _mm_shuffle_ps(v15, v15, 0xD2)),
                                _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0xD2), _mm_shuffle_ps(v15, v15, 0xC9))),
                              _mm_shuffle_ps(v22, v22, 0)),
                            _mm_add_ps(
                              _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v19),
                              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v15)));
                    hkTransform_TransformPosition(&v50, v55, &v49); /*0x88ca50*/
                    sub_8B1B40(v52.m128_f32, v55[0].m128_f32); /*0x88ca64*/
                    sub_889470(&v51, (__m128 *)&v9[1].members.height, &v52); /*0x88ca79*/
                    m_uiRefCount = (Ni2DBuffer *)v9[2].members.super.m_uiRefCount; /*0x88ca81*/
                    v23 = 0; /*0x88ca8e*/
                    v24 = *(float *)&m_uiRefCount; /*0x88caa6*/
                    v34 = (volatile LONG *)v38; /*0x88cab1*/
                    v25 = dbl_A3D0C0; /*0x88cab2*/
                    v26 = v37; /*0x88cab4*/
                    *(float *)&m_uiRefCount = *(float *)&m_uiRefCount * v25 * *(float *)&m_uiRefCount - dbl_A2F928; /*0x88cabe*/
                    v23.m128_f32[0] = *(float *)&m_uiRefCount; /*0x88caca*/
                    v48 = *(__m128 *)&v9[1].members.height; /*0x88cad1*/
                    v48.m128_f32[3] = 0.0; /*0x88cad6*/
                    v27 = v48; /*0x88cada*/
                    v28 = _mm_mul_ps(v48, v50); /*0x88cae2*/
                    v48.m128_f32[0] = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] /*0x88cafb*/
                                    + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
                    v29 = 0; /*0x88cb07*/
                    v30 = 0; /*0x88cb0a*/
                    *(float *)&m_uiRefCount = v48.m128_f32[0] * v25; /*0x88cb0d*/
                    v30.m128_f32[0] = *(float *)&m_uiRefCount; /*0x88cb17*/
                    *(float *)&m_uiRefCount = v25 * -v24; /*0x88cb21*/
                    v29.m128_f32[0] = *(float *)&m_uiRefCount; /*0x88cb2b*/
                    v49 = _mm_add_ps( /*0x88cb67*/
                            _mm_mul_ps(
                              _mm_sub_ps(
                                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xC9), _mm_shuffle_ps(v50, v50, 0xD2)),
                                _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0xD2), _mm_shuffle_ps(v50, v50, 0xC9))),
                              _mm_shuffle_ps(v29, v29, 0)),
                            _mm_add_ps(
                              _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v27),
                              _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v50)));
                    *(__m128 *)&v9[2].members.width = v49; /*0x88cb6c*/
                    *(__m128 *)&v9[1].members.height = v51; /*0x88cb78*/
                    sub_435CE0(v26, v34); /*0x88cb7b*/
                    sub_435CE0((NiAVObject *)a2, 0); /*0x88cb84*/
                    *(_WORD *)(a2 + 0x18) = *(_WORD *)(a2 + 0x18) & 0xFFE9 | 6; /*0x88cb96*/
                  }
                  else
                  {
                    sub_435CE0(v37, (volatile LONG *)v7); /*0x88cba1*/
                    sub_435CE0((NiAVObject *)a2, 0); /*0x88cbaa*/
                    qmemcpy((void *)(a2 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x88cbbc*/
                    *(float *)(a2 + 0x54) = g_zeroNiPoint3.x; /*0x88cbc3*/
                    v31 = *(_WORD *)(a2 + 0x18); /*0x88cbcc*/
                    *(float *)(a2 + 0x58) = g_zeroNiPoint3.y; /*0x88cbd0*/
                    *(float *)(a2 + 0x5C) = g_zeroNiPoint3.z; /*0x88cbe1*/
                    *(_WORD *)(a2 + 0x18) = v31 & 0xFFE9 | 6; /*0x88cbe4*/
                  }
                  v3 = v37; /*0x88cbe8*/
                }
              }
            }
          }
          v32 = unk_BA7908 == 0; /*0x88cbec*/
          v41 = v40; /*0x88cbf7*/
          LOBYTE(v42) = 1; /*0x88cbfb*/
          if ( !v32 ) /*0x88cc00*/
          {
            v43 = 0xA; /*0x88cc08*/
            sub_88BBB0(v3, (int)&v41); /*0x88cc10*/
          }
          v44 = v39; /*0x88cc1e*/
          v33 = (void (__cdecl *)(int, int))off_B2E300; /*0x88cc22*/
          v32 = off_B2E300 == 0; /*0x88cc27*/
          v43 = 0; /*0x88cc29*/
          v45 = 0; /*0x88cc2d*/
          v46 = 1; /*0x88cc35*/
          if ( !v32 ) /*0x88cc3d*/
            sub_88A7D0(v3, (int)&v41, v33); /*0x88cc46*/
        }
      }
      return v36; /*0x88cc4e*/
    }
  }
  return result; /*0x88cc52*/
}
