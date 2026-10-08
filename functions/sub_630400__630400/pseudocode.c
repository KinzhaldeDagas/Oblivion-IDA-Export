char __userpurge sub_630400@<al>(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        double a5@<st7>,
        double a6@<st6>,
        double a7@<st5>,
        double a8@<st4>,
        double a9@<st3>,
        double a10@<st2>,
        double a11@<st1>,
        double a12@<st0>,
        TESChildCELL *a13,
        int a14)
{
  int v16; // ecx
  char v17; // al
  int v18; // ecx
  char v19; // al
  int v21; // eax
  int v22; // ecx
  char v23; // bl
  TESChildCELL *v24; // ecx
  int v25; // ebp
  int v26; // ecx
  float *v27; // eax
  float v28; // ecx
  float v29; // edx
  float v30; // eax
  float *v31; // ebp
  float *v32; // eax
  double v33; // st7
  double v34; // st7
  double v35; // st7
  int *v36; // ebx
  TESObjectCELL *DwordAtOffset40; // eax
  int v38; // eax
  char *v39; // eax
  float ***v40; // ebp
  int v41; // eax
  float *v42; // eax
  float v43; // edx
  float v44; // ecx
  float v45; // eax
  _DWORD *vtbl; // edx
  int (__thiscall *v47)(TESChildCELL *); // eax
  float *v48; // eax
  double v49; // st7
  double v50; // st7
  int v51; // edx
  float *v52; // eax
  double v53; // st7
  double v54; // st7
  char v55; // al
  TESChildCELL **v56; // eax
  ExtraDataList *v57; // ebp
  TESObjectREFR *v58; // ebx
  int v59; // ebp
  unsigned __int16 *v60; // eax
  int v61; // edx
  unsigned int *v62; // ebp
  float *v63; // ebx
  int v64; // ebp
  float *v65; // eax
  float v66; // ecx
  float v67; // edx
  float v68; // eax
  float *v69; // eax
  int v70; // ebp
  unsigned int *p_targetType; // ebx
  int v72; // ebp
  unsigned __int16 *v73; // eax
  int v74; // edx
  int v75; // ebp
  float *v76; // eax
  float v77; // ecx
  float v78; // edx
  float v79; // eax
  float *v80; // eax
  int v81; // ebp
  int v82; // eax
  int v83; // eax
  BSExtraDataVtbl *v84; // eax
  BSExtraDataVtbl *v85; // eax
  _DWORD **v86; // ebp
  TESPackage *v87; // eax
  int v88; // eax
  double v89; // st7
  int v90; // eax
  int v91; // ecx
  void (__thiscall **v92)(_DWORD *, TESChildCELL *, float *, BSExtraDataVtbl *, TESWorldSpace *, int, _DWORD); // ebx
  float *v93; // eax
  BSExtraDataVtbl *v94; // [esp-4h] [ebp-64h]
  int v95; // [esp+0h] [ebp-60h]
  TESWorldSpace *v96; // [esp+0h] [ebp-60h]
  int v97; // [esp+8h] [ebp-58h]
  float v98; // [esp+8h] [ebp-58h]
  int v102; // [esp+1Ch] [ebp-44h]
  unsigned int *v103; // [esp+20h] [ebp-40h]
  float *v104; // [esp+20h] [ebp-40h]
  float v105; // [esp+24h] [ebp-3Ch]
  int PointerAtOffset08; // [esp+24h] [ebp-3Ch]
  TESObjectREFR *v107; // [esp+24h] [ebp-3Ch]
  _DWORD *v108; // [esp+28h] [ebp-38h]
  TargetData *v109; // [esp+2Ch] [ebp-34h]
  float v110; // [esp+30h] [ebp-30h] BYREF
  float v111; // [esp+34h] [ebp-2Ch]
  float v112; // [esp+38h] [ebp-28h]
  float v113; // [esp+3Ch] [ebp-24h] BYREF
  float v114; // [esp+40h] [ebp-20h]
  float v115; // [esp+44h] [ebp-1Ch]
  float v116; // [esp+48h] [ebp-18h]
  float v117; // [esp+4Ch] [ebp-14h]
  float v118; // [esp+50h] [ebp-10h]
  float v119[3]; // [esp+54h] [ebp-Ch] BYREF
  char v120; // [esp+64h] [ebp+4h]
  TESChildCELL *v121; // [esp+64h] [ebp+4h]
  char v122; // [esp+64h] [ebp+4h]
  float v123; // [esp+64h] [ebp+4h]
  TESChildCELL *v124; // [esp+64h] [ebp+4h]
  UInt32 refID; // [esp+68h] [ebp+8h]
  char v126; // [esp+68h] [ebp+8h]

  v102 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))(*a1 + 0x184))( /*0x630412*/
           a1,
           a12,
           a11,
           a10,
           a9,
           a8,
           a7,
           a6);
  if ( !v102 ) /*0x630416*/
    return 0; /*0x630416*/
  v103 = sub_5E6780(a13); /*0x63042a*/
  if ( !v103 ) /*0x63042e*/
  {
    v16 = a1[0xB]; /*0x630434*/
    if ( !v16 /*0x630459*/
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 0x190))(v16)
      && (sub_4D88C0((TESObjectREFR *)a13, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v17) )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x558))(a1, a13); /*0x630466*/
      v18 = a1[0xB]; /*0x630468*/
      if ( !v18 /*0x63048d*/
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v18 + 0x190))(v18)
        && (sub_4D88C0((TESObjectREFR *)a13, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v19) )
      {
        (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a13, 1); /*0x63049c*/
        if ( !*((_BYTE *)a1 + 0xD0) ) /*0x63049e*/
        {
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a13); /*0x6304b6*/
          return 0; /*0x6304bf*/
        }
        return 0; /*0x6304a5*/
      }
    }
    v21 = a1[0x11]; /*0x6304c2*/
    if ( v21 ) /*0x6304c7*/
    {
      if ( *(TESChildCELL **)v21 == a13 ) /*0x6304cb*/
        v103 = sub_4D8D70(a13, *(TESForm **)(v21 + 4), 0); /*0x6304da*/
    }
  }
  v22 = a1[0xB]; /*0x6304de*/
  v23 = 0; /*0x6304e2*/
  v120 = 0; /*0x6304e7*/
  if ( v22 ) /*0x6304eb*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v22 + 0x190))(v22) ) /*0x6304f5*/
    {
      v24 = (TESChildCELL *)a1[0xB]; /*0x6304fb*/
      if ( v24 != a13 ) /*0x630500*/
      {
        v25 = 0; /*0x630502*/
        v120 = 1; /*0x630506*/
        if ( v24 ) /*0x63050b*/
        {
          if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))v24->vtbl + 0x64))(v24) ) /*0x630515*/
            v25 = a1[0xB]; /*0x63051b*/
        }
        v26 = *(_DWORD *)(*(_DWORD *)(v25 + 0x58) + 8); /*0x63052a*/
        if ( (PlayerCharacter *)a1[0xB] != reference /*0x630539*/
          && (!v26 || *(_BYTE *)(v26 + 0x20) != 1 && !TESPackage_IsRuntimePackage((TESPackage *)v26)) )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0); /*0x63054e*/
          return 0; /*0x630559*/
        }
        v23 = 1; /*0x63055c*/
      }
    }
  }
  v27 = (float *)(*((int (__thiscall **)(TESChildCELL *))a13->vtbl + 0x5D))(a13); /*0x63056a*/
  v28 = *v27; /*0x63056e*/
  v29 = v27[1]; /*0x630570*/
  v30 = v27[2]; /*0x630573*/
  v113 = v28; /*0x630576*/
  v114 = v29; /*0x63057a*/
  v115 = v30; /*0x63057e*/
  if ( v23 ) /*0x630582*/
  {
    v31 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x630593*/
    v32 = (float *)(*((int (__thiscall **)(TESChildCELL *))a13->vtbl + 0x5D))(a13); /*0x63059d*/
    v110 = *v32 - *v31; /*0x6305a4*/
    v33 = v32[1]; /*0x6305ac*/
    v113 = v110; /*0x6305af*/
    v111 = v33 - v31[1]; /*0x6305b6*/
    v34 = v32[2]; /*0x6305be*/
    v114 = v111; /*0x6305c1*/
    v112 = v34 - v31[2]; /*0x6305c8*/
    v115 = v112; /*0x6305d0*/
  }
  v35 = 0.0; /*0x6305d6*/
  v105 = 0.0; /*0x6305d8*/
  if ( v23 ) /*0x6305dc*/
  {
    v36 = (int *)a1[0xB]; /*0x6305e9*/
    PointerAtOffset08 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v102 + 0x28)); /*0x6305f3*/
    if ( PointerAtOffset08 <= 0 ) /*0x6305f7*/
      PointerAtOffset08 = 0xC8; /*0x6305f9*/
    if ( (PlayerCharacter *)a1[0xB] == reference ) /*0x63060a*/
    {
      v35 = (double)PointerAtOffset08; /*0x63060c*/
    }
    else if ( Shared_GetDwordAtOffset40(a13) /*0x630626*/
           && (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a13),
               TESObjectCELL_IsInterior(DwordAtOffset40)) )
    {
      v35 = *GameSetting_GetSafeFloatPointer(&flt_B36A88[6]); /*0x630639*/
    }
    else
    {
      v35 = (double)PointerAtOffset08 * flt_B36A88[4]; /*0x630641*/
    }
    v105 = v35; /*0x63064a*/
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a13[0x16].vtbl + 0x40C))(a13[0x16].vtbl) ) /*0x630656*/
    {
      v38 = (*(int (__thiscall **)(void *))(*(_DWORD *)a13[0x16].vtbl + 0x40C))(a13[0x16].vtbl); /*0x63066b*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v38 + 4))(v38) == 2 ) /*0x630679*/
      {
        v39 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a13[0x16].vtbl + 0x40C))(a13[0x16].vtbl); /*0x63068a*/
        v40 = (float ***)v39; /*0x63068c*/
        if ( v39 ) /*0x630690*/
        {
          v41 = sub_68A1B0(v39); /*0x630698*/
          if ( v41 ) /*0x63069f*/
            v42 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v41 + 0x174))(v41); /*0x6306ab*/
          else
            sub_68A160(v40); /*0x6306b1*/
          v43 = v42[1]; /*0x6306b6*/
          v44 = *v42; /*0x6306b9*/
          v45 = v42[2]; /*0x6306bb*/
          v111 = v43; /*0x6306be*/
          vtbl = a13->vtbl; /*0x6306c2*/
          v112 = v45; /*0x6306c4*/
          v47 = (int (__thiscall *)(TESChildCELL *))vtbl[0x5D]; /*0x6306c8*/
          v110 = v44; /*0x6306ce*/
          v48 = (float *)v47(a13); /*0x6306d4*/
          v116 = *v48 - v110; /*0x6306dc*/
          v49 = v48[1]; /*0x6306e4*/
          v119[0] = v116; /*0x6306e7*/
          v117 = v49 - v111; /*0x6306f1*/
          v50 = v48[2]; /*0x6306f9*/
          v119[1] = v117; /*0x6306fc*/
          v51 = *v36; /*0x630704*/
          v118 = v50 - v112; /*0x630706*/
          v119[2] = v118; /*0x63070e*/
          v52 = (float *)(*(int (__thiscall **)(int *))(v51 + 0x174))(v36); /*0x630718*/
          v116 = *v52 - v110; /*0x630720*/
          v53 = v52[1]; /*0x630728*/
          v110 = v116; /*0x63072b*/
          v117 = v53 - v111; /*0x630733*/
          v54 = v52[2]; /*0x63073b*/
          v111 = v117; /*0x63073e*/
          v35 = v54 - v112; /*0x630742*/
          v118 = v35; /*0x630746*/
          v112 = v118; /*0x63074e*/
        }
      }
    }
  }
  if ( !*(_DWORD *)(v102 + 0x24) /*0x630776*/
    || (v35 = sub_566DC0(
                (TESPackage *)v102,
                kTerrainLODQuadRayDirectionZ,
                a11,
                a10,
                (Actor *)a13,
                0,
                kTerrainLODQuadRayDirectionZ),
        !v55) )
  {
    v89 = sub_5677B0((TESPackage *)a1[2], v35, (TESObjectREFR *)a13, 2); /*0x630cad*/
    v90 = Double_To_SInt32(v89); /*0x630cb2*/
    v91 = a1[0xB]; /*0x630cb7*/
    v124 = (TESChildCELL *)v90; /*0x630cbc*/
    if ( !v91 /*0x630ce7*/
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v91 + 0x190))(v91)
      || (double)(int)v124 < TesObjectREF_GetDistance((TESObjectREFR *)a13, (TESObjectREFR *)a1[0xB], 0) )
    {
      v98 = (float)(int)v124; /*0x630cf5*/
      v92 = (void (__thiscall **)(_DWORD *, TESChildCELL *, float *, BSExtraDataVtbl *, TESWorldSpace *, int, _DWORD))(*a1 + 0x418); /*0x630cf9*/
      v96 = sub_566940((TESPackage *)a1[2], (Actor *)a13); /*0x630d0f*/
      v94 = sub_566A40((char **)a1[2], (Actor *)a13); /*0x630d19*/
      v93 = sub_566B30((TESPackage *)a1[2], v119, (Actor *)a13); /*0x630d20*/
      (*v92)(a1, a13, v93, v94, v96, a14, LODWORD(v98)); /*0x630d2b*/
    }
    return 0; /*0x630d30*/
  }
  if ( !v120 ) /*0x630780*/
  {
    v108 = *(_DWORD **)(v102 + 0x24); /*0x630792*/
    v109 = *(TargetData **)(v102 + 0x28); /*0x630796*/
    if ( v103 ) /*0x63079a*/
    {
      v56 = (TESChildCELL **)*v103; /*0x6307a0*/
      v57 = 0; /*0x6307a2*/
      v121 = 0; /*0x6307a6*/
      if ( *v103 ) /*0x6307a0*/
      {
        v57 = (ExtraDataList *)*v56; /*0x6307ac*/
        v121 = *v56; /*0x6307ae*/
      }
      refID = 0; /*0x6307b4*/
      if ( v57 ) /*0x6307b8*/
      {
        if ( ExtraDataList_GetReferencePointer(v57) ) /*0x6307bc*/
          refID = ExtraDataList_GetReferencePointer(v57)->member.super.refID; /*0x6307cf*/
      }
      v58 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v102 + 0x24)); /*0x6307df*/
      v107 = v58; /*0x6307e3*/
      if ( (v58 || (v58 = (TESObjectREFR *)a1[0xC], (v107 = v58) != 0)) && TESObjectREFR_GetContainer(v58) ) /*0x6307f6*/
      {
        v59 = v103[2]; /*0x63080e*/
        v60 = (unsigned __int16 *)Shared_GetPointerAtOffset08(*(Atmosphere **)(v102 + 0x28)); /*0x630812*/
        sub_5FC6D0((int)a13, a5, a6, a7, a8, a9, a10, a11, v35, v59, (int)v121, v58, v60, refID); /*0x630821*/
        v62 = v103; /*0x630826*/
      }
      else
      {
        if ( *v103 ) /*0x630833*/
          v121 = *(TESChildCELL **)*v103; /*0x63083b*/
        v63 = 0; /*0x630843*/
        if ( v108 ) /*0x630847*/
        {
          v64 = sub_5697E0(v108); /*0x630852*/
          if ( (v64 || (v64 = a1[0xC]) != 0) /*0x630887*/
            && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v64 + 0x170))(v64) == MEMORY[0xB35EAC]
             || (*(int (__thiscall **)(int))(*(_DWORD *)v64 + 0x170))(v64) == MEMORY[0xB35EB0]) )
          {
            v65 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v64 + 0x174))(v64); /*0x630894*/
            v66 = *v65; /*0x630896*/
            v67 = v65[1]; /*0x630898*/
            v68 = v65[2]; /*0x63089b*/
            v116 = v66; /*0x6308a0*/
            v117 = v67; /*0x6308a4*/
            v118 = v68; /*0x6308a8*/
            v69 = (float *)FormHeapAlloc(0xCu); /*0x6308ac*/
            if ( v69 ) /*0x6308b6*/
            {
              *v69 = v116; /*0x6308bc*/
              v69[1] = v117; /*0x6308c2*/
              v35 = v118; /*0x6308c5*/
              v69[2] = v118; /*0x6308c9*/
            }
            else
            {
              v69 = 0; /*0x6308ce*/
            }
            v63 = v69; /*0x6308d0*/
          }
        }
        v70 = 1; /*0x6308d6*/
        if ( !sub_569E60(v109).form ) /*0x6308db*/
          v70 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v102 + 0x28)); /*0x6308f0*/
        v95 = v70; /*0x630901*/
        v62 = v103; /*0x630902*/
        (*((void (__thiscall **)(TESChildCELL *, unsigned int, TESChildCELL *, int, float *, _DWORD))a13->vtbl + 0xB2))( /*0x63090d*/
          a13,
          v103[2],
          v121,
          v95,
          v63,
          0);
      }
      *((_BYTE *)a1 + 0x25D) = 0; /*0x630911*/
      ContainerEntryExtraData_DestroyDataTable(v62, v61); /*0x630918*/
      FormHeapFree((unsigned int)v62); /*0x63091e*/
      p_targetType = (unsigned int *)&v109->targetType; /*0x630923*/
      if ( sub_569E80(v109).form == (TESObjectREFR *)0xD /*0x630950*/
        || (int)sub_569E80(v109).form >= 0x15 && (int)sub_569E80(v109).form <= 0x19 )
      {
        while ( a1[0x10] || a1[0xF] ) /*0x630960*/
        {
          v97 = a1[0xF]; /*0x63096c*/
          a1[0x11] = v97; /*0x63096d*/
          BSSimpleList_Remove(a1 + 0xF, v97); /*0x630970*/
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *(_DWORD *)a1[0x11]); /*0x630985*/
          p_targetType = sub_4D8D70(a13, *(TESForm **)(a1[0x11] + 4), 0); /*0x630998*/
          if ( a1[0x11] ) /*0x63099a*/
            FormHeapFree(a1[0x11]); /*0x6309a2*/
          a1[0x11] = 0; /*0x6309b0*/
          if ( v107 && TESObjectREFR_GetContainer(v107) ) /*0x6309b5*/
          {
            v72 = p_targetType[2]; /*0x6309c9*/
            v73 = (unsigned __int16 *)Shared_GetPointerAtOffset08(*(Atmosphere **)(v102 + 0x28)); /*0x6309cd*/
            sub_5FC6D0((int)a13, a5, a6, a7, a8, a9, a10, a11, v35, v72, (int)v121, v107, v73, refID); /*0x6309e0*/
          }
          else
          {
            if ( *p_targetType ) /*0x6309ea*/
              v121 = *(TESChildCELL **)*p_targetType; /*0x6309f2*/
            v104 = 0; /*0x6309fa*/
            if ( v108 ) /*0x6309fe*/
            {
              v75 = sub_5697E0(v108); /*0x630a0d*/
              if ( (v75 || (v75 = a1[0xC]) != 0) /*0x630a42*/
                && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v75 + 0x170))(v75) == MEMORY[0xB35EAC]
                 || (*(int (__thiscall **)(int))(*(_DWORD *)v75 + 0x170))(v75) == MEMORY[0xB35EB0]) )
              {
                v76 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v75 + 0x174))(v75); /*0x630a4f*/
                v77 = *v76; /*0x630a51*/
                v78 = v76[1]; /*0x630a53*/
                v79 = v76[2]; /*0x630a56*/
                v116 = v77; /*0x630a5b*/
                v117 = v78; /*0x630a5f*/
                v118 = v79; /*0x630a63*/
                v80 = (float *)FormHeapAlloc(0xCu); /*0x630a67*/
                if ( v80 ) /*0x630a71*/
                {
                  *v80 = v116; /*0x630a77*/
                  v80[1] = v117; /*0x630a7d*/
                  v35 = v118; /*0x630a80*/
                  v80[2] = v118; /*0x630a84*/
                }
                else
                {
                  v80 = 0; /*0x630a89*/
                }
                v104 = v80; /*0x630a8b*/
              }
            }
            v81 = 1; /*0x630a93*/
            if ( !sub_569E60(v109).form ) /*0x630a98*/
              v81 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v102 + 0x28)); /*0x630aad*/
            (*((void (__thiscall **)(TESChildCELL *, unsigned int, TESChildCELL *, int, float *, _DWORD))a13->vtbl + 0xB2))( /*0x630aca*/
              a13,
              p_targetType[2],
              v121,
              v81,
              v104,
              0);
          }
          ContainerEntryExtraData_DestroyDataTable(p_targetType, v74); /*0x630ace*/
          FormHeapFree((unsigned int)p_targetType); /*0x630ad4*/
        }
        v82 = a1[2]; /*0x630ae1*/
        v126 = 1; /*0x630ae6*/
        v122 = 1; /*0x630aeb*/
        if ( v82 ) /*0x630af0*/
        {
          v83 = *(_DWORD *)(v82 + 0x1C); /*0x630af2*/
          v126 = (v83 & 0x100000) == 0; /*0x630aff*/
          v122 = (v83 & 0x200000) == 0; /*0x630b0b*/
        }
        if ( Actor::HasNPCBaseForm((Actor *)a13) ) /*0x630b12*/
        {
          v84 = (BSExtraDataVtbl *)(*((int (__thiscall **)(TESChildCELL *))a13->vtbl + 0x5C))(a13); /*0x630b25*/
          if ( v84 ) /*0x630b29*/
            sub_5227A0(v84, a10, a11, v35, (TESObjectREFR *)a13, v126, v122, 0, 1); /*0x630b3c*/
        }
        else if ( Actor_IsCreature((Actor *)a13) ) /*0x630b43*/
        {
          v85 = (BSExtraDataVtbl *)(*((int (__thiscall **)(TESChildCELL *))a13->vtbl + 0x5C))(a13); /*0x630b56*/
          if ( v85 ) /*0x630b5a*/
            sub_51E240(v85, (int)p_targetType, a10, a11, v35, (TESObjectREFR *)a13, v126, v122, 1); /*0x630b6b*/
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x630b7c*/
    }
    (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a13, 1); /*0x630b8b*/
    goto LABEL_106; /*0x630b8b*/
  }
  if ( v105 < NiPoint3_Length(&v113) /*0x630c32*/
    || (v123 = NiPoint3_Length(v119), v123 > NiPoint3_Length(&v110))
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a13, 1),
        v86 = (_DWORD **)a1[0xB],
        !(*(int (__thiscall **)(_DWORD *))(*v86[0x16] + 0x184))(v86[0x16]))
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v86[0x16] + 0x188))(v86[0x16], a13, 1),
        v87 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*v86[0x16] + 0x184))(v86[0x16]),
        !TESPackage_IsRuntimePackage(v87)) )
  {
LABEL_106:
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x630b8d*/
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a13); /*0x630ba5*/
      return 0; /*0x630bb0*/
    }
    return 0; /*0x630b94*/
  }
  v88 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*v86[0x16] + 0x184))(v86[0x16], a3, a2, a4); /*0x630c4a*/
  if ( v88 ) /*0x630c4e*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v88 + 0x10))(v88, 1); /*0x630c59*/
  v86[0x16][2] = 0; /*0x630c5e*/
  ((void (__thiscall *)(_DWORD **, int))(*v86)[0x11])(v86, 0x30000); /*0x630c6e*/
  if ( sub_5E05B0(v86) ) /*0x630c72*/
    sub_5E02B0(v86); /*0x630c7d*/
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x630c8e*/
  (*(void (__thiscall **)(_DWORD *, TESChildCELL *, _DWORD))(*a1 + 0x18))(a1, a13, 0); /*0x630c99*/
  return 0; /*0x6304bb*/
}
