void __userpurge sub_64C350(
        TESObjectREFR **a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        TESObjectREFR *a10)
{
  int v12; // ebp
  char v13; // al
  TESObjectREFR *v14; // eax
  TESPackage *v15; // ecx
  float *v16; // ebx
  float *v17; // eax
  double v18; // st7
  PlayerCharacter *v19; // ebx
  float *v20; // ebx
  float *v21; // eax
  double v22; // st7
  Atmosphere *v23; // ecx
  double v24; // st7
  TESObjectCELL *ParentCell; // eax
  double v26; // st7
  char v27; // al
  unsigned int *v28; // eax
  TESChildCELL **v29; // eax
  ExtraDataList *v30; // ebx
  TESObjectREFR *v31; // ebx
  Atmosphere *v32; // ecx
  int v33; // ebp
  unsigned __int16 *v34; // eax
  int v35; // edx
  _DWORD *v36; // ecx
  TESObjectREFR *v37; // ebx
  float *v38; // eax
  float v39; // ecx
  unsigned int v40; // edx
  float v41; // eax
  int v42; // eax
  unsigned int v43; // ebx
  NiAVObject *v44; // eax
  TESObjectREFR *v45; // ebx
  TESPackage *v46; // eax
  int v47; // eax
  float *v48; // eax
  float *v49; // eax
  double v50; // st7
  double v51; // st6
  char *v52; // eax
  _DWORD *v53; // ebx
  TESObjectCELL *v54; // eax
  TESForm *v55; // ebx
  double v56; // st7
  double v57; // st7
  double v58; // st7
  int v59; // ebx
  int v60; // eax
  TESObjectCELL *v61; // [esp+14h] [ebp-64h]
  TESWorldSpace *v62; // [esp+18h] [ebp-60h]
  TESWorldSpace *v63; // [esp+20h] [ebp-58h]
  float v64; // [esp+20h] [ebp-58h]
  float v65; // [esp+34h] [ebp-44h]
  int v66; // [esp+34h] [ebp-44h]
  unsigned int *v67; // [esp+34h] [ebp-44h]
  bool (__thiscall *CompareTo)(BSExtraData *, BSExtraData *); // [esp+38h] [ebp-40h]
  int v69; // [esp+38h] [ebp-40h]
  float v70; // [esp+38h] [ebp-40h]
  TESObjectREFRVtbl *vtbl; // [esp+3Ch] [ebp-3Ch]
  float *v72; // [esp+3Ch] [ebp-3Ch]
  float *v73; // [esp+3Ch] [ebp-3Ch]
  float v74; // [esp+3Ch] [ebp-3Ch]
  float v75; // [esp+3Ch] [ebp-3Ch]
  float v76; // [esp+3Ch] [ebp-3Ch]
  float v77; // [esp+3Ch] [ebp-3Ch]
  float v78; // [esp+3Ch] [ebp-3Ch]
  float v79; // [esp+3Ch] [ebp-3Ch]
  float v80; // [esp+3Ch] [ebp-3Ch]
  double v81; // [esp+48h] [ebp-30h] BYREF
  unsigned __int64 v82; // [esp+54h] [ebp-24h]
  float v83; // [esp+5Ch] [ebp-1Ch]
  unsigned __int64 v84; // [esp+60h] [ebp-18h]
  float v85; // [esp+68h] [ebp-10h]
  float v86; // [esp+6Ch] [ebp-Ch] BYREF
  float v87; // [esp+70h] [ebp-8h]
  float v88; // [esp+74h] [ebp-4h]
  char v89; // [esp+7Ch] [ebp+4h]
  TESChildCELL *v90; // [esp+7Ch] [ebp+4h]
  float v91; // [esp+7Ch] [ebp+4h]
  float v92; // [esp+7Ch] [ebp+4h]
  float v93; // [esp+7Ch] [ebp+4h]
  float v94; // [esp+7Ch] [ebp+4h]
  TESChildCELL *v95; // [esp+7Ch] [ebp+4h]
  float GameHour; // [esp+7Ch] [ebp+4h]
  float v97; // [esp+7Ch] [ebp+4h]
  float v98; // [esp+7Ch] [ebp+4h]

  v12 = ((int (__usercall *)@<eax>(TESObjectREFR **@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>))LODWORD((*a1)[4].member.rot.y))(
          a1,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4,
          a3);
  if ( !a1[0xB] )
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*a1)[0xF].member.pos[1]))(a1, a10);
  if ( !sub_5E6780(a10) )
  {
    if ( !a1[0xB] )
      goto LABEL_7;
    if ( !a1[0xB]->vtbl->IsActor(a1[0xB]) )
    {
      sub_4D88C0(a10, (bool (__thiscall *)(BSExtraData *, BSExtraData *))a1[0xB]->member.super.refID);
      if ( !v13 )
        goto LABEL_7;
    }
  }
  v89 = 0;
  if ( a1[0xB] )
  {
    if ( a1[0xB]->vtbl->IsActor(a1[0xB]) )
    {
      v14 = a1[0xB];
      if ( v14 != a10 )
      {
        v89 = 1;
        v15 = *(TESPackage **)(*((_DWORD *)OblivionDynamicCast(
                                             v14,
                                             0,
                                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                             &Actor `RTTI Type Descriptor',
                                             0)
                               + 0x16)
                             + 8);
        if ( a1[0xB] != (TESObjectREFR *)TESDataHandler_g_PlayerRef
          && (!v15 || v15->members.type != 1 && !sub_5660A0(v15)) )
        {
          ((void (__thiscall *)(TESObjectREFR **, _DWORD))(*a1)[4].member.baseForm)(a1, 0);
          return;
        }
      }
    }
  }
  v16 = a10->vtbl->GetPos(a10);
  v17 = a10->vtbl->GetPos(a10);
  *(float *)&v84 = *v17 - *v16;
  *((float *)&v84 + 1) = v17[1] - v16[1];
  v18 = v17[2] - v16[2];
  v19 = 0;
  v85 = v18;
  v65 = 0.0;
  if ( v89 )
  {
    v20 = a1[0xB]->vtbl->GetPos(a1[0xB]);
    v21 = a10->vtbl->GetPos(a10);
    *(float *)&v82 = *v21 - *v20;
    *((float *)&v82 + 1) = v21[1] - v20[1];
    v22 = v21[2] - v20[2];
    v19 = (PlayerCharacter *)a1[0xB];
    v23 = *(Atmosphere **)(v12 + 0x28);
    v83 = v22;
    v84 = v82;
    v85 = v83;
    v66 = (int)sub_452A60(v23);
    if ( v66 <= 0 )
      v66 = 0xC8;
    if ( a1[0xB] == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      v24 = (double)v66;
    }
    else
    {
      ParentCell = TESObjectREFR_GetParentCell(a10);
      if ( TESObjectCELL_IsInterior(ParentCell) )
        v24 = flt_B36AA0;
      else
        v24 = (double)v66 * flt_B36A98;
    }
    v65 = v24;
  }
  if ( !*(_DWORD *)(v12 + 0x24)
    || (v26 = sub_566DC0((TESPackage *)v12, flt_A30634, a8, (Actor *)a10, 0, flt_A30634), !v27) )
  {
    if ( !v89 )
      goto LABEL_69;
    v72 = (float *)sub_566B30((TESPackage *)v12, (int)&v86, (Actor *)a10);
    v48 = a10->vtbl->GetPos(a10);
    *(float *)&v82 = *v48 - *v72;
    *((float *)&v82 + 1) = v48[1] - v72[1];
    v83 = v48[2] - v72[2];
    v73 = (float *)sub_566B30((TESPackage *)v12, (int)&v81, (Actor *)a10);
    v49 = v19->vtbl->super.super.super.GetPos((TESObjectREFR *)v19);
    v86 = *v49 - *v73;
    v87 = v49[1] - v73[1];
    v88 = v49[2] - v73[2];
    v74 = *(float *)&v84 * *(float *)&v84 + *((float *)&v84 + 1) * *((float *)&v84 + 1) + v85 * v85;
    v75 = sqrt(v74);
    if ( v65 < (double)v75 )
    {
      v50 = *((float *)&v82 + 1);
      v51 = *(float *)&v82;
      v81 = v87;
      *(double *)&v82 = v88;
      v76 = v50 * v50 + v51 * v51 + v83 * v83;
      v77 = sqrt(v76);
      v70 = v77;
      v78 = v86 * v86 + v87 * v87 + v88 * v88;
      v79 = sqrt(v78);
      if ( v70 <= (double)v79 )
        goto LABEL_79;
    }
    if ( v19 != TESDataHandler_g_PlayerRef
      && sub_5E0380((Actor *)v19)
      && (v52 = (char *)sub_5E0380((Actor *)v19), sub_567770(v52)) )
    {
LABEL_79:
      if ( !*((_BYTE *)a1 + 0xD0) )
      {
        ((void (__thiscall *)(TESObjectREFR **, int))(*a1)[2].member.super.modlist.next)(a1, 1);
        ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, unsigned int))LODWORD((*a1)[4].member.rot.z))(
          a1,
          a10,
          0xFFFFFFFF);
        return;
      }
    }
    else
    {
LABEL_69:
      if ( !*((_BYTE *)a1 + 0xD0) )
        goto LABEL_74;
    }
    if ( !v89
      || (v93 = *(float *)&v84 * *(float *)&v84 + *((float *)&v84 + 1) * *((float *)&v84 + 1) + v85 * v85,
          v94 = sqrt(v93),
          v65 >= (double)v94) )
    {
      v95 = (TESChildCELL *)*a1;
      v53 = (_DWORD *)sub_566B30((TESPackage *)v12, (int)&v86, (Actor *)a10);
      v63 = sub_566940((TESPackage *)v12, (Actor *)a10);
      v54 = sub_566A40((char **)v12, (Actor *)a10);
      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))v95[0xF7].vtbl)(
              a1,
              a10,
              *v53,
              v53[1],
              v53[2],
              v54,
              v63) )
        return;
    }
    if ( *((_BYTE *)a1 + 0xD0) )
      return;
LABEL_74:
    v55 = TESForm_LookupByFormID(0x3Au);
    GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
    *(double *)&v82 = GameHour;
    v56 = sub_6599B0((TESChildCELL *)a10);
    if ( v56 > *(double *)&v82 )
      GameHour = GameHour + dbl_A2F920;
    *(double *)&v82 = GameHour;
    v57 = sub_6599B0((TESChildCELL *)a10);
    v80 = *(double *)&v82 - v57;
    v58 = *(float *)&v55[1].member.refID;
    v59 = (int)*a1;
    v97 = v58;
    v64 = sub_5677B0((TESPackage *)v12, v58, a10, 1);
    v98 = dbl_A2F938 / v97 * v80;
    v62 = sub_566940((TESPackage *)v12, (Actor *)a10);
    v61 = sub_566A40((char **)v12, (Actor *)a10);
    v60 = sub_566B30((TESPackage *)v12, (int)&v86, (Actor *)a10);
    (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, int, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(v59 + 0x418))(
      a1,
      a10,
      v60,
      v61,
      v62,
      LODWORD(v98),
      LODWORD(v64));
    return;
  }
  if ( !v89 )
  {
    v28 = sub_5E6780(a10);
    v67 = v28;
    if ( v28 )
    {
      v29 = (TESChildCELL **)*v28;
      v30 = 0;
      v90 = 0;
      if ( v29 )
      {
        v90 = *v29;
        v30 = (ExtraDataList *)*v29;
      }
      CompareTo = 0;
      if ( v30 )
      {
        if ( ExtraDataList_GetReferencePointer(v30) )
          CompareTo = ExtraDataList_GetReferencePointer(v30)[1].CompareTo;
      }
      v31 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v12 + 0x24));
      if ( (v31 || (v31 = a1[0xC]) != 0) && TESObjectREFR_GetContainer(v31) )
      {
        v32 = *(Atmosphere **)(v12 + 0x28);
        v33 = v67[2];
        v34 = (unsigned __int16 *)sub_452A60(v32);
        sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v26, v33, (int)v90, v31, v34, (int)CompareTo);
      }
      else
      {
        if ( *v67 )
          v90 = *(TESChildCELL **)*v67;
        v36 = *(_DWORD **)(v12 + 0x24);
        v69 = 0;
        if ( v36 )
        {
          v37 = (TESObjectREFR *)sub_5697E0(v36);
          if ( (v37 || (v37 = a1[0xC]) != 0)
            && (v37->vtbl->GetBaseForm(v37) == TESDataHandler_g_XMarker
             || v37->vtbl->GetBaseForm(v37) == (TESForm *)TESDataHandler_g_XMarkerHeading) )
          {
            v38 = v37->vtbl->GetPos(v37);
            v39 = *v38;
            v40 = *((_DWORD *)v38 + 1);
            v41 = v38[2];
            v84 = __PAIR64__(v40, LODWORD(v39));
            v85 = v41;
            v42 = FormHeapAlloc(0xCu);
            if ( v42 )
            {
              *(_QWORD *)v42 = v84;
              *(float *)(v42 + 8) = v85;
            }
            else
            {
              v42 = 0;
            }
            v69 = v42;
          }
        }
        v43 = v67[2];
        vtbl = a10->vtbl;
        v44 = sub_452A60(*(Atmosphere **)(v12 + 0x28));
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, TESChildCELL *, NiAVObject *, int, _DWORD))vtbl[1].Unk_48)(
          a10,
          v43,
          v90,
          v44,
          v69,
          0);
      }
      ContainerEntryExtraData_DestroyDataTable(v67, v35);
      FormHeapFree((unsigned int)v67);
    }
LABEL_7:
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*a1)[4].member.rot.z))(a1, a10, 1);
LABEL_8:
    if ( !*((_BYTE *)a1 + 0xD0) )
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*a1)[4].member.pos[2]))(a1, a10);
    return;
  }
  v91 = *(float *)&v84 * *(float *)&v84 + *((float *)&v84 + 1) * *((float *)&v84 + 1) + v85 * v85;
  v92 = sqrt(v91);
  if ( v65 < (double)v92 )
    goto LABEL_8;
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*a1)[4].member.rot.z))(a1, a10, 1);
  v45 = a1[0xB];
  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))v45[1].vtbl->super.super.InitializeComponent + 0x61))(v45[1].vtbl) )
    goto LABEL_8;
  (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v45[1].vtbl->super.super.InitializeComponent + 0x62))(
    v45[1].vtbl,
    a10,
    1);
  v46 = (TESPackage *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v45[1].vtbl->super.super.InitializeComponent + 0x61))(v45[1].vtbl);
  if ( !sub_5660A0(v46) )
    goto LABEL_8;
  v47 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v45[1].vtbl->super.super.InitializeComponent + 0x61))(v45[1].vtbl);
  if ( v47 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v47 + 0x10))(v47, 1);
  v45[1].vtbl->super.super.CopyFromBase = 0;
  v45->vtbl->super.ClearModified((TESForm *)v45, 0x30000);
  if ( sub_5E05B0(v45) )
    sub_5E02B0(v45);
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, _DWORD))(*a1)->member.childCell.GetChildCell)(a1, a10, 0);
}
