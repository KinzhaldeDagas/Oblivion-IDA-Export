// Oblivion ShadowSceneLight cull/update path: tests camera/shadow-volume overlap and cube-face visibility, updates category visibility and receiver state, and returns obsolete shadow maps to BSTextureManager.
void __thiscall ShadowSceneLight_CullProcess(void *this, int arg0)
{
  float *v3; // eax
  float v4; // ecx
  char v5; // bl
  float v6; // edx
  float v7; // ecx
  unsigned int v8; // esi
  NiFrustumPlanes *p_a2_28; // edi
  float x; // edx
  float z; // ecx
  float Constant; // edx
  int Radius_low; // edi
  int v14; // esi
  char v15; // bl
  double v16; // st7
  float *v17; // eax
  float v18; // ecx
  float v19; // edx
  float v20; // eax
  double v21; // st7
  double v22; // st6
  double v23; // st3
  double v24; // st6
  double v25; // st7
  double v26; // st5
  double v27; // st6
  double v28; // st7
  double v29; // rt0
  NiNode *v30; // ecx
  NiProperty *v31; // eax
  double v32; // st6
  double v33; // st4
  double v34; // st3
  double v35; // rtt
  double v36; // rt0
  double v37; // st5
  double v38; // st5
  double v39; // rt2
  double v40; // st6
  double v41; // st6
  double v42; // st7
  bool v43; // c3
  _DWORD *v44; // esi
  NiNode *v45; // eax
  NiProperty *NiPropertyByID; // eax
  int v47; // esi
  float v48; // [esp+10h] [ebp-A4h]
  float v49; // [esp+10h] [ebp-A4h]
  float v50; // [esp+10h] [ebp-A4h]
  float v51; // [esp+10h] [ebp-A4h]
  float v52; // [esp+10h] [ebp-A4h]
  float v53; // [esp+10h] [ebp-A4h]
  float v54; // [esp+14h] [ebp-A0h]
  char v55; // [esp+1Bh] [ebp-99h]
  int v56; // [esp+1Ch] [ebp-98h]
  float v57; // [esp+20h] [ebp-94h]
  NiBound v58; // [esp+24h] [ebp-90h] BYREF
  float a2; // [esp+34h] [ebp-80h] BYREF
  float a2_4; // [esp+38h] [ebp-7Ch]
  float a2_8; // [esp+3Ch] [ebp-78h]
  float a2_12; // [esp+40h] [ebp-74h]
  float a2_16; // [esp+44h] [ebp-70h]
  float a2_20; // [esp+48h] [ebp-6Ch]
  float a2_24; // [esp+4Ch] [ebp-68h]
  NiFrustumPlanes a2_28; // [esp+50h] [ebp-64h] BYREF

  BSShaderAccumulator_GetOrCreateGlobal(); /*0x7d639c*/
  if ( !unk_B42CDB )
  {
    v3 = *((float **)this + 0x40); /*0x7d63ae*/
    v4 = v3[0x22]; /*0x7d63b4*/
    v5 = *((_BYTE *)this + 0xF4); /*0x7d63c0*/
    v58.Radius = v3[0x3E]; /*0x7d63c6*/
    v6 = v3[0x23]; /*0x7d63cc*/
    v58.Center.x = v4; /*0x7d63d2*/
    v7 = v3[0x24]; /*0x7d63d6*/
    v56 = 0;                                    // Initialize pending CullProcess status before camera, face, distance, and frustum tests. /*0x7d63dc*/
    v55 = 1; /*0x7d63e4*/
    v58.Center.y = v6; /*0x7d63e9*/
    v58.Center.z = v7; /*0x7d63ed*/
    if ( v5 && *((_DWORD *)this + 0x53) )
    {
      v56 = ShadowCameraVolumesOverlap(*(NiCamera **)(arg0 + 0xC), *((NiCamera **)this + 0x53)) != 0 ? 0 : 0xFF;// Map camera/projector overlap result to pending cull status 0 or 0x00FF.
    }
    else
    {
      qmemcpy(&a2_28, (const void *)(arg0 + 0x2C), sizeof(a2_28)); /*0x7d643a*/
      v8 = 0; /*0x7d643c*/
      p_a2_28 = &a2_28; /*0x7d643e*/
      do /*0x7d64a9*/
      {
        if ( ((1 << v8) & a2_28.ActivePlanes) != 0 ) /*0x7d6454*/
        {
          x = p_a2_28->CullingPlanes[0].Normal.x; /*0x7d6459*/
          z = p_a2_28->CullingPlanes[0].Normal.z; /*0x7d645b*/
          a2_4 = p_a2_28->CullingPlanes[0].Normal.y; /*0x7d645e*/
          a2 = x; /*0x7d6462*/
          Constant = p_a2_28->CullingPlanes[0].Constant; /*0x7d6466*/
          a2_8 = z; /*0x7d646d*/
          a2_12 = Constant; /*0x7d6476*/
          if ( NiBound_ClassifyAgainstPlane(&v58, (NiFrustumPlanes *)&a2) == 2 ) /*0x7d6482*/
          {
            LOWORD(v56) = 0xFF;                 // Active projector-frustum plane reject writes pending status 0x00FF. /*0x7d6635*/
            goto LABEL_20; /*0x7d663d*/
          }
          if ( sub_7415E0(&a2, &v58.Center.x) == 2 ) /*0x7d6499*/
            v55 = 0; /*0x7d649b*/
        }
        ++v8; /*0x7d64a0*/
        p_a2_28 = (NiFrustumPlanes *)((char *)p_a2_28 + 0x10); /*0x7d64a3*/
      }
      while ( v8 < 6 ); /*0x7d64a9*/
      if ( !v55 ) /*0x7d64b0*/
      {
        if ( v5 ) /*0x7d64b8*/
        {
          if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 3 /*0x7d64d4*/
            && (OB_RendererGlobalState_010201A0[0xA7] & 0x10) != 0 )
          {                                     // Only specialCubeDispatch lights enter the native six-face visibility test.
            if ( *((_BYTE *)this + 0xF5) ) /*0x7d64d6*/
            {
              Radius_low = LODWORD(v58.Radius); /*0x7d64df*/
              v14 = 0; /*0x7d64e3*/
              v15 = 0; /*0x7d64e5*/
              do /*0x7d6537*/
              {                                 // Test the current cube face against the supplied camera/bound state.
                if ( !(unsigned __int8)ShadowSceneLight_TestSpecialCubeFaceVisibility( /*0x7d6517*/
                                         SLODWORD(v58.Center.x),
                                         SLODWORD(v58.Center.y),
                                         SLODWORD(v58.Center.z),
                                         Radius_low,
                                         arg0,
                                         v14) )
                  v56 |= 1 << v15;              // A failed special-face visibility test sets that face bit in pending status; mode-0 rendering later skips matching bits. /*0x7d6529*/
                ++v14; /*0x7d652d*/
                ++v15; /*0x7d6530*/
              }
              while ( (unsigned __int16)v14 < 6u ); /*0x7d6537*/
            }
          }
        }
      }
    }
LABEL_20:
    v57 = *((float *)this + 0x35); /*0x7d6539*/
    v54 = *((float *)this + 0x36); /*0x7d6553*/
    v16 = 0.0; /*0x7d6557*/
    if ( (_WORD)v56 == 0xFF ) /*0x7d6559*/
    {
LABEL_53:
      if ( *((_WORD *)this + 0x8C) == 0xFF ) /*0x7d67b5*/
      {
        if ( (_WORD)v56 != 0xFF ) /*0x7d67bc*/
          goto LABEL_68; /*0x7d67bc*/
      }
      else if ( (_WORD)v56 == 0xFF ) /*0x7d67c8*/
      {
        goto LABEL_68; /*0x7d67c8*/
      }
      if ( v16 != *((float *)this + 0x35) || v57 <= 1.0 ) /*0x7d67e4*/
      {
        v41 = v16; /*0x7d67e6*/
        v42 = v54; /*0x7d67e6*/
        if ( v41 < *((float *)this + 0x35) && v41 == v57 || v41 == *((float *)this + 0x36) && v41 < v42 ) /*0x7d6814*/
        {
          v16 = v41; /*0x7d683e*/
        }
        else
        {
          if ( v41 >= *((float *)this + 0x36) ) /*0x7d6821*/
            goto LABEL_79; /*0x7d6821*/
          v43 = v41 == v42; /*0x7d6829*/
          v16 = v41; /*0x7d682d*/
          if ( !v43 ) /*0x7d6832*/
            goto LABEL_79; /*0x7d6832*/
        }
      }
LABEL_68:
      v44 = *((_DWORD **)this + 0x3A); /*0x7d6840*/
      if ( v44 ) /*0x7d6848*/
      {
        do /*0x7d6869*/
        {
          v45 = (NiNode *)v44[2]; /*0x7d684f*/
          v44 = (_DWORD *)*v44; /*0x7d6851*/
          NiPropertyByID = NiNode_GetNiPropertyByID(v45, 4); /*0x7d6857*/
          if ( NiPropertyByID ) /*0x7d685e*/
            NiPropertyByID[1].members.m_controller = 0; /*0x7d6860*/
        }
        while ( v44 ); /*0x7d6869*/
        v16 = 0.0; /*0x7d686b*/
      }
      if ( v16 == *((float *)this + 0x36) ) /*0x7d6878*/
      {
        if ( *((_DWORD *)this + 0x45) ) /*0x7d687a*/
        {
          BSTextureManager__ReturnFrustumShadowTexture( /*0x7d688b*/
            *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
            *((_DWORD *)this + 0x45));
          v47 = *((_DWORD *)this + 0x45); /*0x7d6890*/
          if ( v47 ) /*0x7d6898*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v47 + 4)) ) /*0x7d689e*/
              (**(void (__thiscall ***)(int, int))v47)(v47, 1); /*0x7d68b4*/
            *((_DWORD *)this + 0x45) = 0; /*0x7d68b6*/
          }
        }
      }
LABEL_79:
      *((float *)this + 0x35) = v57;            // Commit CullProcess range/fade-distance result to ShadowSceneLight+0xD4. /*0x7d68c6*/
      *((_WORD *)this + 0x8C) = v56;            // Commit pending cull status to ShadowSceneLight+0x118. /*0x7d68d5*/
      *((float *)this + 0x36) = v54;            // Commit computed visibility/fade result to ShadowSceneLight+0xD8. /*0x7d68e0*/
      return; /*0x7d68e0*/
    }
    v17 = *(float **)(arg0 + 0xC); /*0x7d6568*/
    v18 = v17[0x22]; /*0x7d656f*/
    v19 = v17[0x23]; /*0x7d6575*/
    v20 = v17[0x24]; /*0x7d657b*/
    a2_16 = v18; /*0x7d6581*/
    a2_20 = v19; /*0x7d6589*/
    a2_24 = v20; /*0x7d658d*/
    a2 = v58.Center.x - v18; /*0x7d6591*/
    a2_4 = v58.Center.y - v19; /*0x7d659d*/
    a2_8 = v58.Center.z - v20; /*0x7d65a9*/
    v48 = a2_4 * a2_4 + a2 * a2 + a2_8 * a2_8;  // Begin native base receiver-surface distance calculation. /*0x7d65c9*/
    v49 = sqrt(v48); /*0x7d65d6*/
    v50 = v49 - v58.Radius;                     // Complete base surface-distance value used by the following fade/cull thresholds. /*0x7d65e2*/
    v21 = v50; /*0x7d65e6*/
    v22 = *(float *)&OB_RendererGlobalState_010201A0[0x1E3];// Apply the base fade threshold. /*0x7d65ea*/
    if ( v22 > v50 ) /*0x7d65f9*/
    {
      v32 = 0.0; /*0x7d66be*/
    }
    else
    {
      v23 = *(float *)&OB_RendererGlobalState_010201A0[0x1E7];// Apply the base hard-cull threshold. /*0x7d660d*/
      if ( v23 != 0.0 ) /*0x7d6612*/
      {
        if ( v23 < v21 ) /*0x7d661f*/
        {
          LOWORD(v56) = 0xFF;                   // Base-distance hard reject writes pending status 0x00FF and zeros local fade values. /*0x7d6623*/
          v24 = 0.0; /*0x7d6627*/
          v25 = 1.0; /*0x7d6629*/
          v57 = 0.0; /*0x7d662b*/
          v54 = 0.0; /*0x7d662f*/
LABEL_29:
          v30 = *((NiNode **)this + 0x4C); /*0x7d6667*/
          if ( v30 ) /*0x7d666f*/
          {
            v31 = NiNode_GetNiPropertyByID(v30, 2); /*0x7d6677*/
            if ( v31 ) /*0x7d667e*/
              v54 = *(float *)&v31[3].members.m_pcName * v54; /*0x7d6687*/
            v25 = 1.0; /*0x7d668b*/
            v24 = 0.0; /*0x7d668d*/
          }
          if ( unk_B42D78 ) /*0x7d668f*/
          {
            v51 = ((double (__cdecl *)(int, int))unk_B42D78)(1, 1); /*0x7d66aa*/
            v25 = 1.0; /*0x7d66ae*/
            v24 = 0.0; /*0x7d66b3*/
          }
          else
          {
            v51 = v24; /*0x7d673b*/
          }
          v52 = *((float *)this + 0x38) + v51; /*0x7d6749*/
          *((float *)this + 0x38) = v52; /*0x7d6751*/
          if ( v52 / flt_B2C680 <= v25 ) /*0x7d676c*/
            v38 = v52 / flt_B2C680; /*0x7d6776*/
          else
            v38 = v25; /*0x7d6772*/
          v53 = v38; /*0x7d6778*/
          if ( v24 == *((float *)this + 0x37) ) /*0x7d6787*/
          {
            v39 = v24; /*0x7d6795*/
            v40 = (v25 - v53) * v54; /*0x7d6795*/
            v16 = v39; /*0x7d6795*/
          }
          else
          {
            v16 = v24; /*0x7d6799*/
            v40 = v53 * v54; /*0x7d679f*/
          }
          v54 = v40; /*0x7d67a3*/
          goto LABEL_53; /*0x7d67a3*/
        }
        v57 = 1.0 - (v21 - v22) / (v23 - v22); /*0x7d6652*/
        v26 = 0.0; /*0x7d6656*/
        v27 = 1.0; /*0x7d6656*/
        if ( v57 <= 0.0 ) /*0x7d6661*/
          goto LABEL_27; /*0x7d6661*/
        goto LABEL_37; /*0x7d6661*/
      }
      v32 = 0.0; /*0x7d670f*/
    }
    v57 = 1.0; /*0x7d66c2*/
    v26 = v32; /*0x7d66c6*/
    v27 = 1.0; /*0x7d66c6*/
LABEL_37:
    if ( *((_BYTE *)this + 0xF4) )              // Gate the additional fade/cull stage on per-source projector mode +0xF4. /*0x7d66c8*/
    {
      v33 = *(float *)&OB_RendererGlobalState_010201A0[0x1EB];// Read additional per-source fade parameter. /*0x7d66d1*/
      if ( v33 > v21 || (v34 = *(float *)&OB_RendererGlobalState_010201A0[0x1EF], v34 == v26) )// Read additional per-source cull parameter; this stage drives fade separately from the base hard-status producer. /*0x7d66f1*/
      {
        v28 = v26; /*0x7d672e*/
        v54 = 1.0; /*0x7d6732*/
      }
      else
      {
        if ( v34 < v21 ) /*0x7d66fa*/
        {
          v35 = v27; /*0x7d6702*/
          v24 = v26; /*0x7d6702*/
          v25 = v35; /*0x7d6702*/
          v54 = v26; /*0x7d6704*/
          goto LABEL_29; /*0x7d6708*/
        }
        v36 = v26; /*0x7d671f*/
        v37 = v27 - (v21 - v33) / (v34 - v33); /*0x7d671f*/
        v28 = v36; /*0x7d671f*/
        v54 = v37; /*0x7d6721*/
      }
      goto LABEL_28; /*0x7d6725*/
    }
LABEL_27:
    v28 = v26; /*0x7d6663*/
LABEL_28:
    v29 = v27; /*0x7d6665*/
    v24 = v28; /*0x7d6665*/
    v25 = v29; /*0x7d6665*/
    goto LABEL_29; /*0x7d6665*/
  }
}
