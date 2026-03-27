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
  NiScreenElementsData *v28; // eax
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
  size_t v62; // [esp-18h] [ebp-CCh]
  size_t v63; // [esp-Ch] [ebp-C0h]
  int v64; // [esp-8h] [ebp-BCh]
  void **v65; // [esp+18h] [ebp-9Ch] BYREF
  void *v66; // [esp+1Ch] [ebp-98h]
  int v67; // [esp+20h] [ebp-94h]
  int v68; // [esp+24h] [ebp-90h]
  NiScreenElementsData *v69; // [esp+28h] [ebp-8Ch]
  unsigned int v70; // [esp+2Ch] [ebp-88h]
  int i; // [esp+30h] [ebp-84h]
  float v72; // [esp+34h] [ebp-80h]
  unsigned int v73; // [esp+38h] [ebp-7Ch]
  void **v74; // [esp+3Ch] [ebp-78h] BYREF
  void *Src; // [esp+40h] [ebp-74h]
  int v76; // [esp+44h] [ebp-70h]
  __int16 v77; // [esp+48h] [ebp-6Ch]
  unsigned __int16 v78; // [esp+4Ah] [ebp-6Ah]
  int v79; // [esp+4Ch] [ebp-68h]
  int v80; // [esp+50h] [ebp-64h]
  float v81; // [esp+54h] [ebp-60h]
  int v82; // [esp+58h] [ebp-5Ch]
  int v83; // [esp+5Ch] [ebp-58h]
  float v84; // [esp+60h] [ebp-54h] BYREF
  float v85; // [esp+64h] [ebp-50h]
  float v86; // [esp+68h] [ebp-4Ch]
  _DWORD *v87; // [esp+6Ch] [ebp-48h]
  int *v88; // [esp+70h] [ebp-44h]
  unsigned __int32 v89; // [esp+74h] [ebp-40h]
  __m128 v90; // [esp+84h] [ebp-30h]
  int v91; // [esp+B0h] [ebp-4h]

  v87 = this;
  v88 = a2;
  if ( this )
    v2 = *(this + 2);
  else
    v2 = 0;
  v80 = *(_DWORD *)(v2 + 0x10);
  v74 = &NiTArray<unsigned short>::`vftable';
  v76 = 0;
  v78 = 1;
  v77 = 0;
  Src = 0;
  v91 = 1;
  v65 = &NiTArray<unsigned short>::`vftable';
  v67 = 0;
  v68 = 0x10000;
  v66 = 0;
  v3 = 0;
  v4 = *(_WORD *)(v80 + 0x10) == 0;
  v70 = 0;
  v81 = 0.0;
  v72 = 0.0;
  v83 = 0;
  if ( !v4 )
  {
    v79 = 0;
    while ( 1 )
    {
      v5 = v80;
      v6 = 0;
      v7 = 0x14 * LODWORD(v72);
      v69 = 0;
      v73 = 0;
      v82 = 0;
      for ( i = 0x14 * LODWORD(v72); ; v7 = i )
      {
        v8 = (unsigned __int16 *)(v7 + *(_DWORD *)(v5 + 0x14));
        if ( v6 )
        {
          if ( (_WORD)v73 == *v8 && (_WORD)v82 == v8[1] )
          {
            v22 = HIWORD(v67);
            v23 = v8[2] - v3;
            v69 = (NiScreenElementsData *)v23;
            if ( HIWORD(v67) >= (unsigned int)(unsigned __int16)v67 )
            {
              sub_8C5490((unsigned __int16 *)&v65, HIWORD(v67) + HIWORD(v68));
              v23 = (unsigned __int16)v69;
            }
            if ( v22 < HIWORD(v67) )
            {
              if ( v23 )
              {
                if ( !*((_WORD *)v66 + v22) )
                  LOWORD(v68) = v68 + 1;
              }
              else if ( *((_WORD *)v66 + v22) )
              {
                LOWORD(v68) = v68 - 1;
              }
            }
            else
            {
              HIWORD(v67) = v22 + 1;
              if ( v23 )
                LOWORD(v68) = v68 + 1;
            }
            v24 = (NiScreenElementsData *)(unsigned __int16)v73;
            ++LODWORD(v72);
            i += 0x14;
            *((_WORD *)v66 + v22) = v23;
            v25 = (unsigned __int16)v82;
            v82 = v8[2];
            v3 = v70;
            ++v6;
            v69 = v24;
            v73 = v25;
          }
          else
          {
            v26 = HIWORD(v76);
            v27 = v6 + 2;
            if ( HIWORD(v76) >= (unsigned int)(unsigned __int16)v76 )
            {
              sub_8C5490((unsigned __int16 *)&v74, HIWORD(v76) + v78);
              v3 = v70;
            }
            if ( v26 < HIWORD(v76) )
            {
              if ( v27 )
              {
                if ( !*((_WORD *)Src + v26) )
                  ++v77;
              }
              else if ( *((_WORD *)Src + v26) )
              {
                --v77;
              }
            }
            else
            {
              HIWORD(v76) = v26 + 1;
              if ( v27 )
                ++v77;
            }
            *((_WORD *)Src + v26) = v27;
            v6 = 0;
          }
        }
        else
        {
          v9 = (NiScreenElementsData *)*v8;
          v10 = v8[1];
          v11 = *(_DWORD *)(v5 + 0x1C);
          v82 = v8[2];
          v12 = v3 + *(_DWORD *)(v11 + v79 + 4);
          v69 = v9;
          v73 = v10;
          if ( (unsigned __int16)v9 >= v12 )
            break;
          v13 = HIWORD(v67);
          v14 = (_WORD)v9 - v3;
          if ( HIWORD(v67) >= (unsigned int)(unsigned __int16)v67 )
          {
            sub_8C5490((unsigned __int16 *)&v65, HIWORD(v67) + HIWORD(v68));
            v3 = v70;
          }
          if ( v13 < HIWORD(v67) )
          {
            v15 = v66;
            if ( v14 )
            {
              if ( !*((_WORD *)v66 + v13) )
                LOWORD(v68) = v68 + 1;
            }
            else if ( *((_WORD *)v66 + v13) )
            {
              LOWORD(v68) = v68 - 1;
            }
          }
          else
          {
            HIWORD(v67) = v13 + 1;
            v15 = v66;
            if ( v14 )
              LOWORD(v68) = v68 + 1;
          }
          v16 = (unsigned __int16)v67;
          v15[v13] = v14;
          v17 = HIWORD(v67);
          v18 = v10 - v3;
          if ( HIWORD(v67) >= v16 )
          {
            sub_8C5490((unsigned __int16 *)&v65, HIWORD(v67) + HIWORD(v68));
            v3 = v70;
            v15 = v66;
          }
          if ( v17 < HIWORD(v67) )
          {
            if ( v18 )
            {
              if ( !v15[v17] )
                LOWORD(v68) = v68 + 1;
            }
            else if ( v15[v17] )
            {
              LOWORD(v68) = v68 - 1;
            }
          }
          else
          {
            HIWORD(v67) = v17 + 1;
            if ( v18 )
              LOWORD(v68) = v68 + 1;
          }
          v19 = v82 - v3;
          v15[v17] = v18;
          v20 = HIWORD(v67);
          v21 = v19;
          if ( HIWORD(v67) >= (unsigned int)(unsigned __int16)v67 )
          {
            sub_8C5490((unsigned __int16 *)&v65, HIWORD(v67) + HIWORD(v68));
            v3 = v70;
            v15 = v66;
          }
          if ( v20 < HIWORD(v67) )
          {
            if ( v21 )
            {
              if ( !v15[v20] )
                LOWORD(v68) = v68 + 1;
            }
            else if ( v15[v20] )
            {
              LOWORD(v68) = v68 - 1;
            }
          }
          else
          {
            HIWORD(v67) = v20 + 1;
            if ( v21 )
              LOWORD(v68) = v68 + 1;
          }
          i += 0x14;
          v15[v20] = v21;
          v6 = 1;
          ++LODWORD(v72);
        }
        v5 = v80;
        if ( (unsigned __int16)v69 >= v3 + *(_DWORD *)(*(_DWORD *)(v80 + 0x1C) + v79 + 4) )
          break;
      }
      v28 = (NiScreenElementsData *)FormHeapAlloc(0x50u);
      v69 = v28;
      LOBYTE(v91) = 2;
      v69 = v28 ? (NiScreenElementsData *)sub_719D20(v28) : 0;
      v29 = *(_DWORD *)(*(_DWORD *)(v80 + 0x1C) + v79 + 4);
      LOBYTE(v91) = 1;
      v30 = FormHeapAlloc((0xC * (unsigned __int64)v29) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v29);
      i = v29 + v70;
      if ( v70 < v29 + v70 )
      {
        v31 = dbl_A372E0;
        v32 = 0xC * v70;
        v33 = v30 + 8;
        v34 = v29;
        do
        {
          v35 = *(_DWORD *)(v80 + 0x18);
          v36 = *(float *)(v35 + v32);
          v37 = v32 + v35;
          v90.m128_f32[0] = v36;
          v32 += 0xC;
          v33 += 0xC;
          --v34;
          v90.m128_f32[1] = *(float *)(v37 + 4);
          v90.m128_f32[2] = *(float *)(v37 + 8);
          v38 = v90;
          v89 = _mm_shuffle_ps(v90, v90, 0x55).m128_u32[0];
          *(float *)(v33 - 0x14) = v90.m128_f32[0] * v31;
          v39 = *(float *)&v89;
          v89 = _mm_shuffle_ps(v38, v38, 0xAA).m128_u32[0];
          *(float *)(v33 - 0x10) = v39 * v31;
          *(float *)(v33 - 0xC) = *(float *)&v89 * v31;
        }
        while ( v34 );
      }
      sub_728320(v69, v29, v30, 0, 0, 0, 0, 0);
      v73 = HIWORD(v76);
      v40 = FormHeapAlloc((unsigned __int64)HIWORD(v76) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * HIWORD(v76));
      v41 = HIWORD(v67);
      v42 = (void *)v40;
      v43 = (void *)FormHeapAlloc((unsigned __int64)HIWORD(v67) >> 0x1F != 0 ? 0xFFFFFFFF : 2 * HIWORD(v67));
      LODWORD(v63) = 2 * v73;
      memcpy(v42, Src, v63);
      LODWORD(v62) = 2 * v41;
      memcpy(v43, v66, v62);
      v64 = (int)v42;
      v44 = v69;
      sub_719F40(v69, SHIWORD(v76), v64, (int)v43);
      v44->member.super.super.m_usTriangles = LOWORD(v72) - LOWORD(v81);
      *(float *)&v45 = COERCE_FLOAT(FormHeapAlloc(0xC0u));
      v81 = *(float *)&v45;
      LOBYTE(v91) = 3;
      v46 = *(float *)&v45 == 0.0 ? 0 : sub_719A20(v45, v44);
      LOBYTE(v91) = 1;
      NiObjectNET_SetName((NiObjectNET *)v46, "bhkPackedNiTriStripsShape");
      v47 = v87;
      v81 = fabs(sub_8C5070(v87));
      v46->members.m_localTransform.scale = v81;
      (*(void (__thiscall **)(_DWORD *, NiAVObject *))(*v47 + 0x98))(v47, v46);
      NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v46, 2);
      if ( NiPropertyByID )
      {
        v49 = *(_DWORD *)(v80 + 0x1C);
        v84 = 0.0;
        v85 = 0.0;
        v86 = 0.0;
        sub_8A2730(*(_DWORD *)(v49 + v79 + 8), &v84);
        v50 = v85;
        v51 = v86;
        *(float *)&NiPropertyByID[2].members.m_extraDataList = v84;
        ++NiPropertyByID[3].members.m_controller;
        *(float *)&NiPropertyByID[2].members.m_extraDataListLen = v50;
        *(float *)&NiPropertyByID[3].vtbl = v51;
      }
      if ( HIWORD(v67) )
      {
        v52 = (char *)v66;
        memset(v66, 0, 4 * (v41 >> 1));
        v53 = &v52[4 * (v41 >> 1)];
        for ( j = v41 & 1; j; --j )
        {
          *(_WORD *)v53 = 0;
          v53 += 2;
        }
      }
      HIWORD(v67) = 0;
      LOWORD(v68) = 0;
      if ( HIWORD(v76) )
      {
        v55 = (char *)Src;
        v56 = v73 & 1;
        v57 = v73 >> 1;
        memset(Src, 0, 4 * (v73 >> 1));
        v58 = &v55[4 * v57];
        for ( k = v56; k; --k )
        {
          *(_WORD *)v58 = 0;
          v58 += 2;
        }
      }
      v60 = *v88;
      HIWORD(v76) = 0;
      v77 = 0;
      (*(void (__thiscall **)(int *, NiAVObject *, _DWORD))(v60 + 0x84))(v88, v46, 0);
      v79 += 0xC;
      v70 = i;
      v81 = v72;
      v61 = *(unsigned __int16 *)(v80 + 0x10);
      if ( ++v83 >= v61 )
        break;
      v3 = v70;
    }
  }
  FormHeapFree((unsigned int)v66);
  FormHeapFree((unsigned int)Src);
}
