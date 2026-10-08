char __cdecl sub_687060(TESChildCELL *a1, NiPoint3 *arg4, NiPoint3 *a3, char a4)
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
  float y; // edx
  float z; // eax
  double v30; // st4
  double v31; // st5
  double v32; // rt1
  double v33; // st4
  double v34; // st5
  double x; // st3
  double v36; // st2
  unsigned int v37; // eax
  double v38; // st2
  double v39; // st1
  __m128 v40; // xmm0
  BSShaderProperty *VertexColorProperty; // eax
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
  NiAVObject *Segment; // esi
  BSShaderProperty *v71; // eax
  int v72; // esi
  NiNode *v73; // eax
  NiNode *v74; // ebx
  void (__thiscall *v75)(int, NiNode *); // eax
  NiObjectNET *v76; // eax
  float v77; // esi
  float v78; // eax
  float v79; // eax
  float v80; // ecx
  BSShaderProperty *v81; // eax
  BoltShaderProperty *v82; // esi
  __m128 *v83; // [esp+4h] [ebp-448h]
  NiNode *v84; // [esp+24h] [ebp-428h] BYREF
  float v85; // [esp+28h] [ebp-424h]
  float v86; // [esp+2Ch] [ebp-420h]
  NiPoint3 start; // [esp+30h] [ebp-41Ch] BYREF
  BoltShaderProperty *a2; // [esp+3Ch] [ebp-410h]
  float v89; // [esp+40h] [ebp-40Ch]
  void *slot; // [esp+44h] [ebp-408h]
  TESChildCELL *v91; // [esp+48h] [ebp-404h]
  float v92; // [esp+4Ch] [ebp-400h] BYREF
  NiNode *v93; // [esp+50h] [ebp-3FCh]
  float v94; // [esp+54h] [ebp-3F8h]
  float v95; // [esp+58h] [ebp-3F4h] BYREF
  float v96; // [esp+5Ch] [ebp-3F0h]
  float v97; // [esp+60h] [ebp-3ECh]
  NiPoint3 *v98; // [esp+64h] [ebp-3E8h]
  NiPoint3 *v99; // [esp+68h] [ebp-3E4h]
  float v100; // [esp+6Ch] [ebp-3E0h]
  float v101; // [esp+70h] [ebp-3DCh]
  float v102; // [esp+74h] [ebp-3D8h]
  float v103; // [esp+78h] [ebp-3D4h]
  NiPoint3 end; // [esp+7Ch] [ebp-3D0h] BYREF
  float v105; // [esp+88h] [ebp-3C4h] BYREF
  float v106; // [esp+8Ch] [ebp-3C0h]
  float v107; // [esp+90h] [ebp-3BCh]
  float v108; // [esp+94h] [ebp-3B8h]
  float v109; // [esp+98h] [ebp-3B4h] BYREF
  float v110; // [esp+9Ch] [ebp-3B0h]
  float v111; // [esp+A0h] [ebp-3ACh]
  float v112; // [esp+A4h] [ebp-3A8h]
  float v113; // [esp+A8h] [ebp-3A4h]
  float v114; // [esp+ACh] [ebp-3A0h]
  NiNode *v115; // [esp+B0h] [ebp-39Ch]
  NiNode *v116; // [esp+B4h] [ebp-398h]
  float v117; // [esp+B8h] [ebp-394h]
  float v118; // [esp+BCh] [ebp-390h]
  float v119; // [esp+C0h] [ebp-38Ch]
  float v120; // [esp+C4h] [ebp-388h]
  NiNode *v121; // [esp+C8h] [ebp-384h]
  float v122; // [esp+CCh] [ebp-380h]
  float v123; // [esp+D0h] [ebp-37Ch]
  NiNode *v124; // [esp+D4h] [ebp-378h]
  _BYTE v125[36]; // [esp+D8h] [ebp-374h] BYREF
  __m128 v126; // [esp+FCh] [ebp-350h]
  __m128 v127; // [esp+10Ch] [ebp-340h]
  _DWORD v128[20]; // [esp+11Ch] [ebp-330h] BYREF
  _OWORD v129[2]; // [esp+16Ch] [ebp-2E0h] BYREF
  int v130[63]; // [esp+190h] [ebp-2BCh]
  float v131[5]; // [esp+28Ch] [ebp-1C0h] BYREF
  int v132; // [esp+2A0h] [ebp-1ACh]
  int v133; // [esp+448h] [ebp-4h]
  char v134; // [esp+460h] [ebp+14h]

  v4 = unk_B3C089 == 0; /*0x6870a0*/
  v91 = a1; /*0x6870b0*/
  v99 = arg4; /*0x6870b4*/
  v98 = a3; /*0x6870b8*/
  if ( !v4 ) /*0x6870bc*/
    return 0; /*0x6870bc*/
  if ( a4 || (v134 = 0, byte_B15824) ) /*0x6870c8*/
    v134 = 1; /*0x6870d5*/
  if ( !a1 ) /*0x6870db*/
    return 0; /*0x6870db*/
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x6870e1*/
  v6 = CharProxy; /*0x6870e6*/
  slot = CharProxy; /*0x6870ea*/
  if ( !CharProxy ) /*0x6870ee*/
    return 0; /*0x6870ee*/
  v7 = *((_DWORD **)CharProxy + 2); /*0x6870f4*/
  v8 = v7 ? bhkCollisionWrapper_GetHavokObject(v7) : 0;
  v9 = *(_DWORD *)(v8 + 8); /*0x687104*/
  v10 = v9 ? *(_DWORD *)(v9 + 0x2B0) : 0;
  v11 = *((__m128 **)v6 + 0xDA); /*0x687117*/
  if ( !v10 || !v11 ) /*0x687125*/
    return 0; /*0x687125*/
  v12 = v11[3]; /*0x687131*/
  v13 = v11[2]; /*0x687135*/
  v14 = dbl_A372E0; /*0x687147*/
  *(float *)&a2 = *((float *)v6 + 0x92) * v14; /*0x68714d*/
  v89 = (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] - _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]) * v14; /*0x687177*/
  v126.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] - _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0]; /*0x68717b*/
  v103 = v89 + *(float *)&a2; /*0x687193*/
  v89 = v14 * v126.m128_f32[0]; /*0x68719e*/
  v89 = v89 * dbl_A74D10; /*0x6871ac*/
  bhkCharacterProxy_GetCollisionFilterInfo(v6, &v84); /*0x6871b0*/
  v15 = (unsigned int)v84 & 0xFFFFFFC0 | 0x1B; /*0x6871c8*/
  v100 = v98->x - arg4->x; /*0x6871cb*/
  v101 = v98->y - arg4->y; /*0x6871d5*/
  v102 = v98->z - arg4->z; /*0x6871df*/
  v16 = hkFactor; /*0x6871f1*/
  v126.m128_f32[0] = v100 * v16; /*0x6871f3*/
  v126.m128_f32[1] = v101 * v16; /*0x687202*/
  v126.m128_f32[2] = v16 * v102; /*0x687211*/
  *(float *)&v84 = -v100; /*0x68721c*/
  v92 = v101; /*0x687220*/
  v93 = v84; /*0x687228*/
  v94 = 0.0; /*0x68722e*/
  v95 = -v101; /*0x687236*/
  v96 = v100; /*0x68723c*/
  v97 = 0.0; /*0x687240*/
  Vector3_NormalizeInPlace(&v92); /*0x687244*/
  Vector3_NormalizeInPlace(&v95); /*0x68724f*/
  sub_401080(v129, 0x30, 6, (void *(__thiscall *)(void *))sub_4F5E80); /*0x687267*/
  v17 = v103; /*0x68726c*/
  v18 = v89; /*0x687270*/
  v19 = 0; /*0x687274*/
  v20 = v94; /*0x687276*/
  v21 = *(float *)&v93; /*0x68727a*/
  v22 = v97; /*0x68727e*/
  v23 = 1.0; /*0x687282*/
  v24 = hkFactor; /*0x687284*/
  v25 = *(float *)&a2; /*0x68728a*/
  while ( 1 ) /*0x6872cb*/
  {
    y = v99->y; /*0x6872b3*/
    z = v99->z; /*0x6872b6*/
    start.x = v99->x; /*0x6872b9*/
    start.y = y; /*0x6872bd*/
    start.z = z; /*0x6872c1*/
    switch ( v19 ) /*0x6872cb*/
    {
      case 0: /*0x6872cb*/
        v30 = v24; /*0x6872d4*/
        v31 = v23; /*0x6872de*/
        start.z = v25 + start.z; /*0x6872e0*/
        goto LABEL_19; /*0x6872e0*/
      case 1: /*0x6872cb*/
        v34 = v24; /*0x68744b*/
        v33 = v23; /*0x68744d*/
        start.z = v17 * dbl_A2FAA0 + start.z; /*0x68745d*/
        break; /*0x687461*/
      case 2: /*0x6872cb*/
        start.z = v25 + start.z; /*0x687470*/
        *(float *)&v84 = v92 * v18; /*0x68747a*/
        v46 = v23; /*0x687482*/
        v47 = v21 * v18; /*0x687482*/
        v33 = v46; /*0x687482*/
        v86 = v47; /*0x687484*/
        v48 = v20 * v18; /*0x68748c*/
        v34 = v24; /*0x68748c*/
        v85 = v48; /*0x68748e*/
        *(float *)&v84 = *(float *)&v84 + start.x; /*0x68749a*/
        v86 = start.y + v86; /*0x6874a6*/
        v85 = v85 + start.z; /*0x6874b2*/
        v116 = v84; /*0x6874ba*/
        LODWORD(start.x) = v84; /*0x6874cc*/
        v117 = v86; /*0x6874d0*/
        start.y = v86; /*0x6874e2*/
        v118 = v85; /*0x6874e6*/
        start.z = v85; /*0x6874f4*/
        break; /*0x6874f8*/
      case 3: /*0x6872cb*/
        v30 = v24; /*0x6874ff*/
        v31 = v23; /*0x687507*/
        start.z = v25 + start.z; /*0x687509*/
        v85 = v95 * v18; /*0x687513*/
        v86 = v96 * v18; /*0x68751d*/
        *(float *)&v84 = v22 * v18; /*0x687523*/
        v85 = v85 + start.x; /*0x68752f*/
        v86 = start.y + v86; /*0x68753b*/
        *(float *)&v84 = *(float *)&v84 + start.z; /*0x687547*/
        v122 = v85; /*0x68754f*/
        start.x = v85; /*0x687561*/
        v123 = v86; /*0x687565*/
        start.y = v86; /*0x687577*/
        v124 = v84; /*0x68757b*/
        LODWORD(start.z) = v84; /*0x687589*/
LABEL_19:
        v32 = v30; /*0x6872e4*/
        v33 = v31; /*0x6872e4*/
        v34 = v32; /*0x6872e4*/
        break; /*0x6872e4*/
      case 4: /*0x6872cb*/
        start.z = start.z + v17; /*0x68759c*/
        v85 = v92 * v18; /*0x6875a6*/
        v49 = v23; /*0x6875ae*/
        v50 = v21 * v18; /*0x6875ae*/
        v33 = v49; /*0x6875ae*/
        v86 = v50; /*0x6875b0*/
        v51 = v20 * v18; /*0x6875b8*/
        v34 = v24; /*0x6875b8*/
        *(float *)&v84 = v51; /*0x6875ba*/
        v85 = v85 + start.x; /*0x6875c6*/
        v86 = start.y + v86; /*0x6875d2*/
        *(float *)&v84 = *(float *)&v84 + start.z; /*0x6875de*/
        v113 = v85; /*0x6875e6*/
        start.x = v85; /*0x6875f8*/
        v114 = v86; /*0x6875fc*/
        start.y = v86; /*0x68760e*/
        v115 = v84; /*0x687612*/
        LODWORD(start.z) = v84; /*0x687620*/
        break; /*0x687624*/
      case 5: /*0x6872cb*/
        v34 = v24; /*0x68762b*/
        v33 = v23; /*0x68762d*/
        start.z = start.z + v17; /*0x687635*/
        v85 = v95 * v18; /*0x68763f*/
        v86 = v96 * v18; /*0x687649*/
        *(float *)&v84 = v22 * v18; /*0x68764f*/
        v85 = v85 + start.x; /*0x68765b*/
        v86 = start.y + v86; /*0x687667*/
        *(float *)&v84 = *(float *)&v84 + start.z; /*0x687673*/
        v119 = v85; /*0x68767b*/
        start.x = v85; /*0x68768d*/
        v120 = v86; /*0x687691*/
        start.y = v86; /*0x6876a3*/
        v121 = v84; /*0x6876a7*/
        LODWORD(start.z) = v84; /*0x6876b5*/
        break; /*0x6876b9*/
      default:
        JUMPOUT(0x6876BE); /*0x6876be*/
    }
    x = start.x; /*0x6872e6*/
    v36 = start.x * v34; /*0x6872f3*/
    v37 = 0x30 * v19; /*0x6872f5*/
    v4 = MEMORY[0xB333B4] == v91; /*0x6872f8*/
    v130[v37 / 4] = v15; /*0x6872fe*/
    v127.m128_f32[0] = v36; /*0x687305*/
    v38 = start.y; /*0x68730c*/
    v127.m128_f32[1] = start.y * v34; /*0x687314*/
    v39 = start.z; /*0x68731b*/
    v127.m128_f32[2] = start.z * v34; /*0x687323*/
    v40 = v127; /*0x68732a*/
    v129[v37 / 0x10] = v127; /*0x687332*/
    v129[v37 / 0x10 + 1] = _mm_add_ps(v40, v126); /*0x687342*/
    if ( !v4 ) /*0x68734a*/
      goto LABEL_28; /*0x68734a*/
    if ( v134 ) /*0x687354*/
    {
      v109 = 0.0; /*0x68736f*/
      v111 = 0.0; /*0x68737d*/
      v112 = 0.0; /*0x687385*/
      v110 = v33; /*0x687393*/
      v85 = x + v100; /*0x6873a2*/
      v86 = v38 + v101; /*0x6873ae*/
      *(float *)&v84 = v39 + v102; /*0x6873ba*/
      end.x = v85; /*0x6873c2*/
      end.y = v86; /*0x6873cd*/
      end.z = *(float *)&v84; /*0x6873d8*/
      v105 = v33; /*0x6873df*/
      v106 = 0.0; /*0x6873e6*/
      v107 = 0.0; /*0x6873ed*/
      v108 = 0.0; /*0x6873f4*/
      *(float *)&v84 = COERCE_FLOAT(NiLines_CreateSegment(&start, (const NiColorAlpha *)&v105, &end, (const NiColorAlpha *)&v109)); /*0x687403*/
      VertexColorProperty = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x687407*/
      sub_405680(v84, VertexColorProperty); /*0x687411*/
      sub_440E60(MEMORY[0xB333A0], (int)v84, flt_A3D8F0); /*0x68742b*/
      v17 = v103; /*0x687430*/
      v42 = hkFactor; /*0x687434*/
      v43 = 1.0; /*0x68743a*/
      v44 = v89; /*0x68743c*/
      v45 = *(float *)&a2; /*0x687440*/
    }
    else
    {
LABEL_28:
      v52 = v18; /*0x6876d7*/
      v42 = v34; /*0x6876d7*/
      v53 = v52; /*0x6876d9*/
      v54 = v33; /*0x6876d9*/
      v44 = v53; /*0x6876d9*/
      v55 = v54; /*0x6876db*/
      v45 = *(float *)&a2; /*0x6876db*/
      v43 = v55; /*0x6876db*/
    }
    if ( ++v19 >= 6 ) /*0x6876e3*/
      break; /*0x6876e3*/
    v26 = v42; /*0x68729e*/
    v18 = v44; /*0x68729e*/
    v24 = v26; /*0x6872a0*/
    v27 = v43; /*0x6872a2*/
    v20 = v94; /*0x6872a2*/
    v23 = v27; /*0x6872a4*/
    v21 = *(float *)&v93; /*0x6872a6*/
    v25 = v45; /*0x6872a8*/
    v22 = v97; /*0x6872a8*/
  }
  v56 = 0; /*0x6876eb*/
  v128[0] = &hkWorldRayCaster::`vftable'; /*0x6876ef*/
  v128[0x10] = 0; /*0x6876fc*/
  v128[0x11] = 0; /*0x687705*/
  v133 = 0; /*0x687715*/
  sub_538C00(v131); /*0x68771c*/
  v57 = *(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58); /*0x687723*/
  LOBYTE(v133) = 1; /*0x687728*/
  v57(v10); /*0x687730*/
  v58 = *(_DWORD *)((*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10) + 0x78); /*0x68773d*/
  v59 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10); /*0x687745*/
  sub_8BA2C0(v128, *(int **)(v59 + 0x64), (int)v129, 5, v58, (int)v131, 0); /*0x687766*/
  (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x58))(v10); /*0x687772*/
  if ( !v132
    || ((v60 = *((_DWORD *)slot + 0xD9)) == 0
      ? (v63 = 0)
      : (v61 = *(_DWORD *)(v60 + 8)) == 0 || (v62 = v61 + 0x14) == 0
      ? (v63 = 0)
      : (v63 = HIWORD(*(_DWORD *)(v62 + 0x1C))),
        v64 = 0,
        slot = (void *)((v63 << 0x10) | 0x1B),
        v91 = (TESChildCELL *)v132,
        v132 <= 0) )
  {
LABEL_47:
    LOBYTE(v133) = 0; /*0x687839*/
    sub_538C80(v131); /*0x687848*/
    return 0; /*0x687872*/
  }
  while ( 1 ) /*0x6877dd*/
  {
    v85 = *(float *)(LODWORD(v131[4]) + v56 + 0x20); /*0x6877dd*/
    v65 = v85; /*0x6877d7*/
    if ( v85 != 0.0 ) /*0x6877e1*/
    {
      if ( (*(_DWORD *)(LODWORD(v85) + 0x1C) & 0x3F) != 0xC /*0x6877f8*/
        && (*(_DWORD *)(LODWORD(v85) + 0x1C) & 0x3F) != 0xE
        && (*(_DWORD *)(LODWORD(v85) + 0x1C) & 0x3F) != 0x10 )
      {
        v66 = sub_8A7F70(*(_DWORD *)(LODWORD(v85) + 0x1C), (unsigned int)slot); /*0x687800*/
        goto LABEL_45; /*0x687808*/
      }
      sub_4806E0(SLODWORD(v85)); /*0x68780b*/
      v68 = sub_4DC270(v67); /*0x687811*/
      if ( v68 ) /*0x68781b*/
        break; /*0x68781b*/
    }
LABEL_46:
    ++v64; /*0x68782d*/
    v56 += 0x30; /*0x687830*/
    if ( v64 >= (int)v91 ) /*0x687837*/
      goto LABEL_47; /*0x687837*/
  }
  v66 = ((int (__thiscall *)(PlayerCharacter *))v68->vtbl->super.super.super.super.Unk_22)(v68); /*0x687827*/
LABEL_45:
  if ( !v66 ) /*0x68782b*/
    goto LABEL_46; /*0x68782b*/
  if ( v134 ) /*0x687877*/
  {
    v105 = 1.0; /*0x687883*/
    v106 = 0.0; /*0x687898*/
    v107 = 0.0; /*0x68789f*/
    v108 = 0.0; /*0x6878a7*/
    v110 = 0.0; /*0x6878b5*/
    v111 = 0.0; /*0x6878bd*/
    v112 = 0.0; /*0x6878c5*/
    v109 = 1.0; /*0x6878cc*/
    Segment = NiLines_CreateSegment(v99, (const NiColorAlpha *)&v109, v98, (const NiColorAlpha *)&v105); /*0x6878db*/
    v71 = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x6878dd*/
    sub_405680((NiNode *)Segment, v71); /*0x6878e5*/
    sub_440E60(MEMORY[0xB333A0], (int)Segment, flt_A3D8F0); /*0x6878fb*/
    if ( *(_DWORD *)LODWORD(v65) ) /*0x687900*/
      v72 = *(_DWORD *)(*(_DWORD *)LODWORD(v65) + 8); /*0x687906*/
    else
      v72 = 0; /*0x68790b*/
    if ( v72 ) /*0x68790f*/
    {
      v73 = (NiNode *)FormHeapAlloc(0xDCu); /*0x68791a*/
      slot = v73; /*0x687922*/
      LOBYTE(v133) = 2; /*0x687928*/
      if ( v73 ) /*0x687930*/
        v74 = NiNode::NiNode(v73, 0); /*0x68793b*/
      else
        v74 = 0; /*0x68793f*/
      v75 = *(void (__thiscall **)(int, NiNode *))(*(_DWORD *)v72 + 0x90); /*0x687943*/
      LOBYTE(v133) = 1; /*0x68794c*/
      v75(v72, v74); /*0x687954*/
      *(float *)&v76 = COERCE_FLOAT(FormHeapAlloc(0x1Cu)); /*0x687958*/
      v77 = *(float *)&v76; /*0x68795d*/
      slot = v76; /*0x687962*/
      LOBYTE(v133) = 3; /*0x687968*/
      if ( *(float *)&v76 == 0.0 ) /*0x687970*/
      {
        *(float *)&a2 = 0.0; /*0x68798b*/
        v77 = 0.0; /*0x687993*/
      }
      else
      {
        NiObjectNET::NiObjectNET(v76); /*0x687974*/
        *(_DWORD *)LODWORD(v77) = &NiWireframeProperty::`vftable'; /*0x687979*/
        *(_WORD *)(LODWORD(v77) + 0x18) = 0; /*0x68797f*/
        *(float *)&a2 = v77; /*0x687985*/
      }
      slot = (void *)LODWORD(v77); /*0x687999*/
      if ( v77 != 0.0 ) /*0x68799d*/
        InterlockedIncrement((volatile LONG *)(LODWORD(v77) + 4)); /*0x6879a3*/
      *(_WORD *)(LODWORD(v77) + 0x18) |= 1u; /*0x6879a9*/
      v83 = *(__m128 **)(LODWORD(v65) + 8); /*0x6879b8*/
      LOBYTE(v133) = 4; /*0x6879ba*/
      sub_607740((int)v125, v83); /*0x6879c2*/
      v78 = v85; /*0x6879c7*/
      qmemcpy(&v74->members.super.m_localTransform, v125, 0x24u); /*0x6879da*/
      HavokVector_ToWorldVector(&end.x, (__m128 *)(*(_DWORD *)(LODWORD(v78) + 8) + 0x30)); /*0x6879eb*/
      v79 = end.y; /*0x6879f7*/
      v80 = end.z; /*0x6879fe*/
      v74->members.super.m_localTransform.pos.x = end.x; /*0x687a05*/
      v74->members.super.m_localTransform.pos.y = v79; /*0x687a08*/
      v74->members.super.m_localTransform.pos.z = v80; /*0x687a0e*/
      v81 = (BSShaderProperty *)DebugRender_GetOrCreateVertexColorProperty(); /*0x687a11*/
      sub_405680(v74, v81); /*0x687a19*/
      v82 = a2; /*0x687a1e*/
      sub_405680(v74, (BSShaderProperty *)a2); /*0x687a25*/
      sub_440E60(MEMORY[0xB333A0], (int)v74, flt_A3D8F0); /*0x687a3b*/
      LOBYTE(v133) = 1; /*0x687a44*/
      if ( !InterlockedDecrement((volatile LONG *)v82 + 1) ) /*0x687a4c*/
        (**(void (__thiscall ***)(BoltShaderProperty *, int))v82)(v82, 1); /*0x687a5e*/
    }
  }
  LOBYTE(v133) = 0; /*0x687a67*/
  sub_538C80(v131); /*0x687a6f*/
  return 1; /*0x68784f*/
}
