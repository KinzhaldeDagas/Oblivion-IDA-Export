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
  unsigned int v17; // esi
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
  size_t v61; // [esp-18h] [ebp-CCh]
  size_t v62; // [esp-Ch] [ebp-C0h]
  size_t v63; // [esp-4h] [ebp-B8h]
  bool v64; // [esp+12h] [ebp-A2h]
  bool v65; // [esp+12h] [ebp-A2h]
  char IsObjectOfRTTIType; // [esp+13h] [ebp-A1h]
  int v67; // [esp+14h] [ebp-A0h] BYREF
  float v68; // [esp+18h] [ebp-9Ch]
  unsigned int v69; // [esp+1Ch] [ebp-98h]
  void *Src; // [esp+20h] [ebp-94h]
  int v71; // [esp+24h] [ebp-90h] BYREF
  float v72; // [esp+28h] [ebp-8Ch]
  float v73; // [esp+2Ch] [ebp-88h]
  int v74; // [esp+30h] [ebp-84h] BYREF
  float v75; // [esp+34h] [ebp-80h]
  void *vftable; // [esp+38h] [ebp-7Ch]
  BSShaderPPLightingProperty::TangentSpaceData *v77; // [esp+3Ch] [ebp-78h]
  int i; // [esp+40h] [ebp-74h]
  int v79; // [esp+44h] [ebp-70h]
  float v80; // [esp+48h] [ebp-6Ch]
  float v81; // [esp+4Ch] [ebp-68h]
  float v82; // [esp+50h] [ebp-64h]
  float v83; // [esp+54h] [ebp-60h]
  float v84; // [esp+58h] [ebp-5Ch]
  float v85; // [esp+5Ch] [ebp-58h]
  float v86; // [esp+60h] [ebp-54h]
  double v87; // [esp+64h] [ebp-50h]
  float v88; // [esp+6Ch] [ebp-48h]
  unsigned __int64 v89; // [esp+74h] [ebp-40h]
  unsigned int v90; // [esp+7Ch] [ebp-38h]
  float v91; // [esp+80h] [ebp-34h]
  double v92; // [esp+84h] [ebp-30h]
  double v93; // [esp+8Ch] [ebp-28h]
  double v94; // [esp+94h] [ebp-20h]
  NiObject *v95; // [esp+9Ch] [ebp-18h]
  float v96; // [esp+A0h] [ebp-14h]
  unsigned int v97; // [esp+B0h] [ebp-4h]

  m_pcName = a1->members.m_pcName;
  v64 = 0;
  if ( m_pcName )
  {
    LODWORD(v63) = 4;
    v64 = _strnicmp(m_pcName, "STBB", v63) == 0;
  }
  v2 = (BSShaderPPLightingProperty::TangentSpaceData *)FormHeapAlloc(0x14u);
  LODWORD(v75) = v2;
  v97 = 0;
  if ( v2 )
  {
    v3 = BSShaderPPLightingProperty::TangentSpaceData::TangentSpaceData(v2, 1);
    v77 = v3;
  }
  else
  {
    v77 = 0;
    v3 = 0;
  }
  v97 = 0xFFFFFFFF;
  if ( v64 )
  {
    Src = (void *)FormHeapAlloc(0x30u);
    v4 = (void *)FormHeapAlloc(0x30u);
    qmemcpy(Src, &unk_B2C688, 0x30u);
    qmemcpy(v4, &unk_B2C6B8, 0x30u);
    *((_DWORD *)v3 + 3) = Src;
    *((_DWORD *)v3 + 4) = v4;
    qmemcpy((void *)LODWORD(a1[7].members.m_controller->member.m_fLastTime), &unk_B2C6E8, 0x30u);
    return v3;
  }
  else
  {
    ExtraData = NiObjectNET_GetExtraData(a1, "Tangent space (binormal & tangent vectors)");
    if ( ExtraData )
    {
      flags = a1[7].members.m_controller->member.flags;
      vftable = ExtraData[1].__vftable;
      Src = (char *)vftable + 0xC * flags;
      *((_DWORD *)v3 + 3) = FormHeapAlloc((0xC * (unsigned __int64)flags) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * flags);
      v8 = FormHeapAlloc((0xC * (unsigned __int64)flags) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * flags);
      v9 = *((void **)v3 + 3);
      *((_DWORD *)v3 + 4) = v8;
      LODWORD(v62) = 0xC * flags;
      memcpy(v9, Src, v62);
      LODWORD(v61) = 0xC * flags;
      memcpy(*((void **)v3 + 4), vftable, v61);
      sub_6FFAC0(a1, "Tangent space (binormal & tangent vectors)");
      return v3;
    }
    else
    {
      v10 = a1->members.m_pcName;
      if ( !v10 || (LODWORD(v63) = 5, !strncmp(v10, "Block", v63)) )
      {
        if ( !a1->members.m_pcName )
        {
          m_uiRefCount = a1[1].members.super.m_uiRefCount;
          if ( m_uiRefCount )
            sub_40FEC0("Creating tangent space for a nameless object, parent='%s'.", *(const char **)(m_uiRefCount + 8));
          else
            sub_40FEC0("Creating tangent space for a nameless parentless object");
        }
      }
      else
      {
        sub_40FEC0("WARNING: Creating tangent space for non-land object named '%s'", a1->members.m_pcName);
      }
      if ( (*((int (__thiscall **)(NiObjectNET *))a1->vtbl + 4))(a1) )
      {
        v12 = (NiObject *)(*((int (__thiscall **)(NiObjectNET *))a1->vtbl + 4))(a1);
        v13 = v12[0x16].members.m_uiRefCount;
        v14 = *(unsigned __int16 *)(v13 + 0x40);
        HIDWORD(v16) = *(_DWORD *)(v13 + 0x1C);
        v15 = *(_DWORD *)(v13 + 0x28);
        v69 = *(unsigned __int16 *)(v13 + 8);
        LODWORD(v16) = *(_DWORD *)(v13 + 0x20);
        v95 = v12;
        v90 = v14;
        v89 = v16;
        IsObjectOfRTTIType = NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD04, v12);
        v79 = 0;
        if ( IsObjectOfRTTIType )
          v79 = *(_DWORD *)(v12[0x16].members.m_uiRefCount + 0x4C);
        if ( (_DWORD)v89 )
        {
          v17 = FormHeapAlloc((0xC * (unsigned __int64)(2 * v69)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x18 * v69);
          LODWORD(v75) = v17 + 0xC * v69;
          _memset(v17, 0, 0x18 * v69);
          vftable = (void *)FormHeapAlloc((0xC * (unsigned __int64)v69) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v69);
          v18 = (void *)FormHeapAlloc((0xC * (unsigned __int64)v69) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * v69);
          v19 = 0;
          Src = v18;
          v65 = 0;
          for ( i = 0; (unsigned __int16)i < v90; v19 = (unsigned __int16)i )
          {
            if ( IsObjectOfRTTIType )
            {
              v20 = *(unsigned __int16 *)(v79 + 2 * v19);
              v71 = *(unsigned __int16 *)(v79 + 2 * v19 + 2);
              v21 = *(unsigned __int16 *)(v79 + 2 * v19 + 4);
              v74 = v20;
              v67 = v21;
              if ( v65 )
              {
                LODWORD(v68) = (unsigned __int16)v21;
                v21 = (unsigned __int16)v20;
                LOWORD(v20) = LOWORD(v68);
                v67 = v21;
                v74 = LOWORD(v68);
              }
              v65 = !v65;
            }
            else
            {
              (*(void (__thiscall **)(UInt32, int, int *, int *, int *))(*(_DWORD *)v95[0x16].members.m_uiRefCount + 0x60))(
                v95[0x16].members.m_uiRefCount,
                i,
                &v74,
                &v71,
                &v67);
              LOWORD(v21) = v67;
              LOWORD(v20) = v74;
            }
            if ( (_WORD)v20 != (_WORD)v71 && (_WORD)v71 != (_WORD)v21 && (_WORD)v20 != (_WORD)v21 )
            {
              LODWORD(v68) = (unsigned __int16)v71;
              LODWORD(v80) = HIDWORD(v16) + 0xC * (unsigned __int16)v71;
              LODWORD(v16) = (unsigned __int16)v20;
              LODWORD(v73) = (unsigned __int16)v67;
              LODWORD(v72) = HIDWORD(v16) + 0xC * (unsigned __int16)v67;
              v22 = 0xC * (unsigned __int16)v20;
              v23 = *(float *)(v22 + HIDWORD(v16));
              v96 = *(float *)LODWORD(v80) - v23;
              *(float *)&v93 = *(float *)LODWORD(v72) - v23;
              v24 = *(float *)(v22 + HIDWORD(v89) + 4);
              *(float *)&v92 = *(float *)(LODWORD(v80) + 4) - v24;
              *(float *)&v94 = *(float *)(LODWORD(v72) + 4) - v24;
              v25 = *(float *)(v22 + HIDWORD(v89) + 8);
              v91 = *(float *)(LODWORD(v80) + 8) - v25;
              *(float *)&v87 = *(float *)(LODWORD(v72) + 8) - v25;
              v26 = *(float *)(v15 + 8 * v16);
              v80 = *(float *)(v15 + 8 * (unsigned __int16)v71) - v26;
              v72 = *(float *)(v15 + 8 * (unsigned __int16)v67) - v26;
              v27 = *(float *)(v15 + 8 * v16 + 4);
              v68 = *(float *)(v15 + 8 * (unsigned __int16)v71 + 4) - v27;
              v73 = *(float *)(v15 + 8 * (unsigned __int16)v67 + 4) - v27;
              v28 = v73;
              v73 = 1.0 / (v80 * v73 - v72 * v68);
              v93 = *(float *)&v93;
              v81 = (v96 * v28 - v93 * v68) * v73;
              v92 = *(float *)&v92;
              v94 = *(float *)&v94;
              v16 = __PAIR64__(HIDWORD(v89), LODWORD(v75));
              v82 = (v92 * v28 - v94 * v68) * v73;
              v87 = *(float *)&v87;
              v83 = (v28 * v91 - v68 * v87) * v73;
              v84 = (v93 * v80 - v96 * v72) * v73;
              v85 = (v94 * v80 - v92 * v72) * v73;
              v86 = (v80 * v87 - v91 * v72) * v73;
              v29 = v81;
              *(float *)(v22 + v17) = *(float *)(v22 + v17) + v81;
              v30 = v82;
              *(float *)(v22 + v17 + 4) = *(float *)(v22 + v17 + 4) + v82;
              v31 = v83;
              *(float *)(v22 + v17 + 8) = *(float *)(v22 + v17 + 8) + v83;
              v32 = (float *)(v17 + 0xC * (unsigned __int16)v71);
              *v32 = *v32 + v29;
              v32[1] = v32[1] + v30;
              v32[2] = v32[2] + v31;
              v33 = (float *)(v17 + 0xC * (unsigned __int16)v67);
              *v33 = v29 + *v33;
              v33[1] = v30 + v33[1];
              v33[2] = v31 + v33[2];
              v34 = v84;
              v35 = (float *)(v16 + 0xC * (unsigned __int16)v74);
              *v35 = *v35 + v84;
              v36 = v85;
              v35[1] = v35[1] + v85;
              v37 = v86;
              v35[2] = v35[2] + v86;
              v38 = (float *)(v16 + 0xC * (unsigned __int16)v71);
              *v38 = *v38 + v34;
              v38[1] = v38[1] + v36;
              v38[2] = v38[2] + v37;
              v39 = (float *)(v16 + 0xC * (unsigned __int16)v67);
              *v39 = v34 + *v39;
              v39[1] = v36 + v39[1];
              v39[2] = v37 + v39[2];
            }
            ++i;
          }
          v40 = 0;
          if ( v69 )
          {
            v41 = 0;
            do
            {
              v42 = v89;
              v43 = 0xC * v41;
              v44 = *(float *)(v43 + v17 + 4);
              v45 = *(float *)(v43 + v89 + 4);
              v46 = (float *)((char *)vftable + v43);
              v47 = *(float *)(v43 + v17);
              v48 = *(float *)(v43 + v89);
              v49 = *(float *)(v43 + v17 + 8);
              v50 = *(float *)(v43 + v89 + 8);
              v75 = v48 * v47 + v45 * v44 + v50 * v49;
              v84 = v48 * v75;
              v85 = v45 * v75;
              v86 = v50 * v75;
              v81 = v47 - v84;
              v51 = v85;
              *v46 = v81;
              v82 = v44 - v51;
              v46[1] = v82;
              v83 = v49 - v86;
              v46[2] = v83;
              v52 = v46[2];
              v53 = *(float *)(v43 + v42 + 4);
              v54 = v46[1];
              v55 = *(float *)(v43 + v42 + 8);
              *(float *)&v87 = v53 * v52 - v55 * v54;
              v56 = *(float *)(v43 + v42);
              v57 = *v46;
              v58 = (char *)Src + v43;
              *(_DWORD *)v58 = LODWORD(v87);
              *((float *)&v87 + 1) = v55 * v57 - v52 * v56;
              *((_DWORD *)v58 + 1) = HIDWORD(v87);
              v88 = v54 * v56 - v53 * v57;
              *((float *)v58 + 2) = v88;
              sub_43F350(v46);
              sub_43F350((float *)v58);
              v41 = (unsigned __int16)++v40;
            }
            while ( (unsigned __int16)v40 < v69 );
          }
          v59 = v77;
          v60 = Src;
          *((_DWORD *)v77 + 3) = vftable;
          *((_DWORD *)v59 + 4) = v60;
          FormHeapFree(v17);
          return v59;
        }
        else
        {
          sub_40FEC0(
            "BSShaderManager::CreateTangentSpaceSimple(): Trying to create a tangent space for a trigeom with no normals.  Aborted.");
          return 0;
        }
      }
      else
      {
        sub_40FEC0(
          "BSShaderManager::CreateTangentSpaceSimple(): Trying to create a tangent space for NiGeom that isn't triangle-based.  Aborted.");
        return 0;
      }
    }
  }
}
