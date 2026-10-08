void __thiscall sub_8C5A70(_DWORD *this, int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  bool v4; // zf
  int v5; // edx
  int v6; // ebx
  int v7; // eax
  unsigned __int16 *v8; // esi
  NiScreenElementsData *v9; // eax
  unsigned int v10; // edi
  int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // esi
  __int16 v14; // bx
  _WORD *v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // esi
  __int16 v18; // bx
  __int16 v19; // dx
  unsigned int v20; // esi
  __int16 v21; // bx
  unsigned int v22; // edi
  unsigned __int16 v23; // ax
  NiScreenElementsData *v24; // edx
  unsigned int v25; // eax
  unsigned int v26; // esi
  __int16 v27; // bx
  NiObject *v28; // eax
  unsigned int v29; // edi
  int v30; // eax
  double v31; // st7
  int v32; // esi
  int v33; // edx
  unsigned int v34; // ebx
  int v35; // ecx
  double v36; // st6
  int v37; // ecx
  __m128 v38; // xmm0
  double v39; // st6
  int v40; // eax
  unsigned int v41; // ebx
  void *v42; // esi
  void *v43; // edi
  NiScreenElementsData *v44; // esi
  NiAVObject *v45; // eax
  NiAVObject *v46; // esi
  _DWORD *v47; // edi
  NiProperty *NiPropertyByID; // edi
  int v49; // eax
  float v50; // ecx
  float v51; // edx
  char *v52; // edi
  char *v53; // edi
  int j; // ecx
  char *v55; // edi
  char v56; // cf
  unsigned int v57; // ecx
  char *v58; // edi
  int k; // ecx
  int v60; // edx
  int v61; // edx
  int v62; // [esp-8h] [ebp-BCh]
  void **v63; // [esp+18h] [ebp-9Ch] BYREF
  void *source; // [esp+1Ch] [ebp-98h]
  int v65; // [esp+20h] [ebp-94h]
  int v66; // [esp+24h] [ebp-90h]
  NiObject *v67; // [esp+28h] [ebp-8Ch]
  unsigned int v68; // [esp+2Ch] [ebp-88h]
  int i; // [esp+30h] [ebp-84h]
  float v70; // [esp+34h] [ebp-80h]
  unsigned int v71; // [esp+38h] [ebp-7Ch]
  void **v72; // [esp+3Ch] [ebp-78h] BYREF
  void *Src; // [esp+40h] [ebp-74h]
  int v74; // [esp+44h] [ebp-70h]
  __int16 v75; // [esp+48h] [ebp-6Ch]
  unsigned __int16 v76; // [esp+4Ah] [ebp-6Ah]
  int v77; // [esp+4Ch] [ebp-68h]
  int v78; // [esp+50h] [ebp-64h]
  float v79; // [esp+54h] [ebp-60h]
  int v80; // [esp+58h] [ebp-5Ch]
  int v81; // [esp+5Ch] [ebp-58h]
  float v82; // [esp+60h] [ebp-54h] BYREF
  float v83; // [esp+64h] [ebp-50h]
  float v84; // [esp+68h] [ebp-4Ch]
  _DWORD *v85; // [esp+6Ch] [ebp-48h]
  int *v86; // [esp+70h] [ebp-44h]
  unsigned __int32 v87; // [esp+74h] [ebp-40h]
  __m128 v88; // [esp+84h] [ebp-30h]
  int v89; // [esp+B0h] [ebp-4h]

  v85 = this; /*0x8c5ab7*/
  v86 = a2; /*0x8c5abb*/
  if ( this ) /*0x8c5abf*/
    v2 = *(this + 2); /*0x8c5ac1*/
  else
    v2 = 0; /*0x8c5ac6*/
  v78 = *(_DWORD *)(v2 + 0x10); /*0x8c5ad5*/
  v72 = &NiTArray<unsigned short>::`vftable'; /*0x8c5ad9*/
  v74 = 0; /*0x8c5add*/
  v76 = 1; /*0x8c5ae2*/
  v75 = 0; /*0x8c5aec*/
  Src = 0; /*0x8c5af1*/
  v89 = 1; /*0x8c5af5*/
  v63 = &NiTArray<unsigned short>::`vftable'; /*0x8c5afc*/
  v65 = 0; /*0x8c5b00*/
  v66 = 0x10000; /*0x8c5b0f*/
  source = 0; /*0x8c5b14*/
  v3 = 0; /*0x8c5b1f*/
  v4 = *(_WORD *)(v78 + 0x10) == 0; /*0x8c5b21*/
  v68 = 0; /*0x8c5b25*/
  v79 = 0.0; /*0x8c5b29*/
  v70 = 0.0; /*0x8c5b2d*/
  v81 = 0; /*0x8c5b31*/
  if ( !v4 )
  {
    v77 = 0; /*0x8c5b3b*/
    while ( 1 )
    {
      v5 = v78; /*0x8c5b4b*/
      v6 = 0; /*0x8c5b54*/
      v7 = 0x14 * LODWORD(v70); /*0x8c5b56*/
      v67 = 0; /*0x8c5b58*/
      v71 = 0; /*0x8c5b5c*/
      v80 = 0; /*0x8c5b60*/
      for ( i = 0x14 * LODWORD(v70); ; v7 = i ) /*0x8c5b64*/
      {
        v8 = (unsigned __int16 *)(v7 + *(_DWORD *)(v5 + 0x14)); /*0x8c5b77*/
        if ( v6 ) /*0x8c5b7b*/
        {
          if ( (_WORD)v71 == *v8 && (_WORD)v80 == v8[1] ) /*0x8c5d38*/
          {
            v22 = HIWORD(v65); /*0x8c5d42*/
            v23 = v8[2] - v3; /*0x8c5d47*/
            v67 = (NiObject *)v23; /*0x8c5d54*/
            if ( HIWORD(v65) >= (unsigned int)(unsigned __int16)v65 ) /*0x8c5d58*/
            {
              sub_8C5490((unsigned __int16 *)&v63, HIWORD(v65) + HIWORD(v66)); /*0x8c5d66*/
              v23 = (unsigned __int16)v67; /*0x8c5d6b*/
            }
            if ( v22 < HIWORD(v65) ) /*0x8c5d76*/
            {
              if ( v23 ) /*0x8c5d90*/
              {
                if ( !*((_WORD *)source + v22) ) /*0x8c5d96*/
                  LOWORD(v66) = v66 + 1; /*0x8c5d9d*/
              }
              else if ( *((_WORD *)source + v22) ) /*0x8c5da9*/
              {
                LOWORD(v66) = v66 - 1; /*0x8c5db0*/
              }
            }
            else
            {
              HIWORD(v65) = v22 + 1; /*0x8c5d7e*/
              if ( v23 ) /*0x8c5d83*/
                LOWORD(v66) = v66 + 1; /*0x8c5d85*/
            }
            v24 = (NiScreenElementsData *)(unsigned __int16)v71; /*0x8c5dbb*/
            ++LODWORD(v70); /*0x8c5dc0*/
            i += 0x14; /*0x8c5dc5*/
            *((_WORD *)source + v22) = v23; /*0x8c5dca*/
            v25 = (unsigned __int16)v80; /*0x8c5dd2*/
            v80 = v8[2]; /*0x8c5dd7*/
            v3 = v68; /*0x8c5ddb*/
            ++v6; /*0x8c5ddf*/
            v67 = (NiObject *)v24; /*0x8c5de2*/
            v71 = v25; /*0x8c5de6*/
          }
          else
          {
            v26 = HIWORD(v74); /*0x8c5dee*/
            v27 = v6 + 2; /*0x8c5dfd*/
            if ( HIWORD(v74) >= (unsigned int)(unsigned __int16)v74 ) /*0x8c5e00*/
            {
              sub_8C5490((unsigned __int16 *)&v72, HIWORD(v74) + v76); /*0x8c5e0e*/
              v3 = v68; /*0x8c5e13*/
            }
            if ( v26 < HIWORD(v74) ) /*0x8c5e20*/
            {
              if ( v27 ) /*0x8c5e3a*/
              {
                if ( !*((_WORD *)Src + v26) ) /*0x8c5e40*/
                  ++v75; /*0x8c5e46*/
              }
              else if ( *((_WORD *)Src + v26) ) /*0x8c5e52*/
              {
                --v75; /*0x8c5e58*/
              }
            }
            else
            {
              HIWORD(v74) = v26 + 1; /*0x8c5e28*/
              if ( v27 ) /*0x8c5e2d*/
                ++v75; /*0x8c5e2f*/
            }
            *((_WORD *)Src + v26) = v27; /*0x8c5e63*/
            v6 = 0; /*0x8c5e67*/
          }
        }
        else
        {
          v9 = (NiScreenElementsData *)*v8; /*0x8c5b81*/
          v10 = v8[1]; /*0x8c5b84*/
          v11 = *(_DWORD *)(v5 + 0x1C); /*0x8c5b8c*/
          v80 = v8[2]; /*0x8c5b8f*/
          v12 = v3 + *(_DWORD *)(v11 + v77 + 4); /*0x8c5b9e*/
          v67 = (NiObject *)v9; /*0x8c5ba2*/
          v71 = v10; /*0x8c5ba6*/
          if ( (unsigned __int16)v9 >= v12 ) /*0x8c5baa*/
            break; /*0x8c5baa*/
          v13 = HIWORD(v65); /*0x8c5bb0*/
          v14 = (_WORD)v9 - v3; /*0x8c5bb7*/
          if ( HIWORD(v65) >= (unsigned int)(unsigned __int16)v65 ) /*0x8c5bc1*/
          {
            sub_8C5490((unsigned __int16 *)&v63, HIWORD(v65) + HIWORD(v66)); /*0x8c5bcf*/
            v3 = v68; /*0x8c5bd4*/
          }
          if ( v13 < HIWORD(v65) ) /*0x8c5bdf*/
          {
            v15 = source; /*0x8c5bfd*/
            if ( v14 ) /*0x8c5c01*/
            {
              if ( !*((_WORD *)source + v13) ) /*0x8c5c03*/
                LOWORD(v66) = v66 + 1; /*0x8c5c0a*/
            }
            else if ( *((_WORD *)source + v13) ) /*0x8c5c16*/
            {
              LOWORD(v66) = v66 - 1; /*0x8c5c1d*/
            }
          }
          else
          {
            HIWORD(v65) = v13 + 1; /*0x8c5be7*/
            v15 = source; /*0x8c5bec*/
            if ( v14 ) /*0x8c5bf0*/
              LOWORD(v66) = v66 + 1; /*0x8c5bf2*/
          }
          v16 = (unsigned __int16)v65; /*0x8c5c24*/
          v15[v13] = v14; /*0x8c5c29*/
          v17 = HIWORD(v65); /*0x8c5c2d*/
          v18 = v10 - v3; /*0x8c5c36*/
          if ( HIWORD(v65) >= v16 ) /*0x8c5c39*/
          {
            sub_8C5490((unsigned __int16 *)&v63, HIWORD(v65) + HIWORD(v66)); /*0x8c5c47*/
            v3 = v68; /*0x8c5c4c*/
            v15 = source; /*0x8c5c50*/
          }
          if ( v17 < HIWORD(v65) ) /*0x8c5c5b*/
          {
            if ( v18 ) /*0x8c5c75*/
            {
              if ( !v15[v17] ) /*0x8c5c77*/
                LOWORD(v66) = v66 + 1; /*0x8c5c7e*/
            }
            else if ( v15[v17] ) /*0x8c5c86*/
            {
              LOWORD(v66) = v66 - 1; /*0x8c5c8d*/
            }
          }
          else
          {
            HIWORD(v65) = v17 + 1; /*0x8c5c63*/
            if ( v18 ) /*0x8c5c68*/
              LOWORD(v66) = v66 + 1; /*0x8c5c6a*/
          }
          v19 = v80 - v3; /*0x8c5c98*/
          v15[v17] = v18; /*0x8c5c9a*/
          v20 = HIWORD(v65); /*0x8c5c9e*/
          v21 = v19; /*0x8c5ca3*/
          if ( HIWORD(v65) >= (unsigned int)(unsigned __int16)v65 ) /*0x8c5cad*/
          {
            sub_8C5490((unsigned __int16 *)&v63, HIWORD(v65) + HIWORD(v66)); /*0x8c5cbb*/
            v3 = v68; /*0x8c5cc0*/
            v15 = source; /*0x8c5cc4*/
          }
          if ( v20 < HIWORD(v65) ) /*0x8c5ccf*/
          {
            if ( v21 ) /*0x8c5ce9*/
            {
              if ( !v15[v20] ) /*0x8c5ceb*/
                LOWORD(v66) = v66 + 1; /*0x8c5cf2*/
            }
            else if ( v15[v20] ) /*0x8c5cfa*/
            {
              LOWORD(v66) = v66 - 1; /*0x8c5d01*/
            }
          }
          else
          {
            HIWORD(v65) = v20 + 1; /*0x8c5cd7*/
            if ( v21 ) /*0x8c5cdc*/
              LOWORD(v66) = v66 + 1; /*0x8c5cde*/
          }
          i += 0x14; /*0x8c5d08*/
          v15[v20] = v21; /*0x8c5d0d*/
          v6 = 1; /*0x8c5d11*/
          ++LODWORD(v70); /*0x8c5d16*/
        }
        v5 = v78; /*0x8c5e69*/
        if ( (unsigned __int16)v67 >= v3 + *(_DWORD *)(*(_DWORD *)(v78 + 0x1C) + v77 + 4) ) /*0x8c5e81*/
          break; /*0x8c5e81*/
      }
      v28 = (NiObject *)FormHeapAlloc(0x50u); /*0x8c5e89*/
      v67 = v28; /*0x8c5e91*/
      LOBYTE(v89) = 2; /*0x8c5e97*/
      v67 = v28 ? sub_719D20(v28) : 0;
      v29 = *(_DWORD *)(*(_DWORD *)(v78 + 0x1C) + v77 + 4); /*0x8c5ec1*/
      LOBYTE(v89) = 1; /*0x8c5ed3*/
      v30 = FormHeapAlloc((0xC * (unsigned __int64)v29) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v29);
      i = v29 + v68; /*0x8c5ef1*/
      if ( v68 < v29 + v68 ) /*0x8c5ef5*/
      {
        v31 = dbl_A372E0; /*0x8c5efb*/
        v32 = 0xC * v68; /*0x8c5f06*/
        v33 = v30 + 8; /*0x8c5f08*/
        v34 = v29; /*0x8c5f0b*/
        do /*0x8c5f7d*/
        {
          v35 = *(_DWORD *)(v78 + 0x18); /*0x8c5f11*/
          v36 = *(float *)(v35 + v32); /*0x8c5f14*/
          v37 = v32 + v35; /*0x8c5f17*/
          v88.m128_f32[0] = v36; /*0x8c5f19*/
          v32 += 0xC; /*0x8c5f20*/
          v33 += 0xC; /*0x8c5f26*/
          --v34; /*0x8c5f29*/
          v88.m128_f32[1] = *(float *)(v37 + 4); /*0x8c5f2c*/
          v88.m128_f32[2] = *(float *)(v37 + 8); /*0x8c5f36*/
          v38 = v88; /*0x8c5f3d*/
          v87 = _mm_shuffle_ps(v88, v88, 0x55).m128_u32[0]; /*0x8c5f58*/
          *(float *)(v33 - 0x14) = v88.m128_f32[0] * v31; /*0x8c5f5e*/
          v39 = *(float *)&v87; /*0x8c5f65*/
          v87 = _mm_shuffle_ps(v38, v38, 0xAA).m128_u32[0]; /*0x8c5f69*/
          *(float *)(v33 - 0x10) = v39 * v31; /*0x8c5f71*/
          *(float *)(v33 - 0xC) = *(float *)&v87 * v31; /*0x8c5f7a*/
        }
        while ( v34 ); /*0x8c5f7d*/
      }
      sub_728320(v67, v29, v30, 0, 0, 0, 0, 0); /*0x8c5f91*/
      v71 = HIWORD(v74); /*0x8c5f9d*/
      v40 = FormHeapAlloc((unsigned __int64)HIWORD(v74) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * HIWORD(v74));
      v41 = HIWORD(v65); /*0x8c5fb5*/
      v42 = (void *)v40; /*0x8c5fba*/
      v43 = (void *)FormHeapAlloc((unsigned __int64)HIWORD(v65) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * HIWORD(v65));
      memcpy(v42, Src, 2 * v71); /*0x8c5fe4*/
      memcpy(v43, source, 2 * v41); /*0x8c5ff3*/
      v62 = (int)v42; /*0x8c6000*/
      v44 = (NiScreenElementsData *)v67; /*0x8c6001*/
      sub_719F40(v67, SHIWORD(v74), v62, (int)v43); /*0x8c6008*/
      v44->member.super.super.m_usTriangles = LOWORD(v70) - LOWORD(v79); /*0x8c601a*/
      *(float *)&v45 = COERCE_FLOAT(FormHeapAlloc(0xC0u)); /*0x8c601e*/
      v79 = *(float *)&v45; /*0x8c6026*/
      LOBYTE(v89) = 3; /*0x8c602c*/
      v46 = *(float *)&v45 == 0.0 ? 0 : sub_719A20(v45, v44);
      LOBYTE(v89) = 1; /*0x8c604b*/
      NiObjectNET_SetName((NiObjectNET *)v46, "bhkPackedNiTriStripsShape"); /*0x8c6053*/
      v47 = v85; /*0x8c6058*/
      v79 = fabs(sub_8C5070(v85)); /*0x8c6065*/
      v46->members.m_localTransform.scale = v79; /*0x8c6070*/
      (*(void (__thiscall **)(_DWORD *, NiAVObject *))(*v47 + 0x98))(v47, v46); /*0x8c607b*/
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v46, 2); /*0x8c6086*/
      if ( NiPropertyByID ) /*0x8c608a*/
      {
        v49 = *(_DWORD *)(v78 + 0x1C); /*0x8c6092*/
        v82 = 0.0; /*0x8c6095*/
        v83 = 0.0; /*0x8c609d*/
        v84 = 0.0; /*0x8c60a2*/
        sub_8A2730(*(_DWORD *)(v49 + v77 + 8), &v82); /*0x8c60af*/
        v50 = v83; /*0x8c60b8*/
        v51 = v84; /*0x8c60bc*/
        *(float *)&NiPropertyByID[2].members.m_extraDataList = v82; /*0x8c60c0*/
        ++NiPropertyByID[3].members.m_controller; /*0x8c60c6*/
        *(float *)&NiPropertyByID[2].members.m_extraDataListLen = v50; /*0x8c60ca*/
        *(float *)&NiPropertyByID[3].vtbl = v51; /*0x8c60cd*/
      }
      if ( HIWORD(v65) ) /*0x8c60d6*/
      {
        v52 = (char *)source; /*0x8c60d8*/
        memset(source, 0, 4 * (v41 >> 1)); /*0x8c60e2*/
        v53 = &v52[4 * (v41 >> 1)]; /*0x8c60e2*/
        for ( j = v41 & 1; j; --j ) /*0x8c60e4*/
        {
          *(_WORD *)v53 = 0; /*0x8c60e6*/
          v53 += 2; /*0x8c60e6*/
        }
      }
      HIWORD(v65) = 0; /*0x8c60f0*/
      LOWORD(v66) = 0; /*0x8c60f5*/
      if ( HIWORD(v74) ) /*0x8c60fa*/
      {
        v55 = (char *)Src; /*0x8c6100*/
        v56 = v71 & 1; /*0x8c6104*/
        v57 = v71 >> 1; /*0x8c6104*/
        memset(Src, 0, 4 * (v71 >> 1)); /*0x8c6106*/
        v58 = &v55[4 * v57]; /*0x8c6106*/
        for ( k = v56; k; --k ) /*0x8c6108*/
        {
          *(_WORD *)v58 = 0; /*0x8c610a*/
          v58 += 2; /*0x8c610a*/
        }
      }
      v60 = *v86; /*0x8c6111*/
      HIWORD(v74) = 0; /*0x8c6116*/
      v75 = 0; /*0x8c611b*/
      (*(void (__thiscall **)(int *, NiAVObject *, _DWORD))(v60 + 0x84))(v86, v46, 0); /*0x8c6127*/
      v77 += 0xC; /*0x8c6135*/
      v68 = i; /*0x8c613a*/
      v79 = v70; /*0x8c6142*/
      v61 = *(unsigned __int16 *)(v78 + 0x10); /*0x8c6146*/
      if ( ++v81 >= v61 ) /*0x8c6153*/
        break; /*0x8c6153*/
      v3 = v68; /*0x8c5b41*/
    }
  }
  FormHeapFree((unsigned int)source); /*0x8c615e*/
  FormHeapFree((unsigned int)Src); /*0x8c6168*/
}
