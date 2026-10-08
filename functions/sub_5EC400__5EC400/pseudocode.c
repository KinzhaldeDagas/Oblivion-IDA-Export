// Verified trap-hit blood visuals use both actor-base channels. Early gate calls Actor_ShouldEmitBloodEffects; each repeated pass projects the receiver actor's blood decal path and, when its virtual +0x40 spray path is non-null/nonempty, allocates a 0x20 BSTempEffectParticle, resolves the receiver's cell NiNode, passes its particle path/direction/contact position/scale to the constructor with cached-clone enabled, then registers the result. This path comes from the struck actor's own base form, not an unrelated trap-source particle setting.
void __userpurge Actor_SpawnTrapHitBloodDecals(
        TESObjectREFR *this@<ecx>,
        float a2@<ebp>,
        float a3,
        float a4,
        float a5,
        float a6,
        int a7,
        int a8,
        const char *a9,
        float a10,
        float a11,
        float a12,
        int a13)
{
  double v14; // st7
  double v15; // rt1
  TESForm *v16; // edi
  TESForm *v17; // ebx
  TESForm *v18; // edi
  TESForm *v19; // ebx
  TESForm *v20; // edi
  TESForm *v21; // ebx
  ExtraDataList *DwordAtOffset40; // eax
  TESForm *v23; // ebx
  TESForm *v24; // edi
  TESForm *v25; // edi
  TESForm *v26; // ebx
  signed int v27; // edi
  TESObjectCELL *v28; // eax
  unsigned int v29; // edi
  NiNode *NiNode; // eax
  int v31; // eax
  NiNode *v32; // ebx
  BSTempEffectParticle *v33; // eax
  float bloodSourceBase; // edi
  int bloodParticlePath; // eax
  TESObjectCELL *v36; // eax
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  NiObject *v38; // ebp
  float *v39; // eax
  float v40; // ecx
  float v41; // edx
  float v42; // eax
  double v43; // st6
  double v44; // st6
  double v45; // rt0
  double v46; // st7
  double v47; // rt1
  double v48; // rt2
  double v49; // st7
  TESObjectREFRVtbl *vtbl; // edx
  int v51; // ebx
  int v52; // edi
  TESForm *v53; // edi
  TESForm *v54; // ebx
  void *v55; // eax
  int v56; // [esp-4h] [ebp-F8h]
  int durationSeconds; // [esp+0h] [ebp-F4h]
  int v58; // [esp+4h] [ebp-F0h]
  const char *bloodParticlePathForCtor; // [esp+8h] [ebp-ECh]
  float v60; // [esp+8h] [ebp-ECh]
  float v61; // [esp+Ch] [ebp-E8h]
  int v62; // [esp+Ch] [ebp-E8h]
  int v63; // [esp+10h] [ebp-E4h]
  float v64; // [esp+10h] [ebp-E4h]
  int v65; // [esp+10h] [ebp-E4h]
  int v66; // [esp+14h] [ebp-E0h]
  float v67; // [esp+14h] [ebp-E0h]
  const char *BloodDecalTexturePath; // [esp+14h] [ebp-E0h]
  int v69; // [esp+18h] [ebp-DCh]
  float v70; // [esp+1Ch] [ebp-D8h]
  int scale; // [esp+24h] [ebp-D0h]
  int scale_4; // [esp+28h] [ebp-CCh]
  float v73; // [esp+40h] [ebp-B4h] BYREF
  float v74; // [esp+44h] [ebp-B0h]
  float v75; // [esp+48h] [ebp-ACh]
  float v76; // [esp+4Ch] [ebp-A8h]
  int v77; // [esp+50h] [ebp-A4h]
  float v78; // [esp+54h] [ebp-A0h]
  float v79; // [esp+58h] [ebp-9Ch]
  float v80; // [esp+5Ch] [ebp-98h]
  float v81; // [esp+60h] [ebp-94h]
  float v82; // [esp+64h] [ebp-90h]
  float v83; // [esp+68h] [ebp-8Ch]
  float v84; // [esp+6Ch] [ebp-88h]
  float v85; // [esp+70h] [ebp-84h]
  float v86; // [esp+74h] [ebp-80h]
  float v87; // [esp+78h] [ebp-7Ch]
  float v88; // [esp+7Ch] [ebp-78h]
  float v89; // [esp+80h] [ebp-74h]
  float v90; // [esp+84h] [ebp-70h]
  float v91; // [esp+88h] [ebp-6Ch]
  float v92; // [esp+8Ch] [ebp-68h]
  float v93; // [esp+90h] [ebp-64h]
  float v94; // [esp+94h] [ebp-60h]
  int v95; // [esp+98h] [ebp-5Ch] BYREF
  float v96; // [esp+9Ch] [ebp-58h]
  float v97; // [esp+A0h] [ebp-54h]
  float v98; // [esp+A4h] [ebp-50h]
  float v99; // [esp+A8h] [ebp-4Ch]
  float v100; // [esp+ACh] [ebp-48h]
  float v101; // [esp+B0h] [ebp-44h]
  float v102; // [esp+B4h] [ebp-40h]
  float v103; // [esp+B8h] [ebp-3Ch]
  float v104; // [esp+BCh] [ebp-38h]
  float v105; // [esp+C0h] [ebp-34h]
  float v106; // [esp+C4h] [ebp-30h]
  float v107; // [esp+C8h] [ebp-2Ch]
  float v108; // [esp+CCh] [ebp-28h]
  float v109; // [esp+D0h] [ebp-24h]
  float v110; // [esp+D4h] [ebp-20h]
  float v111; // [esp+D8h] [ebp-1Ch]
  int v112; // [esp+DCh] [ebp-18h]
  int v113; // [esp+E0h] [ebp-14h]
  int v114; // [esp+E4h] [ebp-10h]
  unsigned int v115; // [esp+F0h] [ebp-4h]

  if ( Actor_ShouldEmitBloodEffects((Actor *)this) ) /*0x5ec42f*/
  {
    v14 = g_fMinBloodDamage_Combat; /*0x5ec43c*/
    if ( v14 < dbl_A2F928 ) /*0x5ec44d*/
      v14 = 1.0; /*0x5ec451*/
    v80 = v14; /*0x5ec453*/
    if ( v80 < (double)a3 ) /*0x5ec469*/
    {
      v76 = a3; /*0x5ec471*/
      v81 = *(float *)&a7 - a4; /*0x5ec490*/
      v82 = *(float *)&a8 - a5; /*0x5ec4a2*/
      v79 = *(float *)&a9 - a6; /*0x5ec4b4*/
      v15 = dbl_A3D0C0;                         // BloodOnDeath decode 2026-05-30: trap blood emitter doubles the source-to-target vector, adds [-0.8,0.8] jitter, normalizes, then projects scene decals. Same outward math as actor hit blood. /*0x5ec4c4*/
      v81 = v81 * v15; /*0x5ec4c6*/
      v111 = v82 * v15; /*0x5ec4d0*/
      *(float *)&v77 = v15 * v79; /*0x5ec4db*/
      do /*0x5ec866*/
      {
        v83 = Rand4(flt_A6E68C, flt_A524B0); /*0x5ec4fa*/
        v84 = Rand4(flt_A6E68C, flt_A524B0); /*0x5ec516*/
        v85 = Rand4(flt_A6E68C, flt_A524B0); /*0x5ec532*/
        v79 = a10 + v83; /*0x5ec544*/
        v82 = a11 + v84; /*0x5ec553*/
        v78 = a12 + v85; /*0x5ec562*/
        v79 = v79 + v81; /*0x5ec56e*/
        v82 = v82 + v111; /*0x5ec57d*/
        v78 = v78 + *(float *)&v77; /*0x5ec589*/
        v86 = v79; /*0x5ec591*/
        v73 = v79; /*0x5ec59d*/
        v87 = v82; /*0x5ec5a1*/
        v74 = v82; /*0x5ec5ad*/
        v88 = v78; /*0x5ec5b1*/
        v75 = v78; /*0x5ec5bd*/
        Vector3_NormalizeInPlace(&v73); /*0x5ec5c1*/
        v16 = 0; /*0x5ec5d2*/
        v17 = this->vtbl->GetBaseForm(this); /*0x5ec5d6*/
        if ( v17 ) /*0x5ec5da*/
        {
          if ( this->vtbl->IsActor(this) ) /*0x5ec5e6*/
            v16 = v17; /*0x5ec5ec*/
        }
        if ( (*(int (__thiscall **)(UInt32 *))(v16[1].member.refID + 0x38))(&v16[1].member.refID) ) /*0x5ec5f7*/
        {
          v18 = 0; /*0x5ec60b*/
          v19 = this->vtbl->GetBaseForm(this); /*0x5ec60f*/
          if ( v19 ) /*0x5ec613*/
          {
            if ( this->vtbl->IsActor(this) ) /*0x5ec61f*/
              v18 = v19; /*0x5ec625*/
          }
          if ( *(_BYTE *)(*(int (__thiscall **)(UInt32 *))(v18[1].member.refID + 0x38))(&v18[1].member.refID) ) /*0x5ec632*/
          {
            v20 = 0; /*0x5ec645*/
            v21 = this->vtbl->GetBaseForm(this); /*0x5ec649*/
            if ( v21 ) /*0x5ec64d*/
            {
              if ( this->vtbl->IsActor(this) ) /*0x5ec659*/
                v20 = v21; /*0x5ec65f*/
            }
            v70 = COERCE_FLOAT((*(int (__thiscall **)(UInt32 *))(v20[1].member.refID + 0x38))(&v20[1].member.refID)); /*0x5ec67a*/
            v63 = LODWORD(v73); /*0x5ec680*/
            v66 = LODWORD(v74); /*0x5ec686*/
            v69 = LODWORD(v75); /*0x5ec690*/
            DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(this); /*0x5ec6b0*/
            Decal_ProjectToSceneGeometry(DwordAtOffset40, SLOBYTE(a2), a7, a8, (int)a9, v63, v66, v69, v70, 0.0, NAN, 0);// BloodOnDeath decode 2026-05-30: trap blood uses Decal_ProjectToSceneGeometry with explicitTarget=null for persistent scene marks; repeated calls form native trail-like blood paths. /*0x5ec6b7*/
          }
        }
        v23 = 0; /*0x5ec6c6*/
        v24 = this->vtbl->GetBaseForm(this); /*0x5ec6ca*/
        if ( v24 ) /*0x5ec6ce*/
        {
          if ( this->vtbl->IsActor(this) ) /*0x5ec6da*/
            v23 = v24; /*0x5ec6e0*/
        }
        if ( (*(int (__thiscall **)(UInt32 *))(v23[1].member.refID + 0x40))(&v23[1].member.refID) )// Verified trap particle admission: obtains receiver actor-base virtual +0x40 blood-particle path and enters the particle branch only when non-null. /*0x5ec6eb*/
        {
          v25 = 0; /*0x5ec6ff*/
          v26 = this->vtbl->GetBaseForm(this); /*0x5ec703*/
          if ( v26 ) /*0x5ec707*/
          {
            if ( this->vtbl->IsActor(this) ) /*0x5ec713*/
              v25 = v26; /*0x5ec719*/
          }
          if ( *(_BYTE *)(*(int (__thiscall **)(UInt32 *))(v25[1].member.refID + 0x40))(&v25[1].member.refID) )// Verified trap particle path: repeats receiver actor-base +0x40 lookup and requires the returned string to be nonempty before allocation/construction. /*0x5ec726*/
          {
            Shared_GetDwordAtOffset40(this); /*0x5ec731*/
            v27 = sub_4C9BE0(this); /*0x5ec741*/
            v28 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5ec743*/
            v29 = v27 + 2; /*0x5ec74a*/
            NiNode = TESObjectCELL_GetNiNode_(v28); /*0x5ec74d*/
            if ( NiNode /*0x5ec776*/
              && NiNode->members.children.end > v29
              && (v31 = *((_DWORD *)&NiNode->members.children.data->vtbl + v29)) != 0
              && *(_WORD *)(v31 + 0xB6) > 3u )
            {
              v32 = *(NiNode **)(*(_DWORD *)(v31 + 0xB0) + 0xC); /*0x5ec77e*/
            }
            else
            {
              v32 = 0; /*0x5ec783*/
            }
            a2 = COERCE_FLOAT(FormHeapAlloc(0x20u)); /*0x5ec78c*/
            v79 = a2; /*0x5ec791*/
            v33 = 0; /*0x5ec795*/
            v115 = 0; /*0x5ec799*/
            if ( a2 != 0.0 ) /*0x5ec7a0*/
            {
              bloodSourceBase = 0.0;            // Verified trap particle source is this struck TESObjectREFR's TESActorBaseData when it is an actor. The virtual +0x40 call at 0x5EC7D9 selects its blood particle NIF; comments and local names retain this path source. /*0x5ec7b0*/
              v78 = COERCE_FLOAT((int)this->vtbl->GetBaseForm(this)); /*0x5ec7b6*/
              if ( v78 != 0.0 && this->vtbl->IsActor(this) ) /*0x5ec7c6*/
                bloodSourceBase = v78; /*0x5ec7cc*/
              bloodParticlePath = (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(bloodSourceBase) + 0x24) + 0x40))(LODWORD(bloodSourceBase) + 0x24);// Verified: indirect actor-base virtual +0x40 returns the trap-hit blood particle path; stored as bloodParticlePath and passed to BSTempEffectParticle_Constructor at 0x5EC82E. /*0x5ec7d9*/
              v61 = v73; /*0x5ec80e*/
              v64 = v74; /*0x5ec814*/
              bloodParticlePathForCtor = (const char *)bloodParticlePath; /*0x5ec81b*/
              v67 = v75; /*0x5ec81d*/
              v36 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5ec826*/
              v33 = BSTempEffectParticle_Constructor( /*0x5ec82e*/
                      (BSTempEffectParticle *)LODWORD(a2),
                      v36,
                      1.0,
                      v32,
                      bloodParticlePathForCtor,
                      v61,
                      v64,
                      v67,
                      *(float *)&a7,
                      *(float *)&a8,
                      *(float *)&a9,
                      1.0,
                      1);                       // Verified trap blood constructor call: uses receiver actor's resolved particle NIF, cell, cell NiNode, computed direction vector, local hit position XYZ, scale 1.0 and cached-clone true; then registers the effect. Argument type recovery for the enclosing __userpurge function is imperfect for packed vector coordinates, so do not interpret its current a7/a8/a9 display types literally.
            }
            v115 = 0xFFFFFFFF; /*0x5ec839*/
            ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v33); /*0x5ec844*/
          }
        }
        v76 = v76 * dbl_A3C770;                 // BloodOnDeath decode 2026-05-30: trap scene-blood loop decays damage by 0.25 per decal pass, matching actor hit blood. More trails require more calls/pulses or higher effective damage before this decay. /*0x5ec853*/
      }
      while ( v80 < (double)v76 ); /*0x5ec866*/
      GetNiNode = this->vtbl->GetNiNode; /*0x5ec86e*/
      v95 = 0xFFFFFFFF; /*0x5ec876*/
      v38 = (NiObject *)GetNiNode(this); /*0x5ec887*/
      v76 = a3; /*0x5ec889*/
      if ( v38 ) /*0x5ec88f*/
      {
        if ( v80 < (double)a3 ) /*0x5ec8a0*/
        {
          v39 = this->vtbl->GetPos(this); /*0x5ec8b0*/
          v40 = *v39; /*0x5ec8b2*/
          v41 = v39[1]; /*0x5ec8b4*/
          v42 = v39[2]; /*0x5ec8b7*/
          v73 = v40; /*0x5ec8ba*/
          v43 = dbl_A46E48; /*0x5ec8c2*/
          v73 = v40 + v43; /*0x5ec8d4*/
          v74 = v41 + v43; /*0x5ec8de*/
          v75 = v43 + v42; /*0x5ec8e6*/
          if ( v80 < (double)a3 ) /*0x5ec8fc*/
          {
            v105 = v73 - *(float *)&a7; /*0x5ec90d*/
            v106 = v74 - *(float *)&a8; /*0x5ec91f*/
            v107 = v75 - *(float *)&a9; /*0x5ec931*/
            do /*0x5ecca8*/
            {
              v86 = Rand4(flt_A641B0, flt_A47E6C); /*0x5ec953*/
              v87 = Rand5(flt_A524B0); /*0x5ec968*/
              v88 = Rand4(flt_A641B0, flt_A47E6C); /*0x5ec984*/
              v44 = dbl_A3F3E8; /*0x5ec98f*/
              v99 = v86 * v44; /*0x5ec999*/
              v100 = v87 * v44; /*0x5ec9a6*/
              v101 = v44 * v88; /*0x5ec9b1*/
              v89 = v105 + v99; /*0x5ec9c6*/
              v90 = v106 + v100; /*0x5ec9d8*/
              v91 = v107 + v101; /*0x5ec9ea*/
              v45 = dbl_A2FAA0; /*0x5ec9fa*/
              v92 = v89 * v45; /*0x5ec9fc*/
              v93 = v90 * v45; /*0x5eca06*/
              v94 = v45 * v91; /*0x5eca0e*/
              v83 = v92 + *(float *)&a7; /*0x5eca1d*/
              v84 = v93 + *(float *)&a8; /*0x5eca2c*/
              v85 = v94 + *(float *)&a9; /*0x5eca3b*/
              v46 = Rand5(flt_A46B10); /*0x5eca48*/
              v77 = (int)floor(v46); /*0x5eca6f*/
              LOBYTE(v78) = v77; /*0x5eca77*/
              v73 = v83 - a4; /*0x5eca8a*/
              v74 = v84 - a5; /*0x5eca99*/
              v75 = v85 - a6; /*0x5ecaac*/
              Vector3_NormalizeInPlace(&v73); /*0x5ecab0*/
              v47 = dbl_A3C770; /*0x5ecac3*/
              v96 = v73 * v47; /*0x5ecac5*/
              v97 = v74 * v47; /*0x5ecacf*/
              v98 = v47 * v75; /*0x5ecad7*/
              v102 = a10 - v96; /*0x5ecae6*/
              v73 = v102; /*0x5ecafb*/
              v103 = a11 - v97; /*0x5ecb03*/
              v74 = v103; /*0x5ecb18*/
              v104 = a12 - v98; /*0x5ecb20*/
              v75 = v104; /*0x5ecb2e*/
              Vector3_NormalizeInPlace(&v73); /*0x5ecb36*/
              v48 = dbl_A46970; /*0x5ecb4a*/
              v108 = v73 * v48; /*0x5ecb4c*/
              v109 = v74 * v48; /*0x5ecb59*/
              v110 = v48 * v75; /*0x5ecb64*/
              *(float *)&v112 = v83 - v108; /*0x5ecb76*/
              *(float *)&v113 = v84 - v109; /*0x5ecb88*/
              *(float *)&v114 = v85 - v110; /*0x5ecb9a*/
              v49 = Rand5(flt_A46B14); /*0x5ecbaa*/
              vtbl = this->vtbl; /*0x5ecbaf*/
              *(float *)&v77 = v49; /*0x5ecbb1*/
              v51 = 0; /*0x5ecbc0*/
              v52 = (int)vtbl->GetBaseForm(this); /*0x5ecbc4*/
              if ( v52 ) /*0x5ecbc8*/
              {
                if ( this->vtbl->IsActor(this) ) /*0x5ecbd4*/
                  v51 = v52; /*0x5ecbda*/
              }
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v51 + 0x24) + 0x38))(v51 + 0x24) ) /*0x5ecbe5*/
              {
                v53 = 0; /*0x5ecbf9*/
                v54 = this->vtbl->GetBaseForm(this); /*0x5ecbfd*/
                if ( v54 ) /*0x5ecc01*/
                {
                  if ( this->vtbl->IsActor(this) ) /*0x5ecc0d*/
                    v53 = v54; /*0x5ecc13*/
                }
                if ( *(_BYTE *)(*(int (__thiscall **)(UInt32 *))(v53[1].member.refID + 0x38))(&v53[1].member.refID) ) /*0x5ecc20*/
                {
                  scale_4 = LODWORD(v78); /*0x5ecc2d*/
                  scale = v77; /*0x5ecc2f*/
                  BloodDecalTexturePath = Actor_GetBloodDecalTexturePath((Actor *)this); /*0x5ecc49*/
                  v60 = v73; /*0x5ecc4f*/
                  v62 = LODWORD(v74); /*0x5ecc55*/
                  v65 = LODWORD(v75); /*0x5ecc5f*/
                  v56 = v112; /*0x5ecc6e*/
                  durationSeconds = v113; /*0x5ecc77*/
                  v58 = v114; /*0x5ecc7c*/
                  v55 = (void *)Shared_GetDwordAtOffset40(this); /*0x5ecc7f*/
                  Decal_AttachToGeometryRecursive( /*0x5ecc86*/
                    v55,
                    v56,
                    durationSeconds,
                    v58,
                    v60,
                    v62,
                    v65,
                    BloodDecalTexturePath,
                    v38,
                    &v95,
                    0,
                    *(float *)&scale,
                    scale_4);                   // BloodOnDeath decode 2026-05-30: trap path separately attaches blood decals to the hit actor geometry after scene projection; floor/world trails should use the earlier scene projection call, not this actor-root attachment.
                }
              }
              v76 = v76 * dbl_A3C770; /*0x5ecc95*/
            }
            while ( v80 < (double)v76 ); /*0x5ecca8*/
          }
        }
      }
    }
  }
}
