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
        TESChildCELL *a12,
        int a13)
{
  int v15; // ecx
  char v16; // al
  int v17; // ecx
  char v18; // al
  int v20; // eax
  int v21; // ecx
  char v22; // bl
  TESChildCELL *v23; // ecx
  int v24; // ebp
  TESPackage *v25; // ecx
  float *v26; // eax
  float v27; // ecx
  float v28; // edx
  float v29; // eax
  float *v30; // ebp
  float *v31; // eax
  double v32; // st7
  double v33; // st7
  double v34; // st7
  int *v35; // ebx
  TESObjectCELL *ParentCell; // eax
  int v37; // eax
  char *v38; // eax
  char *v39; // ebp
  int v40; // eax
  float *v41; // eax
  float v42; // edx
  float v43; // ecx
  float v44; // eax
  _DWORD *vtbl; // edx
  int (__thiscall *v46)(TESChildCELL *); // eax
  float *v47; // eax
  double v48; // st7
  double v49; // st7
  int v50; // edx
  float *v51; // eax
  double v52; // st7
  double v53; // st7
  char v54; // al
  TESChildCELL **v55; // eax
  ExtraDataList *v56; // ebp
  TESObjectREFR *v57; // ebx
  int v58; // ebp
  unsigned __int16 *v59; // eax
  int v60; // edx
  unsigned int *v61; // ebp
  float *v62; // ebx
  int v63; // ebp
  float *v64; // eax
  float v65; // ecx
  float v66; // edx
  float v67; // eax
  float *v68; // eax
  int v69; // ebp
  unsigned int *p_targetType; // ebx
  int v71; // ebp
  unsigned __int16 *v72; // eax
  int v73; // edx
  int v74; // ebp
  float *v75; // eax
  float v76; // ecx
  float v77; // edx
  float v78; // eax
  float *v79; // eax
  int v80; // ebp
  int v81; // eax
  int v82; // eax
  BSExtraDataVtbl *v83; // eax
  BSExtraDataVtbl *v84; // eax
  _DWORD **v85; // ebp
  TESPackage *v86; // eax
  int v87; // eax
  double v88; // st7
  int v89; // eax
  int v90; // ecx
  void (__thiscall **v91)(_DWORD *, TESChildCELL *, int, TESObjectCELL *, TESWorldSpace *, int, _DWORD); // ebx
  int v92; // eax
  TESObjectCELL *v93; // [esp-4h] [ebp-64h]
  int v94; // [esp+0h] [ebp-60h]
  TESWorldSpace *v95; // [esp+0h] [ebp-60h]
  int v96; // [esp+8h] [ebp-58h]
  float v97; // [esp+8h] [ebp-58h]
  int v101; // [esp+1Ch] [ebp-44h]
  unsigned int *v102; // [esp+20h] [ebp-40h]
  float *v103; // [esp+20h] [ebp-40h]
  float v104; // [esp+24h] [ebp-3Ch]
  int v105; // [esp+24h] [ebp-3Ch]
  TESObjectREFR *v106; // [esp+24h] [ebp-3Ch]
  _DWORD *v107; // [esp+28h] [ebp-38h]
  TargetData *v108; // [esp+2Ch] [ebp-34h]
  float v109; // [esp+30h] [ebp-30h] BYREF
  float v110; // [esp+34h] [ebp-2Ch]
  float v111; // [esp+38h] [ebp-28h]
  float v112; // [esp+3Ch] [ebp-24h] BYREF
  float v113; // [esp+40h] [ebp-20h]
  float v114; // [esp+44h] [ebp-1Ch]
  float v115; // [esp+48h] [ebp-18h]
  float v116; // [esp+4Ch] [ebp-14h]
  float v117; // [esp+50h] [ebp-10h]
  float v118[3]; // [esp+54h] [ebp-Ch] BYREF
  char v119; // [esp+64h] [ebp+4h]
  TESChildCELL *v120; // [esp+64h] [ebp+4h]
  char v121; // [esp+64h] [ebp+4h]
  float v122; // [esp+64h] [ebp+4h]
  TESChildCELL *v123; // [esp+64h] [ebp+4h]
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+68h] [ebp+8h]
  char v125; // [esp+68h] [ebp+8h]

  v101 = (*(int (__thiscall **)(_DWORD *))(*a1 + 0x184))(a1);
  if ( !v101 )
    return 0;
  v102 = sub_5E6780(a12);
  if ( !v102 )
  {
    v15 = a1[0xB];
    if ( !v15
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v15 + 0x190))(v15)
      && (sub_4D88C0((TESObjectREFR *)a12, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v16) )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x558))(a1, a12);
      v17 = a1[0xB];
      if ( !v17
        || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v17 + 0x190))(v17)
        && (sub_4D88C0((TESObjectREFR *)a12, *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(a1[0xB] + 0xC)), !v18) )
      {
        (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a12, 1);
        if ( !*((_BYTE *)a1 + 0xD0) )
        {
          (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a12);
          return 0;
        }
        return 0;
      }
    }
    v20 = a1[0x11];
    if ( v20 )
    {
      if ( *(TESChildCELL **)v20 == a12 )
        v102 = sub_4D8D70(a12, *(TESForm **)(v20 + 4), 0);
    }
  }
  v21 = a1[0xB];
  v22 = 0;
  v119 = 0;
  if ( v21 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v21 + 0x190))(v21) )
    {
      v23 = (TESChildCELL *)a1[0xB];
      if ( v23 != a12 )
      {
        v24 = 0;
        v119 = 1;
        if ( v23 )
        {
          if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))v23->vtbl + 0x64))(v23) )
            v24 = a1[0xB];
        }
        v25 = *(TESPackage **)(*(_DWORD *)(v24 + 0x58) + 8);
        if ( (PlayerCharacter *)a1[0xB] != TESDataHandler_g_PlayerRef
          && (!v25 || v25->members.type != 1 && !sub_5660A0(v25)) )
        {
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x17C))(a1, 0);
          return 0;
        }
        v22 = 1;
      }
    }
  }
  v26 = (float *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5D))(a12);
  v27 = *v26;
  v28 = v26[1];
  v29 = v26[2];
  v112 = v27;
  v113 = v28;
  v114 = v29;
  if ( v22 )
  {
    v30 = (float *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)a1[0xB] + 0x174))(a1[0xB]);
    v31 = (float *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5D))(a12);
    v109 = *v31 - *v30;
    v32 = v31[1];
    v112 = v109;
    v110 = v32 - v30[1];
    v33 = v31[2];
    v113 = v110;
    v111 = v33 - v30[2];
    v114 = v111;
  }
  v34 = 0.0;
  v104 = 0.0;
  if ( v22 )
  {
    v35 = (int *)a1[0xB];
    v105 = (int)sub_452A60(*(Atmosphere **)(v101 + 0x28));
    if ( v105 <= 0 )
      v105 = 0xC8;
    if ( (PlayerCharacter *)a1[0xB] == TESDataHandler_g_PlayerRef )
    {
      v34 = (double)v105;
    }
    else if ( TESObjectREFR_GetParentCell((TESObjectREFR *)a12)
           && (ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a12), TESObjectCELL_IsInterior(ParentCell)) )
    {
      v34 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36AA0);
    }
    else
    {
      v34 = (double)v105 * flt_B36A98;
    }
    v104 = v34;
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a12[0x16].vtbl + 0x40C))(a12[0x16].vtbl) )
    {
      v37 = (*(int (__thiscall **)(void *))(*(_DWORD *)a12[0x16].vtbl + 0x40C))(a12[0x16].vtbl);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v37 + 4))(v37) == 2 )
      {
        v38 = (char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a12[0x16].vtbl + 0x40C))(a12[0x16].vtbl);
        v39 = v38;
        if ( v38 )
        {
          v40 = sub_68A1B0(v38);
          if ( v40 )
            v41 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v40 + 0x174))(v40);
          else
            sub_68A160(v39);
          v42 = v41[1];
          v43 = *v41;
          v44 = v41[2];
          v110 = v42;
          vtbl = a12->vtbl;
          v111 = v44;
          v46 = (int (__thiscall *)(TESChildCELL *))vtbl[0x5D];
          v109 = v43;
          v47 = (float *)v46(a12);
          v115 = *v47 - v109;
          v48 = v47[1];
          v118[0] = v115;
          v116 = v48 - v110;
          v49 = v47[2];
          v118[1] = v116;
          v50 = *v35;
          v117 = v49 - v111;
          v118[2] = v117;
          v51 = (float *)(*(int (__thiscall **)(int *))(v50 + 0x174))(v35);
          v115 = *v51 - v109;
          v52 = v51[1];
          v109 = v115;
          v116 = v52 - v110;
          v53 = v51[2];
          v110 = v116;
          v34 = v53 - v111;
          v117 = v34;
          v111 = v117;
        }
      }
    }
  }
  if ( !*(_DWORD *)(v101 + 0x24)
    || (v34 = sub_566DC0((TESPackage *)v101, flt_A30634, a11, (Actor *)a12, 0, flt_A30634), !v54) )
  {
    v88 = sub_5677B0((TESPackage *)a1[2], v34, (TESObjectREFR *)a12, 2);
    v89 = Double_To_SInt32(v88);
    v90 = a1[0xB];
    v123 = (TESChildCELL *)v89;
    if ( !v90
      || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v90 + 0x190))(v90)
      || (double)(int)v123 < TesObjectREF_GetDistance((TESObjectREFR *)a12, (TESObjectREFR *)a1[0xB], 0) )
    {
      v97 = (float)(int)v123;
      v91 = (void (__thiscall **)(_DWORD *, TESChildCELL *, int, TESObjectCELL *, TESWorldSpace *, int, _DWORD))(*a1 + 0x418);
      v95 = sub_566940((TESPackage *)a1[2], (Actor *)a12);
      v93 = sub_566A40((char **)a1[2], (Actor *)a12);
      v92 = sub_566B30((TESPackage *)a1[2], (int)v118, (Actor *)a12);
      (*v91)(a1, a12, v92, v93, v95, a13, LODWORD(v97));
    }
    return 0;
  }
  if ( !v119 )
  {
    v107 = *(_DWORD **)(v101 + 0x24);
    v108 = *(TargetData **)(v101 + 0x28);
    if ( v102 )
    {
      v55 = (TESChildCELL **)*v102;
      v56 = 0;
      v120 = 0;
      if ( *v102 )
      {
        v56 = (ExtraDataList *)*v55;
        v120 = *v55;
      }
      CompareTo = 0;
      if ( v56 )
      {
        if ( ExtraDataList_GetReferencePointer(v56) )
          CompareTo = ExtraDataList_GetReferencePointer(v56)[1].CompareTo;
      }
      v57 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v101 + 0x24));
      v106 = v57;
      if ( (v57 || (v57 = (TESObjectREFR *)a1[0xC], (v106 = v57) != 0)) && TESObjectREFR_GetContainer(v57) )
      {
        v58 = v102[2];
        v59 = (unsigned __int16 *)sub_452A60(*(Atmosphere **)(v101 + 0x28));
        sub_5FC6D0((int)a12, a5, a6, a7, a8, a9, a10, a11, v34, v58, (int)v120, v57, v59, (int)CompareTo);
        v61 = v102;
      }
      else
      {
        if ( *v102 )
          v120 = *(TESChildCELL **)*v102;
        v62 = 0;
        if ( v107 )
        {
          v63 = sub_5697E0(v107);
          if ( (v63 || (v63 = a1[0xC]) != 0)
            && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v63 + 0x170))(v63) == TESDataHandler_g_XMarker
             || (*(int (__thiscall **)(int))(*(_DWORD *)v63 + 0x170))(v63) == TESDataHandler_g_XMarkerHeading) )
          {
            v64 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v63 + 0x174))(v63);
            v65 = *v64;
            v66 = v64[1];
            v67 = v64[2];
            v115 = v65;
            v116 = v66;
            v117 = v67;
            v68 = (float *)FormHeapAlloc(0xCu);
            if ( v68 )
            {
              *v68 = v115;
              v68[1] = v116;
              v34 = v117;
              v68[2] = v117;
            }
            else
            {
              v68 = 0;
            }
            v62 = v68;
          }
        }
        v69 = 1;
        if ( !sub_569E60(v108).form )
          v69 = (int)sub_452A60(*(Atmosphere **)(v101 + 0x28));
        v94 = v69;
        v61 = v102;
        (*((void (__thiscall **)(TESChildCELL *, unsigned int, TESChildCELL *, int, float *, _DWORD))a12->vtbl + 0xB2))(
          a12,
          v102[2],
          v120,
          v94,
          v62,
          0);
      }
      *((_BYTE *)a1 + 0x25D) = 0;
      ContainerEntryExtraData_DestroyDataTable(v61, v60);
      FormHeapFree((unsigned int)v61);
      p_targetType = (unsigned int *)&v108->targetType;
      if ( sub_569E80(v108).form == (TESObjectREFR *)0xD
        || (int)sub_569E80(v108).form >= 0x15 && (int)sub_569E80(v108).form <= 0x19 )
      {
        while ( a1[0x10] || a1[0xF] )
        {
          v96 = a1[0xF];
          a1[0x11] = v96;
          BSSimpleList_Remove(a1 + 0xF, v96);
          (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0xD0))(a1, *(_DWORD *)a1[0x11]);
          p_targetType = sub_4D8D70(a12, *(TESForm **)(a1[0x11] + 4), 0);
          if ( a1[0x11] )
            FormHeapFree(a1[0x11]);
          a1[0x11] = 0;
          if ( v106 && TESObjectREFR_GetContainer(v106) )
          {
            v71 = p_targetType[2];
            v72 = (unsigned __int16 *)sub_452A60(*(Atmosphere **)(v101 + 0x28));
            sub_5FC6D0((int)a12, a5, a6, a7, a8, a9, a10, a11, v34, v71, (int)v120, v106, v72, (int)CompareTo);
          }
          else
          {
            if ( *p_targetType )
              v120 = *(TESChildCELL **)*p_targetType;
            v103 = 0;
            if ( v107 )
            {
              v74 = sub_5697E0(v107);
              if ( (v74 || (v74 = a1[0xC]) != 0)
                && ((TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)v74 + 0x170))(v74) == TESDataHandler_g_XMarker
                 || (*(int (__thiscall **)(int))(*(_DWORD *)v74 + 0x170))(v74) == TESDataHandler_g_XMarkerHeading) )
              {
                v75 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v74 + 0x174))(v74);
                v76 = *v75;
                v77 = v75[1];
                v78 = v75[2];
                v115 = v76;
                v116 = v77;
                v117 = v78;
                v79 = (float *)FormHeapAlloc(0xCu);
                if ( v79 )
                {
                  *v79 = v115;
                  v79[1] = v116;
                  v34 = v117;
                  v79[2] = v117;
                }
                else
                {
                  v79 = 0;
                }
                v103 = v79;
              }
            }
            v80 = 1;
            if ( !sub_569E60(v108).form )
              v80 = (int)sub_452A60(*(Atmosphere **)(v101 + 0x28));
            (*((void (__thiscall **)(TESChildCELL *, unsigned int, TESChildCELL *, int, float *, _DWORD))a12->vtbl + 0xB2))(
              a12,
              p_targetType[2],
              v120,
              v80,
              v103,
              0);
          }
          ContainerEntryExtraData_DestroyDataTable(p_targetType, v73);
          FormHeapFree((unsigned int)p_targetType);
        }
        v81 = a1[2];
        v125 = 1;
        v121 = 1;
        if ( v81 )
        {
          v82 = *(_DWORD *)(v81 + 0x1C);
          v125 = (v82 & 0x100000) == 0;
          v121 = (v82 & 0x200000) == 0;
        }
        if ( sub_5E32D0(a12) )
        {
          v83 = (BSExtraDataVtbl *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5C))(a12);
          if ( v83 )
            sub_5227A0(v83, a10, a11, v34, (TESObjectREFR *)a12, v125, v121, 0, 1);
        }
        else if ( Actor_IsCreature((Actor *)a12) )
        {
          v84 = (BSExtraDataVtbl *)(*((int (__thiscall **)(TESChildCELL *))a12->vtbl + 0x5C))(a12);
          if ( v84 )
            sub_51E240(v84, (int)p_targetType, a10, a11, v34, (TESObjectREFR *)a12, v125, v121, 1);
        }
      }
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
    }
    (*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a12, 1);
    goto LABEL_106;
  }
  if ( v104 < sub_404C90(&v112)
    || (v122 = sub_404C90(v118), v122 > sub_404C90(&v109))
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*a1 + 0x188))(a1, a12, 1),
        v85 = (_DWORD **)a1[0xB],
        !(*(int (__thiscall **)(_DWORD *))(*v85[0x16] + 0x184))(v85[0x16]))
    || ((*(void (__thiscall **)(_DWORD *, TESChildCELL *, int))(*v85[0x16] + 0x188))(v85[0x16], a12, 1),
        v86 = (TESPackage *)(*(int (__thiscall **)(_DWORD *))(*v85[0x16] + 0x184))(v85[0x16]),
        !sub_5660A0(v86)) )
  {
LABEL_106:
    if ( !*((_BYTE *)a1 + 0xD0) )
    {
      (*(void (__thiscall **)(_DWORD *, TESChildCELL *))(*a1 + 0x194))(a1, a12);
      return 0;
    }
    return 0;
  }
  v87 = (*(int (__thiscall **)(_DWORD *, int, int, int))(*v85[0x16] + 0x184))(v85[0x16], a3, a2, a4);
  if ( v87 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v87 + 0x10))(v87, 1);
  v85[0x16][2] = 0;
  ((void (__thiscall *)(_DWORD **, int))(*v85)[0x11])(v85, 0x30000);
  if ( sub_5E05B0(v85) )
    sub_5E02B0(v85);
  (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1);
  (*(void (__thiscall **)(_DWORD *, TESChildCELL *, _DWORD))(*a1 + 0x18))(a1, a12, 0);
  return 0;
}
