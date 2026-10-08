char __usercall Cmd_PlaceAtMe@<al>(
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *a5,
        va_list a6,
        ScriptEventList *a7,
        double *a8,
        UInt32 *a9)
{
  float y; // ecx
  float z; // edx
  TESObjectREFRVtbl *vtbl; // eax
  float *v13; // eax
  NiNode *v14; // eax
  double v15; // st7
  UInt32 **v16; // edi
  double v17; // st6
  float v18; // eax
  bool v19; // zf
  double v20; // rt0
  double v21; // st5
  double v22; // st6
  long double v23; // st6
  double v24; // st6
  char *v25; // edi
  Actor *v26; // ecx
  int v27; // eax
  float *v28; // eax
  int v29; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  int *v31; // eax
  int *v32; // esi
  int v33; // edi
  UInt32 v34; // eax
  int v35; // edi
  TESObjectREFRVtbl *v36; // eax
  hkVector4 v37; // xmm0
  float *(__thiscall *GetPos)(TESObjectREFR *); // edx
  int v39; // eax
  float v40; // ecx
  float v41; // edx
  double v42; // st6
  float *v43; // eax
  float v44; // ecx
  float v45; // edx
  float v46; // eax
  double v47; // st7
  double v48; // rt2
  double v49; // st5
  double v50; // st4
  long double v51; // st3
  double v52; // st2
  double v53; // st6
  double v54; // st5
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  float v56; // ecx
  float v57; // edx
  TESObjectREFRVtbl *v58; // eax
  float *(__thiscall *v59)(TESObjectREFR *); // edx
  int v60; // eax
  double v61; // st6
  TESObjectCELL *v62; // eax
  va_list v63; // eax
  TESWorldSpace *WorldSpace; // [esp-Ch] [ebp-230h]
  int v65; // [esp-8h] [ebp-22Ch]
  TESWorldSpace *v66; // [esp-8h] [ebp-22Ch]
  BSSimpleList_VoidPtr::NodeVoid **p_next; // [esp-4h] [ebp-228h]
  int v68; // [esp+14h] [ebp-210h]
  void *l; // [esp+1Ch] [ebp-208h] BYREF
  float x; // [esp+20h] [ebp-204h] BYREF
  float v71; // [esp+24h] [ebp-200h]
  float v72; // [esp+28h] [ebp-1FCh]
  UInt32 *a3[2]; // [esp+2Ch] [ebp-1F8h]
  double v74; // [esp+34h] [ebp-1F0h]
  float v75; // [esp+3Ch] [ebp-1E8h]
  TESObjectREFR *v76; // [esp+40h] [ebp-1E4h]
  TESChildCELL *v77[2]; // [esp+44h] [ebp-1E0h]
  UInt16 v78[2]; // [esp+4Ch] [ebp-1D8h] BYREF
  int v79; // [esp+50h] [ebp-1D4h] BYREF
  va_list v80[2]; // [esp+54h] [ebp-1D0h]
  float v81; // [esp+5Ch] [ebp-1C8h] BYREF
  float v82; // [esp+60h] [ebp-1C4h]
  float v83; // [esp+64h] [ebp-1C0h]
  int v84; // [esp+68h] [ebp-1BCh] BYREF
  float v85; // [esp+6Ch] [ebp-1B8h]
  float v86; // [esp+70h] [ebp-1B4h] BYREF
  BSSimpleList_VoidPtr v87; // [esp+74h] [ebp-1B0h] BYREF
  float v88; // [esp+7Ch] [ebp-1A8h] BYREF
  float v89; // [esp+80h] [ebp-1A4h]
  int v90; // [esp+88h] [ebp-19Ch] BYREF
  long double v91; // [esp+8Ch] [ebp-198h] BYREF
  float v92; // [esp+9Ch] [ebp-188h]
  float v93; // [esp+A0h] [ebp-184h]
  float v94; // [esp+A4h] [ebp-180h]
  float v95; // [esp+A8h] [ebp-17Ch]
  float v96; // [esp+ACh] [ebp-178h]
  float v97; // [esp+B0h] [ebp-174h]
  double v98; // [esp+B4h] [ebp-170h]
  double *v99; // [esp+C0h] [ebp-164h] BYREF
  _DWORD v100[3]; // [esp+C4h] [ebp-160h] BYREF
  float v101[9]; // [esp+D0h] [ebp-154h] BYREF
  _DWORD v102[3]; // [esp+F4h] [ebp-130h] BYREF
  char v103; // [esp+100h] [ebp-124h] BYREF
  hkVector4 v104; // [esp+164h] [ebp-C0h]
  hkVector4 v105; // [esp+174h] [ebp-B0h]
  bhkWorldRayCastData a2; // [esp+184h] [ebp-A0h] BYREF
  unsigned int v107; // [esp+218h] [ebp-Ch]
  int v108; // [esp+220h] [ebp-4h]

  a3[0] = a9; /*0x514ba4*/
  v80[0] = a6; /*0x514bb5*/
  l = a7; /*0x514bc1*/
  *a8 = 0.0; /*0x514bcc*/
  v99 = a8; /*0x514be1*/
  *(_DWORD *)v78 = 0; /*0x514beb*/
  v79 = 1; /*0x514bef*/
  v84 = 0; /*0x514bf7*/
  v90 = 0; /*0x514bfe*/
  if ( !Script_ExtractArgs(a1, arg4, a3[0], a4, a5, (Script *)v80[0], (ScriptEventList *)l, v78, &v79, &v84, &v90) ) /*0x514c05*/
    return 0; /*0x514c13*/
  v80[0] = 0; /*0x514c1a*/
  if ( a4 ) /*0x514c1e*/
  {
    y = a4->member.rot.y; /*0x514c27*/
    z = a4->member.rot.z; /*0x514c2a*/
    v100[0] = LODWORD(a4->member.rot.x); /*0x514c2d*/
    vtbl = a4->vtbl; /*0x514c34*/
    *(float *)&v100[1] = y; /*0x514c36*/
    *(float *)&v100[2] = z; /*0x514c3d*/
    v13 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))vtbl->GetPos)(a4, st7_0); /*0x514c4c*/
    x = *v13; /*0x514c54*/
    v71 = v13[1]; /*0x514c5b*/
    v72 = v13[2]; /*0x514c62*/
    if ( v84 ) /*0x514c66*/
    {
      v14 = a4->vtbl->GetNiNode(a4); /*0x514c76*/
      if ( v14 ) /*0x514c7a*/
      {
        qmemcpy(v101, &v14->members.super.m_localTransform, sizeof(v101)); /*0x514c8f*/
        x = v14->members.super.m_localTransform.pos.x; /*0x514c94*/
        v71 = v14->members.super.m_localTransform.pos.y; /*0x514c9b*/
        v72 = v14->members.super.m_localTransform.pos.z; /*0x514ca2*/
        if ( v90 < 2 || v90 > 3 ) /*0x514cb5*/
        {
          *(float *)&v74 = v101[1]; /*0x514cdd*/
          *((float *)&v74 + 1) = v101[4]; /*0x514ce8*/
          v15 = v101[7]; /*0x514cec*/
        }
        else
        {
          *(float *)&v74 = v101[0]; /*0x514cbe*/
          *((float *)&v74 + 1) = v101[3]; /*0x514cc9*/
          v15 = v101[6]; /*0x514ccd*/
        }
        v75 = v15; /*0x514cf5*/
        *(float *)&l = (float)v84; /*0x514cfd*/
        *(float *)&v74 = *(float *)&v74 * *(float *)&l; /*0x514d0b*/
        *((float *)&v74 + 1) = *((float *)&v74 + 1) * *(float *)&l; /*0x514d15*/
        v75 = *(float *)&l * v75; /*0x514d1d*/
        if ( v90 <= 0 || v90 > 2 ) /*0x514d26*/
        {
          x = x + *(float *)&v74; /*0x514d52*/
          v71 = v71 + *((float *)&v74 + 1); /*0x514d5e*/
          st7_0 = v72 + v75; /*0x514d66*/
        }
        else
        {
          x = x - *(float *)&v74; /*0x514d30*/
          v71 = v71 - *((float *)&v74 + 1); /*0x514d3c*/
          st7_0 = v72 - v75; /*0x514d44*/
        }
        v72 = st7_0; /*0x514d6a*/
      }
    }
    *(float *)v102 = x;                         // 3DTheft decode: non-leveled PlaceAtMe candidate 0 is the requested center point copied from the caller/offset position. /*0x514d7d*/
    *(float *)&v102[1] = v71; /*0x514d84*/
    *(float *)&v102[2] = v72; /*0x514d8b*/
    *(float *)&l = COERCE_FLOAT(Game_RandomLargeInteger(0)); /*0x514d97*/
    v16 = (UInt32 **)&v103; /*0x514da2*/
    *(float *)a3 = (double)(int)l * dbl_A4D918 / dbl_A3D5A8; /*0x514db5*/
    *(float *)&l = 0.0 * fCostant_100; /*0x514dc1*/
    v98 = x; /*0x514dc9*/
    v74 = v71; /*0x514dd4*/
    v17 = *(float *)&l; /*0x514dd8*/
    l = (void *)8;                              // 3DTheft decode: PlaceAtMe builds eight additional 100-unit ring candidates around candidate 0; these are only reached as the per-ref candidate index advances. /*0x514ddc*/
    v83 = v17 + v72; /*0x514de8*/
    do /*0x514e97*/
    {
      v91 = *(float *)a3; /*0x514df4*/
      *(float *)a3 = sin(*(float *)a3); /*0x514e00*/
      v77[0] = (TESChildCELL *)a3[0]; /*0x514e08*/
      *(float *)a3 = cos(v91); /*0x514e18*/
      v18 = v83; /*0x514e20*/
      v87.firstNode.next = (BSSimpleList_VoidPtr::NodeVoid *)a3[0]; /*0x514e24*/
      v16 += 3; /*0x514e28*/
      v19 = l == (void *)1; /*0x514e2b*/
      l = (char *)l + 0xFFFFFFFF; /*0x514e2b*/
      v20 = fCostant_100; /*0x514e3c*/
      v21 = *(float *)a3 * v20; /*0x514e3c*/
      *(float *)a3 = v21; /*0x514e3e*/
      *(float *)v77 = v20 * *(float *)v77; /*0x514e46*/
      *(float *)a3 = *(float *)a3 + v98; /*0x514e55*/
      *(float *)v77 = *(float *)v77 + v74; /*0x514e61*/
      v81 = *(float *)a3; /*0x514e69*/
      v22 = *(float *)v77; /*0x514e71*/
      v16[0xFFFFFFFD] = a3[0]; /*0x514e75*/
      v82 = v22; /*0x514e78*/
      v23 = v91; /*0x514e80*/
      *((float *)v16 + 0xFFFFFFFE) = v82; /*0x514e87*/
      v24 = v23 + dbl_A4D918; /*0x514e8a*/
      *((float *)v16 + 0xFFFFFFFF) = v18; /*0x514e90*/
      *(float *)a3 = v24; /*0x514e93*/
    }
    while ( !v19 ); /*0x514e97*/
    v25 = *(char **)v78; /*0x514e9d*/
    if ( *(_BYTE *)(*(_DWORD *)v78 + 4) == 0x25 )// 3DTheft decode 2026-05-14: Cmd_PlaceAtMe checks base form type 0x25 (LVLC/TESLevCreature) before normal PlaceObjectRef. LVLC is resolved first, not passed directly to PlaceObjectRef. /*0x514ea5*/
    {
      v77[0] = *(TESChildCELL **)v78; /*0x514eaf*/
      TESContainer_constr((TESContainer *)&v87.firstNode.next); /*0x514eb3*/
      p_next = &v87.firstNode.next; /*0x514ec0*/
      v26 = (Actor *)reference; /*0x514ec1*/
      v65 = v79; /*0x514ec7*/
      v108 = 0; /*0x514ec8*/
      LOWORD(v27) = Actor_GetLevel(v26); /*0x514ecf*/
      TESLeveledList_CalcLeveledForm(v25 + 0x24, v27, v65);// 3DTheft decode 2026-05-14: PlaceAtMe resolves TESLevCreature.leveledList at player Actor_GetLevel into a temporary TESContainer before spawning concrete forms. /*0x514ed8*/
      if ( nullsub_returnFalse_1arg(0) ) /*0x514ee3*/
        sub_4AFA80(v25, &v87); /*0x514ef3*/
      v28 = &v88; /*0x514ef8*/
      v72 = COERCE_FLOAT(&v88); /*0x514eff*/
      while ( *((_DWORD *)v28 + 1) || *(_DWORD *)v28 ) /*0x514f09*/
      {
        v29 = *(_DWORD *)v28; /*0x514f16*/
        if ( *(_DWORD *)v28 ) /*0x514f1a*/
        {
          if ( *(_DWORD *)(v29 + 4) ) /*0x514f20*/
          {
            if ( *(int *)v29 > 0 ) /*0x514f27*/
            {
              do /*0x514f91*/
              {
                WorldSpace = TESObjectREFR_GetWorldSpace(a4);// PlaceAtMe call setup: push existingRef=0, worldspace, parentCell, rot[3], pos[3], baseForm; ECX=*g_dataHandler; call TESDataHandler_PlaceObjectRef. /*0x514f38*/
                DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x514f3b*/
                TESDataHandler_PlaceObjectRef( /*0x514f58*/
                  v21,
                  v24,
                  st7_0,
                  *(TESForm **)(v29 + 4),
                  (int)&l,
                  (int)&v99,
                  DwordAtOffset40,
                  WorldSpace,
                  0);                           // PlaceAtMe leveled-list branch calls TESDataHandler::PlaceObjectRef using the calling ref's current parent cell and worldspace.
                v32 = v31; /*0x514f5d*/
                v79 = (int)v31; /*0x514f61*/
                if ( v31 ) /*0x514f65*/
                {
                  v33 = *v31; /*0x514f6b*/
                  v34 = Shared_GetDwordAtOffset40(v76); /*0x514f6d*/
                  (*(void (__thiscall **)(int *, UInt32, BSSimpleList_VoidPtr::NodeVoid **))(v33 + 0x12C))( /*0x514f7b*/
                    v32,
                    v34,
                    p_next);
                  sub_4D7A90(v32, 1); /*0x514f81*/
                  v29 = v68; /*0x514f86*/
                }
                --*(_DWORD *)v29; /*0x514f8a*/
              }
              while ( *(int *)v29 > 0 ); /*0x514f91*/
              v28 = (float *)LODWORD(v71); /*0x514f93*/
            }
          }
        }
        v71 = v28[1]; /*0x514f9c*/
        if ( v71 == 0.0 ) /*0x514fa0*/
          break; /*0x514fa0*/
        v28 = (float *)LODWORD(v71); /*0x514f05*/
      }
      v107 = 0xFFFFFFFF; /*0x514faa*/
      TESContainer_destr(&v86); /*0x514fb5*/
    }
    else
    {
      v35 = 0; /*0x514fbf*/
      *(float *)&l = 0.0; /*0x514fc5*/
      if ( v79 > 0 ) /*0x514fc9*/
      {
        do /*0x514fcf*/
        {
          v36 = a4->vtbl;                       // 3DTheft decode: direct non-leveled spawn loop starts with candidate index 0, so count=1 uses the requested center point. /*0x514fcf*/
          v37 = unk_BA7A40; /*0x514fd3*/
          a2.WorldRayCastOutput.HitFraction = 1.0;// 3DTheft decode: PlaceAtMe initializes bhkWorldRayCastData output hitFraction=1.0 before spawn placement raycast. /*0x514fda*/
          GetPos = v36->GetPos; /*0x514fe1*/
          a2.WorldRayCastInput.EnableShapeCollectionFilter = 0; /*0x514fe9*/
          a2.WorldRayCastOutput.RootCollidable = 0; /*0x514ff1*/
          memset(&a2.BroadPhaseAabbCache, 0, 0xC); /*0x514ff8*/
          a2.unk60 = v37; /*0x51500d*/
          a2.WorldRayCastInput.FilterInfo = 0x3001B;// 3DTheft decode: PlaceAtMe raycast uses filterInfo 0x3001B and shape collection filter disabled. /*0x515015*/
          v39 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))GetPos)(a4, st7_0); /*0x515020*/
          v40 = *(float *)v39; /*0x515022*/
          v41 = *(float *)(v39 + 4); /*0x515024*/
          v94 = *(float *)(v39 + 8); /*0x51502a*/
          v42 = dbl_A4D910; /*0x515038*/
          v43 = (float *)&v102[3 * v35]; /*0x515043*/
          v92 = v40; /*0x51504a*/
          v44 = *v43; /*0x515053*/
          v94 = v94 + v42; /*0x515055*/
          v93 = v41; /*0x51505c*/
          v45 = v43[1]; /*0x515063*/
          v46 = v43[2]; /*0x515066*/
          v85 = v44; /*0x515071*/
          v86 = v45; /*0x515075*/
          *(float *)&v87.firstNode.data = v42 + v46; /*0x515079*/
          v47 = v92; /*0x51507d*/
          v74 = v92; /*0x515084*/
          v48 = hkFactor; /*0x515092*/
          v104.x = v92 * v48; /*0x515094*/
          v49 = v93; /*0x51509b*/
          *(double *)v77 = v93; /*0x5150a2*/
          v104.y = v93 * v48; /*0x5150aa*/
          v50 = v94; /*0x5150b1*/
          v98 = v94; /*0x5150b8*/
          v104.z = v94 * v48; /*0x5150c3*/
          v51 = v44; /*0x5150d2*/
          a2.WorldRayCastInput.From = v104; /*0x5150d6*/
          v91 = v44; /*0x5150de*/
          a2.unk60 = unk_BA7A40; /*0x5150ee*/
          v105.x = v44 * v48; /*0x5150f8*/
          v52 = v45; /*0x5150ff*/
          *(double *)v80 = v45; /*0x515103*/
          v105.y = v45 * v48; /*0x51510b*/
          *(double *)a3 = *(float *)&v87.firstNode.data; /*0x515116*/
          v53 = *(float *)&v87.firstNode.data; /*0x51511e*/
          v105.z = v48 * *(float *)&v87.firstNode.data; /*0x515120*/
          a2.WorldRayCastInput.To = v105; /*0x515131*/
          if ( v44 != v92 || v52 != v49 || v53 != v50 ) /*0x515156*/
          {
            TES::CastRay(MEMORY[0xB333A0], &a2);// 3DTheft decode: single PlaceAtMe spawn casts from caller position +64 GU to target +64 GU using TES::CastRay at 0x446A10. /*0x515172*/
            v47 = v74; /*0x515177*/
            v53 = *(double *)a3; /*0x51517b*/
            v51 = v91; /*0x51518a*/
            v49 = *(double *)v77; /*0x515197*/
            v52 = *(double *)v80; /*0x515199*/
            v50 = v98; /*0x515199*/
          }
          if ( a2.WorldRayCastOutput.RootCollidable ) /*0x5151a2*/
          {
            v81 = v51 - v47; /*0x5151b2*/
            v54 = v52 - v49; /*0x5151b8*/
            v82 = v54; /*0x5151ba*/
            v83 = v53 - v50; /*0x5151c0*/
            Vector3_NormalizeInPlace(&v81); /*0x5151c4*/
            *(float *)v77 = sub_46D5C0(*(void **)v78);// 3DTheft decode: on ray hit, PlaceAtMe backs target position away by model radius helper 0x46D5C0 before PlaceObjectRef. /*0x5151d5*/
            v95 = v81 * *(float *)v77; /*0x5151e6*/
            v96 = v82 * *(float *)v77; /*0x5151f3*/
            v97 = *(float *)v77 * v83; /*0x5151fe*/
            *(float *)&v87.firstNode.next = v91 - v95; /*0x515213*/
            next = v87.firstNode.next; /*0x515217*/
            v88 = *(double *)v80 - v96; /*0x515226*/
            v56 = v88; /*0x51522a*/
            st7_0 = *(double *)a3 - v97; /*0x515235*/
            v89 = st7_0; /*0x515239*/
            v57 = v89; /*0x515240*/
          }
          else
          {
            *(float *)&next = v85; /*0x515249*/
            v56 = v86; /*0x51524f*/
            v57 = *(float *)&v87.firstNode.data; /*0x515255*/
            v54 = v50; /*0x515259*/
            st7_0 = v53; /*0x51525d*/
          }
          x = *(float *)&next; /*0x515261*/
          v58 = a4->vtbl; /*0x515265*/
          v72 = v57; /*0x515267*/
          v59 = v58->GetPos; /*0x51526b*/
          v71 = v56; /*0x515271*/
          v60 = (int)v59(a4); /*0x515277*/
          v61 = *(float *)(v60 + 8); /*0x515279*/
          v72 = *(float *)(v60 + 8); /*0x51527d*/
          v66 = TESObjectREFR_GetWorldSpace(a4); /*0x515288*/
          v62 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a4); /*0x51528b*/
          TESDataHandler_PlaceObjectRef(v54, v61, st7_0, *(TESForm **)v78, (int)&x, (int)v100, v62, v66, 0);// 3DTheft decode: direct non-leveled PlaceAtMe call to TESDataHandler::PlaceObjectRef; branch returns without MoveToGroundLevel. /*0x5152a9*/
          v80[0] = v63;                         // 3DTheft decode: direct PlaceAtMe only checks PlaceObjectRef return for null after call; no post-placement distance validation before success/count advance. /*0x5152b0*/
          if ( !v63 ) /*0x5152b4*/
            return 0;                           // 3DTheft decode: null returned ref is the direct non-leveled PlaceAtMe failure path. /*0x5152b4*/
          if ( ++v35 == 9 ) /*0x5152c0*/
            v35 = 0; /*0x5152c2*/
          l = (char *)l + 1; /*0x5152cf*/
        }
        while ( (int)l < v79 ); /*0x514fcf*/
      }
    }
    HIDWORD(v91) = 0; /*0x5152d9*/
    if ( *(_DWORD *)v78 ) /*0x5152e6*/
    {
      HIDWORD(v91) = *(_DWORD *)(*(_DWORD *)v78 + 0xC); /*0x5152fb*/
      sub_4F9FB0((_DWORD *)&v91 + 1, (_DWORD *)HIDWORD(v98)); /*0x515302*/
    }
  }
  return 1; /*0x51530c*/
}
