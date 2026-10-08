// TES4 authoritative: main bhkCharacterProxy/controller integration step. Dispatches current/previous character state through sub_8BA170(stateTable,stateId)->vtable+0x18. Good high-level hook boundary for movement disciplines.
int __thiscall bhkCharacterController_Update(_DWORD *this, int arg0)
{
  _DWORD *v3; // ebx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  NiTransform *v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  double v12; // rt1
  __m128 v13; // xmm0
  double v14; // st5
  __m128 v15; // xmm2
  double v16; // st6
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  _DWORD *v25; // edi
  int v26; // ebx
  __m128 v27; // xmm2
  double v28; // st5
  __m128 v29; // xmm4
  double v30; // st6
  __m128 v31; // xmm6
  __m128 v32; // xmm7
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm5
  __m128 v36; // xmm0
  char *v37; // edi
  _OWORD *LinearVelocityPtr; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  _OWORD *v44; // ecx
  char *v45; // ecx
  _OWORD *v46; // eax
  __m128 *v47; // edi
  bool v48; // cl
  int v49; // edx
  bool v50; // cl
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  __m128 v53; // xmm0
  __m128 v54; // xmm0
  _DWORD *v55; // ecx
  unsigned __int64 v56; // rax
  int v57; // eax
  _DWORD *v58; // ecx
  unsigned __int64 v59; // rax
  _OWORD *v60; // ecx
  int v61; // edi
  char *v62; // eax
  int v63; // edx
  int v64; // ebx
  _OWORD *v65; // ecx
  float *v66; // edi
  __m128 v67; // xmm0
  int v68; // edx
  LPCRITICAL_SECTION *v69; // ecx
  int v70; // eax
  int v71; // edi
  _DWORD *v72; // ebx
  int v73; // eax
  __int128 v74; // xmm0
  int v75; // eax
  int v76; // ecx
  int v77; // edi
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  bool v81; // cc
  int v82; // eax
  double v83; // st7
  int v84; // eax
  _DWORD *v85; // ecx
  int HavokObject; // eax
  int v87; // eax
  int v88; // eax
  _DWORD *v89; // ecx
  int v90; // ebx
  int v91; // edi
  int v92; // eax
  int v93; // eax
  const void **v94; // eax
  NiNode *v95; // eax
  NiProperty *NiPropertyByID; // eax
  __int64 v97; // kr00_8
  void **v98; // ecx
  _DWORD *v99; // ecx
  unsigned __int64 v100; // rax
  float angleZ; // [esp+10h] [ebp-144h]
  char v103; // [esp+26h] [ebp-12Eh]
  char v104; // [esp+26h] [ebp-12Eh]
  bool v105; // [esp+27h] [ebp-12Dh]
  bool v106; // [esp+27h] [ebp-12Dh]
  float v107; // [esp+28h] [ebp-12Ch]
  float v108; // [esp+28h] [ebp-12Ch]
  float v109; // [esp+28h] [ebp-12Ch]
  float v110; // [esp+28h] [ebp-12Ch]
  float v111; // [esp+28h] [ebp-12Ch]
  float v112; // [esp+28h] [ebp-12Ch]
  float v113; // [esp+28h] [ebp-12Ch]
  float v114; // [esp+28h] [ebp-12Ch]
  float v115; // [esp+28h] [ebp-12Ch]
  int v116; // [esp+28h] [ebp-12Ch]
  float v117; // [esp+2Ch] [ebp-128h]
  float v118; // [esp+2Ch] [ebp-128h]
  int v119; // [esp+2Ch] [ebp-128h]
  float v120; // [esp+2Ch] [ebp-128h]
  int v121; // [esp+2Ch] [ebp-128h]
  int v122; // [esp+30h] [ebp-124h]
  int v123; // [esp+30h] [ebp-124h]
  bool v124; // [esp+37h] [ebp-11Dh]
  char *v125; // [esp+38h] [ebp-11Ch]
  float v126; // [esp+3Ch] [ebp-118h]
  bool v127; // [esp+43h] [ebp-111h]
  _DWORD *v128; // [esp+44h] [ebp-110h]
  float v129; // [esp+44h] [ebp-110h]
  int v130; // [esp+48h] [ebp-10Ch]
  float v131; // [esp+4Ch] [ebp-108h]
  int v132; // [esp+50h] [ebp-104h]
  __m128 v133; // [esp+54h] [ebp-100h]
  __m128 v134; // [esp+64h] [ebp-F0h] BYREF
  __int128 a2; // [esp+74h] [ebp-E0h] BYREF
  __m128 v136; // [esp+84h] [ebp-D0h] BYREF
  __m128 v137; // [esp+94h] [ebp-C0h] BYREF
  __m128 v138; // [esp+A4h] [ebp-B0h] BYREF
  __m128 v139; // [esp+B4h] [ebp-A0h] BYREF
  __m128 v140; // [esp+C4h] [ebp-90h]
  __m128 v141[4]; // [esp+D4h] [ebp-80h] BYREF
  NiTransform v142; // [esp+114h] [ebp-40h] BYREF

  *(this + 0x7D) &= 0xFFFFFF1F; /*0x896024*/
  v132 = 0; /*0x896034*/
  if ( 0.0 == *(float *)arg0 || !(*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this) ) /*0x89604c*/
    return 0; /*0x897029*/
  v131 = *(float *)arg0; /*0x896059*/
  v3 = (_DWORD *)(arg0 + 0x10); /*0x89605d*/
  v105 = sub_8904E0((float *)(arg0 + 0x10), &g_zeroNiPoint3.x, flt_A34BA0); /*0x896074*/
  v4 = *(this + 0x7D); /*0x896078*/
  v124 = (v4 & 0x80000) != 0;                   // Caches controller flag 0x80000 for this update. When set, update takes the single-step state/integration path instead of the iterative support/manifold loop. /*0x896086*/
  v103 = 0; /*0x896095*/
  v127 = (v4 & 0x100000) != 0; /*0x89609a*/
  if ( (v4 & 0x100000) != 0 /*0x8960c2*/
    || (*(this + 0x7D) & 0x80000) != 0
    || (v4 & 4) == 0 && flt_B2E784 > sub_47DA40((float *)(arg0 + 0x10)) )// Flag 0x80000 forces v103/single-step behavior; it prevents dt subdivision even for larger movement packets.
  {
    v103 = 1; /*0x8960c4*/
  }
  if ( !v105 ) /*0x8960ce*/
  {
    if ( *(this + 0xD8) ) /*0x8960d0*/
    {
      *((_OWORD *)this + 0x35) = 0; /*0x8960dc*/
      *(this + 0xD8) = 0; /*0x8960e3*/
    }
    *((float *)this + 0xC1) = 0.0; /*0x8960ef*/
    *((float *)this + 0xC2) = 0.0; /*0x8960f5*/
  }
  v133 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0); /*0x89611f*/
  v106 = (_mm_movemask_ps( /*0x896133*/
            _mm_cmplt_ps(
              v133,
              _mm_and_ps(_mm_sub_ps(*((__m128 *)this + 0x2F), (__m128)unk_BA7A40), (__m128)xmmword_A372D0)))
        & 7) == 0
      && v105;
  if ( v106 ) /*0x896137*/
    *(this + 0x7D) &= ~8u; /*0x896142*/
  else
    *(this + 0x7D) |= 8u; /*0x896139*/
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x896155*/
  v6 = *(_DWORD **)(v5 + 0x1A4); /*0x896158*/
  v130 = v5; /*0x896164*/
  if ( (unsigned int)v6 < *(_DWORD *)(v5 + 0x1A8) ) /*0x896168*/
  {
    *v6 = "TtCharacter movement"; /*0x89616a*/
    v7 = __rdtsc(); /*0x896170*/
    v6[1] = v7; /*0x89617e*/
    *(_DWORD *)(v130 + 0x1A4) = v6 + 3; /*0x896184*/
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this) )
  {
    v9 = 1 - Double_To_SInt32(*(float *)arg0 / dbl_A96910); /*0x896227*/
    v122 = v9; /*0x89622e*/
    if ( v106 || v9 <= 1 || v103 )              // Substep decision: v122 is collapsed to one update when v106 is true, computed single-step gate v103 is true, or the computed step count is <= 1. /*0x896240*/
    {
      v122 = 1; /*0x896274*/
    }
    else
    {
      if ( v9 > 2 ) /*0x896245*/
        v122 = 2; /*0x896247*/
      v117 = 1.0 / (double)v122; /*0x89625a*/
      NiPoint3::MutliplyByValue((NiPoint3 *)(arg0 + 0x10), v117); /*0x896265*/
      *(float *)arg0 = v117 * *(float *)arg0; /*0x896270*/
    }
    bhkCharacterController_UpdateSizeTransition((float *)this, v131); /*0x896286*/
    *(this + 0x85) = 0x1F; /*0x89628b*/
    *(this + 0x86) = 0; /*0x896295*/
    v128 = (_DWORD *)*(this + 0xD9); /*0x8962ac*/
    if ( (*(_BYTE *)(this + 0x7D) & 1) != 0 ) /*0x8962b0*/
      *(float *)(arg0 + 0xC) = sub_8908E0((float *)this, *(float *)(arg0 + 0xC), *(float *)arg0); /*0x8962c8*/
    angleZ = -*(float *)(arg0 + 0xC); /*0x8962d7*/
    hkQuaternion_SetAxisAngleScaled(&v137, (__m128 *)this + 0x2B, angleZ); /*0x8962e2*/
    *((float *)this + 0xB6) = *(float *)arg0; /*0x8962e9*/
    *((float *)this + 0xB7) = 1.0 / *(float *)arg0; /*0x8962f5*/
    v10 = *(_DWORD *)(arg0 + 0x14); /*0x8962fd*/
    v11 = *(_DWORD *)(arg0 + 0x18); /*0x896300*/
    LODWORD(a2) = *v3; /*0x896303*/
    *(_QWORD *)((char *)&a2 + 4) = __PAIR64__(v11, v10); /*0x89630d*/
    if ( hkCharacterContext_GetStateId(this + 0x78) != 5 && (*(this + 0x7D) & 0x800) == 0 ) /*0x89632b*/
      *((float *)&a2 + 2) = 0.0; /*0x89632f*/
    v107 = *((float *)this + 0xB7); /*0x89633b*/
    *(float *)&a2 = *(float *)&a2 * v107; /*0x89634d*/
    *((float *)&a2 + 1) = v107 * *((float *)&a2 + 1); /*0x896357*/
    *((float *)&a2 + 2) = v107 * *((float *)&a2 + 2); /*0x89635f*/
    v12 = hkFactor; /*0x89636f*/
    *((float *)this + 0xA4) = *(float *)&a2 * v12;// TES4 authoritative: desired movement X is divided by frame dt and multiplied by hkFactor before storage at proxy+0x290; hook-time vector length is already skill/input scaled. /*0x896371*/
    *((float *)this + 0xA5) = *((float *)&a2 + 1) * v12; /*0x89637d*/
    *((float *)this + 0xA6) = v12 * *((float *)&a2 + 2); /*0x896387*/
    if ( sub_8903D0(this) )                     // MorrowindMovements candidate pre-state hook: desired movement has just been converted into proxy+0x290/+0x294/+0x298 in Havok/controller velocity units; state dispatch has not run yet. Scaling here lets vanilla OnGround/InAir solvers consume the adjusted desired vector instead of post-editing solved velocity. /*0x89638d*/
    {
      if ( 0.0 != *(float *)(arg0 + 4) ) /*0x8963a4*/
      {
        v134.m128_f32[0] = kTerrainLODQuadRayDirectionZ; /*0x8963b1*/
        v134.m128_f32[1] = 0.0; /*0x8963bd*/
        v134.m128_f32[2] = 0.0; /*0x8963c1*/
        v134.m128_f32[3] = 0.0; /*0x8963c5*/
        hkQuaternion_SetAxisAngleScaled(&v136, &v134, *(float *)(arg0 + 4)); /*0x8963d0*/
        v13 = *((__m128 *)this + 0x29); /*0x8963d9*/
        v14 = dbl_A3D0C0; /*0x8963e2*/
        v15 = 0; /*0x8963e8*/
        v16 = v136.m128_f32[3] * v14; /*0x8963eb*/
        v108 = v136.m128_f32[3] * v16 - dbl_A2F928; /*0x8963fe*/
        v15.m128_f32[0] = v108; /*0x89640a*/
        v136.m128_f32[3] = 0.0; /*0x896418*/
        v17 = v136; /*0x89641c*/
        v18 = _mm_mul_ps(v136, v13); /*0x896424*/
        v136.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x89643d*/
                         + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
        v19 = 0; /*0x896449*/
        v20 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v13); /*0x896452*/
        v109 = v14 * v136.m128_f32[0]; /*0x896455*/
        v19.m128_f32[0] = v109; /*0x89645f*/
        v110 = v16; /*0x896463*/
        *((__m128 *)this + 0x29) = v20; /*0x896471*/
        v21 = 0; /*0x896478*/
        v21.m128_f32[0] = v110; /*0x89647b*/
        *((__m128 *)this + 0x29) = _mm_add_ps( /*0x8964ad*/
                                     _mm_mul_ps(
                                       _mm_sub_ps(
                                         _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
                                         _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9))),
                                       _mm_shuffle_ps(v21, v21, 0)),
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v17), v20));
      }
    }
    v22 = v137; /*0x8964be*/
    *((float *)this + 0xD2) = *((float *)this + 0xC5); /*0x8964cd*/
    v138 = v22; /*0x8964d3*/
    hkQuaternion_Normalize(&v138); /*0x8964db*/
    v23 = *((__m128 *)this + 0x2B); /*0x8964e2*/
    v136.m128_f32[0] = 0.0; /*0x8964e9*/
    v24 = (__m128)xmmword_A965C0; /*0x8964f3*/
    v25 = v128; /*0x8964fa*/
    v136.m128_f32[1] = kTerrainLODQuadRayDirectionZ; /*0x8964fe*/
    v136.m128_f32[2] = 0.0; /*0x89650c*/
    v136.m128_f32[3] = 0.0; /*0x896513*/
    v139 = _mm_xor_ps(v23, v24); /*0x89651a*/
    bhkRefObject_CopyHavokObjectTransform(v128, v141); /*0x896522*/
    hkMatrix3_SetFromQuaternion(v141[0].m128_f32, v138.m128_f32); /*0x896536*/
    if ( 0.0 != *((float *)this + 0xCB) ) /*0x896548*/
    {
      v111 = cos(*((float *)this + 0xCB)); /*0x896559*/
      v129 = v111; /*0x896561*/
      v112 = sin(*((float *)this + 0xCB)); /*0x896570*/
      v134.m128_f32[0] = 1.0; /*0x89658d*/
      v134.m128_f32[1] = 0.0; /*0x896593*/
      v134.m128_f32[2] = 0.0; /*0x896597*/
      v134.m128_f32[3] = 0.0; /*0x89659b*/
      *(float *)&a2 = 0.0; /*0x89659f*/
      *((float *)&a2 + 1) = v129; /*0x8965ac*/
      *(__m128 *)&v142.rot.data[0][0] = v134; /*0x8965b0*/
      *((float *)&a2 + 2) = -v112; /*0x8965c0*/
      *((float *)&a2 + 3) = 0.0; /*0x8965c6*/
      v140.m128_f32[0] = 0.0; /*0x8965ca*/
      v140.m128_f32[3] = 0.0; /*0x8965d6*/
      *(__int128 *)&v142.rot.data[1][1] = a2; /*0x8965df*/
      v140.m128_f32[1] = v112; /*0x8965e7*/
      v140.m128_f32[2] = v129; /*0x8965ee*/
      *(__m128 *)&v142.rot.data[2][2] = v140; /*0x8965fd*/
      hkMatrix3_MultiplyInPlace(v141, (__m128 *)&v142); /*0x896605*/
    }
    if ( v25 ) /*0x89660c*/
    {
      v26 = v25[2]; /*0x89660e*/
      if ( v26 ) /*0x896613*/
      {
        bhkRefObject_UpdateHavokObject(v25); /*0x896617*/
        sub_8ABA40(v26, v141); /*0x896626*/
        bhkRefObject_UpdateHavokObject(v25); /*0x89662d*/
      }
    }
    v27 = v136; /*0x89663e*/
    v28 = dbl_A3D0C0; /*0x896645*/
    v29 = 0; /*0x89664b*/
    v30 = v137.m128_f32[3] * v28; /*0x89664e*/
    v31 = _mm_shuffle_ps(v136, v136, 0xC9); /*0x896655*/
    v32 = _mm_shuffle_ps(v136, v136, 0xD2); /*0x89665e*/
    v113 = v137.m128_f32[3] * v30 - dbl_A2F928; /*0x896668*/
    v29.m128_f32[0] = v113; /*0x896674*/
    v140 = v137; /*0x896680*/
    v140.m128_f32[3] = 0.0; /*0x896688*/
    v33 = _mm_mul_ps(v140, v136); /*0x89669a*/
    v136.m128_f32[0] = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0] /*0x8966b3*/
                     + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
    v34 = 0; /*0x8966bf*/
    v35 = 0; /*0x8966c4*/
    v114 = v28 * v136.m128_f32[0]; /*0x8966c7*/
    v35.m128_f32[0] = v114; /*0x8966d1*/
    v115 = v30; /*0x8966d5*/
    v34.m128_f32[0] = v115; /*0x8966df*/
    v36 = _mm_add_ps( /*0x896718*/
            _mm_mul_ps(
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v140, v140, 0xC9), v32),
                _mm_mul_ps(v31, _mm_shuffle_ps(v140, v140, 0xD2))),
              _mm_shuffle_ps(v34, v34, 0)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v140), _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v27)));
    if ( !v106 /*0x896743*/
      || (_mm_movemask_ps(_mm_cmplt_ps(v133, _mm_and_ps(_mm_sub_ps(v36, *((__m128 *)this + 0x2C)), (__m128)xmmword_A372D0)))
        & 7) != 0 )
    {
      *((float *)this + 0xC3) = flt_B2E780; /*0x89674b*/
    }
    v37 = (char *)*(this + 2); /*0x896756*/
    *((__m128 *)this + 0x2C) = v36;             // Refreshes proxy+0x2C0 with the per-frame movement/orientation basis derived from transform, up vector, and input rotation. This feeds the shared state velocity solver. /*0x896759*/
    v125 = v37; /*0x896760*/
    v104 = 1; /*0x896764*/
    if ( v124 )
    {
      if ( v37 ) /*0x896771*/
        LinearVelocityPtr = bhkWorldObject_GetLinearVelocityPtr(v37); /*0x896775*/
      else
        LinearVelocityPtr = &unk_BA7A40; /*0x89677c*/
      *((_OWORD *)this + 0x2E) = *LinearVelocityPtr; /*0x89678e*/
      *((hkVector4 *)this + 0x28) = unk_BA7A40; /*0x896798*/
      v39 = *(_DWORD **)(v130 + 0x1A4); /*0x89679f*/
      if ( (unsigned int)v39 < *(_DWORD *)(v130 + 0x1A8) ) /*0x8967ab*/
      {
        *v39 = "Ttupdate character state"; /*0x8967ad*/
        v40 = __rdtsc(); /*0x8967b3*/
        v39[1] = v40; /*0x8967bd*/
        *(_DWORD *)(v130 + 0x1A4) = v39 + 3; /*0x8967c3*/
      }
      v41 = sub_8BA170((_DWORD *)*(this + 0x7A), *(this + 0x7B)); /*0x8967d6*/
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v41 + 0x18))(v41, this); /*0x8967e3*/
      v42 = *(_DWORD **)(v130 + 0x1A4); /*0x8967e5*/
      if ( (unsigned int)v42 < *(_DWORD *)(v130 + 0x1A8) ) /*0x8967f1*/
      {
        *v42 = "Et"; /*0x8967f3*/
        v43 = __rdtsc(); /*0x8967f9*/
        v42[1] = v43; /*0x896803*/
        *(_DWORD *)(v130 + 0x1A4) = v42 + 3; /*0x896809*/
      }
      v44 = (_OWORD *)*(this + 2); /*0x89680f*/
      if ( v44 ) /*0x896814*/
        sub_8AC0B0(v44, (hkVector4 *)this + 0x2E); /*0x896817*/
      bhkCharacterController_IntegratePositionFromVelocity((__m128 *)this, *((float *)this + 0xB6));// Only xref to 0x894E80. This single-step path writes velocity to the collision object, then integrates position once through the optional swept-hit listener path. /*0x896828*/
    }
    else
    {
      if ( v122 )
      {
        do
        {
          --v122; /*0x896840*/
          unk_BA7A5C = 0; /*0x896849*/
          v45 = (char *)*(this + 2); /*0x896853*/
          if ( v45 ) /*0x896858*/
            v46 = bhkWorldObject_GetLinearVelocityPtr(v45); /*0x89685a*/
          else
            v46 = &unk_BA7A40; /*0x896861*/
          *((_OWORD *)this + 0x2E) = *v46; /*0x89686e*/
          if ( v106 && hkCharacterContext_GetStateId(this + 0x78) != 2 ) /*0x896885*/
            *((float *)this + 0xBA) = 0.0; /*0x896889*/
          *(this + 0x7D) &= 0xFFFFF9FF; /*0x89688f*/
          *(this + 0x7D) |= 0x10000u; /*0x896899*/
          bhkCharacterProxy_UpdateCapsuleProbePoints((int)this); /*0x8968a5*/
          v47 = (__m128 *)*(this + 2); /*0x8968aa*/
          if ( v47 ) /*0x8968af*/
          {
            bhkRefObject_UpdateHavokObject(this); /*0x8968b3*/
            bhkCharacterProxy_CheckSupportWithCollector(v47, &v139, (__m128 *)this + 0x26);// MorrowindMovements telemetry source: support check writes status/normal/reference data to output block proxy+0x260. /*0x8968c9*/
            bhkRefObject_UpdateHavokObject(this); /*0x8968d0*/
          }
          *(this + 0x7D) &= ~0x10000u; /*0x8968d5*/
          v48 = *(this + 0x98) == 2 && !*((_BYTE *)this + 0x250);// MorrowindMovements telemetry source: proxy+0x260 == 2 is accepted support candidate, gated by byte proxy+0x250. /*0x8968f5*/
          v49 = *(this + 0x7D); /*0x8968f7*/
          if ( (v49 & 0x2000) != 0 ) /*0x896903*/
          {
            if ( (v48 || (v49 & 0x200) != 0) && *((float *)this + 0xBA) > 0.0 ) /*0x896923*/
            {
              v51 = *((__m128 *)this + 0x2E); /*0x896938*/
              v52 = _mm_mul_ps(v51, v51); /*0x896942*/
              v136.m128_i32[0] = fsqrt( /*0x89695f*/
                                   _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]));
              if ( v136.m128_f32[0] > 0.0 /*0x8969ea*/
                && (v53 = 0, v118 = 1.0 / v136.m128_f32[0], v53.m128_f32[0] = v118, v48)
                && (v49 & 0x200) != 0
                && *((float *)this + 0x84) <= (double)*((float *)this + 0x8E)
                && (v54 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v51), *((__m128 *)this + 0x23)),
                    v136.m128_f32[0] = _mm_shuffle_ps(v54, v54, 0xAA).m128_f32[0]
                                     + (float)(_mm_shuffle_ps(v54, v54, 0x55).m128_f32[0] + v54.m128_f32[0]),
                    v136.m128_f32[0] <= dbl_A68610) )
              {
                *(this + 0x7D) &= ~0x2000u; /*0x8969ec*/
                v50 = 0; /*0x8969f6*/
              }
              else
              {
                v50 = 0; /*0x8969fc*/
              }
            }
            else
            {
              *(this + 0x7D) &= ~0x2000u; /*0x896927*/
              v50 = 0; /*0x896931*/
            }
          }
          else
          {
            v50 = (*(this + 0x7D) & 0x200) != 0 || v48; /*0x896a06*/
          }
          if ( v50 ) /*0x896a0a*/
            *(this + 0x7D) |= 0x100u;           // MorrowindMovements telemetry source: accepted support sets controller flag 0x100, later consumed by InAir as landing/OnGround transition. /*0x896a0c*/
          else
            *(this + 0x7D) &= ~0x100u; /*0x896a18*/
          v55 = *(_DWORD **)(v130 + 0x1A4); /*0x896a22*/
          if ( (unsigned int)v55 < *(_DWORD *)(v130 + 0x1A8) ) /*0x896a2e*/
          {
            *v55 = "Ttupdate character state"; /*0x896a30*/
            v56 = __rdtsc(); /*0x896a36*/
            v55[1] = v56; /*0x896a40*/
            *(_DWORD *)(v130 + 0x1A4) = v55 + 3; /*0x896a46*/
          }
          v57 = sub_8BA170((_DWORD *)*(this + 0x7A), *(this + 0x7B)); /*0x896a59*/
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v57 + 0x18))(v57, this); /*0x896a66*/
          v58 = *(_DWORD **)(v130 + 0x1A4); /*0x896a68*/
          if ( (unsigned int)v58 < *(_DWORD *)(v130 + 0x1A8) ) /*0x896a74*/
          {
            *v58 = "Et"; /*0x896a76*/
            v59 = __rdtsc(); /*0x896a7c*/
            v58[1] = v59; /*0x896a86*/
            *(_DWORD *)(v130 + 0x1A4) = v58 + 3; /*0x896a8c*/
          }
          v60 = (_OWORD *)*(this + 2); /*0x896a92*/
          if ( v60 ) /*0x896a97*/
            sub_8AC0B0(v60, (hkVector4 *)this + 0x2E); /*0x896aa0*/
          v104 = 1; /*0x896aaa*/
          if ( !v106
            || hkCharacterContext_GetStateId(this + 0x78) == 2
            || *((_DWORD *)sub_8ABDB0(v125) + 1) > *(this + 0xF0) )
          {
LABEL_102:
            dword_B2EFB8 = v127 ? 1 : 4;
            bhkCharacterController_UpdateCollisionManifold((__m128 **)this, (int)(this + 0xB4)); /*0x896bde*/
            dword_B2EFB8 = 4; /*0x896be3*/
          }
          else
          {
            v61 = 0; /*0x896ae1*/
            v104 = 0; /*0x896ae3*/
            v119 = 0; /*0x896ae8*/
            while ( v119 < *((_DWORD *)sub_8ABDB0(v125) + 1) ) /*0x896afe*/
            {
              if ( _mm_movemask_ps( /*0x896b9f*/
                     _mm_cmplt_ps(
                       v133,
                       _mm_and_ps(
                         _mm_sub_ps(*(__m128 *)(*(this + 0xEF) + v61), *(__m128 *)(*(_DWORD *)sub_8ABDB0(v125) + v61)),
                         (__m128)xmmword_A372D0)))
                || (v62 = sub_8ABDB0(v125),
                    v63 = *(this + 0xEF),
                    _mm_movemask_ps(
                      _mm_cmplt_ps(
                        v133,
                        _mm_and_ps(
                          _mm_sub_ps(*(__m128 *)(v63 + v61 + 0x10), *(__m128 *)(v61 + *(_DWORD *)v62 + 0x10)),
                          (__m128)xmmword_A372D0))))
                || *(_DWORD *)(v63 + v61 + 0x20) != *(_DWORD *)(*(_DWORD *)sub_8ABDB0(v125) + v61 + 0x20)
                || (v64 = v61 + *(this + 0xEF),
                    *(_DWORD *)(v64 + 0x28) != *(_DWORD *)(v61 + *(_DWORD *)sub_8ABDB0(v125) + 0x28)) )
              {
                v104 = 1; /*0x896ba1*/
              }
              ++v119; /*0x896ba6*/
              v61 += 0x30; /*0x896bab*/
              if ( v104 ) /*0x896bb3*/
                goto LABEL_102; /*0x896bb3*/
            }
            v65 = (_OWORD *)*(this + 2); /*0x896bef*/
            *((hkVector4 *)this + 0x2E) = unk_BA7A40; /*0x896c01*/
            if ( v65 ) /*0x896c04*/
              sub_8AC0B0(v65, (hkVector4 *)this + 0x2E); /*0x896c07*/
          }
          if ( unk_BA7A5C ) /*0x896c0c*/
          {
            if ( (*(this + 0x7D) & 0x2000) == 0 ) /*0x896c23*/
            {
              bhkRefObject_UpdateHavokObject(this); /*0x896c2b*/
              v66 = (float *)sub_47DE20(this); /*0x896c37*/
              v67 = *(__m128 *)bhkCollisionWrapper_GetPositionPtr(v66); /*0x896c40*/
              v68 = unk_BA7A5C; /*0x896c43*/
              v134 = v67; /*0x896c49*/
              v120 = *(float *)(*(_DWORD *)(v68 + 0x50) + 0xD8) * *((float *)this + 0xB6); /*0x896c69*/
              v134.m128_f32[2] = unk_BA7A58 + *((float *)this + 0xD2) + v120; /*0x896c7d*/
              sub_8A7930((LPCRITICAL_SECTION *)unk_BA7DA0, &v134, flt_A46B10, 0xFFFF0000, 0); /*0x896c91*/
              bhkCollisionWrapper_SetPositionAdjusted(v66, &v134); /*0x896c9d*/
              v69 = (LPCRITICAL_SECTION *)unk_BA7DA0; /*0x896cb4*/
              v134.m128_f32[2] = v120 + unk_BA7A58; /*0x896cba*/
              sub_8A7930(v69, &v134, flt_A46B10, 0xFF00FFFF, 0); /*0x896ccc*/
              bhkRefObject_UpdateHavokObject(this); /*0x896cd3*/
            }
          }
          *(this + 0xA8) = 0xB; /*0x896cdd*/
        }
        while ( v122 );
        v37 = v125; /*0x896ced*/
      }
      if ( *((int *)sub_8ABDB0(v37) + 1) <= 5 ) /*0x896cfc*/
        v70 = *((_DWORD *)sub_8ABDB0(v37) + 1); /*0x896d0c*/
      else
        v70 = 5; /*0x896cfe*/
      v116 = v70; /*0x896d11*/
      v121 = 0; /*0x896d15*/
      if ( v70 > 0 ) /*0x896d1d*/
      {
        v71 = 0; /*0x896d23*/
        v72 = this + 0xEF; /*0x896d25*/
        v123 = 0; /*0x896d2b*/
        do /*0x896deb*/
        {
          if ( v121 >= *(this + 0xF0) ) /*0x896d3e*/
          {
            v77 = v123 + *(_DWORD *)sub_8ABDB0(v125); /*0x896d80*/
            if ( *(this + 0xF0) == (*(this + 0xF1) & 0x3FFFFFFF) ) /*0x896d8d*/
              sub_8A6EE0((const void **)this + 0xEF, 0x30); /*0x896d92*/
            v78 = *(this + 0xF0); /*0x896d9a*/
            v79 = *v72 + 0x30 * v78; /*0x896da3*/
            *(this + 0xF0) = v78 + 1; /*0x896da8*/
            *(_OWORD *)v79 = *(_OWORD *)v77; /*0x896dae*/
            *(_OWORD *)(v79 + 0x10) = *(_OWORD *)(v77 + 0x10); /*0x896db5*/
            *(_DWORD *)(v79 + 0x20) = *(_DWORD *)(v77 + 0x20); /*0x896dbc*/
            *(_DWORD *)(v79 + 0x24) = *(_DWORD *)(v77 + 0x24); /*0x896dc2*/
            *(_DWORD *)(v79 + 0x28) = *(_DWORD *)(v77 + 0x28); /*0x896dc8*/
            v80 = *(_DWORD *)(v77 + 0x2C); /*0x896dcb*/
            v71 = v123; /*0x896dce*/
            *(_DWORD *)(v79 + 0x2C) = v80; /*0x896dd2*/
          }
          else
          {
            v73 = *(_DWORD *)sub_8ABDB0(v125); /*0x896d45*/
            v74 = *(_OWORD *)(v73 + v71); /*0x896d49*/
            v75 = v71 + v73; /*0x896d4d*/
            v76 = v71 + *v72; /*0x896d4f*/
            *(_OWORD *)v76 = v74; /*0x896d51*/
            *(_OWORD *)(v76 + 0x10) = *(_OWORD *)(v75 + 0x10); /*0x896d58*/
            *(_DWORD *)(v76 + 0x20) = *(_DWORD *)(v75 + 0x20); /*0x896d5f*/
            *(_DWORD *)(v76 + 0x24) = *(_DWORD *)(v75 + 0x24); /*0x896d65*/
            *(_DWORD *)(v76 + 0x28) = *(_DWORD *)(v75 + 0x28); /*0x896d6b*/
            *(_DWORD *)(v76 + 0x2C) = *(_DWORD *)(v75 + 0x2C); /*0x896d71*/
          }
          v71 += 0x30; /*0x896ddc*/
          v81 = ++v121 < v116; /*0x896ddf*/
          v123 = v71; /*0x896de7*/
        }
        while ( v81 ); /*0x896deb*/
      }
    }
    bhkCharacterProxy_UpdateCapsuleSupportSlope((int)this); /*0x896df3*/
    v82 = *(this + 0x7D); /*0x896df8*/
    if ( (v82 & 0xE0) != 0 ) /*0x896e00*/
      v132 = 2; /*0x896e02*/
    if ( (v82 & 4) != 0 ) /*0x896e0f*/
    {
      v134.m128_f32[0] = 1.0; /*0x896e13*/
      v134.m128_f32[1] = flt_A3D9A4; /*0x896e1d*/
      v83 = 0.0; /*0x896e21*/
    }
    else if ( v104 ) /*0x896e2a*/
    {
      v84 = hkCharacterContext_GetStateId(this + 0x78) - 2; /*0x896e4b*/
      if ( v84 ) /*0x896e4e*/
      {
        if ( v84 == 3 ) /*0x896e53*/
        {
          v83 = kHeadBodyNormalMatchRadius; /*0x896e63*/
          v134.m128_f32[0] = kHeadBodyNormalMatchRadius; /*0x896e69*/
          v134.m128_f32[1] = 0.0; /*0x896e6f*/
        }
        else
        {
          v134.m128_f32[0] = 1.0; /*0x896e57*/
          v134.m128_f32[1] = 1.0; /*0x896e5b*/
          v83 = 0.0; /*0x896e5f*/
        }
      }
      else
      {
        v134.m128_f32[0] = 0.0; /*0x896e77*/
        v134.m128_f32[1] = kHeadBodyNormalMatchRadius; /*0x896e81*/
        v83 = 1.0; /*0x896e85*/
      }
    }
    else
    {
      v134.m128_f32[0] = 0.0; /*0x896e2e*/
      v134.m128_f32[1] = 1.0; /*0x896e34*/
      v83 = flt_A3D9A4; /*0x896e38*/
    }
    v134.m128_f32[2] = v83; /*0x896e8b*/
    v85 = (_DWORD *)*(this + 2); /*0x896e9b*/
    LODWORD(a2) = v134.m128_i32[0]; /*0x896ea0*/
    *(_QWORD *)((char *)&a2 + 4) = *(unsigned __int64 *)((char *)v134.m128_u64 + 4); /*0x896ea4*/
    if ( v85 ) /*0x896ea8*/
      HavokObject = bhkCollisionWrapper_GetHavokObject(v85); /*0x896eaa*/
    else
      HavokObject = 0; /*0x896eb1*/
    v87 = *(_DWORD *)(HavokObject + 8); /*0x896eb3*/
    if ( v87 ) /*0x896eb8*/
    {
      if ( *(_DWORD *)(v87 + 0x2B0) ) /*0x896eba*/
      {
        v88 = sub_8AEBB0(*(float *)&a2, *((float *)&a2 + 1), *((float *)&a2 + 2), flt_A968F0); /*0x896ee7*/
        v89 = (_DWORD *)*(this + 2); /*0x896eec*/
        v90 = *(this + 0xD9); /*0x896eef*/
        v91 = v88; /*0x896efa*/
        if ( v89 ) /*0x896efc*/
          v92 = bhkCollisionWrapper_GetHavokObject(v89); /*0x896efe*/
        else
          v92 = 0; /*0x896f05*/
        v93 = *(_DWORD *)(v92 + 8); /*0x896f07*/
        if ( v93 ) /*0x896f0c*/
          v94 = *(const void ***)(v93 + 0x2B0); /*0x896f0e*/
        else
          v94 = 0; /*0x896f16*/
        sub_88BB60(v94, v90, v91); /*0x896f1c*/
      }
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x84))( /*0x896f3a*/
      this,
      *(_DWORD *)(arg0 + 0x1C),
      *(float *)(arg0 + 0xC));
    v95 = (NiNode *)sub_891160((int ***)this); /*0x896f3e*/
    if ( v95 ) /*0x896f45*/
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v95, 2); /*0x896f4b*/
      if ( NiPropertyByID ) /*0x896f52*/
      {
        v97 = a2; /*0x896f58*/
        ++NiPropertyByID[3].members.m_controller; /*0x896f5c*/
        NiPropertyByID[2].members.m_extraDataList = (NiExtraData **)v97; /*0x896f60*/
        v98 = (void **)DWORD2(a2); /*0x896f63*/
        *(_DWORD *)&NiPropertyByID[2].members.m_extraDataListLen = HIDWORD(v97); /*0x896f67*/
        NiPropertyByID[3].vtbl = v98; /*0x896f6a*/
      }
    }
  }
  else if ( !v106 ) /*0x89619b*/
  {
    NiMatrix33_InitRotationZ(&v142.rot, *(float *)(arg0 + 0xC)); /*0x8961b1*/
    v8 = sub_7101F0(&v142, (NiTransform *)&v134, (NiPoint3 *)(arg0 + 0x10)); /*0x8961c3*/
    *v3 = LODWORD(v8->rot.data[0][0]); /*0x8961ca*/
    *(float *)(arg0 + 0x14) = v8->rot.data[0][1]; /*0x8961cf*/
    *(float *)(arg0 + 0x18) = v8->rot.data[0][2]; /*0x8961dc*/
    sub_5E1500((__m128 *)this, (float *)&a2); /*0x8961df*/
    *(float *)&a2 = *(float *)&a2 + *(float *)v3; /*0x8961f1*/
    *((float *)&a2 + 1) = *(float *)(arg0 + 0x14) + *((float *)&a2 + 1); /*0x8961fc*/
    *((float *)&a2 + 2) = *(float *)(arg0 + 0x18) + *((float *)&a2 + 2); /*0x896207*/
    sub_452A10((bhkCharacterProxy *)this, (NiPoint3 *)&a2); /*0x89620b*/
  }
  v99 = *(_DWORD **)(v130 + 0x1A4); /*0x896f71*/
  if ( (unsigned int)v99 < *(_DWORD *)(v130 + 0x1A8) ) /*0x896f7d*/
  {
    *v99 = "Et"; /*0x896f7f*/
    v100 = __rdtsc(); /*0x896f85*/
    v99[1] = v100; /*0x896f8f*/
    *(_DWORD *)(v130 + 0x1A4) = v99 + 3; /*0x896f95*/
  }
  if ( *((float *)this + 0xC0) > 0.0 ) /*0x896fa8*/
  {
    v126 = *((float *)this + 0xC0) - v131; /*0x896fb4*/
    *((float *)this + 0xC0) = v126; /*0x896fbc*/
    if ( v126 <= 0.0 ) /*0x896fc9*/
    {
      *((float *)this + 0xC0) = 0.0; /*0x896fce*/
      *((_OWORD *)this + 0x2F) = 0; /*0x896fd4*/
    }
  }
  if ( *((float *)this + 0xC3) > 0.0 ) /*0x896fe6*/
    *((float *)this + 0xC3) = *((float *)this + 0xC3) - v131; /*0x896ff2*/
  *(this + 0x7D) &= ~0x1000u; /*0x896ff8*/
  return v132; /*0x897006*/
}
