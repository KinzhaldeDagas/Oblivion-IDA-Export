char __userpurge sub_64E320@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        double a4@<st7>,
        double a5@<st6>,
        double a6@<st5>,
        double a7@<st4>,
        double a8@<st3>,
        double a9@<st2>,
        double a10@<st1>,
        double a11@<st0>,
        TESChildCELL *a12)
{
  int v13; // ebp
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  char v18; // al
  int v20; // eax
  int v21; // ecx
  TESChildCELL *v22; // eax
  int v23; // ecx
  float *v24; // eax
  float v25; // ecx
  float v26; // edx
  float v27; // eax
  float *v28; // ebx
  float *v29; // eax
  double v30; // st7
  double v31; // st7
  double v32; // st7
  TESObjectCELL *DwordAtOffset40; // eax
  void *v34; // eax
  float ***v35; // eax
  float ***v36; // ebx
  float *v37; // eax
  float *v38; // ebp
  float *v39; // eax
  double v40; // st7
  float *v41; // eax
  float *v42; // ebp
  float *v43; // eax
  char v44; // al
  TESChildCELL **v45; // eax
  ExtraDataList *v46; // ebp
  TESObjectREFR *v47; // ebx
  unsigned __int16 *v48; // eax
  int v49; // edx
  TESChildCELL **v50; // eax
  int v51; // ebp
  float *v52; // eax
  float v53; // ecx
  float v54; // edx
  float v55; // eax
  float *v56; // eax
  int v57; // ebx
  unsigned int *p_targetType; // ebx
  int v59; // ebp
  unsigned __int16 *v60; // eax
  int v61; // edx
  int v62; // ebp
  float *v63; // eax
  float v64; // ecx
  float v65; // edx
  float v66; // eax
  float *v67; // eax
  int v68; // ebp
  int v69; // eax
  int v70; // eax
  void *v71; // eax
  BSExtraDataVtbl *v72; // eax
  void *v73; // eax
  BSExtraDataVtbl *v74; // eax
  _DWORD **v75; // ebp
  TESPackage *v76; // eax
  int v77; // eax
  double v78; // st7
  int v79; // eax
  int v80; // ecx
  void (__thiscall **v81)(_DWORD *, TESChildCELL *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD); // ebx
  float *v82; // eax
  BSExtraDataVtbl *v83; // [esp-8h] [ebp-74h]
  TESWorldSpace *v84; // [esp-4h] [ebp-70h]
  float v85; // [esp+0h] [ebp-6Ch]
  int v86; // [esp+4h] [ebp-68h]
  float v87; // [esp+4h] [ebp-68h]
  unsigned int *v90; // [esp+18h] [ebp-54h]
  int v91; // [esp+1Ch] [ebp-50h]
  float v92; // [esp+20h] [ebp-4Ch]
  int PointerAtOffset08; // [esp+20h] [ebp-4Ch]
  _DWORD *v94; // [esp+20h] [ebp-4Ch]
  UInt32 refID; // [esp+24h] [ebp-48h]
  TESObjectREFR *v96; // [esp+28h] [ebp-44h]
  TargetData *v97; // [esp+2Ch] [ebp-40h]
  char v98; // [esp+2Ch] [ebp-40h]
  float v99; // [esp+30h] [ebp-3Ch]
  int v100; // [esp+30h] [ebp-3Ch]
  int v101; // [esp+30h] [ebp-3Ch]
  float *v102; // [esp+30h] [ebp-3Ch]
  float *v103; // [esp+30h] [ebp-3Ch]
  double v104; // [esp+30h] [ebp-3Ch]
  float v105; // [esp+34h] [ebp-38h]
  float v106; // [esp+38h] [ebp-34h]
  float v107; // [esp+3Ch] [ebp-30h] BYREF
  float v108; // [esp+40h] [ebp-2Ch]
  float v109; // [esp+44h] [ebp-28h]
  float v110; // [esp+48h] [ebp-24h]
  float v111; // [esp+4Ch] [ebp-20h]
  float v112; // [esp+50h] [ebp-1Ch]
  float v113[3]; // [esp+54h] [ebp-18h] BYREF
  float v114[3]; // [esp+60h] [ebp-Ch] BYREF
  char v115; // [esp+70h] [ebp+4h]
  TESChildCELL *v116; // [esp+70h] [ebp+4h]
  char v117; // [esp+70h] [ebp+4h]
  TESChildCELL *v118; // [esp+70h] [ebp+4h]

  v13 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))(*a1 + 0x184))( /*0x64e331*/
          a1,
          a11,
          a10,
          a9,
          a8,
          a7,
          a6,
          a5);
  v91 = v13; /*0x64e335*/
  if ( !v13 ) /*0x64e339*/
    return 0; /*0x64e339*/
  v90 = sub_5E6780(a12); /*0x64e34d*/
  if ( !v90 ) /*0x64e351*/
  {
    v15 = a1[0xB]; /*0x64e357*/
    if ( !v15 /*0x64e37c*/
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x190))(v15)
      && (sub_4D88C0((TESObjectREFR *)a12, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v16) )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x558))(a1, a12); /*0x64e389*/
      v17 = a1[0xB]; /*0x64e38b*/
      if ( !v17 /*0x64e3b0*/
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17)
        && (sub_4D88C0((TESObjectREFR *)a12, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v18) )
      {
        (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a12, 1); /*0x64e3bf*/
        if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64e3c1*/
        {
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a12); /*0x64e3d9*/
          return 0; /*0x64e3e3*/
        }
        return 0; /*0x64e3c8*/
      }
    }
    v20 = a1[0x11]; /*0x64e3e6*/
    if ( v20 ) /*0x64e3eb*/
    {
      if ( *(TESChildCELL **)v20 == a12 ) /*0x64e3ef*/
        v90 = sub_4D8D70(a12, *(TESForm **)(v20 + 4), 0); /*0x64e3fe*/
    }
  }
  v21 = a1[0xB]; /*0x64e402*/
  v115 = 0; /*0x64e407*/
  if ( v21 ) /*0x64e40c*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 0x190))(v21) ) /*0x64e416*/
    {
      v22 = (TESChildCELL *)a1[0xB]; /*0x64e41c*/
      if ( v22 != a12 ) /*0x64e421*/
      {
        v115 = 1; /*0x64e432*/
        v23 = *(_DWORD *)(*((_DWORD *)OblivionDynamicCast( /*0x64e442*/
                                        v22,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                        &Actor `RTTI Type Descriptor',
                                        0)
                          + 0x16)
                        + 8);
        if ( (PlayerCharacter *)a1[0xB] != reference /*0x64e45a*/
          && (!v23 || *(_BYTE *)(v23 + 0x20) != 1 && !TESPackage_IsRuntimePackage((TESPackage *)v23)) )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0); /*0x64e46f*/
          return 0; /*0x64e479*/
        }
      }
    }
  }
  v24 = (float *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5D))(a12); /*0x64e487*/
  v25 = *v24; /*0x64e48e*/
  v26 = v24[1]; /*0x64e490*/
  v27 = v24[2]; /*0x64e493*/
  v107 = v25; /*0x64e496*/
  v108 = v26; /*0x64e49a*/
  v109 = v27; /*0x64e49e*/
  if ( v115 ) /*0x64e4a2*/
  {
    v28 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x64e4b3*/
    v29 = (float *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5D))(a12); /*0x64e4bd*/
    v99 = *v29 - *v28; /*0x64e4c3*/
    v30 = v29[1]; /*0x64e4cb*/
    v107 = v99; /*0x64e4ce*/
    v105 = v30 - v28[1]; /*0x64e4d5*/
    v31 = v29[2]; /*0x64e4dd*/
    v108 = v105; /*0x64e4e0*/
    v106 = v31 - v28[2]; /*0x64e4e7*/
    v109 = v106; /*0x64e4ef*/
  }
  v32 = 0.0; /*0x64e4f8*/
  v92 = 0.0; /*0x64e4fa*/
  if ( v115 ) /*0x64e4fe*/
  {
    v100 = a1[0xB]; /*0x64e507*/
    PointerAtOffset08 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v13 + 0x28)); /*0x64e515*/
    if ( PointerAtOffset08 <= 0 ) /*0x64e519*/
      PointerAtOffset08 = 0xC8; /*0x64e51b*/
    if ( (PlayerCharacter *)a1[0xB] == reference ) /*0x64e52c*/
    {
      v32 = (double)PointerAtOffset08; /*0x64e52e*/
    }
    else
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a12); /*0x64e536*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x64e53d*/
        v32 = flt_B36A88[6]; /*0x64e546*/
      else
        v32 = (double)PointerAtOffset08 * flt_B36A88[4]; /*0x64e552*/
    }
    v92 = v32; /*0x64e55b*/
    v34 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)a12[0x16].vtbl + 0x40C))(a12[0x16].vtbl); /*0x64e575*/
    v35 = (float ***)OblivionDynamicCast( /*0x64e578*/
                       v34,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
                       &PathHigh `RTTI Type Descriptor',
                       0);
    v36 = v35; /*0x64e57d*/
    if ( v35 ) /*0x64e584*/
    {
      sub_68A160(v35); /*0x64e58c*/
      v38 = v37; /*0x64e591*/
      v39 = (float *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5D))(a12); /*0x64e59d*/
      v110 = *v39 - *v38; /*0x64e5a4*/
      v111 = v39[1] - v38[1]; /*0x64e5ae*/
      v40 = v39[2] - v38[2]; /*0x64e5bd*/
      v113[1] = v111; /*0x64e5c0*/
      v113[0] = v110; /*0x64e5c6*/
      v112 = v40; /*0x64e5ca*/
      v113[2] = v112; /*0x64e5d2*/
      sub_68A160(v36); /*0x64e5d6*/
      v42 = v41; /*0x64e5df*/
      v43 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v100 + 0x174))(v100); /*0x64e5e9*/
      v110 = *v43 - *v42; /*0x64e5f0*/
      v111 = v43[1] - v42[1]; /*0x64e5fa*/
      v32 = v43[2] - v42[2]; /*0x64e609*/
      v13 = v91; /*0x64e60c*/
      v114[0] = v110; /*0x64e610*/
      v114[1] = v111; /*0x64e614*/
      v112 = v32; /*0x64e618*/
      v114[2] = v112; /*0x64e620*/
    }
  }
  if ( !*(_DWORD *)(v13 + 0x24) /*0x64e644*/
    || (v32 = sub_566DC0(
                (TESPackage *)v13,
                kTerrainLODQuadRayDirectionZ,
                a10,
                a9,
                (Actor *)a12,
                0,
                kTerrainLODQuadRayDirectionZ),
        !v44) )
  {
    v78 = sub_5677B0((TESPackage *)a1[2], v32, (TESObjectREFR *)a12, 2); /*0x64ebb7*/
    v79 = Double_To_SInt32(v78); /*0x64ebbc*/
    v80 = a1[0xB]; /*0x64ebc1*/
    v118 = (TESChildCELL *)v79; /*0x64ebc6*/
    if ( !v80 /*0x64ebf2*/
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v80 + 0x190))(v80)
      || (double)(int)v118 < TesObjectREF_GetDistance((TESObjectREFR *)a12, (TESObjectREFR *)a1[0xB], 0) )
    {
      v87 = (float)(int)v118; /*0x64ec00*/
      v81 = (void (__thiscall **)(_DWORD *, TESChildCELL *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD))(*a1 + 0x418); /*0x64ec04*/
      v85 = flt_A71E4C; /*0x64ec10*/
      v84 = sub_566940((TESPackage *)a1[2], (Actor *)a12); /*0x64ec1c*/
      v83 = sub_566A40((char **)a1[2], (Actor *)a12); /*0x64ec26*/
      v82 = sub_566B30((TESPackage *)a1[2], v114, (Actor *)a12); /*0x64ec2d*/
      (*v81)(a1, a12, v82, v83, v84, LODWORD(v85), LODWORD(v87)); /*0x64ec38*/
    }
    return 0; /*0x64ec3d*/
  }
  if ( !v115 ) /*0x64e64f*/
  {
    v94 = *(_DWORD **)(v13 + 0x24); /*0x64e660*/
    v97 = *(TargetData **)(v13 + 0x28); /*0x64e664*/
    if ( v90 ) /*0x64e668*/
    {
      v45 = (TESChildCELL **)*v90; /*0x64e672*/
      v46 = 0; /*0x64e674*/
      v116 = 0; /*0x64e678*/
      if ( *v90 ) /*0x64e672*/
      {
        v116 = *v45; /*0x64e680*/
        v46 = (ExtraDataList *)*v45; /*0x64e684*/
      }
      refID = 0; /*0x64e688*/
      if ( v46 ) /*0x64e690*/
      {
        if ( ExtraDataList_GetReferencePointer(v46) ) /*0x64e694*/
          refID = ExtraDataList_GetReferencePointer(v46)->member.super.refID; /*0x64e6a7*/
      }
      v47 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v91 + 0x24)); /*0x64e6b7*/
      v96 = v47; /*0x64e6bb*/
      if ( (v47 || (v47 = (TESObjectREFR *)a1[0xC], (v96 = v47) != 0)) && TESObjectREFR_GetContainer(v47) ) /*0x64e6ce*/
      {
        v101 = v90[2]; /*0x64e6ea*/
        v48 = (unsigned __int16 *)Shared_GetPointerAtOffset08(*(Atmosphere **)(v91 + 0x28)); /*0x64e6ee*/
        sub_5FC6D0((int)a12, a4, a5, a6, a7, a8, a9, a10, v32, v101, (int)v46, v47, v48, refID); /*0x64e6fd*/
      }
      else
      {
        v50 = (TESChildCELL **)*v90; /*0x64e70b*/
        if ( *v90 ) /*0x64e70b*/
        {
          v116 = *v50; /*0x64e713*/
          v46 = (ExtraDataList *)*v50; /*0x64e717*/
        }
        v102 = 0; /*0x64e71e*/
        if ( v94 ) /*0x64e726*/
        {
          v51 = sub_5697E0(v94); /*0x64e735*/
          if ( (v51 || (v51 = a1[0xC]) != 0) /*0x64e76a*/
            && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v51 + 0x170))(v51) == MEMORY[0xB35EAC]
             || (*(int (__thiscall **)(int))(*(_DWORD *)v51 + 0x170))(v51) == MEMORY[0xB35EB0]) )
          {
            v52 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v51 + 0x174))(v51); /*0x64e777*/
            v53 = *v52; /*0x64e779*/
            v54 = v52[1]; /*0x64e77b*/
            v55 = v52[2]; /*0x64e77e*/
            v110 = v53; /*0x64e783*/
            v111 = v54; /*0x64e787*/
            v112 = v55; /*0x64e78b*/
            v56 = (float *)FormHeapAlloc(0xCu); /*0x64e78f*/
            if ( v56 ) /*0x64e799*/
            {
              *v56 = v110; /*0x64e79f*/
              v56[1] = v111; /*0x64e7a5*/
              v32 = v112; /*0x64e7a8*/
              v56[2] = v112; /*0x64e7ac*/
            }
            else
            {
              v56 = 0; /*0x64e7b1*/
            }
            v102 = v56; /*0x64e7b3*/
          }
          v46 = (ExtraDataList *)v116; /*0x64e7b7*/
        }
        v57 = 1; /*0x64e7bf*/
        if ( !sub_569E60(v97).form ) /*0x64e7c4*/
          v57 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v91 + 0x28)); /*0x64e7d9*/
        (*((void (__thiscall **)(TESChildCELL *, unsigned int, ExtraDataList *, int, float *, _DWORD))a12->vtbl + 0xB2))( /*0x64e7f6*/
          a12,
          v90[2],
          v46,
          v57,
          v102,
          0);
      }
      ContainerEntryExtraData_DestroyDataTable(v90, v49); /*0x64e7fe*/
      FormHeapFree((unsigned int)v90); /*0x64e804*/
      p_targetType = (unsigned int *)&v97->targetType; /*0x64e809*/
      if ( sub_569E80(v97).form == (TESObjectREFR *)0xD /*0x64e836*/
        || (int)sub_569E80(v97).form >= 0x15 && (int)sub_569E80(v97).form <= 0x19 )
      {
        while ( a1[0x10] || a1[0xF] ) /*0x64e84a*/
        {
          v86 = a1[0xF]; /*0x64e856*/
          a1[0x11] = v86; /*0x64e857*/
          BSSimpleList_Remove(a1 + 0xF, v86); /*0x64e85a*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *(_DWORD *)a1[0x11]); /*0x64e86f*/
          p_targetType = sub_4D8D70(a12, *(TESForm **)(a1[0x11] + 4), 0); /*0x64e882*/
          if ( a1[0x11] ) /*0x64e884*/
            FormHeapFree(a1[0x11]); /*0x64e88c*/
          a1[0x11] = 0; /*0x64e89a*/
          if ( v96 && TESObjectREFR_GetContainer(v96) ) /*0x64e89f*/
          {
            v59 = p_targetType[2]; /*0x64e8b3*/
            v60 = (unsigned __int16 *)Shared_GetPointerAtOffset08(*(Atmosphere **)(v91 + 0x28)); /*0x64e8b7*/
            sub_5FC6D0((int)a12, a4, a5, a6, a7, a8, a9, a10, v32, v59, (int)v116, v96, v60, refID); /*0x64e8ca*/
          }
          else
          {
            if ( *p_targetType ) /*0x64e8d4*/
              v116 = *(TESChildCELL **)*p_targetType; /*0x64e8dc*/
            v103 = 0; /*0x64e8e4*/
            if ( v94 ) /*0x64e8e8*/
            {
              v62 = sub_5697E0(v94); /*0x64e8f7*/
              if ( (v62 || (v62 = a1[0xC]) != 0) /*0x64e92c*/
                && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v62 + 0x170))(v62) == MEMORY[0xB35EAC]
                 || (*(int (__thiscall **)(int))(*(_DWORD *)v62 + 0x170))(v62) == MEMORY[0xB35EB0]) )
              {
                v63 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v62 + 0x174))(v62); /*0x64e939*/
                v64 = *v63; /*0x64e93b*/
                v65 = v63[1]; /*0x64e93d*/
                v66 = v63[2]; /*0x64e940*/
                v110 = v64; /*0x64e945*/
                v111 = v65; /*0x64e949*/
                v112 = v66; /*0x64e94d*/
                v67 = (float *)FormHeapAlloc(0xCu); /*0x64e951*/
                if ( v67 ) /*0x64e95b*/
                {
                  *v67 = v110; /*0x64e961*/
                  v67[1] = v111; /*0x64e967*/
                  v32 = v112; /*0x64e96a*/
                  v67[2] = v112; /*0x64e96e*/
                }
                else
                {
                  v67 = 0; /*0x64e973*/
                }
                v103 = v67; /*0x64e975*/
              }
            }
            v68 = 1; /*0x64e97d*/
            if ( !sub_569E60(v97).form ) /*0x64e982*/
              v68 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v91 + 0x28)); /*0x64e997*/
            (*((void (__thiscall **)(TESChildCELL *, unsigned int, TESChildCELL *, int, float *, _DWORD))a12->vtbl + 0xB2))( /*0x64e9b4*/
              a12,
              p_targetType[2],
              v116,
              v68,
              v103,
              0);
          }
          ContainerEntryExtraData_DestroyDataTable(p_targetType, v61); /*0x64e9b8*/
          FormHeapFree((unsigned int)p_targetType); /*0x64e9be*/
        }
        v69 = a1[2]; /*0x64e9cb*/
        v98 = 1; /*0x64e9d0*/
        v117 = 1; /*0x64e9d5*/
        if ( v69 ) /*0x64e9da*/
        {
          v70 = *(_DWORD *)(v69 + 0x1C); /*0x64e9dc*/
          v98 = (v70 & 0x100000) == 0; /*0x64e9e9*/
          v117 = (v70 & 0x200000) == 0; /*0x64e9f5*/
        }
        if ( Actor::HasNPCBaseForm((Actor *)a12) ) /*0x64e9fc*/
        {
          v71 = (void *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5C))(a12); /*0x64ea1d*/
          v72 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64ea20*/
                                     v71,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESNPC `RTTI Type Descriptor',
                                     0);
          if ( v72 ) /*0x64ea2a*/
            sub_5227A0(v72, a9, a10, v32, (TESObjectREFR *)a12, v98, v117, 0, 1); /*0x64ea3d*/
        }
        else
        {
          v73 = (void *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5C))(a12); /*0x64ea58*/
          v74 = (BSExtraDataVtbl *)OblivionDynamicCast( /*0x64ea5b*/
                                     v73,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESCreature `RTTI Type Descriptor',
                                     0);
          if ( v74 ) /*0x64ea65*/
            sub_51E240(v74, (int)p_targetType, a9, a10, v32, (TESObjectREFR *)a12, v98, v117, 1); /*0x64ea76*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x64ea87*/
    }
    (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a12, 1); /*0x64ea96*/
    goto LABEL_96; /*0x64ea96*/
  }
  if ( v92 < NiPoint3_Length(&v107) /*0x64eb37*/
    || (v104 = NiPoint3_Length(v113), NiPoint3_Length(v114) < v104)
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a12, 1),
        v75 = (_DWORD **)a1[0xB],
        !(*(int (__thiscall **)(_DWORD *))(*v75[0x16] + 0x184))(v75[0x16]))
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v75[0x16] + 0x188))(v75[0x16], a12, 1),
        v76 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*v75[0x16] + 0x184))(v75[0x16]),
        !TESPackage_IsRuntimePackage(v76)) )
  {
LABEL_96:
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64ea98*/
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a12); /*0x64eab0*/
      return 0; /*0x64eabb*/
    }
    return 0; /*0x64ea9f*/
  }
  v77 = (*(int (__thiscall **)(_DWORD *, int, int))(*v75[0x16] + 0x184))(v75[0x16], a2, a3); /*0x64eb4f*/
  if ( v77 ) /*0x64eb53*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v77 + 0x10))(v77, 1); /*0x64eb5e*/
  v75[0x16][2] = 0; /*0x64eb63*/
  ((void (__thiscall *)(_DWORD **, int))(*v75)[0x11])(v75, 0x30000); /*0x64eb77*/
  if ( sub_5E05B0(v75) ) /*0x64eb7b*/
    sub_5E02B0(v75); /*0x64eb86*/
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x64eb97*/
  (*(void (__thiscall **)(_DWORD *, TESChildCELL *, _DWORD))(*a1 + 0x18))(a1, a12, 0); /*0x64eba3*/
  return 0; /*0x64e3dc*/
}
