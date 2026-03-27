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
  TESObjectCELL *ParentCell; // eax
  int v34; // eax
  char *v35; // eax
  char *v36; // ebp
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
  Actor *v51; // ebx
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
  char *v89; // eax
  double v90; // st7
  int v91; // eax
  double v92; // st7
  void (__thiscall **v93)(_DWORD *, Concurrency::details::SchedulerBase *, int, TESObjectCELL *, TESWorldSpace *, _DWORD); // ebp
  int v94; // eax
  void (__thiscall **v95)(_DWORD *, Concurrency::details::SchedulerBase *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *); // ebp
  _DWORD *v96; // ebx
  TESObjectCELL *v97; // eax
  float v98; // [esp+4h] [ebp-70h]
  char v99[4]; // [esp+8h] [ebp-6Ch]
  float v100; // [esp+8h] [ebp-6Ch]
  TESObjectCELL *v101; // [esp+8h] [ebp-6Ch]
  TESWorldSpace *v102; // [esp+Ch] [ebp-68h]
  int v103; // [esp+10h] [ebp-64h]
  float v104; // [esp+10h] [ebp-64h]
  TESWorldSpace *v105; // [esp+10h] [ebp-64h]
  unsigned int *v106; // [esp+24h] [ebp-50h]
  float *v107; // [esp+24h] [ebp-50h]
  int v108; // [esp+2Ch] [ebp-48h]
  float v109; // [esp+30h] [ebp-44h]
  int v110; // [esp+30h] [ebp-44h]
  TESObjectREFR *v111; // [esp+30h] [ebp-44h]
  PlayerCharacter *v112; // [esp+34h] [ebp-40h]
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+34h] [ebp-40h]
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

  v12 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))(*a1 + 0x184))(
          a1,
          st7_0,
          a8,
          a7,
          a6,
          a5,
          a4,
          a3,
          a2);
  v108 = v12;
  v13 = sub_5E6780(a10);
  v106 = v13;
  if ( !v13 )
  {
    v14 = a1[0xB];
    if ( !v14
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x190))(v14)
      && (sub_4D88C0((TESObjectREFR *)a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v15) )
    {
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *))(*a1 + 0x558))(a1, a10);
      v16 = a1[0xB];
      if ( !v16
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 0x190))(v16)
        && (sub_4D88C0((TESObjectREFR *)a10, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v17) )
      {
        (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*a1 + 0x188))(a1, a10, 1);
        if ( *((_BYTE *)a1 + 0xD0) )
          return;
        goto LABEL_9;
      }
    }
    v18 = a1[0x11];
    if ( v18 )
    {
      if ( *(Concurrency::details::SchedulerBase **)v18 == a10 )
      {
        v13 = sub_4D8D70(a10, *(TESForm **)(v18 + 4), 0);
        v106 = v13;
      }
    }
  }
  v19 = a1[0xB];
  v140 = 0;
  if ( v19 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 0x190))(v19) )
    {
      v20 = (PlayerCharacter *)a1[0xB];
      if ( v20 != (PlayerCharacter *)a10 )
      {
        editorPackage = v20->super.super.super.process->editorPackage;
        v140 = 1;
        if ( v20 != TESDataHandler_g_PlayerRef
          && (!editorPackage || editorPackage->members.type != 1 && !sub_5660A0(editorPackage)) )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0);
          if ( v13 )
          {
            ContainerEntryExtraData_DestroyDataTable(v13, v22);
            FormHeapFree((unsigned int)v13);
          }
          return;
        }
      }
    }
  }
  v23 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x174))(a10);
  v24 = *v23;
  v25 = v23[1];
  v26 = v23[2];
  v131 = v24;
  v132 = v25;
  v133 = v26;
  if ( v140 )
  {
    v27 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
    v28 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x174))(a10);
    v125 = *v28 - *v27;
    v29 = v28[1];
    v131 = v125;
    v127 = v29 - v27[1];
    v30 = v28[2];
    v132 = v127;
    v129 = v30 - v27[2];
    v133 = v129;
  }
  v31 = 0.0;
  v32 = 0;
  v109 = 0.0;
  if ( v140 )
  {
    v32 = (PlayerCharacter *)a1[0xB];
    v112 = v32;
    v110 = (int)sub_452A60(*(Atmosphere **)(v12 + 0x28));
    if ( v110 <= 0 )
      v110 = 0xC8;
    if ( (PlayerCharacter *)a1[0xB] == TESDataHandler_g_PlayerRef )
    {
      v31 = (double)v110;
    }
    else
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a10);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v31 = flt_B36AA0;
      else
        v31 = (double)v110 * flt_B36A98;
    }
    v109 = v31;
    if ( (*(int (__thiscall **)(_DWORD))(**((_DWORD **)a10 + 0x16) + 0x40C))(*((_DWORD *)a10 + 0x16)) )
    {
      v34 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)a10 + 0x16) + 0x40C))(*((_DWORD *)a10 + 0x16));
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v34 + 4))(v34) == 2 )
      {
        v35 = (char *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)a10 + 0x16) + 0x40C))(*((_DWORD *)a10 + 0x16));
        v36 = v35;
        if ( v35 )
        {
          v37 = sub_68A1B0(v35);
          if ( v37 )
            v38 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v37 + 0x174))(v37);
          else
            sub_68A160(v36);
          v128 = v38[1];
          v130 = v38[2];
          v126 = *v38;
          v39 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x174))(a10);
          v134 = *v39 - v126;
          v40 = v39[1];
          v137 = v134;
          v135 = v40 - v128;
          v41 = v39[2];
          v138 = v135;
          vtbl = v112->vtbl;
          v136 = v41 - v130;
          v139 = v136;
          v43 = vtbl->super.super.super.GetPos((TESObjectREFR *)v112);
          v134 = *v43 - v126;
          v125 = v134;
          v135 = v43[1] - v128;
          v127 = v135;
          v31 = v43[2] - v130;
          v136 = v31;
          v129 = v136;
        }
        v32 = v112;
      }
    }
  }
  if ( *(_DWORD *)(v12 + 0x24)
    && (v31 = sub_566DC0((TESPackage *)v12, flt_A30634, a8, (Actor *)a10, 0, flt_A30634), v44) )
  {
    if ( v140 )
    {
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*a1 + 0x188))(a1, a10, 1);
      v83 = (_DWORD **)a1[0xB];
      if ( (*(int (__thiscall **)(_DWORD *))(*v83[0x16] + 0x184))(v83[0x16]) )
      {
        (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*v83[0x16] + 0x188))(
          v83[0x16],
          a10,
          1);
        v84 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*v83[0x16] + 0x184))(v83[0x16]);
        if ( sub_5660A0(v84) )
        {
          v85 = (*(int (__thiscall **)(_DWORD *))(*v83[0x16] + 0x184))(v83[0x16]);
          if ( v85 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v85 + 0x10))(v85, 1);
          v83[0x16][2] = 0;
          ((void (__thiscall *)(_DWORD **, int))(*v83)[0x11])(v83, 0x30000);
          if ( sub_5E05B0(v83) )
            sub_5E02B0(v83);
          (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
          (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, _DWORD))(*a1 + 0x18))(a1, a10, 0);
          if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x380))(a10) )
          {
            if ( (*(_DWORD *)(a1[2] + 0x1C) & 0x800000) == 0 )
            {
              v86 = (void *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x380))(a10);
              sub_5E9A60(v86, v31);
              if ( !v87 )
              {
                v88 = (Actor *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x380))(a10);
                sub_5F80D0(v88);
                *((float *)a1 + 0x6A) = 0.0;
              }
              (*(void (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x230))(a10);
            }
          }
          return;
        }
      }
    }
    else
    {
      v45 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x164))(a10);
      if ( v45 && !sub_472EA0(v45) )
      {
        v47 = v106;
        if ( !v106 )
          return;
        goto LABEL_46;
      }
      v48 = *(_DWORD **)(v12 + 0x24);
      v117 = v48;
      v114 = *(TargetData **)(v12 + 0x28);
      if ( v106 )
      {
        v49 = (TESChildCELL **)*v106;
        v50 = 0;
        v141 = 0;
        if ( *v106 )
        {
          v50 = (ExtraDataList *)*v49;
          v141 = *v49;
        }
        CompareTo = 0;
        if ( v50 )
        {
          if ( ExtraDataList_GetReferencePointer(v50) )
            CompareTo = ExtraDataList_GetReferencePointer(v50)[1].CompareTo;
        }
        v51 = (Actor *)sub_5697E0(*(_DWORD **)(v108 + 0x24));
        v111 = (TESObjectREFR *)v51;
        if ( (v51 || (v111 = (TESObjectREFR *)a1[0xC], (v51 = (Actor *)v111) != 0))
          && TESObjectREFR_GetContainer((TESObjectREFR *)v51) )
        {
          if ( !*((_BYTE *)a1 + 0x25D) )
          {
            *((_BYTE *)a1 + 0x25D) = 1;
            v52 = (int)v51->vtbl->super.super.GetBaseForm((TESObjectREFR *)v51);
            sub_6286E0(a1, (int)a10, v52, v51);
LABEL_58:
            v47 = v106;
LABEL_46:
            ContainerEntryExtraData_DestroyDataTable(v47, v46);
            FormHeapFree((unsigned int)v47);
            return;
          }
          v53 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x164))(a10);
          if ( v53 && !sub_472EA0(v53) )
            goto LABEL_58;
          v54 = v106[2];
          v55 = (unsigned __int16 *)sub_452A60(*(Atmosphere **)(v108 + 0x28));
          sub_5FC6D0(
            (int)a10,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            v31,
            v54,
            (int)v141,
            (TESObjectREFR *)v51,
            v55,
            (int)CompareTo);
          v57 = v106;
        }
        else
        {
          if ( *v106 )
            v141 = *(TESChildCELL **)*v106;
          v58 = 0;
          if ( v48 )
          {
            v59 = sub_5697E0(v48);
            if ( (v59 || (v59 = a1[0xC]) != 0)
              && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v59 + 0x170))(v59) == TESDataHandler_g_XMarker
               || (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 0x170))(v59) == TESDataHandler_g_XMarkerHeading) )
            {
              v60 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v59 + 0x174))(v59);
              v61 = *v60;
              v62 = v60[1];
              v63 = v60[2];
              v134 = v61;
              v135 = v62;
              v136 = v63;
              v64 = (float *)FormHeapAlloc(0xCu);
              if ( v64 )
              {
                *v64 = v134;
                v64[1] = v135;
                v31 = v136;
                v64[2] = v136;
              }
              else
              {
                v64 = 0;
              }
              v58 = v64;
            }
          }
          v65 = 1;
          if ( !sub_569E60(v114).form )
            v65 = (int)sub_452A60(*(Atmosphere **)(v108 + 0x28));
          if ( !*((_BYTE *)a1 + 0x25D) )
          {
            *((_BYTE *)a1 + 0x25D) = 1;
            sub_6286E0(a1, (int)a10, v106[2], 0);
            ContainerEntryExtraData_DestroyDataTable(v106, v66);
            FormHeapFree((unsigned int)v106);
            return;
          }
          v67 = (_DWORD *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10 + 0x164))(a10);
          if ( v67 && !sub_472EA0(v67) )
            goto LABEL_58;
          *(_DWORD *)v99 = v65;
          v57 = v106;
          (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, unsigned int, TESChildCELL *, char *, float *, _DWORD))(*(_DWORD *)a10 + 0x2C8))(
            a10,
            v106[2],
            v141,
            *(char **)v99,
            v58,
            0);
        }
        *((_BYTE *)a1 + 0x25D) = 0;
        ContainerEntryExtraData_DestroyDataTable(v57, v56);
        FormHeapFree((unsigned int)v57);
        p_targetType = (unsigned int *)&v114->targetType;
        if ( sub_569E80(v114).form == (TESObjectREFR *)0xD
          || (int)sub_569E80(v114).form >= 0x15 && (int)sub_569E80(v114).form <= 0x19 )
        {
          while ( a1[0x10] || a1[0xF] )
          {
            v103 = a1[0xF];
            a1[0x11] = v103;
            BSSimpleList_Remove(a1 + 0xF, v103);
            (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *(_DWORD *)a1[0x11]);
            p_targetType = sub_4D8D70(a10, *(TESForm **)(a1[0x11] + 4), 0);
            if ( a1[0x11] )
              FormHeapFree(a1[0x11]);
            a1[0x11] = 0;
            if ( v111 && TESObjectREFR_GetContainer(v111) )
            {
              v69 = p_targetType[2];
              v70 = (unsigned __int16 *)sub_452A60(*(Atmosphere **)(v108 + 0x28));
              sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v31, v69, (int)v141, v111, v70, (int)CompareTo);
            }
            else
            {
              if ( *p_targetType )
                v141 = *(TESChildCELL **)*p_targetType;
              v107 = 0;
              if ( v117 )
              {
                v72 = sub_5697E0(v117);
                if ( (v72 || (v72 = a1[0xC]) != 0)
                  && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x170))(v72) == TESDataHandler_g_XMarker
                   || (*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x170))(v72) == TESDataHandler_g_XMarkerHeading) )
                {
                  v73 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v72 + 0x174))(v72);
                  v74 = *v73;
                  v75 = v73[1];
                  v76 = v73[2];
                  v134 = v74;
                  v135 = v75;
                  v136 = v76;
                  v77 = (float *)FormHeapAlloc(0xCu);
                  if ( v77 )
                  {
                    *v77 = v134;
                    v77[1] = v135;
                    v31 = v136;
                    v77[2] = v136;
                  }
                  else
                  {
                    v77 = 0;
                  }
                  v107 = v77;
                }
              }
              v78 = 1;
              if ( !sub_569E60(v114).form )
                v78 = (int)sub_452A60(*(Atmosphere **)(v108 + 0x28));
              (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, unsigned int, TESChildCELL *, int, float *, _DWORD))(*(_DWORD *)a10 + 0x2C8))(
                a10,
                p_targetType[2],
                v141,
                v78,
                v107,
                0);
            }
            ContainerEntryExtraData_DestroyDataTable(p_targetType, v71);
            FormHeapFree((unsigned int)p_targetType);
          }
          v79 = a1[2];
          v115 = 1;
          v142 = 1;
          if ( v79 )
          {
            v80 = *(_DWORD *)(v79 + 0x1C);
            v115 = (v80 & 0x100000) == 0;
            v142 = (v80 & 0x200000) == 0;
          }
          if ( sub_5E32D0(a10) )
          {
            v81 = (BSExtraDataVtbl *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10
                                                                                                  + 0x170))(a10);
            if ( v81 )
              sub_5227A0(v81, a7, a8, v31, (TESObjectREFR *)a10, v115, v142, 0, 1);
          }
          else if ( Actor_IsCreature((Actor *)a10) )
          {
            v82 = (BSExtraDataVtbl *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a10
                                                                                                  + 0x170))(a10);
            if ( v82 )
              sub_51E240(v82, (int)p_targetType, a7, a8, v31, (TESObjectREFR *)a10, v115, v142, 1);
          }
        }
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
      }
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int))(*a1 + 0x188))(a1, a10, 1);
    }
    if ( !*((_BYTE *)a1 + 0xD0) )
LABEL_9:
      (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *))(*a1 + 0x194))(a1, a10);
  }
  else
  {
    if ( !v140 )
      goto LABEL_143;
    v118 = v132 * v132 + v131 * v131 + v133 * v133;
    v119 = sqrt(v118);
    v31 = v119;
    if ( v109 < (double)v119 )
    {
      v120 = v138 * v138 + v137 * v137 + v139 * v139;
      v121 = sqrt(v120);
      v116 = v121;
      v122 = v125 * v125 + v127 * v127 + v129 * v129;
      v123 = sqrt(v122);
      v31 = v123;
      if ( v116 <= (double)v123 )
        goto LABEL_144;
    }
    if ( v32 != TESDataHandler_g_PlayerRef
      && sub_5E0380((Actor *)v32)
      && (v89 = (char *)sub_5E0380((Actor *)v32), sub_567770(v89)) )
    {
LABEL_144:
      if ( !*((_BYTE *)a1 + 0xD0) )
      {
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xC4))(a1, 1);
        (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
        (*(void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, unsigned int))(*a1 + 0x188))(
          a1,
          a10,
          0xFFFFFFFF);
        return;
      }
    }
    else
    {
LABEL_143:
      if ( !*((_BYTE *)a1 + 0xD0) )
      {
        v90 = sub_5677B0((TESPackage *)v12, v31, (TESObjectREFR *)a10, 1);
        v124 = Double_To_SInt32(v90);
        v100 = (float)(2 * v124);
        v98 = (float)v124;
        v91 = sub_629F40(a1, a10, 0.0, v98, v100, 0, 0);
        v92 = ((double (__thiscall *)(_DWORD *, Concurrency::details::SchedulerBase *, int))*(_DWORD *)(*a1 + 0x238))(
                a1,
                a10,
                v91);
        v93 = (void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, int, TESObjectCELL *, TESWorldSpace *, _DWORD))(*a1 + 0x414);
        v104 = sub_5677B0((TESPackage *)v12, v92, (TESObjectREFR *)a10, 1);
        v102 = sub_566940((TESPackage *)v12, (Actor *)a10);
        v101 = sub_566A40((char **)v12, (Actor *)a10);
        v94 = sub_566B30((TESPackage *)v12, (int)&v137, (Actor *)a10);
        (*v93)(a1, a10, v94, v101, v102, LODWORD(v104));
        return;
      }
    }
    if ( !v140 || v109 >= sub_404C90(&v131) )
    {
      v95 = (void (__thiscall **)(_DWORD *, Concurrency::details::SchedulerBase *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(*a1 + 0x3DC);
      v96 = (_DWORD *)sub_566B30((TESPackage *)v12, (int)&v137, (Actor *)a10);
      v105 = sub_566940((TESPackage *)v108, (Actor *)a10);
      v97 = sub_566A40((char **)v108, (Actor *)a10);
      (*v95)(a1, a10, *v96, v96[1], v96[2], v97, v105);
    }
  }
}
