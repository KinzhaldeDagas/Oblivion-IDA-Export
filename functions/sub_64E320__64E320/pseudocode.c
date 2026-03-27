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
        TESChildCELL *a11)
{
  int v12; // ebp
  int v14; // ecx
  char v15; // al
  int v16; // ecx
  char v17; // al
  int v19; // eax
  int v20; // ecx
  TESChildCELL *v21; // eax
  TESPackage *v22; // ecx
  float *v23; // eax
  float v24; // ecx
  float v25; // edx
  float v26; // eax
  float *v27; // ebx
  float *v28; // eax
  double v29; // st7
  double v30; // st7
  double v31; // st7
  TESObjectCELL *ParentCell; // eax
  void *v33; // eax
  _DWORD *v34; // eax
  _DWORD *v35; // ebx
  float *v36; // eax
  float *v37; // ebp
  float *v38; // eax
  double v39; // st7
  float *v40; // eax
  float *v41; // ebp
  float *v42; // eax
  char v43; // al
  TESChildCELL **v44; // eax
  ExtraDataList *v45; // ebp
  TESObjectREFR *v46; // ebx
  unsigned __int16 *v47; // eax
  int v48; // edx
  TESChildCELL **v49; // eax
  int v50; // ebp
  float *v51; // eax
  float v52; // ecx
  float v53; // edx
  float v54; // eax
  float *v55; // eax
  int v56; // ebx
  unsigned int *p_targetType; // ebx
  int v58; // ebp
  unsigned __int16 *v59; // eax
  int v60; // edx
  int v61; // ebp
  float *v62; // eax
  float v63; // ecx
  float v64; // edx
  float v65; // eax
  float *v66; // eax
  int v67; // ebp
  int v68; // eax
  int v69; // eax
  void *v70; // eax
  BSExtraDataVtbl *v71; // eax
  void *v72; // eax
  BSExtraDataVtbl *v73; // eax
  _DWORD **v74; // ebp
  TESPackage *v75; // eax
  int v76; // eax
  double v77; // st7
  int v78; // eax
  int v79; // ecx
  void (__thiscall **v80)(_DWORD *, TESChildCELL *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD); // ebx
  int v81; // eax
  TESObjectCELL *v82; // [esp-8h] [ebp-74h]
  TESWorldSpace *v83; // [esp-4h] [ebp-70h]
  float v84; // [esp+0h] [ebp-6Ch]
  int v85; // [esp+4h] [ebp-68h]
  float v86; // [esp+4h] [ebp-68h]
  unsigned int *v89; // [esp+18h] [ebp-54h]
  int v90; // [esp+1Ch] [ebp-50h]
  float v91; // [esp+20h] [ebp-4Ch]
  int v92; // [esp+20h] [ebp-4Ch]
  _DWORD *v93; // [esp+20h] [ebp-4Ch]
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+24h] [ebp-48h]
  TESObjectREFR *v95; // [esp+28h] [ebp-44h]
  TargetData *v96; // [esp+2Ch] [ebp-40h]
  char v97; // [esp+2Ch] [ebp-40h]
  float v98; // [esp+30h] [ebp-3Ch]
  int v99; // [esp+30h] [ebp-3Ch]
  int v100; // [esp+30h] [ebp-3Ch]
  float *v101; // [esp+30h] [ebp-3Ch]
  float *v102; // [esp+30h] [ebp-3Ch]
  double v103; // [esp+30h] [ebp-3Ch]
  float v104; // [esp+34h] [ebp-38h]
  float v105; // [esp+38h] [ebp-34h]
  float v106; // [esp+3Ch] [ebp-30h] BYREF
  float v107; // [esp+40h] [ebp-2Ch]
  float v108; // [esp+44h] [ebp-28h]
  float v109; // [esp+48h] [ebp-24h]
  float v110; // [esp+4Ch] [ebp-20h]
  float v111; // [esp+50h] [ebp-1Ch]
  float v112[3]; // [esp+54h] [ebp-18h] BYREF
  float v113[3]; // [esp+60h] [ebp-Ch] BYREF
  char v114; // [esp+70h] [ebp+4h]
  TESChildCELL *v115; // [esp+70h] [ebp+4h]
  char v116; // [esp+70h] [ebp+4h]
  TESChildCELL *v117; // [esp+70h] [ebp+4h]

  v12 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1);
  v90 = v12;
  if ( !v12 )
    return 0;
  v89 = sub_5E6780(a11);
  if ( !v89 )
  {
    v14 = a1[0xB];
    if ( !v14
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x190))(v14)
      && (sub_4D88C0((TESObjectREFR *)a11, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v15) )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x558))(a1, a11);
      v16 = a1[0xB];
      if ( !v16
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v16 + 0x190))(v16)
        && (sub_4D88C0((TESObjectREFR *)a11, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v17) )
      {
        (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a11, 1);
        if ( !*((_BYTE *)a1 + 0xD0) )
        {
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a11);
          return 0;
        }
        return 0;
      }
    }
    v19 = a1[0x11];
    if ( v19 )
    {
      if ( *(TESChildCELL **)v19 == a11 )
        v89 = sub_4D8D70(a11, *(TESForm **)(v19 + 4), 0);
    }
  }
  v20 = a1[0xB];
  v114 = 0;
  if ( v20 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 0x190))(v20) )
    {
      v21 = (TESChildCELL *)a1[0xB];
      if ( v21 != a11 )
      {
        v114 = 1;
        v22 = *(TESPackage **)(*((_DWORD *)OblivionDynamicCast(
                                             v21,
                                             0,
                                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                             &Actor `RTTI Type Descriptor',
                                             0)
                               + 0x16)
                             + 8);
        if ( (PlayerCharacter *)a1[0xB] != TESDataHandler_g_PlayerRef
          && (!v22 || v22->members.type != 1 && !sub_5660A0(v22)) )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0);
          return 0;
        }
      }
    }
  }
  v23 = (float *)(*((int (__thiscall **)(TESChildCELL *))a11->vtbl + 0x5D))(a11);
  v24 = *v23;
  v25 = v23[1];
  v26 = v23[2];
  v106 = v24;
  v107 = v25;
  v108 = v26;
  if ( v114 )
  {
    v27 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
    v28 = (float *)(*((int (__thiscall **)(TESChildCELL *))a11->vtbl + 0x5D))(a11);
    v98 = *v28 - *v27;
    v29 = v28[1];
    v106 = v98;
    v104 = v29 - v27[1];
    v30 = v28[2];
    v107 = v104;
    v105 = v30 - v27[2];
    v108 = v105;
  }
  v31 = 0.0;
  v91 = 0.0;
  if ( v114 )
  {
    v99 = a1[0xB];
    v92 = (int)sub_452A60(*(Atmosphere **)(v12 + 0x28));
    if ( v92 <= 0 )
      v92 = 0xC8;
    if ( (PlayerCharacter *)a1[0xB] == TESDataHandler_g_PlayerRef )
    {
      v31 = (double)v92;
    }
    else
    {
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a11);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v31 = flt_B36AA0;
      else
        v31 = (double)v92 * flt_B36A98;
    }
    v91 = v31;
    v33 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)a11[0x16].vtbl + 0x40C))(a11[0x16].vtbl);
    v34 = OblivionDynamicCast(
            v33,
            0,
            (struct _s_RTTICompleteObjectLocator *)&PathLow `RTTI Type Descriptor',
            &PathHigh `RTTI Type Descriptor',
            0);
    v35 = v34;
    if ( v34 )
    {
      sub_68A160(v34);
      v37 = v36;
      v38 = (float *)(*((int (__thiscall **)(TESChildCELL *))a11->vtbl + 0x5D))(a11);
      v109 = *v38 - *v37;
      v110 = v38[1] - v37[1];
      v39 = v38[2] - v37[2];
      v112[1] = v110;
      v112[0] = v109;
      v111 = v39;
      v112[2] = v111;
      sub_68A160(v35);
      v41 = v40;
      v42 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v99 + 0x174))(v99);
      v109 = *v42 - *v41;
      v110 = v42[1] - v41[1];
      v31 = v42[2] - v41[2];
      v12 = v90;
      v113[0] = v109;
      v113[1] = v110;
      v111 = v31;
      v113[2] = v111;
    }
  }
  if ( !*(_DWORD *)(v12 + 0x24)
    || (v31 = sub_566DC0((TESPackage *)v12, flt_A30634, a10, (Actor *)a11, 0, flt_A30634), !v43) )
  {
    v77 = sub_5677B0((TESPackage *)a1[2], v31, (TESObjectREFR *)a11, 2);
    v78 = Double_To_SInt32(v77);
    v79 = a1[0xB];
    v117 = (TESChildCELL *)v78;
    if ( !v79
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v79 + 0x190))(v79)
      || (double)(int)v117 < TesObjectREF_GetDistance((TESObjectREFR *)a11, (TESObjectREFR *)a1[0xB], 0) )
    {
      v86 = (float)(int)v117;
      v80 = (void (__thiscall **)(_DWORD *, TESChildCELL *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(*a1 + 0x418);
      v84 = flt_A71E4C;
      v83 = sub_566940((TESPackage *)a1[2], (Actor *)a11);
      v82 = sub_566A40((char **)a1[2], (Actor *)a11);
      v81 = sub_566B30((TESPackage *)a1[2], (int)v113, (Actor *)a11);
      (*v80)(a1, a11, v81, v82, v83, LODWORD(v84), LODWORD(v86));
    }
    return 0;
  }
  if ( !v114 )
  {
    v93 = *(_DWORD **)(v12 + 0x24);
    v96 = *(TargetData **)(v12 + 0x28);
    if ( v89 )
    {
      v44 = (TESChildCELL **)*v89;
      v45 = 0;
      v115 = 0;
      if ( *v89 )
      {
        v115 = *v44;
        v45 = (ExtraDataList *)*v44;
      }
      CompareTo = 0;
      if ( v45 )
      {
        if ( ExtraDataList_GetReferencePointer(v45) )
          CompareTo = ExtraDataList_GetReferencePointer(v45)[1].CompareTo;
      }
      v46 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v90 + 0x24));
      v95 = v46;
      if ( (v46 || (v46 = (TESObjectREFR *)a1[0xC], (v95 = v46) != 0)) && TESObjectREFR_GetContainer(v46) )
      {
        v100 = v89[2];
        v47 = (unsigned __int16 *)sub_452A60(*(Atmosphere **)(v90 + 0x28));
        sub_5FC6D0((int)a11, a4, a5, a6, a7, a8, a9, a10, v31, v100, (int)v45, v46, v47, (int)CompareTo);
      }
      else
      {
        v49 = (TESChildCELL **)*v89;
        if ( *v89 )
        {
          v115 = *v49;
          v45 = (ExtraDataList *)*v49;
        }
        v101 = 0;
        if ( v93 )
        {
          v50 = sub_5697E0(v93);
          if ( (v50 || (v50 = a1[0xC]) != 0)
            && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v50 + 0x170))(v50) == TESDataHandler_g_XMarker
             || (*(int (__thiscall **)(int))(*(_DWORD *)v50 + 0x170))(v50) == TESDataHandler_g_XMarkerHeading) )
          {
            v51 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v50 + 0x174))(v50);
            v52 = *v51;
            v53 = v51[1];
            v54 = v51[2];
            v109 = v52;
            v110 = v53;
            v111 = v54;
            v55 = (float *)FormHeapAlloc(0xCu);
            if ( v55 )
            {
              *v55 = v109;
              v55[1] = v110;
              v31 = v111;
              v55[2] = v111;
            }
            else
            {
              v55 = 0;
            }
            v101 = v55;
          }
          v45 = (ExtraDataList *)v115;
        }
        v56 = 1;
        if ( !sub_569E60(v96).form )
          v56 = (int)sub_452A60(*(Atmosphere **)(v90 + 0x28));
        (*((void (__thiscall **)(TESChildCELL *, unsigned int, ExtraDataList *, int, float *, _DWORD))a11->vtbl + 0xB2))(
          a11,
          v89[2],
          v45,
          v56,
          v101,
          0);
      }
      ContainerEntryExtraData_DestroyDataTable(v89, v48);
      FormHeapFree((unsigned int)v89);
      p_targetType = (unsigned int *)&v96->targetType;
      if ( sub_569E80(v96).form == (TESObjectREFR *)0xD
        || (int)sub_569E80(v96).form >= 0x15 && (int)sub_569E80(v96).form <= 0x19 )
      {
        while ( a1[0x10] || a1[0xF] )
        {
          v85 = a1[0xF];
          a1[0x11] = v85;
          BSSimpleList_Remove(a1 + 0xF, v85);
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *(_DWORD *)a1[0x11]);
          p_targetType = sub_4D8D70(a11, *(TESForm **)(a1[0x11] + 4), 0);
          if ( a1[0x11] )
            FormHeapFree(a1[0x11]);
          a1[0x11] = 0;
          if ( v95 && TESObjectREFR_GetContainer(v95) )
          {
            v58 = p_targetType[2];
            v59 = (unsigned __int16 *)sub_452A60(*(Atmosphere **)(v90 + 0x28));
            sub_5FC6D0((int)a11, a4, a5, a6, a7, a8, a9, a10, v31, v58, (int)v115, v95, v59, (int)CompareTo);
          }
          else
          {
            if ( *p_targetType )
              v115 = *(TESChildCELL **)*p_targetType;
            v102 = 0;
            if ( v93 )
            {
              v61 = sub_5697E0(v93);
              if ( (v61 || (v61 = a1[0xC]) != 0)
                && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v61 + 0x170))(v61) == TESDataHandler_g_XMarker
                 || (*(int (__thiscall **)(int))(*(_DWORD *)v61 + 0x170))(v61) == TESDataHandler_g_XMarkerHeading) )
              {
                v62 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v61 + 0x174))(v61);
                v63 = *v62;
                v64 = v62[1];
                v65 = v62[2];
                v109 = v63;
                v110 = v64;
                v111 = v65;
                v66 = (float *)FormHeapAlloc(0xCu);
                if ( v66 )
                {
                  *v66 = v109;
                  v66[1] = v110;
                  v31 = v111;
                  v66[2] = v111;
                }
                else
                {
                  v66 = 0;
                }
                v102 = v66;
              }
            }
            v67 = 1;
            if ( !sub_569E60(v96).form )
              v67 = (int)sub_452A60(*(Atmosphere **)(v90 + 0x28));
            (*((void (__thiscall **)(TESChildCELL *, unsigned int, TESChildCELL *, int, float *, _DWORD))a11->vtbl + 0xB2))(
              a11,
              p_targetType[2],
              v115,
              v67,
              v102,
              0);
          }
          ContainerEntryExtraData_DestroyDataTable(p_targetType, v60);
          FormHeapFree((unsigned int)p_targetType);
        }
        v68 = a1[2];
        v97 = 1;
        v116 = 1;
        if ( v68 )
        {
          v69 = *(_DWORD *)(v68 + 0x1C);
          v97 = (v69 & 0x100000) == 0;
          v116 = (v69 & 0x200000) == 0;
        }
        if ( sub_5E32D0(a11) )
        {
          v70 = (void *)(*((int (__thiscall **)(TESChildCELL *))a11->vtbl + 0x5C))(a11);
          v71 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v70,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESNPC `RTTI Type Descriptor',
                                     0);
          if ( v71 )
            sub_5227A0(v71, a9, a10, v31, (TESObjectREFR *)a11, v97, v116, 0, 1);
        }
        else
        {
          v72 = (void *)(*((int (__thiscall **)(TESChildCELL *))a11->vtbl + 0x5C))(a11);
          v73 = (BSExtraDataVtbl *)OblivionDynamicCast(
                                     v72,
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESCreature `RTTI Type Descriptor',
                                     0);
          if ( v73 )
            sub_51E240(v73, (int)p_targetType, a9, a10, v31, (TESObjectREFR *)a11, v97, v116, 1);
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
    }
    (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a11, 1);
    goto LABEL_96;
  }
  if ( v91 < sub_404C90(&v106)
    || (v103 = sub_404C90(v112), sub_404C90(v113) < v103)
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a11, 1),
        v74 = (_DWORD **)a1[0xB],
        !(*(int (__thiscall **)(_DWORD *))(*v74[0x16] + 0x184))(v74[0x16]))
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v74[0x16] + 0x188))(v74[0x16], a11, 1),
        v75 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*v74[0x16] + 0x184))(v74[0x16]),
        !sub_5660A0(v75)) )
  {
LABEL_96:
    if ( !*((_BYTE *)a1 + 0xD0) )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a11);
      return 0;
    }
    return 0;
  }
  v76 = (*(int (__thiscall **)(_DWORD *, int, int))(*v74[0x16] + 0x184))(v74[0x16], a2, a3);
  if ( v76 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v76 + 0x10))(v76, 1);
  v74[0x16][2] = 0;
  ((void (__thiscall *)(_DWORD **, int))(*v74)[0x11])(v74, 0x30000);
  if ( sub_5E05B0(v74) )
    sub_5E02B0(v74);
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
  (*(void (__thiscall **)(_DWORD *, TESChildCELL *, _DWORD))(*a1 + 0x18))(a1, a11, 0);
  return 0;
}
