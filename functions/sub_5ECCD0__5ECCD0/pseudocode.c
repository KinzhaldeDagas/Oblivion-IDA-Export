void __userpurge Actor_HandleTrapHitDamage(Actor *a1@<ecx>, int a2@<edi>, double x@<st2>, int a4, __m128 *a5)
{
  int v5; // edi
  BSExtraDataVtbl *ExtraScript; // eax
  PlayerCharacter *v8; // ecx
  bool v9; // zf
  ExtraScript *ExtraScriptEventList; // edi
  Script *v11; // ebx
  double v12; // st7
  __m128 *v13; // edi
  bhkCharacterProxy *CharProxy; // ecx
  int v15; // eax
  int v16; // ebx
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  __m128 *v20; // eax
  double v21; // st7
  double v22; // st6
  __m128 v23; // xmm0
  char *v24; // ecx
  __m128 *LinearVelocityPtr; // eax
  bool v26; // c3
  __m128 v27; // xmm0
  double v28; // st7
  __m128 v29; // xmm0
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v31; // eax
  double v32; // rt1
  char v33; // al
  int v34; // edi
  float (__thiscall *GetAV_F)(Actor *, AVCode); // edx
  int v36; // edi
  double v37; // st7
  double v38; // st7
  double v39; // st7
  double v40; // st6
  double v41; // st7
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  double v43; // st6
  float *v44; // eax
  double v45; // st7
  double v46; // st7
  float v47; // edx
  float v48; // ecx
  float *v49; // eax
  double v50; // st7
  int v51; // ecx
  __m128 v52; // xmm0
  float v53; // xmm2_4
  float v54; // xmm1_4
  float v55; // eax
  __int8 v56; // bl
  bool v57; // cl
  double v58; // st7
  NiNode *v59; // eax
  Ni2DBuffer **v60; // eax
  NiNode *(__thiscall *v61)(TESObjectREFR *); // eax
  __m128 v62; // xmm0
  float v63; // xmm1_4
  float v64; // xmm3_4
  __m128 v65; // xmm0
  __m128 v66; // xmm1
  int v67; // eax
  __m128 *v68; // esi
  float v69; // [esp+34h] [ebp-CCh]
  int v70; // [esp+3Ch] [ebp-C4h]
  bool v72; // [esp+4Fh] [ebp-B1h]
  char v73[4]; // [esp+50h] [ebp-B0h] BYREF
  float v74; // [esp+54h] [ebp-ACh]
  float v75; // [esp+58h] [ebp-A8h]
  float v76; // [esp+5Ch] [ebp-A4h]
  char v77[4]; // [esp+60h] [ebp-A0h] BYREF
  char ArgList[4]; // [esp+64h] [ebp-9Ch] BYREF
  float v79; // [esp+68h] [ebp-98h]
  char v80; // [esp+6Fh] [ebp-91h]
  __m128 *v81; // [esp+70h] [ebp-90h]
  NiPoint3 v82; // [esp+74h] [ebp-8Ch] BYREF
  int v83; // [esp+84h] [ebp-7Ch]
  int Level; // [esp+88h] [ebp-78h]
  char v85[4]; // [esp+8Ch] [ebp-74h] BYREF
  double v86; // [esp+90h] [ebp-70h] BYREF
  float v87; // [esp+98h] [ebp-68h]
  char v88[4]; // [esp+A4h] [ebp-5Ch] BYREF
  char v89[4]; // [esp+A8h] [ebp-58h] BYREF
  _DWORD v90[5]; // [esp+ACh] [ebp-54h] BYREF
  char v91; // [esp+C0h] [ebp-40h]
  __int8 v92; // [esp+C1h] [ebp-3Fh]
  __int64 v93; // [esp+C4h] [ebp-3Ch]
  _DWORD v94[5]; // [esp+CCh] [ebp-34h] BYREF
  __m128 v95; // [esp+E0h] [ebp-20h] BYREF
  int savedregs; // [esp+100h] [ebp+0h] BYREF

  v75 = 0.0; /*0x5eccf0*/
  v79 = 0.0; /*0x5eccf5*/
  *(float *)v77 = 0.0; /*0x5eccf9*/
  v5 = *(_DWORD *)(a4 + 0xC); /*0x5eccfe*/
  v74 = 0.0; /*0x5ecd01*/
  v76 = 1.0; /*0x5ecd0c*/
  v81 = a5; /*0x5ecd10*/
  v83 = a4; /*0x5ecd19*/
  v72 = 0; /*0x5ecd1d*/
  ExtraScript = ExtraDataList_GetExtraScript((ExtraDataList *)(v5 + 0x44)); /*0x5ecd22*/
  v8 = reference; /*0x5ecd27*/
  v9 = a1 == (Actor *)reference; /*0x5ecd2d*/
  *(_DWORD *)ArgList = ExtraScript; /*0x5ecd2f*/
  if ( !v9 || !v5 || v5 != v8->unk578 )
  {
    if ( !ExtraScript ) /*0x5ecd47*/
      goto LABEL_22; /*0x5ecd47*/
    ExtraScriptEventList = ExtraDataList_GetExtraScriptEventList((ExtraDataList *)(v5 + 0x44)); /*0x5ecd54*/
    if ( !ExtraScriptEventList ) /*0x5ecd58*/
      goto LABEL_22; /*0x5ecd58*/
    v11 = *(Script **)ArgList; /*0x5ecd5e*/
    if ( sub_4FAA90(*(Script **)ArgList, "fTrapDamage", (UInt32 *)ArgList) ) /*0x5ecd6e*/
      v75 = ScriptEventList::GetVariableValue((ScriptEventList *)ExtraScriptEventList, *(int *)ArgList, 0); /*0x5ecd85*/
    if ( sub_4FAA90(v11, "fLevelledDamage", (UInt32 *)v77) ) /*0x5ecd95*/
    {
      *(float *)&Level = ScriptEventList::GetVariableValue((ScriptEventList *)ExtraScriptEventList, *(int *)v77, 0); /*0x5ecdac*/
      v86 = *(float *)&Level; /*0x5ecdb6*/
      Level = (unsigned __int16)Actor_GetLevel(a1); /*0x5ecdc2*/
      v75 = (double)Level * v86 + v75; /*0x5ecdd2*/
    }
    if ( sub_4FAA90(v11, "fTrapPushBack", (UInt32 *)v88) ) /*0x5ecde2*/
      v79 = ScriptEventList::GetVariableValue((ScriptEventList *)ExtraScriptEventList, *(int *)v88, 0); /*0x5ecdf9*/
    if ( sub_4FAA90(v11, "fTrapMinVelocity", (UInt32 *)v89) ) /*0x5ece09*/
    {
      v74 = ScriptEventList::GetVariableValue((ScriptEventList *)ExtraScriptEventList, *(int *)v89, 0); /*0x5ece20*/
      v12 = 0.0; /*0x5ece24*/
      if ( v74 >= 0.0 ) /*0x5ece31*/
        v12 = v74 * hkFactor; /*0x5ece39*/
      v74 = v12; /*0x5ece3f*/
    }
    if ( sub_4FAA90(v11, "bTrapContinuous", (UInt32 *)v85) ) /*0x5ece4f*/
      v72 = ScriptEventList::GetVariableValue((ScriptEventList *)ExtraScriptEventList, *(int *)v85, 0) != dbl_A2FC68; /*0x5ece78*/
    *(float *)v77 = sub_4FAA90(v11, "fTrapDeathPushBack", (UInt32 *)v73)
                  ? ScriptEventList::GetVariableValue((ScriptEventList *)ExtraScriptEventList, *(int *)v73, 0)
                  : v79 / dbl_A3F3E8;
    if ( v72 ) /*0x5eceb9*/
    {
      v13 = v81; /*0x5ececa*/
    }
    else
    {
LABEL_22:
      v13 = v81; /*0x5ecebb*/
      if ( (v81->m128_i8[0] & 1) != 0 ) /*0x5ecec2*/
        return; /*0x5ecec2*/
    }
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1); /*0x5eced5*/
    v15 = *(_DWORD *)(v83 + 8); /*0x5ecedb*/
    v9 = *(_BYTE *)(v15 + 0x18) == 1; /*0x5ecede*/
    *(_DWORD *)v85 = CharProxy; /*0x5ecee2*/
    if ( v9 ) /*0x5ecee6*/
    {
      *(_DWORD *)ArgList = v15 + *(_DWORD *)(v15 + 0x10); /*0x5eceef*/
      v16 = *(_DWORD *)ArgList; /*0x5eceeb*/
      if ( *(_DWORD *)ArgList ) /*0x5ecef3*/
      {
        if ( (v13->m128_i8[0] & 1) != 0 ) /*0x5ecef8*/
        {
          v20 = *(__m128 **)(*(_DWORD *)ArgList + 0x50); /*0x5ecf22*/
          v17 = v20[0xD]; /*0x5ecf25*/
          v18 = v20[4]; /*0x5ecf2c*/
        }
        else
        {
          v17 = v13[2]; /*0x5ecefa*/
          v18 = v13[1]; /*0x5ecefe*/
        }
        v21 = 0.0; /*0x5ecf30*/
        v95 = v18; /*0x5ecf32*/
        *(__m128 *)&v94[1] = v17; /*0x5ecf3c*/
        x = v74; /*0x5ecf44*/
        v22 = v74; /*0x5ecf4c*/
        if ( v74 == 0.0 /*0x5ecf84*/
          || (v23 = _mm_mul_ps(v17, v17),
              v82.x = fsqrt(
                        _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0])),
              x = v82.x,
              v82.x >= v22) )
        {
          if ( CharProxy ) /*0x5ecf93*/
          {
            v24 = *((char **)CharProxy + 2); /*0x5ecf99*/
            if ( v24 ) /*0x5ecf9e*/
            {
              LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v24); /*0x5ecfa8*/
              v17 = *(__m128 *)&v94[1]; /*0x5ecfb1*/
              v22 = v74; /*0x5ecfbb*/
              v21 = 0.0; /*0x5ecfbb*/
            }
            else
            {
              LinearVelocityPtr = (__m128 *)&OB_ShaderConstantStorage_010201A0[0x1870B]; /*0x5ed027*/
            }
            v26 = v22 == v21; /*0x5ecfc0*/
            v27 = _mm_sub_ps(*LinearVelocityPtr, v17); /*0x5ecfc2*/
            v28 = v22; /*0x5ecfc7*/
            if ( v26 ) /*0x5ecfcc*/
              v28 = flt_A31C80; /*0x5ecfd0*/
            v29 = _mm_mul_ps(v27, v27); /*0x5ecfd6*/
            v76 = v28; /*0x5ecfd9*/
            v82.x = fsqrt( /*0x5ecff7*/
                      _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]));
            v76 = v82.x / v76; /*0x5ed005*/
            if ( fConstant_2 < (double)v76 ) /*0x5ed018*/
              v76 = fConstant_2; /*0x5ed01e*/
          }
        }
        else
        {
          v75 = 0.0; /*0x5ecf88*/
        }
LABEL_46:
        v33 = ((int (__thiscall *)(Actor *, _DWORD, int))a1->vtbl->super.super.IsDead)(a1, 0, a2); /*0x5ed0c4*/
        v34 = *(_DWORD *)(*(_DWORD *)(Level + 8) + 0x1C); /*0x5ed0d9*/
        GetAV_F = a1->vtbl->GetAV_F; /*0x5ed0e0*/
        HIBYTE(v81) = v33 == 0; /*0x5ed0e6*/
        v36 = v34 & 0x3F; /*0x5ed0eb*/
        if ( v36 == 0x10 ) /*0x5ed0f3*/
        {
          *(float *)v73 = ((double (__thiscall *)(Actor *, int))GetAV_F)(a1, 0x43) / fCostant_100; /*0x5ed0ff*/
          v37 = 1.0; /*0x5ed103*/
          if ( *(float *)v73 < 1.0 ) /*0x5ed110*/
            v37 = *(float *)v73; /*0x5ed112*/
          v74 = v37; /*0x5ed118*/
          *(float *)v73 = 1.0 - v74; /*0x5ed124*/
          v38 = *(float *)v73; /*0x5ed128*/
        }
        else
        {
          *(float *)v73 = ((double (__thiscall *)(Actor *, int))GetAV_F)(a1, 0x41) / fCostant_100; /*0x5ed138*/
          v39 = 1.0; /*0x5ed13c*/
          if ( *(float *)v73 < 1.0 ) /*0x5ed149*/
            v39 = *(float *)v73; /*0x5ed14b*/
          v74 = v39; /*0x5ed151*/
          *(float *)v73 = 1.0 - v74; /*0x5ed15d*/
          v38 = *(float *)v73; /*0x5ed161*/
        }
        v75 = v38 * v75; /*0x5ed169*/
        v40 = v75; /*0x5ed16f*/
        if ( v75 > 0.0 ) /*0x5ed17a*/
        {                                       // BloodOnDeath decode 2026-05-30: continuous traps scale damage by frame delta/velocity before applying damage and spawning blood. This native path produces trail-like repeated blood by calling the emitter every continuous update.
          if ( v72 ) /*0x5ed185*/
          {
            x = *(float *)&MEMORY[0xB33E90][0xC] * v76; /*0x5ed18d*/
            v75 = v40 * x; /*0x5ed193*/
            v40 = v75; /*0x5ed197*/
          }
          v69 = v40; /*0x5ed1b0*/
          ((void (__thiscall *)(Actor *, _DWORD, _DWORD, _DWORD))a1->vtbl->ApplyDamage)(a1, LODWORD(v69), 0.0, 0); /*0x5ed1b3*/
          v41 = Actor_GetScaledCollisionHeight(a1); /*0x5ed1b7*/
          GetNiNode = a1->vtbl->super.super.GetNiNode; /*0x5ed1c4*/
          *(float *)v73 = v41 * dbl_A2FAA0; /*0x5ed1ca*/
          *(float *)&v86 = *(float *)v73 * *(float *)&rhs; /*0x5ed1dc*/
          v43 = *(float *)v73 * *(float *)&MEMORY[0xB258EC]; /*0x5ed1e2*/
          *((float *)&v86 + 1) = v43; /*0x5ed1e8*/
          v87 = *(float *)v73 * *(float *)&MEMORY[0xB258F0]; /*0x5ed1f2*/
          v44 = (float *)GetNiNode((TESObjectREFR *)a1); /*0x5ed1f6*/
          v45 = v44[0x22]; /*0x5ed1f8*/
          v44 += 0x22; /*0x5ed1fe*/
          v82.x = v45 + *(float *)&v86; /*0x5ed20b*/
          v82.y = v44[1] + *((float *)&v86 + 1); /*0x5ed216*/
          v46 = v44[2] + v87; /*0x5ed224*/
          v82.z = v46; /*0x5ed22a*/
          HavokVector_ToWorldVector((float *)&v86, &v95); /*0x5ed22e*/
          if ( v36 != 0x10 ) /*0x5ed239*/
          {
            v47 = g_zeroNiPoint3; /*0x5ed23f*/
            v48 = MEMORY[0xB3F9AC]; /*0x5ed249*/
            *(float *)v73 = v75 + v75; /*0x5ed258*/
            v46 = *(float *)v73; /*0x5ed25c*/
            Actor_SpawnTrapHitBloodDecals( /*0x5ed2a9*/
              (TESObjectREFR *)a1,
              COERCE_FLOAT(&savedregs),
              *(float *)v73,
              *(float *)&v86,
              *((float *)&v86 + 1),
              v87,
              SLODWORD(v82.x),
              LODWORD(v82.y),
              (const char *)LODWORD(v82.z),
              v47,
              v48,
              MEMORY[0xB3F9B0][0],
              0);                               // Verified call-chain anchor: Actor_HandleTrapHitDamage calls Actor_SpawnTrapHitBloodDecals with computed trap-impact vector/point values and damage-scaled emission input; the callee independently checks the victim actor's blood spray/decal eligibility and resolves its particle path.
            if ( !v72 ) /*0x5ed2b3*/
            {
              if ( v16 ) /*0x5ed2bb*/
              {
                if ( v81[3].m128_i32[0] != 0x1F ) /*0x5ed2cd*/
                {
                  v49 = HavokVector_ToWorldVector(&v82.x, &v95); /*0x5ed2e0*/
                  v50 = kHeadBodyNormalMatchRadius; /*0x5ed2e5*/
                  v51 = *(_DWORD *)(*(_DWORD *)ArgList + 0xC); /*0x5ed2f9*/
                  v52 = _mm_mul_ps(*(__m128 *)&v94[1], *(__m128 *)&v94[1]); /*0x5ed2fc*/
                  v82.x = *v49; /*0x5ed2ff*/
                  v53 = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]; /*0x5ed310*/
                  v54 = _mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]; /*0x5ed314*/
                  v52.m128_i32[0] = dword_A46C30; /*0x5ed318*/
                  v82.y = v49[1]; /*0x5ed320*/
                  v55 = v49[2]; /*0x5ed324*/
                  *(float *)&v90[4] = v50; /*0x5ed327*/
                  v91 = 0x1F; /*0x5ed332*/
                  v56 = v81[3].m128_i8[0]; /*0x5ed33d*/
                  v82.z = v55; /*0x5ed344*/
                  *(float *)&v90[2] = v55; /*0x5ed348*/
                  v90[0] = LODWORD(v82.x); /*0x5ed350*/
                  *(float *)&v86 = fsqrt(v53 + v54) * v52.m128_f32[0]; /*0x5ed354*/
                  v46 = *(float *)&v86; /*0x5ed35a*/
                  *(float *)&v90[3] = *(float *)&v86; /*0x5ed362*/
                  v94[0] = v51; /*0x5ed378*/
                  v92 = v56; /*0x5ed37f*/
                  v90[1] = LODWORD(v82.y); /*0x5ed386*/
                  v93 = (unsigned int)a1 + v51; /*0x5ed38a*/
                  sub_6B0C70(x, *(float *)&v86, COERCE_FLOAT(v90)); /*0x5ed391*/
                }
              }
            }
          }
          Actor_PlayPainFX((TESObjectREFR *)a1, x, v46, v43, (int *)1, 1); /*0x5ed39f*/
          v57 = v80 && a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0); /*0x5ed3bd*/
          v58 = v79; /*0x5ed3cd*/
          if ( v79 > 0.0 ) /*0x5ed3d2*/
          {
            if ( *(float *)v77 > fConst_200 ) /*0x5ed3e7*/
              *(float *)v77 = flt_A57EF8; /*0x5ed3ef*/
            if ( !v57 || a1 == (Actor *)reference ) /*0x5ed401*/
            {
              v68 = *(__m128 **)v85; /*0x5ed4e5*/
              if ( *(_DWORD *)v85 ) /*0x5ed4eb*/
              {
                if ( v58 > dbl_A2FC70 ) /*0x5ed4fc*/
                {
                  v79 = flt_A342A4; /*0x5ed506*/
                  v58 = v79; /*0x5ed50a*/
                }
                if ( v72 ) /*0x5ed513*/
                  v79 = v58 * (*(float *)&MEMORY[0xB33E90][0xC] * v76); /*0x5ed521*/
                if ( *(_DWORD *)(v83 + 8) ) /*0x5ed52d*/
                {
                  HavokVector_ToWorldVector(&v82.x, (__m128 *)&v94[1]); /*0x5ed540*/
                  Vector3_NormalizeInPlace(&v82.x); /*0x5ed54c*/
                  NiPoint3::MutliplyByValue(&v82, v79); /*0x5ed55f*/
                  bhkCharacterController_SetTransientPushVector(v68, &v82.x, kHeadBodyNormalMatchRadius); /*0x5ed575*/
                }
              }
            }
            else
            {
              v59 = a1->vtbl->super.super.GetNiNode(a1); /*0x5ed419*/
              sub_88D070(v59, 1, 1, 0); /*0x5ed41c*/
              v60 = (Ni2DBuffer **)a1->vtbl->super.super.GetNiNode(a1); /*0x5ed42e*/
              sub_8B8700(v60); /*0x5ed431*/
              v70 = *(int *)v77; /*0x5ed442*/
              v61 = a1->vtbl->super.super.GetNiNode; /*0x5ed457*/
              v62 = _mm_mul_ps(*(__m128 *)&v94[1], *(__m128 *)&v94[1]); /*0x5ed460*/
              v62.m128_f32[0] = _mm_shuffle_ps(v62, v62, 0xAA).m128_f32[0] /*0x5ed472*/
                              + (float)(_mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0]);
              v63 = 1.0 / fsqrt(v62.m128_f32[0]); /*0x5ed479*/
              v64 = *(float *)&dword_A46C30 - (float)((float)(v62.m128_f32[0] * v63) * v63); /*0x5ed485*/
              v65 = 0; /*0x5ed489*/
              v65.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v63) * v64; /*0x5ed494*/
              v66 = 0; /*0x5ed4a7*/
              v66.m128_f32[0] = flt_A3F514; /*0x5ed4aa*/
              v95 = _mm_sub_ps( /*0x5ed4cd*/
                      v95,
                      _mm_mul_ps(
                        _mm_shuffle_ps(v66, v66, 0),
                        _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), *(__m128 *)&v94[1])));
              v67 = (int)v61((TESObjectREFR *)a1); /*0x5ed4d5*/
              sub_5364B0(v67, &v95, *(float *)&v70); /*0x5ed4d8*/
            }
          }
        }
        v81->m128_i32[0] |= 1u; /*0x5ed584*/
        return; /*0x5ed584*/
      }
    }
    else
    {
      *(_DWORD *)ArgList = 0; /*0x5ecf04*/
      v16 = 0; /*0x5ecf0c*/
    }
    if ( (v13->m128_i8[0] & 1) != 0 ) /*0x5ecf13*/
      v19 = *(__m128 *)(*(_DWORD *)(v15 + 8) + 0x30); /*0x5ed031*/
    else
      v19 = v13[1]; /*0x5ecf19*/
    GetPos = a1->vtbl->super.super.GetPos; /*0x5ed037*/
    v95 = v19; /*0x5ed03f*/
    v31 = GetPos((TESObjectREFR *)a1); /*0x5ed047*/
    v32 = hkFactor; /*0x5ed05d*/
    *(float *)&v94[1] = *v31 * v32; /*0x5ed05f*/
    *(float *)&v94[2] = v31[1] * v32; /*0x5ed06b*/
    *(float *)&v94[3] = v32 * v31[2]; /*0x5ed075*/
    *(__m128 *)&v94[1] = _mm_sub_ps(*(__m128 *)&v94[1], v95); /*0x5ed087*/
    *(float *)v73 = Actor_GetScaledCollisionHeight(a1) * dbl_A2FAA0; /*0x5ed09a*/
    *(float *)v73 = *(float *)v73 * hkFactor; /*0x5ed0a8*/
    *(float *)&v94[3] = *(float *)v73 + *(float *)&v94[3]; /*0x5ed0b7*/
    goto LABEL_46; /*0x5ed0b7*/
  }
}
