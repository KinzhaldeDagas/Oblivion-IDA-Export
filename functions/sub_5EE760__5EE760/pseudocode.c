// BloodOnDeath corpse-hit hook: vanilla Actor_HandleHitVisualEffects runs first through trampoline; if the actor is already dead afterward, BloodOnDeath queues the same 8-second hit-style geometry spill for the corpse.
void __thiscall Actor_HandleHitVisualEffects(
        int this,
        TESChildCELL *a2,
        float a3,
        float a4,
        NiPoint3 *a5,
        NiPoint3 *a6)
{
  PlayerCharacter *v6; // ebx
  float v8; // eax
  PlayerCharacterVtbl *vtbl; // edx
  int v10; // eax
  NiTransform *v11; // ebx
  float *v12; // eax
  float v13; // ecx
  float v14; // edx
  int *v15; // eax
  float v16; // ecx
  float v17; // edx
  bhkCharacterProxy *CharProxy; // eax
  double v19; // st7
  double v20; // st6
  bool v21; // cc
  double v22; // st6
  NiAVObject *v23; // eax
  float v24; // edx
  int v25; // ebx
  float v26; // eax
  NiObjectNET *v27; // eax
  BSShaderProperty *v28; // eax
  NiObjectNET *v29; // eax
  BSShaderProperty *v30; // eax
  UInt16 v31; // dx
  double v32; // rt1
  int v33; // eax
  Atmosphere *v34; // eax
  NiAVObject *PointerAtOffset08; // ebx
  NiObjectNET *v36; // eax
  double v37; // st6
  double v38; // st7
  float *v39; // eax
  double v40; // st7
  float *v41; // eax
  double v42; // rt0
  ExtraDataList *DwordAtOffset40; // eax
  TESObjectCELL *v44; // eax
  int v45; // ebx
  void *v46; // edi
  float *v47; // eax
  UInt32 v48; // eax
  float *v49; // eax
  LowProcess *process; // edi
  int (__thiscall *v51)(int); // edx
  NiObject *v52; // ebx
  float *v53; // eax
  float v54; // ecx
  float v55; // edx
  float v56; // eax
  double v57; // st6
  double v58; // st6
  double v59; // rtt
  double v60; // rt0
  double v61; // rt1
  void *v62; // eax
  LowProcess_vtbl *v63; // ebx
  TESChildCELL *v64; // edi
  int v65; // eax
  float *v66; // ebx
  ActorSkinInfo *SkinInfoByPerspective; // eax
  NiNode *CachedNode; // edi
  float *v69; // eax
  float *v70; // eax
  float v71; // ecx
  float v72; // edx
  float v73; // eax
  PlayerCharacter *v74; // ecx
  NiObject *v75; // ecx
  float *v76; // eax
  float *v77; // eax
  float v78; // edx
  int v79; // edi
  float v80; // eax
  void *v81; // eax
  unsigned __int64 v82; // [esp-4h] [ebp-154h]
  int v83; // [esp-4h] [ebp-154h]
  int v84; // [esp+0h] [ebp-150h]
  int v85; // [esp+4h] [ebp-14Ch]
  int v86; // [esp+4h] [ebp-14Ch]
  int v87; // [esp+4h] [ebp-14Ch]
  int v88; // [esp+8h] [ebp-148h]
  const char *BloodParticlePath; // [esp+8h] [ebp-148h]
  float v90; // [esp+8h] [ebp-148h]
  unsigned __int64 v91; // [esp+8h] [ebp-148h]
  int v92; // [esp+Ch] [ebp-144h]
  float v93; // [esp+Ch] [ebp-144h]
  int v94; // [esp+Ch] [ebp-144h]
  int v95; // [esp+10h] [ebp-140h]
  float v96; // [esp+10h] [ebp-140h]
  int v97; // [esp+10h] [ebp-140h]
  int v98; // [esp+10h] [ebp-140h]
  int v99; // [esp+14h] [ebp-13Ch]
  int v100; // [esp+14h] [ebp-13Ch]
  const char *v101; // [esp+14h] [ebp-13Ch]
  const char *v102; // [esp+14h] [ebp-13Ch]
  int v103; // [esp+18h] [ebp-138h]
  NiObject *v104; // [esp+18h] [ebp-138h]
  const char *BloodDecalTexturePath; // [esp+1Ch] [ebp-134h]
  UInt32 v106; // [esp+1Ch] [ebp-134h]
  const char *v107; // [esp+20h] [ebp-130h]
  UInt32 v108; // [esp+20h] [ebp-130h]
  signed int v109; // [esp+24h] [ebp-12Ch]
  float v110; // [esp+24h] [ebp-12Ch]
  float v111; // [esp+24h] [ebp-12Ch]
  int v112; // [esp+28h] [ebp-128h]
  float v113; // [esp+28h] [ebp-128h]
  int v114; // [esp+28h] [ebp-128h]
  float v115; // [esp+40h] [ebp-110h]
  float v116; // [esp+40h] [ebp-110h]
  float v117; // [esp+40h] [ebp-110h]
  float v118; // [esp+40h] [ebp-110h]
  float v119; // [esp+40h] [ebp-110h]
  float v120; // [esp+40h] [ebp-110h]
  float v121; // [esp+40h] [ebp-110h]
  float v122; // [esp+40h] [ebp-110h]
  float v123; // [esp+44h] [ebp-10Ch]
  float v124; // [esp+44h] [ebp-10Ch]
  float v125; // [esp+44h] [ebp-10Ch]
  float v126; // [esp+44h] [ebp-10Ch]
  char v127; // [esp+48h] [ebp-108h]
  float v128; // [esp+48h] [ebp-108h]
  float v129; // [esp+48h] [ebp-108h]
  float v130; // [esp+48h] [ebp-108h]
  float v131; // [esp+4Ch] [ebp-104h]
  float v132; // [esp+4Ch] [ebp-104h]
  float v133; // [esp+4Ch] [ebp-104h]
  float v134; // [esp+4Ch] [ebp-104h]
  float v135; // [esp+4Ch] [ebp-104h]
  float v136; // [esp+4Ch] [ebp-104h]
  float v137; // [esp+4Ch] [ebp-104h]
  float v138; // [esp+4Ch] [ebp-104h]
  float v139; // [esp+50h] [ebp-100h]
  float v140; // [esp+50h] [ebp-100h]
  float v141; // [esp+50h] [ebp-100h]
  float v142; // [esp+50h] [ebp-100h]
  float v143; // [esp+50h] [ebp-100h]
  float v144; // [esp+50h] [ebp-100h]
  char v145; // [esp+54h] [ebp-FCh]
  float v146; // [esp+54h] [ebp-FCh]
  float v147; // [esp+54h] [ebp-FCh]
  float v148; // [esp+58h] [ebp-F8h] BYREF
  float v149; // [esp+5Ch] [ebp-F4h]
  float v150; // [esp+60h] [ebp-F0h]
  int v151; // [esp+64h] [ebp-ECh]
  _DWORD *a1; // [esp+68h] [ebp-E8h]
  float v153; // [esp+6Ch] [ebp-E4h]
  float v154; // [esp+70h] [ebp-E0h]
  float v155; // [esp+74h] [ebp-DCh] BYREF
  float v156; // [esp+78h] [ebp-D8h]
  float v157; // [esp+7Ch] [ebp-D4h]
  float v158; // [esp+80h] [ebp-D0h]
  float v159; // [esp+84h] [ebp-CCh]
  float v160; // [esp+88h] [ebp-C8h]
  float v161; // [esp+8Ch] [ebp-C4h]
  float v162; // [esp+90h] [ebp-C0h]
  TESChildCELL *v163; // [esp+94h] [ebp-BCh]
  float v164; // [esp+98h] [ebp-B8h]
  int v165; // [esp+9Ch] [ebp-B4h] BYREF
  float v166; // [esp+A0h] [ebp-B0h]
  float v167; // [esp+A4h] [ebp-ACh]
  float v168; // [esp+A8h] [ebp-A8h] BYREF
  float v169; // [esp+ACh] [ebp-A4h] BYREF
  float v170; // [esp+B0h] [ebp-A0h]
  float v171; // [esp+B4h] [ebp-9Ch]
  float v172; // [esp+B8h] [ebp-98h]
  int v173; // [esp+BCh] [ebp-94h]
  int v174; // [esp+C0h] [ebp-90h]
  int v175; // [esp+C4h] [ebp-8Ch]
  float v176; // [esp+C8h] [ebp-88h]
  float v177; // [esp+CCh] [ebp-84h]
  float v178; // [esp+D0h] [ebp-80h]
  float v179; // [esp+D4h] [ebp-7Ch]
  float v180; // [esp+D8h] [ebp-78h]
  float v181; // [esp+DCh] [ebp-74h]
  float v182; // [esp+E0h] [ebp-70h]
  float v183; // [esp+E4h] [ebp-6Ch]
  float v184; // [esp+E8h] [ebp-68h]
  float v185; // [esp+ECh] [ebp-64h]
  float v186; // [esp+F0h] [ebp-60h]
  float v187; // [esp+F4h] [ebp-5Ch]
  float v188; // [esp+F8h] [ebp-58h]
  void *v189; // [esp+FCh] [ebp-54h]
  __m128 v190; // [esp+100h] [ebp-50h] BYREF
  __m128 v191; // [esp+110h] [ebp-40h] BYREF
  __m128 v192; // [esp+120h] [ebp-30h] BYREF
  int v193; // [esp+14Ch] [ebp-4h]
  int savedregs; // [esp+150h] [ebp+0h] BYREF

  v6 = (PlayerCharacter *)a2; /*0x5ee7a3*/
  a1 = *(_DWORD **)(this + 0x3C); /*0x5ee7ae*/
  v163 = a2; /*0x5ee7b5*/
  if ( !BaseExtraList_HasGhost((_BYTE *)(this + 0x44)) ) /*0x5ee7bd*/
  {
    v8 = COERCE_FLOAT(NiObjectNET_LookupObjectByName(a1, off_B11A6C[0])); /*0x5ee7d6*/
    vtbl = (PlayerCharacterVtbl *)a2->vtbl; /*0x5ee7db*/
    v153 = v8; /*0x5ee7dd*/
    v10 = (int)vtbl->super.super.super.GetNiNode((TESObjectREFR *)a2); /*0x5ee7ec*/
    if ( v10 ) /*0x5ee7f0*/
    {
      v11 = (NiTransform *)(v10 + 0x64); /*0x5ee7fa*/
      v12 = NiTransform_TransformPoint((NiTransform *)(v10 + 0x64), v190.m128_f32, a5); /*0x5ee800*/
      v13 = v12[1]; /*0x5ee807*/
      v158 = *v12; /*0x5ee80a*/
      v14 = v12[2]; /*0x5ee80e*/
      v159 = v13; /*0x5ee815*/
      v160 = v14; /*0x5ee824*/
      v15 = (int *)NiTransform_TransformPoint(v11, v190.m128_f32, a6); /*0x5ee828*/
      v16 = *((float *)v15 + 1); /*0x5ee82f*/
      v6 = (PlayerCharacter *)v163; /*0x5ee832*/
      v165 = *v15; /*0x5ee836*/
      v17 = *((float *)v15 + 2); /*0x5ee83a*/
      v166 = v16; /*0x5ee83d*/
      v167 = v17; /*0x5ee841*/
    }
    v115 = *(float *)&v165 - v158; /*0x5ee84d*/
    v139 = v166 - v159; /*0x5ee859*/
    v162 = v167 - v160; /*0x5ee865*/
    v158 = v115; /*0x5ee86d*/
    v155 = v115; /*0x5ee879*/
    v159 = v139; /*0x5ee87d*/
    v156 = v139; /*0x5ee889*/
    v160 = v162; /*0x5ee88d*/
    v157 = v162; /*0x5ee899*/
    Vector3_NormalizeInPlace(&v155); /*0x5ee89d*/
    if ( v153 == 0.0 ) /*0x5ee8aa*/
      goto LABEL_40; /*0x5ee8aa*/
    if ( a3 > fCostant_100 ) /*0x5ee8be*/
      a3 = flt_A2FE7C; /*0x5ee8c6*/
    v116 = flt_B11A4C - flt_B11A44; /*0x5ee8db*/
    *(float *)&v151 = flt_B11A44 + v116 * a3 * fConstant_Inv100; /*0x5ee8ee*/
    v117 = flt_B11A5C - flt_B11A54; /*0x5ee904*/
    v162 = flt_B11A54 + v117 * a4; /*0x5ee919*/
    if ( a4 <= (double)g_DialogueFov_ ) /*0x5ee92a*/
    {
      if ( 0.0 != *(float *)&v151 ) /*0x5ee93b*/
        goto LABEL_11; /*0x5ee93b*/
    }
    else
    {
      *(float *)&v151 = 0.0; /*0x5ee92c*/
    }
    if ( 0.0 == v162 ) /*0x5ee946*/
    {
LABEL_40:
      if ( Actor_ShouldEmitBloodEffects((Actor *)this) ) /*0x5eed89*/
      {
        v154 = a3; /*0x5eed99*/
        v37 = g_fMinBloodDamage_Combat; /*0x5eed9d*/
        if ( v37 < dbl_A2F928 ) /*0x5eedae*/
          v37 = 1.0; /*0x5eedb2*/
        v147 = v37; /*0x5eedb4*/
        if ( v147 < (double)a3 /*0x5eedeb*/
          && (!unk_B333B8 && unk_B3B914 <= g_iMaxHiPerfCombatCount_Combat
           || (PlayerCharacter *)this == reference
           || v6 == reference) )                // BloodOnDeath v1.1.9: dead-actor hit hook runs after vanilla hit visuals; plugin-side Blood.ini controls corpse-hit accumulation/caps without changing native gating.
        {
          if ( (*(int (__thiscall **)(int))(*(_DWORD *)this + 0x154))(this) ) /*0x5eedfb*/
          {
            if ( v6->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v6) ) /*0x5eee0f*/
            {
              v133 = Actor_GetScaledCollisionHeight((void *)this) * dbl_A2FAA0; /*0x5eee2e*/
              v38 = v133; /*0x5eee34*/
              v134 = v133 * rhs.x; /*0x5eee40*/
              v120 = v38 * rhs.y; /*0x5eee4c*/
              v142 = v38 * rhs.z; /*0x5eee56*/
              v39 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0x154))(this); /*0x5eee5a*/
              v153 = v134 + v39[0x22]; /*0x5eee68*/
              *(float *)&a1 = v39[0x23] + v120; /*0x5eee76*/
              *(float *)&v151 = v39[0x24] + v142; /*0x5eee84*/
              *(float *)&v173 = v153; /*0x5eee8c*/
              v174 = (int)a1; /*0x5eee97*/
              v175 = v151; /*0x5eeea2*/
              v135 = Actor_GetScaledCollisionHeight(v6) * dbl_A2FAA0; /*0x5eeebe*/
              v40 = v135; /*0x5eeec2*/
              v136 = v135 * rhs.x; /*0x5eeece*/
              v121 = v40 * rhs.y; /*0x5eeeda*/
              v128 = v40 * rhs.z; /*0x5eeee4*/
              v41 = (float *)v6->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v6); /*0x5eeee8*/
              v162 = v136 + v41[0x22]; /*0x5eeef4*/
              v143 = v41[0x23] + v121; /*0x5eef02*/
              v122 = v41[0x24] + v128; /*0x5eef10*/
              if ( v147 < (double)a3 ) /*0x5eef22*/
              {
                v137 = v153 - v162; /*0x5eef30*/
                v129 = *(float *)&a1 - v143; /*0x5eef3c*/
                v176 = *(float *)&v151 - v122; /*0x5eef48*/
                v42 = dbl_A3D0C0; /*0x5eef5b*/
                v138 = v137 * v42; /*0x5eef5d*/
                v130 = v129 * v42; /*0x5eef67*/
                v176 = v42 * v176; /*0x5eef72*/
                do /*0x5ef254*/
                {
                  v158 = Rand4(flt_A6E68C, flt_A524B0); /*0x5eef94*/
                  v159 = Rand4(flt_A6E68C, flt_A524B0); /*0x5eefb0*/
                  v160 = Rand4(flt_A6E68C, flt_A524B0); /*0x5eefcc*/
                  v164 = v138 + v158; /*0x5eefdb*/
                  v161 = v130 + v159; /*0x5eefe7*/
                  v123 = v176 + v160; /*0x5eeff6*/
                  v148 = v164; /*0x5eeffe*/
                  v155 = v164; /*0x5ef00a*/
                  v149 = v161; /*0x5ef00e*/
                  v150 = v123; /*0x5ef01e*/
                  v156 = v161; /*0x5ef026*/
                  v157 = v123; /*0x5ef02a*/
                  Vector3_NormalizeInPlace(&v155); /*0x5ef02e*/
                  if ( Actor_GetBloodDecalTexturePath((Actor *)this) ) /*0x5ef037*/
                  {
                    if ( *Actor_GetBloodDecalTexturePath((Actor *)this) ) /*0x5ef047*/
                    {
                      BloodDecalTexturePath = Actor_GetBloodDecalTexturePath((Actor *)this); /*0x5ef061*/
                      v95 = LODWORD(v155); /*0x5ef067*/
                      v99 = LODWORD(v156); /*0x5ef06d*/
                      v103 = LODWORD(v157); /*0x5ef077*/
                      v85 = v173; /*0x5ef086*/
                      v88 = v174; /*0x5ef08f*/
                      v92 = v175; /*0x5ef094*/
                      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40((void *)this); /*0x5ef097*/
                      Decal_ProjectToSceneGeometry( /*0x5ef09e*/
                        DwordAtOffset40,
                        (char)&savedregs,
                        v85,
                        v88,
                        v92,
                        v95,
                        v99,
                        v103,
                        *(float *)&BloodDecalTexturePath,
                        0.0,
                        NAN,
                        0);                     // Native Decal_ProjectToSceneGeometry contract remains current: plugin INI only tunes how often/how far BloodOnDeath calls this decoded projector.
                    }
                  }
                  if ( Actor_GetBloodParticlePath((Actor *)this) ) /*0x5ef0a5*/
                  {
                    if ( *Actor_GetBloodParticlePath((Actor *)this) ) /*0x5ef0b9*/
                    {
                      Shared_GetDwordAtOffset40((void *)this); /*0x5ef0c4*/
                      v109 = sub_4C9BE0((TESObjectREFR *)this); /*0x5ef0d4*/
                      v44 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)this); /*0x5ef0d7*/
                      v45 = sub_441800(v44, v109, 3u); /*0x5ef0e5*/
                      v46 = (void *)FormHeapAlloc(0x20u); /*0x5ef0ec*/
                      v189 = v46; /*0x5ef0f1*/
                      v193 = 2; /*0x5ef0fa*/
                      if ( v46 ) /*0x5ef105*/
                      {
                        v124 = *(float *)&v165 - v153; /*0x5ef122*/
                        v161 = v166 - *(float *)&a1; /*0x5ef12e*/
                        v164 = v167 - *(float *)&v151; /*0x5ef13a*/
                        v190.m128_f32[0] = v124; /*0x5ef142*/
                        v190.m128_f32[1] = v161; /*0x5ef14d*/
                        v190.m128_f32[2] = v164; /*0x5ef158*/
                        v47 = sub_4BF9B0(v190.m128_f32, v191.m128_f32, flt_A5977C); /*0x5ef169*/
                        v125 = v153 + *v47; /*0x5ef179*/
                        v161 = v47[1] + *(float *)&a1; /*0x5ef184*/
                        v164 = v47[2] + *(float *)&v151; /*0x5ef194*/
                        v177 = v125; /*0x5ef19f*/
                        v178 = v161; /*0x5ef1b4*/
                        v179 = v164; /*0x5ef1c9*/
                        v106 = LODWORD(v161); /*0x5ef1df*/
                        v107 = (const char *)LODWORD(v164); /*0x5ef1e6*/
                        v93 = v155; /*0x5ef1ef*/
                        v96 = v156; /*0x5ef1f5*/
                        v100 = LODWORD(v157); /*0x5ef1fa*/
                        BloodParticlePath = Actor_GetBloodParticlePath((Actor *)this); /*0x5ef204*/
                        v48 = Shared_GetDwordAtOffset40((void *)this); /*0x5ef20c*/
                        v49 = BSTempEffectParticle_Constructor( /*0x5ef214*/
                                v46,
                                v48,
                                1.0,
                                v45,
                                BloodParticlePath,
                                v93,
                                v96,
                                v100,
                                v125,
                                v106,
                                v107,
                                1.0,
                                0);             // Verified: body-hit blood-spray call maps to constructor direction XYZ (v93/v96/v100), local translation XYZ (v125/v161/v164), scale 1.0 and cached-clone false. These are particle-local position coordinates, not limb/name metadata.
                      }
                      else
                      {
                        v49 = 0; /*0x5ef21b*/
                      }
                      v193 = 0xFFFFFFFF; /*0x5ef223*/
                      ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v49); /*0x5ef22e*/
                      v6 = (PlayerCharacter *)v163; /*0x5ef233*/
                    }
                  }
                  v154 = v154 * dbl_A3C770;     // Repeated native blood projection calls accumulate decals; Blood.ini iMaxSplatterDecals/iOutwardBloodSpurtsPerLimbSection tune plugin accumulation volume while preserving this decoded projection path. /*0x5ef241*/
                }
                while ( v147 < (double)v154 ); /*0x5ef254*/
              }
              process = v6->super.super.super.process; /*0x5ef25c*/
              v51 = *(int (__thiscall **)(int))(*(_DWORD *)this + 0x154); /*0x5ef25f*/
              v164 = *(float *)&process; /*0x5ef267*/
              v168 = NAN; /*0x5ef26b*/
              v52 = (NiObject *)v51(this); /*0x5ef278*/
              v154 = a3; /*0x5ef27a*/
              if ( v52 ) /*0x5ef280*/
              {
                v53 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)this + 0x174))(this); /*0x5ef290*/
                v54 = *v53; /*0x5ef292*/
                v55 = v53[1]; /*0x5ef294*/
                v56 = v53[2]; /*0x5ef297*/
                v148 = v54; /*0x5ef29a*/
                v57 = dbl_A46E48; /*0x5ef2a2*/
                v148 = v54 + v57; /*0x5ef2b4*/
                v149 = v55 + v57; /*0x5ef2be*/
                v150 = v57 + v56; /*0x5ef2c6*/
                if ( v147 < (double)a3 ) /*0x5ef2d8*/
                {
                  *(float *)&v173 = v148 - v153; /*0x5ef2e6*/
                  *(float *)&v174 = v149 - *(float *)&a1; /*0x5ef2f5*/
                  *(float *)&v175 = v150 - *(float *)&v151; /*0x5ef304*/
                  do /*0x5ef605*/
                  {
                    v177 = Rand4(flt_A641B0, flt_A47E6C); /*0x5ef326*/
                    v178 = Rand5(flt_A524B0); /*0x5ef33e*/
                    v179 = Rand4(flt_A641B0, flt_A47E6C); /*0x5ef35d*/
                    v58 = dbl_A3F3E8; /*0x5ef36e*/
                    v186 = v177 * v58; /*0x5ef378*/
                    v187 = v178 * v58; /*0x5ef388*/
                    v188 = v58 * v179; /*0x5ef396*/
                    v183 = *(float *)&v173 + v186; /*0x5ef3ab*/
                    v184 = *(float *)&v174 + v187; /*0x5ef3c0*/
                    v185 = *(float *)&v175 + v188; /*0x5ef3d5*/
                    v59 = dbl_A2FAA0; /*0x5ef3eb*/
                    v180 = v183 * v59; /*0x5ef3ed*/
                    v181 = v184 * v59; /*0x5ef3fd*/
                    v182 = v59 * v185; /*0x5ef40b*/
                    v158 = v180 + v153; /*0x5ef41d*/
                    v159 = v181 + *(float *)&a1; /*0x5ef42c*/
                    v160 = v182 + *(float *)&v151; /*0x5ef43b*/
                    v126 = Rand5(flt_A46B10); /*0x5ef44d*/
                    v192.m128_f32[0] = v162 - v158; /*0x5ef45c*/
                    v192.m128_f32[1] = v143 - v159; /*0x5ef46b*/
                    v192.m128_f32[2] = v122 - v160; /*0x5ef47a*/
                    v60 = dbl_A3C770; /*0x5ef490*/
                    v148 = v192.m128_f32[0] * v60; /*0x5ef492*/
                    v149 = v192.m128_f32[1] * v60; /*0x5ef49f*/
                    v150 = v60 * v192.m128_f32[2]; /*0x5ef4ae*/
                    Vector3_NormalizeInPlace(&v148); /*0x5ef4b2*/
                    v61 = dbl_A46970; /*0x5ef4c6*/
                    v191.m128_f32[0] = v148 * v61; /*0x5ef4c8*/
                    v191.m128_f32[1] = v149 * v61; /*0x5ef4d5*/
                    v191.m128_f32[2] = v61 * v150; /*0x5ef4e0*/
                    v190.m128_f32[0] = v158 - v191.m128_f32[0]; /*0x5ef4f2*/
                    v190.m128_f32[1] = v159 - v191.m128_f32[1]; /*0x5ef504*/
                    v190.m128_f32[2] = v160 - v191.m128_f32[2]; /*0x5ef516*/
                    v161 = Rand5(flt_A46B14); /*0x5ef52e*/
                    if ( Actor_GetBloodDecalTexturePath((Actor *)this) ) /*0x5ef534*/
                    {
                      if ( *Actor_GetBloodDecalTexturePath((Actor *)this) ) /*0x5ef548*/
                      {
                        v112 = (unsigned __int8)(int)floor(v126); /*0x5ef586*/
                        v110 = v161; /*0x5ef592*/
                        v101 = Actor_GetBloodDecalTexturePath((Actor *)this); /*0x5ef5a6*/
                        v90 = v148; /*0x5ef5ac*/
                        v94 = LODWORD(v149); /*0x5ef5b2*/
                        v97 = LODWORD(v150); /*0x5ef5bc*/
                        v82 = v190.m128_u64[0]; /*0x5ef5cb*/
                        v86 = v190.m128_i32[2]; /*0x5ef5d9*/
                        v62 = (void *)Shared_GetDwordAtOffset40((void *)this); /*0x5ef5dc*/
                        Decal_AttachToGeometryRecursive( /*0x5ef5e3*/
                          v62,
                          v82,
                          SHIDWORD(v82),
                          v86,
                          v90,
                          v94,
                          v97,
                          v101,
                          v52,
                          (int *)&v168,
                          0,
                          v110,
                          v112);
                      }
                    }
                    v154 = v154 * dbl_A3C770; /*0x5ef5f2*/
                  }
                  while ( v147 < (double)v154 ); /*0x5ef605*/
                }
              }
              if ( Actor_GetBloodDecalTexturePath((Actor *)this) ) /*0x5ef60d*/
              {
                if ( *Actor_GetBloodDecalTexturePath((Actor *)this) ) /*0x5ef621*/
                {
                  if ( !process->Unk_4D(process) ) /*0x5ef634*/
                  {
                    v63 = process->__vftable; /*0x5ef63e*/
                    v64 = v163; /*0x5ef640*/
                    v65 = (*((int (__thiscall **)(TESChildCELL *))v163->vtbl + 0x5A))(v163); /*0x5ef654*/
                    v66 = (float *)((int (__thiscall *)(float, int))v63->Unk_45)(COERCE_FLOAT(LODWORD(v164)), v65); /*0x5ef666*/
                    if ( v147 < (double)a3 ) /*0x5ef66f*/
                    {
                      if ( v66 ) /*0x5ef677*/
                      {
                        v113 = Rand5(flt_A46B10); /*0x5ef68c*/
                        LOBYTE(v122) = (int)sub_4842F0(v113); /*0x5ef6b2*/
                        v144 = Rand5(flt_A46B14); /*0x5ef6c8*/
                        if ( v64 == (TESChildCELL *)reference ) /*0x5ef6d7*/
                        {
                          SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)reference, 1); /*0x5ef6e1*/
                          CachedNode = ActorSkinInfo_GetCachedNode(SkinInfoByPerspective, 3u); /*0x5ef6f1*/
                          v190.m128_f32[0] = *(float *)&v165 - CachedNode->members.super.m_worldTransform.pos.x; /*0x5ef708*/
                          v190.m128_f32[1] = v166 - CachedNode->members.super.m_worldTransform.pos.y; /*0x5ef719*/
                          v190.m128_f32[2] = v167 - CachedNode->members.super.m_worldTransform.pos.z; /*0x5ef72a*/
                          v69 = sub_4BF9B0(v190.m128_f32, v191.m128_f32, fConstant_2); /*0x5ef73b*/
                          v70 = sub_47D9B0(v66 + 0x22, v190.m128_f32, v69); /*0x5ef74f*/
                          v71 = *v70; /*0x5ef754*/
                          v72 = v70[1]; /*0x5ef756*/
                          v73 = v70[2]; /*0x5ef759*/
                          v148 = v71; /*0x5ef75c*/
                          v74 = reference; /*0x5ef760*/
                          v150 = v73; /*0x5ef766*/
                          LOBYTE(v73) = v74->isThirdPerson; /*0x5ef76a*/
                          v149 = v72; /*0x5ef772*/
                          v75 = (NiObject *)v66; /*0x5ef776*/
                          if ( !LOBYTE(v73) ) /*0x5ef778*/
                          {
                            v75 = (NiObject *)CachedNode; /*0x5ef77a*/
                            CachedNode = (NiNode *)v66; /*0x5ef77c*/
                          }
                          v114 = LODWORD(v122); /*0x5ef788*/
                          v190.m128_f32[0] = -v155; /*0x5ef789*/
                          v190.m128_f32[1] = -v156; /*0x5ef79e*/
                          v190.m128_f32[2] = -v157; /*0x5ef7ab*/
                          v111 = v144; /*0x5ef7b6*/
                          v108 = (UInt32)CachedNode; /*0x5ef7b9*/
                          v104 = v75; /*0x5ef7bb*/
                          v102 = Actor_GetBloodDecalTexturePath((Actor *)this); /*0x5ef7d1*/
                          v91 = v190.m128_u64[0]; /*0x5ef7d7*/
                          v98 = v190.m128_i32[2]; /*0x5ef7e7*/
                          v83 = LODWORD(v148); /*0x5ef7f3*/
                          v84 = LODWORD(v149); /*0x5ef7f9*/
                          v87 = LODWORD(v150); /*0x5ef7fc*/
                        }
                        else
                        {
                          v190.m128_f32[0] = *(float *)&v165 - v66[0x22]; /*0x5ef81c*/
                          v190.m128_f32[1] = v166 - v66[0x23]; /*0x5ef82a*/
                          v190.m128_f32[2] = v167 - v66[0x24]; /*0x5ef838*/
                          v76 = sub_4BF9B0(v190.m128_f32, (float *)&v165, fConstant_2); /*0x5ef849*/
                          v77 = sub_47D9B0(v66 + 0x22, &v169, v76); /*0x5ef859*/
                          v78 = v77[1]; /*0x5ef868*/
                          v190.m128_f32[0] = -v155; /*0x5ef86b*/
                          v79 = *(_DWORD *)v77; /*0x5ef876*/
                          v80 = v77[2]; /*0x5ef878*/
                          v190.m128_f32[1] = -v156; /*0x5ef87d*/
                          v114 = LODWORD(v122); /*0x5ef884*/
                          v149 = v78; /*0x5ef88c*/
                          v190.m128_f32[2] = -v157; /*0x5ef890*/
                          v111 = v144; /*0x5ef8a4*/
                          v108 = 0; /*0x5ef8a7*/
                          v104 = (NiObject *)v66; /*0x5ef8aa*/
                          v150 = v80; /*0x5ef8ab*/
                          v102 = Actor_GetBloodDecalTexturePath((Actor *)this); /*0x5ef8c2*/
                          v91 = v190.m128_u64[0]; /*0x5ef8c8*/
                          v98 = v190.m128_i32[2]; /*0x5ef8d8*/
                          v83 = v79; /*0x5ef8e4*/
                          v84 = LODWORD(v149); /*0x5ef8e6*/
                          v87 = LODWORD(v150); /*0x5ef8e9*/
                        }
                        v81 = (void *)Shared_GetDwordAtOffset40(v163); /*0x5ef8f3*/
                        Decal_AttachToGeometryRecursive( /*0x5ef8fa*/
                          v81,
                          v83,
                          v84,
                          v87,
                          *(float *)&v91,
                          SHIDWORD(v91),
                          v98,
                          v102,
                          v104,
                          (int *)&v168,
                          v108,
                          v111,
                          v114);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return; /*0x5ef8fa*/
    }
LABEL_11:
    v127 = 1; /*0x5ee950*/
    if ( (PlayerCharacter *)this == reference ) /*0x5ee95b*/
      v127 = *(_BYTE *)(this + 0x588); /*0x5ee963*/
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)this + 0x19C))(this) ) /*0x5ee971*/
    {
      if ( v127 ) /*0x5ee97b*/
      {
        v145 = 0; /*0x5ee97f*/
        CharProxy = MobileObject_GetCharProxy((MobileObject *)this); /*0x5ee983*/
        if ( CharProxy ) /*0x5ee98a*/
          v145 = *((_BYTE *)CharProxy + 0x1F4) & 1; /*0x5ee995*/
        sub_8AB040((_DWORD *)LODWORD(v153), COERCE_INT(0.0), v145); /*0x5ee9a5*/
      }
    }
    v19 = 0.0; /*0x5ee9ad*/
    v20 = *(float *)&v151; /*0x5ee9b9*/
    if ( *(float *)&v151 != 0.0 ) /*0x5ee9be*/
    {
      v21 = dword_B148CC <= 0; /*0x5ee9c4*/
      v168 = v155 * v20; /*0x5ee9d1*/
      v146 = v156 * v20; /*0x5ee9db*/
      v154 = v20 * v157; /*0x5ee9e3*/
      if ( !v21 ) /*0x5ee9e7*/
      {
        if ( v6 == reference ) /*0x5ee9f3*/
        {
          v169 = 0.0; /*0x5ee9f5*/
          v170 = 0.0; /*0x5eea03*/
          v191.m128_f32[0] = 0.0; /*0x5eea13*/
          v171 = 1.0; /*0x5eea1a*/
          v191.m128_f32[1] = 0.0; /*0x5eea21*/
          v172 = 1.0; /*0x5eea2f*/
          v191.m128_f32[2] = 1.0; /*0x5eea3d*/
        }
        else
        {
          v169 = 1.0; /*0x5eea4f*/
          v172 = 1.0; /*0x5eea5d*/
          v191.m128_f32[0] = 1.0; /*0x5eea64*/
          v170 = 0.0; /*0x5eea72*/
          v171 = 0.0; /*0x5eea80*/
          v191.m128_f32[1] = 0.0; /*0x5eea8e*/
          v191.m128_f32[2] = 0.0; /*0x5eea95*/
        }
        v191.m128_f32[3] = 1.0; /*0x5eea44*/
        v22 = dbl_A2FC80; /*0x5eeaae*/
        v118 = v168 * v22; /*0x5eeac1*/
        v140 = v146 * v22; /*0x5eeacb*/
        v131 = v22 * v154; /*0x5eead3*/
        v190.m128_f32[0] = v118; /*0x5eeadb*/
        v190.m128_f32[1] = v140; /*0x5eeae6*/
        v190.m128_f32[2] = v131; /*0x5eeaf1*/
        v23 = sub_6FCDC0(v190.m128_f32, (int *)&v191); /*0x5eeaf8*/
        v24 = v166; /*0x5eeb01*/
        v25 = (int)v23; /*0x5eeb05*/
        v26 = v167; /*0x5eeb07*/
        *(float *)(v25 + 0x54) = *(float *)&v165; /*0x5eeb0e*/
        *(float *)(v25 + 0x58) = v24; /*0x5eeb11*/
        *(float *)(v25 + 0x5C) = v26; /*0x5eeb16*/
        v27 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5eeb19*/
        v193 = 0; /*0x5eeb27*/
        if ( v27 ) /*0x5eeb32*/
          v28 = (BSShaderProperty *)sub_405990(v27); /*0x5eeb36*/
        else
          v28 = 0; /*0x5eeb3d*/
        v28->member.super.flags = v28->member.super.flags & 0xFFC7 | 0x10; /*0x5eeb4c*/
        v193 = 0xFFFFFFFF; /*0x5eeb56*/
        sub_405680((NiNode *)v25, v28); /*0x5eeb5d*/
        v29 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x5eeb64*/
        v193 = 1; /*0x5eeb72*/
        if ( v29 ) /*0x5eeb7d*/
          v30 = (BSShaderProperty *)NiObjectNET_Create(v29); /*0x5eeb81*/
        else
          v30 = 0; /*0x5eeb88*/
        v31 = v30->member.super.flags & 0xFFFC | 2; /*0x5eeb93*/
        v193 = 0xFFFFFFFF; /*0x5eeb9a*/
        v30->member.super.flags = v31; /*0x5eeba1*/
        sub_405680((NiNode *)v25, v30); /*0x5eeba5*/
        sub_440E60(MEMORY[0xB333A0], v25, flt_B148D4); /*0x5eebbb*/
        v19 = 0.0; /*0x5eebc0*/
        v6 = (PlayerCharacter *)v163; /*0x5eebc2*/
      }
      if ( v127 ) /*0x5eebcb*/
      {
        v192.m128_f32[0] = v168; /*0x5eebdd*/
        v192.m128_f32[1] = v146; /*0x5eebf0*/
        v192.m128_f32[2] = v154; /*0x5eebfc*/
        v32 = hkFactor; /*0x5eec0f*/
        v190.m128_f32[0] = *(float *)&v165 * v32; /*0x5eec11*/
        v190.m128_f32[1] = v166 * v32; /*0x5eec21*/
        v190.m128_f32[2] = v32 * v167; /*0x5eec2f*/
        v191.m128_f32[0] = v190.m128_f32[0]; /*0x5eec3d*/
        v191.m128_f32[1] = v190.m128_f32[1]; /*0x5eec4b*/
        v191.m128_f32[2] = v190.m128_f32[2]; /*0x5eec59*/
        v191.m128_f32[3] = flt_A37CC8; /*0x5eec66*/
        v33 = sub_8AFD70((float *)a1, &v191, 0); /*0x5eec6d*/
        if ( v33 /*0x5eecad*/
          && (v34 = (Atmosphere *)sub_47FA60(*(int **)(v33 + 8))) != 0
          && (PointerAtOffset08 = Shared_GetPointerAtOffset08(v34)) != 0
          || (PointerAtOffset08 = (NiAVObject *)NiObjectNET_LookupObjectByName(a1, off_B11A64[0])) != 0 )
        {
          sub_5E14C0("Hit At %s\r\n", PointerAtOffset08->members.super.m_pcName); /*0x5eecb8*/
        }
        sub_8B8410((NiObjectNET *)LODWORD(v153), &v192, (NiObjectNET *)PointerAtOffset08); /*0x5eecce*/
        v19 = 0.0; /*0x5eecd3*/
        v6 = (PlayerCharacter *)v163; /*0x5eecd5*/
      }
    }
    if ( v19 != v162 ) /*0x5eece9*/
    {
      if ( v127 ) /*0x5eecf4*/
      {
        v155 = v155 + 1.0; /*0x5eed08*/
        v156 = v156 + 1.0; /*0x5eed10*/
        Vector3_NormalizeInPlace(&v155); /*0x5eed14*/
        v132 = v155 * *(float *)&v151; /*0x5eed35*/
        v119 = v156 * *(float *)&v151; /*0x5eed3f*/
        v141 = *(float *)&v151 * v157; /*0x5eed47*/
        v190.m128_f32[0] = v132; /*0x5eed4f*/
        v190.m128_f32[1] = v119; /*0x5eed5a*/
        v190.m128_f32[2] = v141; /*0x5eed65*/
        v36 = (NiObjectNET *)sub_4D96F0((_DWORD *)this, a1, "Bip01 L Forearm"); /*0x5eed6c*/
        sub_8B8410((NiObjectNET *)LODWORD(v153), &v190, v36); /*0x5eed7f*/
      }
    }
    goto LABEL_40; /*0x5eed7f*/
  }
}
