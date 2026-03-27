char __cdecl sub_687060(MobileObject *a1, float *arg4, float *a3, char a4)
{
  bool v4; // zf
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v6; // ebx
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // esi
  __m128 *v11; // eax
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  double v14; // rt0
  unsigned int v15; // ebx
  double v16; // rt1
  double v17; // st7
  double v18; // st6
  int v19; // edi
  double v20; // st5
  double v21; // st4
  double v22; // st3
  double v23; // st2
  double v24; // st1
  double v25; // st0
  double v26; // st0
  double v27; // st0
  float v28; // edx
  float v29; // eax
  double v30; // st4
  double v31; // st5
  double v32; // rt1
  double v33; // st4
  double v34; // st5
  double v35; // st3
  double v36; // st2
  unsigned int v37; // eax
  double v38; // st2
  double v39; // st1
  __m128 v40; // xmm0
  BSShaderProperty *v41; // eax
  double v42; // st6
  double v43; // st5
  double v44; // st4
  double v45; // st3
  double v46; // rtt
  double v47; // st2
  double v48; // st3
  double v49; // rt2
  double v50; // st2
  double v51; // st3
  double v52; // st3
  double v53; // rt2
  double v54; // st3
  double v55; // rtt
  int v56; // ebx
  void (__thiscall *v57)(int); // eax
  int v58; // edi
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // esi
  float v65; // edi
  char v66; // al
  int v67; // eax
  PlayerCharacter *v68; // eax
  NiAVObject *v70; // esi
  BSShaderProperty *v71; // eax
  int v72; // esi
  NiNode *v73; // eax
  NiNode *v74; // ebx
  void (__thiscall *v75)(int, NiNode *); // eax
  NiObjectNET *v76; // eax
  unsigned int v77; // esi
  float v78; // eax
  float v79; // eax
  NiNode *v80; // ecx
  BSShaderProperty *v81; // eax
  BoltShaderProperty *v82; // esi
  __m128 *v83; // [esp+4h] [ebp-448h]
  NiNode *v84; // [esp+24h] [ebp-428h] BYREF
  float v85; // [esp+28h] [ebp-424h]
  float v86; // [esp+2Ch] [ebp-420h]
  float v87; // [esp+30h] [ebp-41Ch] BYREF
  float v88; // [esp+34h] [ebp-418h]
  float v89; // [esp+38h] [ebp-414h]
  BoltShaderProperty *a2; // [esp+3Ch] [ebp-410h]
  float v91; // [esp+40h] [ebp-40Ch]
  _DWORD *p_vtbl; // [esp+44h] [ebp-408h]
  TESChildCELL *v93; // [esp+48h] [ebp-404h]
  float v94; // [esp+4Ch] [ebp-400h] BYREF
  NiNode *v95; // [esp+50h] [ebp-3FCh]
  float v96; // [esp+54h] [ebp-3F8h]
  float v97; // [esp+58h] [ebp-3F4h] BYREF
  float v98; // [esp+5Ch] [ebp-3F0h]
  float v99; // [esp+60h] [ebp-3ECh]
  float *v100; // [esp+64h] [ebp-3E8h]
  float *v101; // [esp+68h] [ebp-3E4h]
  float v102; // [esp+6Ch] [ebp-3E0h]
  float v103; // [esp+70h] [ebp-3DCh]
  float v104; // [esp+74h] [ebp-3D8h]
  float v105; // [esp+78h] [ebp-3D4h]
  float v106; // [esp+7Ch] [ebp-3D0h] BYREF
  float v107; // [esp+80h] [ebp-3CCh]
  NiNode *v108; // [esp+84h] [ebp-3C8h]
  float v109; // [esp+88h] [ebp-3C4h] BYREF
  float v110; // [esp+8Ch] [ebp-3C0h]
  float v111; // [esp+90h] [ebp-3BCh]
  float v112; // [esp+94h] [ebp-3B8h]
  float v113; // [esp+98h] [ebp-3B4h] BYREF
  float v114; // [esp+9Ch] [ebp-3B0h]
  float v115; // [esp+A0h] [ebp-3ACh]
  float v116; // [esp+A4h] [ebp-3A8h]
  float v117; // [esp+A8h] [ebp-3A4h]
  float v118; // [esp+ACh] [ebp-3A0h]
  NiNode *v119; // [esp+B0h] [ebp-39Ch]
  NiNode *v120; // [esp+B4h] [ebp-398h]
  float v121; // [esp+B8h] [ebp-394h]
  float v122; // [esp+BCh] [ebp-390h]
  float v123; // [esp+C0h] [ebp-38Ch]
  float v124; // [esp+C4h] [ebp-388h]
  NiNode *v125; // [esp+C8h] [ebp-384h]
  float v126; // [esp+CCh] [ebp-380h]
  float v127; // [esp+D0h] [ebp-37Ch]
  NiNode *v128; // [esp+D4h] [ebp-378h]
  _BYTE v129[36]; // [esp+D8h] [ebp-374h] BYREF
  __m128 v130; // [esp+FCh] [ebp-350h]
  __m128 v131; // [esp+10Ch] [ebp-340h]
  _DWORD v132[20]; // [esp+11Ch] [ebp-330h] BYREF
  _OWORD v133[2]; // [esp+16Ch] [ebp-2E0h] BYREF
  int v134[63]; // [esp+190h] [ebp-2BCh]
  float v135[5]; // [esp+28Ch] [ebp-1C0h] BYREF
  int v136; // [esp+2A0h] [ebp-1ACh]
  int v137; // [esp+448h] [ebp-4h]
  char v138; // [esp+460h] [ebp+14h]

  v4 = byte_B3C089 == 0;
  v93 = (TESChildCELL *)a1;
  v101 = arg4;
  v100 = a3;
  if ( !v4 )
    return 0;
  if ( a4 || (v138 = 0, byte_B15824) )
    v138 = 1;
  if ( !a1 )
    return 0;
  CharProxy = MobileObject_GetCharProxy(a1);
  v6 = CharProxy;
  p_vtbl = CharProxy;
  if ( !CharProxy )
    return 0;
  v7 = *((_DWORD **)CharProxy + 2);
  v8 = v7 ? sub_8AC0C0(v7) : 0;
  v9 = *(_DWORD *)(v8 + 8);
  v10 = v9 ? *(_DWORD *)(v9 + 0x2B0) : 0;
  v11 = *((__m128 **)v6 + 0xDA);
  if ( !v10 || !v11 )
    return 0;
  v12 = v11[3];
  v13 = v11[2];
  v14 = dbl_A372E0;
  *(float *)&a2 = *((float *)v6 + 0x92) * v14;
  v91 = (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] - _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]) * v14;
  v130.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] - _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0];
  v105 = v91 + *(float *)&a2;
  v91 = v14 * v130.m128_f32[0];
  v91 = v91 * dbl_A74D10;
  sub_57E270(v6, &v84);
  v15 = (unsigned int)v84 & 0xFFFFFFC0 | 0x1B;
  v102 = *v100 - *arg4;
  v103 = v100[1] - arg4[1];
  v104 = v100[2] - arg4[2];
  v16 = hkFactor;
  v130.m128_f32[0] = v102 * v16;
  v130.m128_f32[1] = v103 * v16;
  v130.m128_f32[2] = v16 * v104;
  *(float *)&v84 = -v102;
  v94 = v103;
  v95 = v84;
  v96 = 0.0;
  v97 = -v103;
  v98 = v102;
  v99 = 0.0;
  sub_43F350(&v94);
  sub_43F350(&v97);
  sub_401080(v133, 0x30, 6, (void *(__thiscall *)(void *))sub_4F5E80);
  v17 = v105;
  v18 = v91;
  v19 = 0;
  v20 = v96;
  v21 = *(float *)&v95;
  v22 = v99;
  v23 = 1.0;
  v24 = hkFactor;
  v25 = *(float *)&a2;
  while ( 1 )
  {
    v28 = v101[1];
    v29 = v101[2];
    v87 = *v101;
    v88 = v28;
    v89 = v29;
    switch ( v19 )
    {
      case 0:
        v30 = v24;
        v31 = v23;
        v89 = v25 + v89;
        goto LABEL_19;
      case 1:
        v34 = v24;
        v33 = v23;
        v89 = v17 * dbl_A2FAA0 + v89;
        break;
      case 2:
        v89 = v25 + v89;
        *(float *)&v84 = v94 * v18;
        v46 = v23;
        v47 = v21 * v18;
        v33 = v46;
        v86 = v47;
        v48 = v20 * v18;
        v34 = v24;
        v85 = v48;
        *(float *)&v84 = *(float *)&v84 + v87;
        v86 = v88 + v86;
        v85 = v85 + v89;
        v120 = v84;
        v87 = *(float *)&v84;
        v121 = v86;
        v88 = v86;
        v122 = v85;
        v89 = v85;
        break;
      case 3:
        v30 = v24;
        v31 = v23;
        v89 = v25 + v89;
        v85 = v97 * v18;
        v86 = v98 * v18;
        *(float *)&v84 = v22 * v18;
        v85 = v85 + v87;
        v86 = v88 + v86;
        *(float *)&v84 = *(float *)&v84 + v89;
        v126 = v85;
        v87 = v85;
        v127 = v86;
        v88 = v86;
        v128 = v84;
        v89 = *(float *)&v84;
LABEL_19:
        v32 = v30;
        v33 = v31;
        v34 = v32;
        break;
      case 4:
        v89 = v89 + v17;
        v85 = v94 * v18;
        v49 = v23;
        v50 = v21 * v18;
        v33 = v49;
        v86 = v50;
        v51 = v20 * v18;
        v34 = v24;
        *(float *)&v84 = v51;
        v85 = v85 + v87;
        v86 = v88 + v86;
        *(float *)&v84 = *(float *)&v84 + v89;
        v117 = v85;
        v87 = v85;
        v118 = v86;
        v88 = v86;
        v119 = v84;
        v89 = *(float *)&v84;
        break;
      case 5:
        v34 = v24;
        v33 = v23;
        v89 = v89 + v17;
        v85 = v97 * v18;
        v86 = v98 * v18;
        *(float *)&v84 = v22 * v18;
        v85 = v85 + v87;
        v86 = v88 + v86;
        *(float *)&v84 = *(float *)&v84 + v89;
        v123 = v85;
        v87 = v85;
        v124 = v86;
        v88 = v86;
        v125 = v84;
        v89 = *(float *)&v84;
        break;
      default:
        JUMPOUT(0x6876BE);
    }
    v35 = v87;
    v36 = v87 * v34;
    v37 = 0x30 * v19;
    v4 = srcObj == v93;
    v134[v37 / 4] = v15;
    v131.m128_f32[0] = v36;
    v38 = v88;
    v131.m128_f32[1] = v88 * v34;
    v39 = v89;
    v131.m128_f32[2] = v89 * v34;
    v40 = v131;
    v133[v37 / 0x10] = v131;
    v133[v37 / 0x10 + 1] = _mm_add_ps(v40, v130);
    if ( !v4 )
      goto LABEL_28;
    if ( v138 )
    {
      v113 = 0.0;
      v115 = 0.0;
      v116 = 0.0;
      v114 = v33;
      v85 = v35 + v102;
      v86 = v38 + v103;
      *(float *)&v84 = v39 + v104;
      v106 = v85;
      v107 = v86;
      v108 = v84;
      v109 = v33;
      v110 = 0.0;
      v111 = 0.0;
      v112 = 0.0;
      *(float *)&v84 = COERCE_FLOAT(sub_47F070(&v87, &v109, &v106, &v113));
      v41 = (BSShaderProperty *)sub_4E70B0();
      sub_405680(v84, v41);
      sub_440E60(TES, (int)v84, flt_A3D8F0);
      v17 = v105;
      v42 = hkFactor;
      v43 = 1.0;
      v44 = v91;
      v45 = *(float *)&a2;
    }
    else
    {
LABEL_28:
      v52 = v18;
      v42 = v34;
      v53 = v52;
      v54 = v33;
      v44 = v53;
      v55 = v54;
      v45 = *(float *)&a2;
      v43 = v55;
    }
    if ( ++v19 >= 6 )
      break;
    v26 = v42;
    v18 = v44;
    v24 = v26;
    v27 = v43;
    v20 = v96;
    v23 = v27;
    v21 = *(float *)&v95;
    v25 = v45;
    v22 = v99;
  }
  v56 = 0;
  v132[0] = &hkWorldRayCaster::`vftable';
  v132[0x10] = 0;
  v132[0x11] = 0;
  v137 = 0;
  sub_538C00(v135);
  v57 = *(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58);
  LOBYTE(v137) = 1;
  v57(v10);
  v58 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10) + 0x78);
  v59 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10);
  sub_8BA2C0(v132, *(int **)(v59 + 0x64), (int)v133, 5, v58, (int)v135, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10);
  if ( !v136
    || ((v60 = p_vtbl[0xD9]) == 0
      ? (v63 = 0)
      : (v61 = *(_DWORD *)(v60 + 8)) == 0 || (v62 = v61 + 0x14) == 0
      ? (v63 = 0)
      : (v63 = HIWORD(*(_DWORD *)(v62 + 0x1C))),
        v64 = 0,
        p_vtbl = (_DWORD *)((v63 << 0x10) | 0x1B),
        v93 = (TESChildCELL *)v136,
        v136 <= 0) )
  {
LABEL_47:
    LOBYTE(v137) = 0;
    sub_538C80(v135);
    return 0;
  }
  while ( 1 )
  {
    v85 = *(float *)(LODWORD(v135[4]) + v56 + 0x20);
    v65 = v85;
    if ( v85 != 0.0 )
    {
      if ( (*(_DWORD *)(LODWORD(v85) + 0x1C) & 0x3F) != 0xC
        && (*(_DWORD *)(LODWORD(v85) + 0x1C) & 0x3F) != 0xE
        && (*(_DWORD *)(LODWORD(v85) + 0x1C) & 0x3F) != 0x10 )
      {
        v66 = sub_8A7F70(*(_DWORD *)(LODWORD(v85) + 0x1C), (unsigned int)p_vtbl);
        goto LABEL_45;
      }
      sub_4806E0(SLODWORD(v85));
      v68 = sub_4DC270(v67);
      if ( v68 )
        break;
    }
LABEL_46:
    ++v64;
    v56 += 0x30;
    if ( v64 >= (int)v93 )
      goto LABEL_47;
  }
  v66 = ((int (__thiscall *)(PlayerCharacter *))v68->vtbl->super.super.super.super.Unk_22)(v68);
LABEL_45:
  if ( !v66 )
    goto LABEL_46;
  if ( v138 )
  {
    v109 = 1.0;
    v110 = 0.0;
    v111 = 0.0;
    v112 = 0.0;
    v114 = 0.0;
    v115 = 0.0;
    v116 = 0.0;
    v113 = 1.0;
    v70 = sub_47F070(v101, &v113, v100, &v109);
    v71 = (BSShaderProperty *)sub_4E70B0();
    sub_405680((NiNode *)v70, v71);
    sub_440E60(TES, (int)v70, flt_A3D8F0);
    if ( *(_DWORD *)LODWORD(v65) )
      v72 = *(_DWORD *)(*(_DWORD *)LODWORD(v65) + 8);
    else
      v72 = 0;
    if ( v72 )
    {
      v73 = (NiNode *)FormHeapAlloc(0xDCu);
      p_vtbl = &v73->vtbl;
      LOBYTE(v137) = 2;
      if ( v73 )
        v74 = NiNode::NiNode(v73, 0);
      else
        v74 = 0;
      v75 = *(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v72 + 0x90);
      LOBYTE(v137) = 1;
      v75(v72, v74);
      *(float *)&v76 = COERCE_FLOAT(FormHeapAlloc(0x1Cu));
      v77 = (unsigned int)v76;
      p_vtbl = &v76->vtbl;
      LOBYTE(v137) = 3;
      if ( *(float *)&v76 == 0.0 )
      {
        *(float *)&a2 = 0.0;
        *(float *)&v77 = 0.0;
      }
      else
      {
        NiObjectNET::NiObjectNET(v76);
        *(_DWORD *)v77 = &NiWireframeProperty::`vftable';
        *(_WORD *)(v77 + 0x18) = 0;
        a2 = (BoltShaderProperty *)v77;
      }
      p_vtbl = (_DWORD *)v77;
      if ( *(float *)&v77 != 0.0 )
        InterlockedIncrement((volatile LONG *)(v77 + 4));
      *(_WORD *)(v77 + 0x18) |= 1u;
      v83 = *(__m128 **)(LODWORD(v65) + 8);
      LOBYTE(v137) = 4;
      sub_607740((int)v129, v83);
      v78 = v85;
      qmemcpy(&v74->members.super.m_localTransform, v129, 0x24u);
      sub_43F3E0(&v106, (__m128 *)(*(_DWORD *)(LODWORD(v78) + 8) + 0x30));
      v79 = v107;
      v80 = v108;
      v74->members.super.m_localTransform.pos.x = v106;
      v74->members.super.m_localTransform.pos.y = v79;
      LODWORD(v74->members.super.m_localTransform.pos.z) = v80;
      v81 = (BSShaderProperty *)sub_4E70B0();
      sub_405680(v74, v81);
      v82 = a2;
      sub_405680(v74, (BSShaderProperty *)a2);
      sub_440E60(TES, (int)v74, flt_A3D8F0);
      LOBYTE(v137) = 1;
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) )
        (**(void (__thiscall ***)(BoltShaderProperty *, int))v82)(v82, 1);
    }
  }
  LOBYTE(v137) = 0;
  sub_538C80(v135);
  return 1;
}
