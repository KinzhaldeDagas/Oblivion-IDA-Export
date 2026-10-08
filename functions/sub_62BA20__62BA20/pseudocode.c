void __userpurge sub_62BA20(
        _DWORD *a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double st7_0@<st0>,
        Concurrency::details::SchedulerBase *a10)
{
  int v12; // ebx
  unsigned int *v13; // ebp
  int v14; // ecx
  char v15; // al
  int v16; // ecx
  char v17; // al
  int v18; // eax
  int v19; // ecx
  PlayerCharacter *v20; // eax
  TESPackage *editorPackage; // ecx
  int v22; // edx
  float *v23; // eax
  float v24; // ecx
  float v25; // edx
  float v26; // eax
  float *v27; // ebp
  float *v28; // eax
  double v29; // st7
  double v30; // st7
  double v31; // st7
  PlayerCharacter *v32; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  int v34; // eax
  char *v35; // eax
  float ***v36; // ebp
  int v37; // eax
  float *v38; // eax
  float *v39; // eax
  double v40; // st7
  double v41; // st7
  PlayerCharacterVtbl *vtbl; // edx
  float *v43; // eax
  char v44; // al
  _DWORD *v45; // eax
  int v46; // edx
  unsigned int *v47; // esi
  _DWORD *v48; // ebp
  TESChildCELL **v49; // eax
  ExtraDataList *v50; // ebx
  TESObjectREFR *v51; // ebx
  int v52; // eax
  _DWORD *v53; // eax
  int v54; // ebp
  unsigned __int16 *v55; // eax
  int v56; // edx
  unsigned int *v57; // ebp
  float *v58; // ebx
  int v59; // ebp
  float *v60; // eax
  float v61; // ecx
  float v62; // edx
  float v63; // eax
  float *v64; // eax
  int v65; // ebp
  int v66; // edx
  _DWORD *v67; // eax
  unsigned int *p_targetType; // ebx
  int v69; // ebp
  unsigned __int16 *v70; // eax
  int v71; // edx
  int v72; // ebp
  float *v73; // eax
  float v74; // ecx
  float v75; // edx
  float v76; // eax
  float *v77; // eax
  int v78; // ebp
  int v79; // eax
  int v80; // eax
  BSExtraDataVtbl *v81; // eax
  BSExtraDataVtbl *v82; // eax
  _DWORD **v83; // ebp
  TESPackage *v84; // eax
  int v85; // eax
  void *v86; // eax
  char v87; // al
  Actor *v88; // eax
  TESPackage *CurrentPackage; // eax
  double v90; // st7
  int v91; // eax
  double v92; // st7
  void (__thiscall **v93)(_DWORD *, Concurrency::details::SchedulerBase *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD); // ebp
  float *v94; // eax
  void (__thiscall **v95)(_DWORD *, Concurrency::details::SchedulerBase *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *); // ebp
  float *v96; // ebx
  BSExtraDataVtbl *v97; // eax
  float v98; // [esp+4h] [ebp-70h]
  char v99[4]; // [esp+8h] [ebp-6Ch]
  float v100; // [esp+8h] [ebp-6Ch]
  BSExtraDataVtbl *v101; // [esp+8h] [ebp-6Ch]
  TESWorldSpace *v102; // [esp+Ch] [ebp-68h]
  int v103; // [esp+10h] [ebp-64h]
  float v104; // [esp+10h] [ebp-64h]
  TESWorldSpace *v105; // [esp+10h] [ebp-64h]
  unsigned int *v106; // [esp+24h] [ebp-50h]
  float *v107; // [esp+24h] [ebp-50h]
  int v108; // [esp+2Ch] [ebp-48h]
  float v109; // [esp+30h] [ebp-44h]
  int PointerAtOffset08; // [esp+30h] [ebp-44h]
  TESObjectREFR *v111; // [esp+30h] [ebp-44h]
  PlayerCharacter *v112; // [esp+34h] [ebp-40h]
  UInt32 refID; // [esp+34h] [ebp-40h]
  TargetData *v114; // [esp+3Ch] [ebp-38h]
  char v115; // [esp+3Ch] [ebp-38h]
  float v116; // [esp+3Ch] [ebp-38h]
  _DWORD *v117; // [esp+40h] [ebp-34h]
  float v118; // [esp+40h] [ebp-34h]
  float v119; // [esp+40h] [ebp-34h]
  float v120; // [esp+40h] [ebp-34h]
  float v121; // [esp+40h] [ebp-34h]
  float v122; // [esp+40h] [ebp-34h]
  float v123; // [esp+40h] [ebp-34h]
  int v124; // [esp+40h] [ebp-34h]
  float v125; // [esp+44h] [ebp-30h]
  float v126; // [esp+44h] [ebp-30h]
  float v127; // [esp+48h] [ebp-2Ch]
  float v128; // [esp+48h] [ebp-2Ch]
  float v129; // [esp+4Ch] [ebp-28h]
  float v130; // [esp+4Ch] [ebp-28h]
  float v131; // [esp+50h] [ebp-24h] BYREF
  float v132; // [esp+54h] [ebp-20h]
  float v133; // [esp+58h] [ebp-1Ch]
  float v134; // [esp+5Ch] [ebp-18h]
  float v135; // [esp+60h] [ebp-14h]
  float v136; // [esp+64h] [ebp-10h]
  float v137; // [esp+68h] [ebp-Ch] BYREF
  float v138; // [esp+6Ch] [ebp-8h]
  float v139; // [esp+70h] [ebp-4h]
  char v140; // [esp+78h] [ebp+4h]
  TESChildCELL *v141; // [esp+78h] [ebp+4h]
  char v142; // [esp+78h] [ebp+4h]

  v12 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*a1 + 0x184))( /*0x62ba37*/
          a1,
          st7_0,
          a8,
          a7,
          a6,
          a5,
          a4,
          a3,
          a2);
  v108 = v12; /*0x62ba3b*/
  v13 = sub_5E6780(a10); /*0x62ba44*/
  v106 = v13; /*0x62ba48*/
  if ( !v13 ) /*0x62ba4c*/
  {
    v14 = a1[0xB]; /*0x62ba52*/
    if ( !v14 /*0x62ba77*/
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x190))(v14)
      && (sub_4D88C0((TESObjectREFR *)a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v15) )
    {
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *))(*a1 + 0x558))(a1, a10); /*0x62ba84*/
      v16 = a1[0xB]; /*0x62ba86*/
      if ( !v16 /*0x62baab*/
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 0x190))(v16)
        && (sub_4D88C0((TESObjectREFR *)a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v17) )
      {
        (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*a1 + 0x188))(a1, a10, 1); /*0x62baba*/
        if ( *((_BYTE *)a1 + 0xD0) ) /*0x62babc*/
          return; /*0x62bac3*/
        goto LABEL_9; /*0x62bac3*/
      }
    }
    v18 = a1[0x11]; /*0x62bae0*/
    if ( v18 ) /*0x62bae5*/
    {
      if ( *(Concurrency::details::SchedulerBase **)v18 == a10 ) /*0x62bae9*/
      {
        v13 = sub_4D8D70(a10, *(TESForm **)(v18 + 4), 0); /*0x62baf8*/
        v106 = v13; /*0x62bafa*/
      }
    }
  }
  v19 = a1[0xB]; /*0x62bafe*/
  v140 = 0; /*0x62bb03*/
  if ( v19 ) /*0x62bb08*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 0x190))(v19) ) /*0x62bb12*/
    {
      v20 = (PlayerCharacter *)a1[0xB]; /*0x62bb18*/
      if ( v20 != (PlayerCharacter *)a10 ) /*0x62bb1d*/
      {
        editorPackage = v20->super.super.super.process->editorPackage; /*0x62bb28*/
        v140 = 1; /*0x62bb2b*/
        if ( v20 != reference /*0x62bb3c*/
          && (!editorPackage
           || editorPackage->members.type != kPackageType_Follow && !TESPackage_IsRuntimePackage(editorPackage)) )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0); /*0x62bb51*/
          if ( v13 ) /*0x62bb55*/
          {
            ContainerEntryExtraData_DestroyDataTable(v13, v22); /*0x62bb5d*/
            FormHeapFree((unsigned int)v13); /*0x62bb63*/
          }
          return; /*0x62bb72*/
        }
      }
    }
  }
  v23 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x174))(a10); /*0x62bb7f*/
  v24 = *v23; /*0x62bb86*/
  v25 = v23[1]; /*0x62bb88*/
  v26 = v23[2]; /*0x62bb8b*/
  v131 = v24; /*0x62bb8e*/
  v132 = v25; /*0x62bb92*/
  v133 = v26; /*0x62bb96*/
  if ( v140 ) /*0x62bb9a*/
  {
    v27 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]); /*0x62bbab*/
    v28 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x174))(a10); /*0x62bbb5*/
    v125 = *v28 - *v27; /*0x62bbbc*/
    v29 = v28[1]; /*0x62bbc4*/
    v131 = v125; /*0x62bbc7*/
    v127 = v29 - v27[1]; /*0x62bbce*/
    v30 = v28[2]; /*0x62bbd6*/
    v132 = v127; /*0x62bbd9*/
    v129 = v30 - v27[2]; /*0x62bbe0*/
    v133 = v129; /*0x62bbe8*/
  }
  v31 = 0.0; /*0x62bbec*/
  v32 = 0; /*0x62bbee*/
  v109 = 0.0; /*0x62bbf5*/
  if ( v140 ) /*0x62bbf9*/
  {
    v32 = (PlayerCharacter *)a1[0xB]; /*0x62bbff*/
    v112 = v32; /*0x62bc05*/
    PointerAtOffset08 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v12 + 0x28)); /*0x62bc10*/
    if ( PointerAtOffset08 <= 0 ) /*0x62bc14*/
      PointerAtOffset08 = 0xC8; /*0x62bc16*/
    if ( (PlayerCharacter *)a1[0xB] == reference ) /*0x62bc27*/
    {
      v31 = (double)PointerAtOffset08; /*0x62bc29*/
    }
    else
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a10); /*0x62bc31*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x62bc38*/
        v31 = flt_B36A88[6]; /*0x62bc41*/
      else
        v31 = (double)PointerAtOffset08 * flt_B36A88[4]; /*0x62bc4d*/
    }
    v109 = v31; /*0x62bc56*/
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)a10 + 0x16) + 0x40C))(*((_DWORD *)a10 + 0x16)) ) /*0x62bc62*/
    {
      v34 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)a10 + 0x16) + 0x40C))(*((_DWORD *)a10 + 0x16)); /*0x62bc77*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 4))(v34) == 2 ) /*0x62bc85*/
      {
        v35 = (char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a10 + 0x16) + 0x40C))(*((_DWORD *)a10 + 0x16)); /*0x62bc96*/
        v36 = (float ***)v35; /*0x62bc98*/
        if ( v35 ) /*0x62bc9c*/
        {
          v37 = sub_68A1B0(v35); /*0x62bca4*/
          if ( v37 ) /*0x62bcab*/
            v38 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x174))(v37); /*0x62bcb7*/
          else
            sub_68A160(v36); /*0x62bcbd*/
          v128 = v38[1]; /*0x62bcca*/
          v130 = v38[2]; /*0x62bcd0*/
          v126 = *v38; /*0x62bcda*/
          v39 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x174))(a10); /*0x62bce0*/
          v134 = *v39 - v126; /*0x62bce8*/
          v40 = v39[1]; /*0x62bcf0*/
          v137 = v134; /*0x62bcf3*/
          v135 = v40 - v128; /*0x62bcff*/
          v41 = v39[2]; /*0x62bd07*/
          v138 = v135; /*0x62bd0a*/
          vtbl = v112->vtbl; /*0x62bd12*/
          v136 = v41 - v130; /*0x62bd14*/
          v139 = v136; /*0x62bd1c*/
          v43 = vtbl->super.super.super.GetPos((TESObjectREFR *)v112); /*0x62bd26*/
          v134 = *v43 - v126; /*0x62bd2e*/
          v125 = v134; /*0x62bd39*/
          v135 = v43[1] - v128; /*0x62bd41*/
          v127 = v135; /*0x62bd4c*/
          v31 = v43[2] - v130; /*0x62bd50*/
          v136 = v31; /*0x62bd54*/
          v129 = v136; /*0x62bd5c*/
        }
        v32 = v112; /*0x62bd60*/
      }
    }
  }
  if ( *(_DWORD *)(v12 + 0x24) /*0x62bd84*/
    && (v31 = sub_566DC0(
                (TESPackage *)v12,
                kTerrainLODQuadRayDirectionZ,
                a8,
                a7,
                (Actor *)a10,
                0,
                kTerrainLODQuadRayDirectionZ),
        v44) )
  {
    if ( v140 ) /*0x62bd8f*/
    {
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*a1 + 0x188))(a1, a10, 1); /*0x62c2b9*/
      v83 = (_DWORD **)a1[0xB]; /*0x62c2bb*/
      if ( (*(int (__thiscall **)(_DWORD *))(*v83[0x16] + 0x184))(v83[0x16]) ) /*0x62c2c9*/
      {
        (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*v83[0x16] + 0x188))( /*0x62c2dd*/
          v83[0x16],
          a10,
          1);
        v84 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*v83[0x16] + 0x184))(v83[0x16]); /*0x62c2ea*/
        if ( TESPackage_IsRuntimePackage(v84) ) /*0x62c2ee*/
        {
          v85 = (*(int (__thiscall **)(_DWORD *))(*v83[0x16] + 0x184))(v83[0x16]); /*0x62c302*/
          if ( v85 ) /*0x62c306*/
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v85 + 0x10))(v85, 1); /*0x62c311*/
          v83[0x16][2] = 0; /*0x62c316*/
          ((void (__thiscall *)(_DWORD **, int))(*v83)[0x11])(v83, 0x30000); /*0x62c32a*/
          if ( sub_5E05B0(v83) ) /*0x62c32e*/
            sub_5E02B0(v83); /*0x62c339*/
          (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x62c34a*/
          (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, _DWORD))(*a1 + 0x18))(a1, a10, 0); /*0x62c356*/
          if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x380))(a10) ) /*0x62c362*/
          {
            if ( (*(_DWORD *)(a1[2] + 0x1C) & 0x800000) == 0 ) /*0x62c378*/
            {
              v86 = (void *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x380))(a10); /*0x62c388*/
              sub_5E9A60(v86, v31); /*0x62c38c*/
              if ( !v87 ) /*0x62c393*/
              {
                v88 = (Actor *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x380))(a10); /*0x62c39f*/
                sub_5F80D0(v88); /*0x62c3a3*/
                *((float *)a1 + 0x6A) = 0.0; /*0x62c3aa*/
              }
              (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x230))(a10); /*0x62c3ba*/
            }
          }
          return; /*0x62c3c3*/
        }
      }
    }
    else
    {
      v45 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x164))(a10); /*0x62bd9f*/
      if ( v45 && !ActorAnimData_IsIdleInactive(v45) ) /*0x62bda7*/
      {
        v47 = v106; /*0x62bdb0*/
        if ( !v106 ) /*0x62bdb6*/
          return; /*0x62bdb6*/
        goto LABEL_46; /*0x62bdb6*/
      }
      v48 = *(_DWORD **)(v12 + 0x24); /*0x62bddc*/
      v117 = v48; /*0x62bde2*/
      v114 = *(TargetData **)(v12 + 0x28); /*0x62bde6*/
      if ( v106 ) /*0x62bdea*/
      {
        v49 = (TESChildCELL **)*v106; /*0x62bdf0*/
        v50 = 0; /*0x62bdf2*/
        v141 = 0; /*0x62bdf6*/
        if ( *v106 ) /*0x62bdf0*/
        {
          v50 = (ExtraDataList *)*v49; /*0x62bdfc*/
          v141 = *v49; /*0x62bdfe*/
        }
        refID = 0; /*0x62be04*/
        if ( v50 ) /*0x62be0c*/
        {
          if ( ExtraDataList_GetReferencePointer(v50) ) /*0x62be10*/
            refID = ExtraDataList_GetReferencePointer(v50)->member.super.refID; /*0x62be23*/
        }
        v51 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v108 + 0x24)); /*0x62be33*/
        v111 = v51; /*0x62be37*/
        if ( (v51 || (v111 = (TESObjectREFR *)a1[0xC], (v51 = v111) != 0)) && TESObjectREFR_GetContainer(v51) ) /*0x62be4e*/
        {
          if ( !*((_BYTE *)a1 + 0x25D) ) /*0x62be57*/
          {
            *((_BYTE *)a1 + 0x25D) = 1; /*0x62be60*/
            v52 = (int)v51->vtbl->GetBaseForm(v51); /*0x62be72*/
            sub_6286E0(a1, (int)a10, v52, v51); /*0x62be78*/
LABEL_58:
            v47 = v106; /*0x62be7d*/
LABEL_46:
            ContainerEntryExtraData_DestroyDataTable(v47, v46); /*0x62bdbc*/
            FormHeapFree((unsigned int)v47); /*0x62bdc4*/
            return; /*0x62bdd3*/
          }
          v53 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x164))(a10); /*0x62be90*/
          if ( v53 && !ActorAnimData_IsIdleInactive(v53) ) /*0x62be9f*/
            goto LABEL_58; /*0x62be9f*/
          v54 = v106[2]; /*0x62beb0*/
          v55 = (unsigned __int16 *)Shared_GetPointerAtOffset08(*(Atmosphere **)(v108 + 0x28)); /*0x62beb4*/
          sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v31, v54, (int)v141, v51, v55, refID); /*0x62bec3*/
          v57 = v106; /*0x62bec8*/
        }
        else
        {
          if ( *v106 ) /*0x62bed5*/
            v141 = *(TESChildCELL **)*v106; /*0x62bedd*/
          v58 = 0; /*0x62bee1*/
          if ( v48 ) /*0x62bee5*/
          {
            v59 = sub_5697E0(v48); /*0x62bef2*/
            if ( (v59 || (v59 = a1[0xC]) != 0) /*0x62bf27*/
              && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v59 + 0x170))(v59) == MEMORY[0xB35EAC]
               || (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 0x170))(v59) == MEMORY[0xB35EB0]) )
            {
              v60 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v59 + 0x174))(v59); /*0x62bf34*/
              v61 = *v60; /*0x62bf36*/
              v62 = v60[1]; /*0x62bf38*/
              v63 = v60[2]; /*0x62bf3b*/
              v134 = v61; /*0x62bf40*/
              v135 = v62; /*0x62bf44*/
              v136 = v63; /*0x62bf48*/
              v64 = (float *)FormHeapAlloc(0xCu); /*0x62bf4c*/
              if ( v64 ) /*0x62bf56*/
              {
                *v64 = v134; /*0x62bf5c*/
                v64[1] = v135; /*0x62bf62*/
                v31 = v136; /*0x62bf65*/
                v64[2] = v136; /*0x62bf69*/
              }
              else
              {
                v64 = 0; /*0x62bf6e*/
              }
              v58 = v64; /*0x62bf70*/
            }
          }
          v65 = 1; /*0x62bf76*/
          if ( !sub_569E60(v114).form ) /*0x62bf7b*/
            v65 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v108 + 0x28)); /*0x62bf90*/
          if ( !*((_BYTE *)a1 + 0x25D) ) /*0x62bf92*/
          {
            *((_BYTE *)a1 + 0x25D) = 1; /*0x62bf9f*/
            sub_6286E0(a1, (int)a10, v106[2], 0); /*0x62bfaf*/
            ContainerEntryExtraData_DestroyDataTable(v106, v66); /*0x62bfb6*/
            FormHeapFree((unsigned int)v106); /*0x62bfbc*/
            return; /*0x62bfcb*/
          }
          v67 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x164))(a10); /*0x62bfd8*/
          if ( v67 && !ActorAnimData_IsIdleInactive(v67) ) /*0x62bfe7*/
            goto LABEL_58; /*0x62bfe7*/
          *(_DWORD *)v99 = v65; /*0x62bffc*/
          v57 = v106; /*0x62bffd*/
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, unsigned int, TESChildCELL *, char *, float *, _DWORD))(*(_DWORD *)a10 + 0x2C8))( /*0x62c008*/
            a10,
            v106[2],
            v141,
            *(char **)v99,
            v58,
            0);
        }
        *((_BYTE *)a1 + 0x25D) = 0; /*0x62c00c*/
        ContainerEntryExtraData_DestroyDataTable(v57, v56); /*0x62c013*/
        FormHeapFree((unsigned int)v57); /*0x62c019*/
        p_targetType = (unsigned int *)&v114->targetType; /*0x62c01e*/
        if ( sub_569E80(v114).form == (TESObjectREFR *)0xD /*0x62c04b*/
          || (int)sub_569E80(v114).form >= 0x15 && (int)sub_569E80(v114).form <= 0x19 )
        {
          while ( a1[0x10] || a1[0xF] ) /*0x62c05b*/
          {
            v103 = a1[0xF]; /*0x62c067*/
            a1[0x11] = v103; /*0x62c068*/
            BSSimpleList_Remove(a1 + 0xF, v103); /*0x62c06b*/
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *(_DWORD *)a1[0x11]); /*0x62c080*/
            p_targetType = sub_4D8D70(a10, *(TESForm **)(a1[0x11] + 4), 0); /*0x62c093*/
            if ( a1[0x11] ) /*0x62c095*/
              FormHeapFree(a1[0x11]); /*0x62c09d*/
            a1[0x11] = 0; /*0x62c0ab*/
            if ( v111 && TESObjectREFR_GetContainer(v111) ) /*0x62c0b0*/
            {
              v69 = p_targetType[2]; /*0x62c0c4*/
              v70 = (unsigned __int16 *)Shared_GetPointerAtOffset08(*(Atmosphere **)(v108 + 0x28)); /*0x62c0c8*/
              sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v31, v69, (int)v141, v111, v70, refID); /*0x62c0db*/
            }
            else
            {
              if ( *p_targetType ) /*0x62c0e5*/
                v141 = *(TESChildCELL **)*p_targetType; /*0x62c0ed*/
              v107 = 0; /*0x62c0f5*/
              if ( v117 ) /*0x62c0f9*/
              {
                v72 = sub_5697E0(v117); /*0x62c108*/
                if ( (v72 || (v72 = a1[0xC]) != 0) /*0x62c13d*/
                  && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x170))(v72) == MEMORY[0xB35EAC]
                   || (*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x170))(v72) == MEMORY[0xB35EB0]) )
                {
                  v73 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x174))(v72); /*0x62c14a*/
                  v74 = *v73; /*0x62c14c*/
                  v75 = v73[1]; /*0x62c14e*/
                  v76 = v73[2]; /*0x62c151*/
                  v134 = v74; /*0x62c156*/
                  v135 = v75; /*0x62c15a*/
                  v136 = v76; /*0x62c15e*/
                  v77 = (float *)FormHeapAlloc(0xCu); /*0x62c162*/
                  if ( v77 ) /*0x62c16c*/
                  {
                    *v77 = v134; /*0x62c172*/
                    v77[1] = v135; /*0x62c178*/
                    v31 = v136; /*0x62c17b*/
                    v77[2] = v136; /*0x62c17f*/
                  }
                  else
                  {
                    v77 = 0; /*0x62c184*/
                  }
                  v107 = v77; /*0x62c186*/
                }
              }
              v78 = 1; /*0x62c18e*/
              if ( !sub_569E60(v114).form ) /*0x62c193*/
                v78 = (int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v108 + 0x28)); /*0x62c1a8*/
              (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, unsigned int, TESChildCELL *, int, float *, _DWORD))(*(_DWORD *)a10 + 0x2C8))( /*0x62c1c5*/
                a10,
                p_targetType[2],
                v141,
                v78,
                v107,
                0);
            }
            ContainerEntryExtraData_DestroyDataTable(p_targetType, v71); /*0x62c1c9*/
            FormHeapFree((unsigned int)p_targetType); /*0x62c1cf*/
          }
          v79 = a1[2]; /*0x62c1dc*/
          v115 = 1; /*0x62c1e1*/
          v142 = 1; /*0x62c1e6*/
          if ( v79 ) /*0x62c1eb*/
          {
            v80 = *(_DWORD *)(v79 + 0x1C); /*0x62c1ed*/
            v115 = (v80 & 0x100000) == 0; /*0x62c1fa*/
            v142 = (v80 & 0x200000) == 0; /*0x62c206*/
          }
          if ( Actor::HasNPCBaseForm((Actor *)a10) ) /*0x62c20d*/
          {
            v81 = (BSExtraDataVtbl *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 /*0x62c220*/
                                                                                                  + 0x170))(a10);
            if ( v81 ) /*0x62c224*/
              sub_5227A0(v81, a7, a8, v31, (TESObjectREFR *)a10, v115, v142, 0, 1); /*0x62c237*/
          }
          else if ( Actor_IsCreature((Actor *)a10) ) /*0x62c23e*/
          {
            v82 = (BSExtraDataVtbl *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 /*0x62c251*/
                                                                                                  + 0x170))(a10);
            if ( v82 ) /*0x62c255*/
              sub_51E240(v82, (int)p_targetType, a7, a8, v31, (TESObjectREFR *)a10, v115, v142, 1); /*0x62c266*/
          }
        }
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x62c277*/
      }
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*a1 + 0x188))(a1, a10, 1); /*0x62c286*/
    }
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x62c288*/
LABEL_9:
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *))(*a1 + 0x194))(a1, a10); /*0x62bac9*/
  }
  else
  {
    if ( !v140 ) /*0x62c3cb*/
      goto LABEL_143; /*0x62c3cb*/
    v118 = v132 * v132 + v131 * v131 + v133 * v133; /*0x62c3ed*/
    v119 = sqrt(v118); /*0x62c3fa*/
    v31 = v119; /*0x62c3fe*/
    if ( v109 < (double)v119 ) /*0x62c40d*/
    {
      v120 = v138 * v138 + v137 * v137 + v139 * v139; /*0x62c447*/
      v121 = sqrt(v120); /*0x62c454*/
      v116 = v121; /*0x62c45c*/
      v122 = v125 * v125 + v127 * v127 + v129 * v129; /*0x62c476*/
      v123 = sqrt(v122); /*0x62c483*/
      v31 = v123; /*0x62c487*/
      if ( v116 <= (double)v123 ) /*0x62c496*/
        goto LABEL_144; /*0x62c496*/
    }
    if ( v32 != reference /*0x62c4b4*/
      && Actor::GetCurrentPackage((Actor *)v32)
      && (CurrentPackage = Actor::GetCurrentPackage((Actor *)v32), TESPackage::IsTemporaryOverrideType(CurrentPackage)) )
    {
LABEL_144:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x62c4bd*/
      {
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xC4))(a1, 1); /*0x62c4d6*/
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x62c4e4*/
        (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, unsigned int))(*a1 + 0x188))( /*0x62c4f3*/
          a1,
          a10,
          0xFFFFFFFF);
        return; /*0x62c4fc*/
      }
    }
    else
    {
LABEL_143:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x62c4ff*/
      {
        v90 = sub_5677B0((TESPackage *)v12, v31, (TESObjectREFR *)a10, 1); /*0x62c511*/
        v124 = Double_To_SInt32(v90); /*0x62c51b*/
        v100 = (float)(2 * v124); /*0x62c532*/
        v98 = (float)v124; /*0x62c53a*/
        v91 = sub_629F40(a1, (Actor *)a10, 0.0, v98, v100, 0, 0); /*0x62c544*/
        v92 = ((double (__thiscall *)(_DWORD *, Concurrency::details::SchedulerBase *, int))*(_DWORD *)(*a1 + 0x238))( /*0x62c555*/
                a1,
                a10,
                v91);
        v93 = (void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD))(*a1 + 0x414); /*0x62c55e*/
        v104 = sub_5677B0((TESPackage *)v12, v92, (TESObjectREFR *)a10, 1); /*0x62c56a*/
        v102 = sub_566940((TESPackage *)v12, (Actor *)a10); /*0x62c575*/
        v101 = sub_566A40((char **)v12, (Actor *)a10); /*0x62c57e*/
        v94 = sub_566B30((TESPackage *)v12, &v137, (Actor *)a10); /*0x62c587*/
        (*v93)(a1, a10, v94, v101, v102, LODWORD(v104)); /*0x62c593*/
        return; /*0x62c59c*/
      }
    }
    if ( !v140 || v109 >= NiPoint3_Length(&v131) ) /*0x62c5ba*/
    {
      v95 = (void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))(*a1 + 0x3DC); /*0x62c5c6*/
      v96 = sub_566B30((TESPackage *)v12, &v137, (Actor *)a10); /*0x62c5d6*/
      v105 = sub_566940((TESPackage *)v108, (Actor *)a10); /*0x62c5e1*/
      v97 = sub_566A40((char **)v108, (Actor *)a10); /*0x62c5e3*/
      (*v95)(a1, a10, *(_DWORD *)v96, *((_DWORD *)v96 + 1), *((_DWORD *)v96 + 2), v97, v105); /*0x62c604*/
    }
  }
}
