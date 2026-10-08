BSShaderPPLightingProperty::TangentSpaceData *__cdecl sub_7B7710(NiObjectNET *a1)
{
  const char *m_pcName; // eax
  BSShaderPPLightingProperty::TangentSpaceData *v2; // eax
  BSShaderPPLightingProperty::TangentSpaceData *v3; // ebx
  void *v4; // eax
  NiExtraData *ExtraData; // eax
  unsigned int flags; // edi
  int v8; // eax
  void *v9; // ecx
  const char *v10; // eax
  UInt32 m_uiRefCount; // eax
  NiObject *v12; // esi
  UInt32 v13; // eax
  unsigned int v14; // edx
  int v15; // edi
  unsigned __int64 v16; // rcx
  int v17; // esi
  void *v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st7
  double v30; // st6
  double v31; // st5
  float *v32; // eax
  float *v33; // eax
  double v34; // st7
  float *v35; // eax
  double v36; // st6
  double v37; // st5
  float *v38; // eax
  float *v39; // eax
  int v40; // ebx
  int v41; // eax
  int v42; // edx
  int v43; // eax
  double v44; // st7
  double v45; // st6
  float *v46; // ecx
  double v47; // st5
  double v48; // st4
  double v49; // st3
  double v50; // st2
  double v51; // st5
  double v52; // st7
  double v53; // st6
  double v54; // st5
  double v55; // st4
  double v56; // st2
  double v57; // st1
  char *v58; // edi
  BSShaderPPLightingProperty::TangentSpaceData *v59; // edi
  void *v60; // edx
  size_t v61; // [esp-4h] [ebp-B8h]
  bool v62; // [esp+12h] [ebp-A2h]
  bool v63; // [esp+12h] [ebp-A2h]
  char IsObjectOfRTTIType; // [esp+13h] [ebp-A1h]
  int v65; // [esp+14h] [ebp-A0h] BYREF
  float v66; // [esp+18h] [ebp-9Ch]
  unsigned int v67; // [esp+1Ch] [ebp-98h]
  void *Src; // [esp+20h] [ebp-94h]
  int v69; // [esp+24h] [ebp-90h] BYREF
  float v70; // [esp+28h] [ebp-8Ch]
  float v71; // [esp+2Ch] [ebp-88h]
  int v72; // [esp+30h] [ebp-84h] BYREF
  float v73; // [esp+34h] [ebp-80h]
  void *source; // [esp+38h] [ebp-7Ch]
  BSShaderPPLightingProperty::TangentSpaceData *v75; // [esp+3Ch] [ebp-78h]
  int i; // [esp+40h] [ebp-74h]
  int v77; // [esp+44h] [ebp-70h]
  float v78; // [esp+48h] [ebp-6Ch]
  float v79; // [esp+4Ch] [ebp-68h]
  float v80; // [esp+50h] [ebp-64h]
  float v81; // [esp+54h] [ebp-60h]
  float v82; // [esp+58h] [ebp-5Ch]
  float v83; // [esp+5Ch] [ebp-58h]
  float v84; // [esp+60h] [ebp-54h]
  double v85; // [esp+64h] [ebp-50h]
  float v86; // [esp+6Ch] [ebp-48h]
  unsigned __int64 v87; // [esp+74h] [ebp-40h]
  unsigned int v88; // [esp+7Ch] [ebp-38h]
  float v89; // [esp+80h] [ebp-34h]
  double v90; // [esp+84h] [ebp-30h]
  double v91; // [esp+8Ch] [ebp-28h]
  double v92; // [esp+94h] [ebp-20h]
  NiObject *v93; // [esp+9Ch] [ebp-18h]
  float v94; // [esp+A0h] [ebp-14h]
  unsigned int v95; // [esp+B0h] [ebp-4h]

  m_pcName = a1->members.m_pcName; /*0x7b7745*/
  v62 = 0; /*0x7b774c*/
  if ( m_pcName ) /*0x7b7751*/
  {
    LODWORD(v61) = 4; /*0x7b7753*/
    v62 = _strnicmp(m_pcName, "STBB", v61) == 0; /*0x7b7767*/
  }
  v2 = (BSShaderPPLightingProperty::TangentSpaceData *)FormHeapAlloc(0x14u); /*0x7b776e*/
  LODWORD(v73) = v2; /*0x7b7776*/
  v95 = 0; /*0x7b777c*/
  if ( v2 ) /*0x7b7783*/
  {
    v3 = BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(v2, 1); /*0x7b778e*/
    v75 = v3; /*0x7b7790*/
  }
  else
  {
    v75 = 0; /*0x7b7796*/
    v3 = 0; /*0x7b779a*/
  }
  v95 = 0xFFFFFFFF; /*0x7b77a1*/
  if ( v62 )
  {
    Src = (void *)FormHeapAlloc(0x30u); /*0x7b77b9*/
    v4 = (void *)FormHeapAlloc(0x30u); /*0x7b77bd*/
    qmemcpy(Src, &unk_B2C688, 0x30u); /*0x7b77cf*/
    qmemcpy(v4, &unk_B2C6B8, 0x30u); /*0x7b77dd*/
    *((_DWORD *)v3 + 3) = Src; /*0x7b77e3*/
    *((_DWORD *)v3 + 4) = v4; /*0x7b77e6*/
    qmemcpy((void *)LODWORD(a1[7].members.m_controller->member.m_fLastTime), &unk_B2C6E8, 0x30u); /*0x7b77ff*/
    return v3; /*0x7b7801*/
  }
  else
  {
    ExtraData = NiObjectNET_GetExtraData(a1, "Tangent space (binormal & tangent vectors)"); /*0x7b7820*/
    if ( ExtraData )
    {
      flags = a1[7].members.m_controller->member.flags; /*0x7b7833*/
      source = ExtraData[1].__vftable; /*0x7b7844*/
      Src = (char *)source + 0xC * flags; /*0x7b7848*/
      *((_DWORD *)v3 + 3) = FormHeapAlloc((0xC * (unsigned __int64)flags) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * flags);
      v8 = FormHeapAlloc((0xC * (unsigned __int64)flags) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * flags);
      v9 = *((void **)v3 + 3); /*0x7b787f*/
      *((_DWORD *)v3 + 4) = v8; /*0x7b7882*/
      memcpy(v9, Src, 0xC * flags); /*0x7b788c*/
      memcpy(*((void **)v3 + 4), source, 0xC * flags); /*0x7b789b*/
      sub_6FFAC0(a1, "Tangent space (binormal & tangent vectors)"); /*0x7b78ab*/
      return v3; /*0x7b78b0*/
    }
    else
    {
      v10 = a1->members.m_pcName; /*0x7b78c8*/
      if ( !v10 || (LODWORD(v61) = 5, !strncmp(v10, "Block", v61)) )
      {
        if ( !a1->members.m_pcName ) /*0x7b78f6*/
        {
          m_uiRefCount = a1[1].members.super.m_uiRefCount; /*0x7b78fb*/
          if ( m_uiRefCount ) /*0x7b7900*/
            sub_40FEC0("Creating tangent space for a nameless object, parent='%s'.", *(const char **)(m_uiRefCount + 8)); /*0x7b790b*/
          else
            sub_40FEC0("Creating tangent space for a nameless parentless object"); /*0x7b791a*/
        }
      }
      else
      {
        sub_40FEC0("WARNING: Creating tangent space for non-land object named '%s'", a1->members.m_pcName);
      }
      if ( (*((int (__thiscall **)(NiObjectNET *))a1->vtbl + 4))(a1) )
      {
        v12 = (NiObject *)(*((int (__thiscall **)(NiObjectNET *))a1->vtbl + 4))(a1); /*0x7b795d*/
        v13 = v12[0x16].members.m_uiRefCount; /*0x7b795f*/
        v14 = *(unsigned __int16 *)(v13 + 0x40); /*0x7b7969*/
        HIDWORD(v16) = *(_DWORD *)(v13 + 0x1C); /*0x7b796d*/
        v15 = *(_DWORD *)(v13 + 0x28); /*0x7b7970*/
        v67 = *(unsigned __int16 *)(v13 + 8); /*0x7b7973*/
        LODWORD(v16) = *(_DWORD *)(v13 + 0x20); /*0x7b7977*/
        v93 = v12; /*0x7b7980*/
        v88 = v14; /*0x7b7987*/
        v87 = v16; /*0x7b7995*/
        IsObjectOfRTTIType = NiRTTI::IsObjectOfRTTIType(&stru_B3FD04, v12); /*0x7b79a3*/
        v77 = 0; /*0x7b79a7*/
        if ( IsObjectOfRTTIType ) /*0x7b79af*/
          v77 = *(_DWORD *)(v12[0x16].members.m_uiRefCount + 0x4C); /*0x7b79ba*/
        if ( (_DWORD)v87 )
        {
          v17 = FormHeapAlloc((0xC * (unsigned __int64)(2 * v67)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v67);
          LODWORD(v73) = v17 + 0xC * v67; /*0x7b7a21*/
          _memset(v17, 0, 0x18 * v67); /*0x7b7a25*/
          source = (void *)FormHeapAlloc((0xC * (unsigned __int64)v67) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v67);
          v18 = (void *)FormHeapAlloc((0xC * (unsigned __int64)v67) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v67);
          v19 = 0; /*0x7b7a62*/
          Src = v18; /*0x7b7a6b*/
          v63 = 0; /*0x7b7a6f*/
          for ( i = 0; (unsigned __int16)i < v88; v19 = (unsigned __int16)i ) /*0x7b7a78*/
          {
            if ( IsObjectOfRTTIType ) /*0x7b7a83*/
            {
              v20 = *(unsigned __int16 *)(v77 + 2 * v19); /*0x7b7a89*/
              v69 = *(unsigned __int16 *)(v77 + 2 * v19 + 2); /*0x7b7a92*/
              v21 = *(unsigned __int16 *)(v77 + 2 * v19 + 4); /*0x7b7a9a*/
              v72 = v20; /*0x7b7aa5*/
              v65 = v21; /*0x7b7aa9*/
              if ( v63 ) /*0x7b7aad*/
              {
                LODWORD(v66) = (unsigned __int16)v21; /*0x7b7ab2*/
                v21 = (unsigned __int16)v20; /*0x7b7ab6*/
                LOWORD(v20) = LOWORD(v66); /*0x7b7ab9*/
                v65 = v21; /*0x7b7abe*/
                v72 = LOWORD(v66); /*0x7b7ac2*/
              }
              v63 = !v63; /*0x7b7ac9*/
            }
            else
            {
              (*(void (__thiscall **)(UInt32, int, int *, int *, int *))(*(_DWORD *)v93[0x16].members.m_uiRefCount + 0x60))( /*0x7b7af5*/
                v93[0x16].members.m_uiRefCount,
                i,
                &v72,
                &v69,
                &v65);
              LOWORD(v21) = v65; /*0x7b7af7*/
              LOWORD(v20) = v72; /*0x7b7afb*/
            }
            if ( (_WORD)v20 != (_WORD)v69 && (_WORD)v69 != (_WORD)v21 && (_WORD)v20 != (_WORD)v21 ) /*0x7b7b18*/
            {
              LODWORD(v66) = (unsigned __int16)v69; /*0x7b7b21*/
              LODWORD(v78) = HIDWORD(v16) + 0xC * (unsigned __int16)v69; /*0x7b7b2b*/
              LODWORD(v16) = (unsigned __int16)v20; /*0x7b7b34*/
              LODWORD(v71) = (unsigned __int16)v65; /*0x7b7b37*/
              LODWORD(v70) = HIDWORD(v16) + 0xC * (unsigned __int16)v65; /*0x7b7b41*/
              v22 = 0xC * (unsigned __int16)v20; /*0x7b7b4e*/
              v23 = *(float *)(v22 + HIDWORD(v16)); /*0x7b7b50*/
              v94 = *(float *)LODWORD(v78) - v23; /*0x7b7b5b*/
              *(float *)&v91 = *(float *)LODWORD(v70) - v23; /*0x7b7b68*/
              v24 = *(float *)(v22 + HIDWORD(v87) + 4); /*0x7b7b6f*/
              *(float *)&v90 = *(float *)(LODWORD(v78) + 4) - v24; /*0x7b7b7c*/
              *(float *)&v92 = *(float *)(LODWORD(v70) + 4) - v24; /*0x7b7b8a*/
              v25 = *(float *)(v22 + HIDWORD(v87) + 8); /*0x7b7b91*/
              v89 = *(float *)(LODWORD(v78) + 8) - v25; /*0x7b7b9e*/
              *(float *)&v85 = *(float *)(LODWORD(v70) + 8) - v25; /*0x7b7bac*/
              v26 = *(float *)(v15 + 8 * v16); /*0x7b7bb0*/
              v78 = *(float *)(v15 + 8 * (unsigned __int16)v69) - v26; /*0x7b7bbc*/
              v70 = *(float *)(v15 + 8 * (unsigned __int16)v65) - v26; /*0x7b7bc3*/
              v27 = *(float *)(v15 + 8 * v16 + 4); /*0x7b7bc7*/
              v66 = *(float *)(v15 + 8 * (unsigned __int16)v69 + 4) - v27; /*0x7b7bd5*/
              v71 = *(float *)(v15 + 8 * (unsigned __int16)v65 + 4) - v27; /*0x7b7bdd*/
              v28 = v71; /*0x7b7be1*/
              v71 = 1.0 / (v78 * v71 - v70 * v66); /*0x7b7bff*/
              v91 = *(float *)&v91; /*0x7b7c11*/
              v79 = (v94 * v28 - v91 * v66) * v71; /*0x7b7c2a*/
              v90 = *(float *)&v90; /*0x7b7c35*/
              v92 = *(float *)&v92; /*0x7b7c43*/
              v16 = __PAIR64__(HIDWORD(v87), LODWORD(v73)); /*0x7b7c4c*/
              v80 = (v90 * v28 - v92 * v66) * v71; /*0x7b7c5a*/
              v85 = *(float *)&v85; /*0x7b7c69*/
              v81 = (v28 * v89 - v66 * v85) * v71; /*0x7b7c7f*/
              v82 = (v91 * v78 - v94 * v70) * v71; /*0x7b7c94*/
              v83 = (v92 * v78 - v90 * v70) * v71; /*0x7b7cae*/
              v84 = (v78 * v85 - v89 * v70) * v71; /*0x7b7cc0*/
              v29 = v79; /*0x7b7cc4*/
              *(float *)(v22 + v17) = *(float *)(v22 + v17) + v79; /*0x7b7ccd*/
              v30 = v80; /*0x7b7cd0*/
              *(float *)(v22 + v17 + 4) = *(float *)(v22 + v17 + 4) + v80; /*0x7b7cda*/
              v31 = v81; /*0x7b7ce2*/
              *(float *)(v22 + v17 + 8) = *(float *)(v22 + v17 + 8) + v81; /*0x7b7cea*/
              v32 = (float *)(v17 + 0xC * (unsigned __int16)v69); /*0x7b7cf4*/
              *v32 = *v32 + v29; /*0x7b7cfb*/
              v32[1] = v32[1] + v30; /*0x7b7d02*/
              v32[2] = v32[2] + v31; /*0x7b7d0a*/
              v33 = (float *)(v17 + 0xC * (unsigned __int16)v65); /*0x7b7d15*/
              *v33 = v29 + *v33; /*0x7b7d1e*/
              v33[1] = v30 + v33[1]; /*0x7b7d23*/
              v33[2] = v31 + v33[2]; /*0x7b7d29*/
              v34 = v82; /*0x7b7d31*/
              v35 = (float *)(v16 + 0xC * (unsigned __int16)v72); /*0x7b7d38*/
              *v35 = *v35 + v82; /*0x7b7d3f*/
              v36 = v83; /*0x7b7d41*/
              v35[1] = v35[1] + v83; /*0x7b7d4a*/
              v37 = v84; /*0x7b7d4d*/
              v35[2] = v35[2] + v84; /*0x7b7d56*/
              v38 = (float *)(v16 + 0xC * (unsigned __int16)v69); /*0x7b7d61*/
              *v38 = *v38 + v34; /*0x7b7d68*/
              v38[1] = v38[1] + v36; /*0x7b7d6f*/
              v38[2] = v38[2] + v37; /*0x7b7d77*/
              v39 = (float *)(v16 + 0xC * (unsigned __int16)v65); /*0x7b7d82*/
              *v39 = v34 + *v39; /*0x7b7d8b*/
              v39[1] = v36 + v39[1]; /*0x7b7d90*/
              v39[2] = v37 + v39[2]; /*0x7b7d96*/
            }
            ++i; /*0x7b7da7*/
          }
          v40 = 0; /*0x7b7db1*/
          if ( v67 ) /*0x7b7db7*/
          {
            v41 = 0; /*0x7b7dbd*/
            do /*0x7b7ebe*/
            {
              v42 = v87; /*0x7b7dbf*/
              v43 = 0xC * v41; /*0x7b7dc8*/
              v44 = *(float *)(v43 + v17 + 4); /*0x7b7dca*/
              v45 = *(float *)(v43 + v87 + 4); /*0x7b7dd2*/
              v46 = (float *)((char *)source + v43); /*0x7b7dd6*/
              v47 = *(float *)(v43 + v17); /*0x7b7dd8*/
              v48 = *(float *)(v43 + v87); /*0x7b7ddb*/
              v49 = *(float *)(v43 + v17 + 8); /*0x7b7dde*/
              v50 = *(float *)(v43 + v87 + 8); /*0x7b7de2*/
              v73 = v48 * v47 + v45 * v44 + v50 * v49; /*0x7b7df6*/
              v82 = v48 * v73; /*0x7b7e04*/
              v83 = v45 * v73; /*0x7b7e0e*/
              v84 = v50 * v73; /*0x7b7e18*/
              v79 = v47 - v82; /*0x7b7e20*/
              v51 = v83; /*0x7b7e28*/
              *v46 = v79; /*0x7b7e2c*/
              v80 = v44 - v51; /*0x7b7e32*/
              v46[1] = v80; /*0x7b7e3a*/
              v81 = v49 - v84; /*0x7b7e41*/
              v46[2] = v81; /*0x7b7e49*/
              v52 = v46[2]; /*0x7b7e4c*/
              v53 = *(float *)(v43 + v42 + 4); /*0x7b7e4f*/
              v54 = v46[1]; /*0x7b7e53*/
              v55 = *(float *)(v43 + v42 + 8); /*0x7b7e56*/
              *(float *)&v85 = v53 * v52 - v55 * v54; /*0x7b7e64*/
              v56 = *(float *)(v43 + v42); /*0x7b7e6a*/
              v57 = *v46; /*0x7b7e71*/
              v58 = (char *)Src + v43; /*0x7b7e73*/
              *(_DWORD *)v58 = LODWORD(v85); /*0x7b7e7c*/
              *((float *)&v85 + 1) = v55 * v57 - v52 * v56; /*0x7b7e86*/
              *((_DWORD *)v58 + 1) = HIDWORD(v85); /*0x7b7e8e*/
              v86 = v54 * v56 - v53 * v57; /*0x7b7e99*/
              *((float *)v58 + 2) = v86; /*0x7b7ea1*/
              Vector3_NormalizeInPlace(v46); /*0x7b7ea4*/
              Vector3_NormalizeInPlace((float *)v58); /*0x7b7ead*/
              v41 = (unsigned __int16)++v40; /*0x7b7eb7*/
            }
            while ( (unsigned __int16)v40 < v67 ); /*0x7b7ebe*/
          }
          v59 = v75; /*0x7b7ec8*/
          v60 = Src; /*0x7b7ecc*/
          *((_DWORD *)v75 + 3) = source; /*0x7b7ed1*/
          *((_DWORD *)v59 + 4) = v60; /*0x7b7ed4*/
          FormHeapFree(v17); /*0x7b7ed7*/
          return v59; /*0x7b7edf*/
        }
        else
        {
          sub_40FEC0(
            "BSShaderManager::CreateTangentSpaceSimple(): Trying to create a tangent space for a trigeom with no normals.  Aborted.");
          return 0; /*0x7b79d2*/
        }
      }
      else
      {
        sub_40FEC0(
          "BSShaderManager::CreateTangentSpaceSimple(): Trying to create a tangent space for NiGeom that isn't triangle-based.  Aborted.");
        return 0; /*0x7b793c*/
      }
    }
  }
}
