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
  int v15; // ecx
  float *v16; // ebx
  float *v17; // eax
  double v18; // st7
  PlayerCharacter *v19; // ebx
  float *v20; // ebx
  float *v21; // eax
  double v22; // st7
  Atmosphere *v23; // ecx
  double v24; // st7
  TESObjectCELL *DwordAtOffset40; // eax
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
  TESPackage *CurrentPackage; // eax
  float *v53; // ebx
  BSExtraDataVtbl *v54; // eax
  TESForm *v55; // ebx
  double v56; // st7
  double v57; // st7
  double v58; // st7
  int v59; // ebx
  float *v60; // eax
  BSExtraDataVtbl *v61; // [esp+14h] [ebp-64h]
  TESWorldSpace *v62; // [esp+18h] [ebp-60h]
  TESWorldSpace *v63; // [esp+20h] [ebp-58h]
  float v64; // [esp+20h] [ebp-58h]
  float v65; // [esp+34h] [ebp-44h]
  int PointerAtOffset08; // [esp+34h] [ebp-44h]
  unsigned int *v67; // [esp+34h] [ebp-44h]
  UInt32 refID; // [esp+38h] [ebp-40h]
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

  v12 = ((int (__usercall *)@<eax>(TESObjectREFR **@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))LODWORD((*a1)[4].member.rot.y))( /*0x64c36b*/
          a1,
          a9,
          a8,
          a7,
          a6,
          a5,
          a4,
          a3,
          a2);
  if ( !a1[0xB] ) /*0x64c363*/
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*a1)[0xF].member.pos[1]))(a1, a10); /*0x64c37a*/
  if ( !sub_5E6780(a10) ) /*0x64c37e*/
  {
    if ( !a1[0xB] ) /*0x64c387*/
      goto LABEL_7; /*0x64c387*/
    if ( !a1[0xB]->vtbl->IsActor(a1[0xB]) ) /*0x64c397*/
    {
      sub_4D88C0(a10, (bool (__thiscall *)(BSExtraData *, BSExtraData *))a1[0xB]->member.super.refID); /*0x64c3a6*/
      if ( !v13 ) /*0x64c3ad*/
        goto LABEL_7; /*0x64c3ad*/
    }
  }
  v89 = 0; /*0x64c3e6*/
  if ( a1[0xB] ) /*0x64c3e2*/
  {
    if ( a1[0xB]->vtbl->IsActor(a1[0xB]) ) /*0x64c3f8*/
    {
      v14 = a1[0xB]; /*0x64c3fe*/
      if ( v14 != a10 ) /*0x64c403*/
      {
        v89 = 1; /*0x64c414*/
        v15 = *(_DWORD *)(*((_DWORD *)OblivionDynamicCast( /*0x64c424*/
                                        v14,
                                        0,
                                        (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                        &Actor `RTTI Type Descriptor',
                                        0)
                          + 0x16)
                        + 8);
        if ( a1[0xB] != (TESObjectREFR *)reference /*0x64c43c*/
          && (!v15 || *(_BYTE *)(v15 + 0x20) != 1 && !TESPackage_IsRuntimePackage((TESPackage *)v15)) )
        {
          ((void (__thiscall *)(TESObjectREFR **, _DWORD))(*a1)[4].member.baseForm)(a1, 0); /*0x64c451*/
          return; /*0x64c45a*/
        }
      }
    }
  }
  v16 = a10->vtbl->GetPos(a10); /*0x64c469*/
  v17 = a10->vtbl->GetPos(a10); /*0x64c475*/
  *(float *)&v84 = *v17 - *v16; /*0x64c47b*/
  *((float *)&v84 + 1) = v17[1] - v16[1]; /*0x64c485*/
  v18 = v17[2] - v16[2]; /*0x64c48c*/
  v19 = 0; /*0x64c48f*/
  v85 = v18; /*0x64c495*/
  v65 = 0.0; /*0x64c49b*/
  if ( v89 ) /*0x64c49f*/
  {
    v20 = a1[0xB]->vtbl->GetPos(a1[0xB]); /*0x64c4b2*/
    v21 = a10->vtbl->GetPos(a10); /*0x64c4be*/
    *(float *)&v82 = *v21 - *v20; /*0x64c4c4*/
    *((float *)&v82 + 1) = v21[1] - v20[1]; /*0x64c4ce*/
    v22 = v21[2] - v20[2]; /*0x64c4dd*/
    v19 = (PlayerCharacter *)a1[0xB]; /*0x64c4e0*/
    v23 = *(Atmosphere **)(v12 + 0x28); /*0x64c4e7*/
    v83 = v22; /*0x64c4ea*/
    v84 = v82; /*0x64c4f2*/
    v85 = v83; /*0x64c4f6*/
    PointerAtOffset08 = (int)Shared_GetPointerAtOffset08(v23); /*0x64c501*/
    if ( PointerAtOffset08 <= 0 ) /*0x64c505*/
      PointerAtOffset08 = 0xC8; /*0x64c507*/
    if ( a1[0xB] == (TESObjectREFR *)reference ) /*0x64c518*/
    {
      v24 = (double)PointerAtOffset08; /*0x64c51a*/
    }
    else
    {
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a10); /*0x64c522*/
      if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x64c529*/
        v24 = flt_B36A88[6]; /*0x64c532*/
      else
        v24 = (double)PointerAtOffset08 * flt_B36A88[4]; /*0x64c53e*/
    }
    v65 = v24; /*0x64c544*/
  }
  if ( !*(_DWORD *)(v12 + 0x24) /*0x64c568*/
    || (v26 = sub_566DC0(
                (TESPackage *)v12,
                kTerrainLODQuadRayDirectionZ,
                a8,
                a7,
                (Actor *)a10,
                0,
                kTerrainLODQuadRayDirectionZ),
        !v27) )
  {
    if ( !v89 ) /*0x64c7f6*/
      goto LABEL_69; /*0x64c7f6*/
    v72 = sub_566B30((TESPackage *)v12, &v86, (Actor *)a10); /*0x64c80b*/
    v48 = a10->vtbl->GetPos(a10); /*0x64c817*/
    *(float *)&v82 = *v48 - *v72; /*0x64c822*/
    *((float *)&v82 + 1) = v48[1] - v72[1]; /*0x64c82c*/
    v83 = v48[2] - v72[2]; /*0x64c83d*/
    v73 = sub_566B30((TESPackage *)v12, (float *)&v81, (Actor *)a10); /*0x64c848*/
    v49 = v19->vtbl->super.super.super.GetPos((TESObjectREFR *)v19); /*0x64c854*/
    v86 = *v49 - *v73; /*0x64c85e*/
    v87 = v49[1] - v73[1]; /*0x64c868*/
    v88 = v49[2] - v73[2]; /*0x64c872*/
    v74 = *(float *)&v84 * *(float *)&v84 + *((float *)&v84 + 1) * *((float *)&v84 + 1) + v85 * v85; /*0x64c892*/
    v75 = sqrt(v74); /*0x64c89f*/
    if ( v65 < (double)v75 ) /*0x64c8b2*/
    {
      v50 = *((float *)&v82 + 1); /*0x64c8b8*/
      v51 = *(float *)&v82; /*0x64c8bc*/
      v81 = v87; /*0x64c8c8*/
      *(double *)&v82 = v88; /*0x64c8d8*/
      v76 = v50 * v50 + v51 * v51 + v83 * v83; /*0x64c8ec*/
      v77 = sqrt(v76); /*0x64c8f9*/
      v70 = v77; /*0x64c901*/
      v78 = v86 * v86 + v87 * v87 + v88 * v88; /*0x64c91b*/
      v79 = sqrt(v78); /*0x64c928*/
      if ( v70 <= (double)v79 ) /*0x64c93b*/
        goto LABEL_79; /*0x64c93b*/
    }
    if ( v19 != reference /*0x64c959*/
      && Actor::GetCurrentPackage((Actor *)v19)
      && (CurrentPackage = Actor::GetCurrentPackage((Actor *)v19), TESPackage::IsTemporaryOverrideType(CurrentPackage)) )
    {
LABEL_79:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64c962*/
      {
        ((void (__thiscall *)(TESObjectREFR **, int))(*a1)[2].member.super.modlist.next)(a1, 1); /*0x64c977*/
        ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, unsigned int))LODWORD((*a1)[4].member.rot.z))( /*0x64c986*/
          a1,
          a10,
          0xFFFFFFFF);
        return; /*0x64c98f*/
      }
    }
    else
    {
LABEL_69:
      if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64c999*/
        goto LABEL_74; /*0x64c999*/
    }
    if ( !v89 /*0x64c9e2*/
      || (v93 = *(float *)&v84 * *(float *)&v84 + *((float *)&v84 + 1) * *((float *)&v84 + 1) + v85 * v85,
          v94 = sqrt(v93),
          v65 >= (double)v94) )
    {
      v95 = (TESChildCELL *)*a1; /*0x64c9eb*/
      v53 = sub_566B30((TESPackage *)v12, &v86, (Actor *)a10); /*0x64c9fa*/
      v63 = sub_566940((TESPackage *)v12, (Actor *)a10); /*0x64ca01*/
      v54 = sub_566A40((char **)v12, (Actor *)a10); /*0x64ca05*/
      if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR **, TESObjectREFR *, _DWORD, _DWORD, _DWORD, BSExtraDataVtbl *, TESWorldSpace *))v95[0xF7].vtbl)( /*0x64ca2d*/
              a1,
              a10,
              *(_DWORD *)v53,
              *((_DWORD *)v53 + 1),
              *((_DWORD *)v53 + 2),
              v54,
              v63) )
        return; /*0x64ca2d*/
    }
    if ( *((_BYTE *)a1 + 0xD0) ) /*0x64ca37*/
      return; /*0x64ca3e*/
LABEL_74:
    v55 = TESForm_LookupByFormID(0x3Au); /*0x64ca44*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x64ca5a*/
    *(double *)&v82 = GameHour; /*0x64ca64*/
    v56 = sub_6599B0((TESChildCELL *)a10); /*0x64ca68*/
    if ( v56 > *(double *)&v82 ) /*0x64ca76*/
      GameHour = GameHour + dbl_A2F920; /*0x64ca82*/
    *(double *)&v82 = GameHour; /*0x64ca8c*/
    v57 = sub_6599B0((TESChildCELL *)a10); /*0x64ca90*/
    v80 = *(double *)&v82 - v57; /*0x64ca9e*/
    v58 = *(float *)&v55[1].member.refID; /*0x64caa2*/
    v59 = (int)*a1; /*0x64caa5*/
    v97 = v58; /*0x64caa7*/
    v64 = sub_5677B0((TESPackage *)v12, v58, a10, 1); /*0x64cab3*/
    v98 = dbl_A2F938 / v97 * v80; /*0x64cac7*/
    v62 = sub_566940((TESPackage *)v12, (Actor *)a10); /*0x64cad8*/
    v61 = sub_566A40((char **)v12, (Actor *)a10); /*0x64cae1*/
    v60 = sub_566B30((TESPackage *)v12, &v86, (Actor *)a10); /*0x64caea*/
    (*(void (__thiscall **)(TESObjectREFR **, TESObjectREFR *, float *, BSExtraDataVtbl *, TESWorldSpace *, _DWORD, _DWORD))(v59 + 0x418))( /*0x64caf9*/
      a1,
      a10,
      v60,
      v61,
      v62,
      LODWORD(v98),
      LODWORD(v64));
    return; /*0x64caf9*/
  }
  if ( !v89 ) /*0x64c573*/
  {
    v28 = sub_5E6780(a10); /*0x64c57b*/
    v67 = v28; /*0x64c582*/
    if ( v28 ) /*0x64c586*/
    {
      v29 = (TESChildCELL **)*v28; /*0x64c58c*/
      v30 = 0; /*0x64c58e*/
      v90 = 0; /*0x64c592*/
      if ( v29 ) /*0x64c596*/
      {
        v90 = *v29; /*0x64c59a*/
        v30 = (ExtraDataList *)*v29; /*0x64c59e*/
      }
      refID = 0; /*0x64c5a2*/
      if ( v30 ) /*0x64c5aa*/
      {
        if ( ExtraDataList_GetReferencePointer(v30) ) /*0x64c5ae*/
          refID = ExtraDataList_GetReferencePointer(v30)->member.super.refID; /*0x64c5c1*/
      }
      v31 = (TESObjectREFR *)sub_5697E0(*(_DWORD **)(v12 + 0x24)); /*0x64c5cd*/
      if ( (v31 || (v31 = a1[0xC]) != 0) && TESObjectREFR_GetContainer(v31) ) /*0x64c5dc*/
      {
        v32 = *(Atmosphere **)(v12 + 0x28); /*0x64c5ed*/
        v33 = v67[2]; /*0x64c5f0*/
        v34 = (unsigned __int16 *)Shared_GetPointerAtOffset08(v32); /*0x64c5f4*/
        sub_5FC6D0((int)a10, a2, a3, a4, a5, a6, a7, a8, v26, v33, (int)v90, v31, v34, refID); /*0x64c603*/
      }
      else
      {
        if ( *v67 ) /*0x64c611*/
          v90 = *(TESChildCELL **)*v67; /*0x64c619*/
        v36 = *(_DWORD **)(v12 + 0x24); /*0x64c61d*/
        v69 = 0; /*0x64c622*/
        if ( v36 ) /*0x64c62a*/
        {
          v37 = (TESObjectREFR *)sub_5697E0(v36); /*0x64c635*/
          if ( (v37 || (v37 = a1[0xC]) != 0) /*0x64c668*/
            && (v37->vtbl->GetBaseForm(v37) == MEMORY[0xB35EAC]
             || v37->vtbl->GetBaseForm(v37) == (TESForm *)MEMORY[0xB35EB0]) )
          {
            v38 = v37->vtbl->GetPos(v37); /*0x64c674*/
            v39 = *v38; /*0x64c676*/
            v40 = *((_DWORD *)v38 + 1); /*0x64c678*/
            v41 = v38[2]; /*0x64c67b*/
            v84 = __PAIR64__(v40, LODWORD(v39)); /*0x64c680*/
            v85 = v41; /*0x64c688*/
            v42 = FormHeapAlloc(0xCu); /*0x64c68c*/
            if ( v42 ) /*0x64c696*/
            {
              *(_QWORD *)v42 = v84; /*0x64c69c*/
              *(float *)(v42 + 8) = v85; /*0x64c6a9*/
            }
            else
            {
              v42 = 0; /*0x64c6ae*/
            }
            v69 = v42; /*0x64c6b0*/
          }
        }
        v43 = v67[2]; /*0x64c6bf*/
        vtbl = a10->vtbl; /*0x64c6c9*/
        v44 = Shared_GetPointerAtOffset08(*(Atmosphere **)(v12 + 0x28)); /*0x64c6cd*/
        ((void (__thiscall *)(TESObjectREFR *, unsigned int, TESChildCELL *, NiAVObject *, int, _DWORD))vtbl[1].Unk_48)( /*0x64c6e5*/
          a10,
          v43,
          v90,
          v44,
          v69,
          0);
      }
      ContainerEntryExtraData_DestroyDataTable(v67, v35); /*0x64c6ed*/
      FormHeapFree((unsigned int)v67); /*0x64c6f3*/
    }
LABEL_7:
    ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*a1)[4].member.rot.z))(a1, a10, 1); /*0x64c3af*/
LABEL_8:
    if ( !*((_BYTE *)a1 + 0xD0) ) /*0x64c3be*/
      ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *))LODWORD((*a1)[4].member.pos[2]))(a1, a10); /*0x64c3d6*/
    return; /*0x64c3df*/
  }
  v91 = *(float *)&v84 * *(float *)&v84 + *((float *)&v84 + 1) * *((float *)&v84 + 1) + v85 * v85; /*0x64c71c*/
  v92 = sqrt(v91); /*0x64c729*/
  if ( v65 < (double)v92 ) /*0x64c73c*/
    goto LABEL_8; /*0x64c73c*/
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, int))LODWORD((*a1)[4].member.rot.z))(a1, a10, 1); /*0x64c74f*/
  v45 = a1[0xB]; /*0x64c751*/
  if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))v45[1].vtbl->super.super.InitializeComponent + 0x61))(v45[1].vtbl) ) /*0x64c75f*/
    goto LABEL_8; /*0x64c75f*/
  (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, int))v45[1].vtbl->super.super.InitializeComponent + 0x62))( /*0x64c777*/
    v45[1].vtbl,
    a10,
    1);
  v46 = (TESPackage *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v45[1].vtbl->super.super.InitializeComponent + 0x61))(v45[1].vtbl); /*0x64c784*/
  if ( !TESPackage_IsRuntimePackage(v46) ) /*0x64c788*/
    goto LABEL_8; /*0x64c78f*/
  v47 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v45[1].vtbl->super.super.InitializeComponent + 0x61))(v45[1].vtbl); /*0x64c7a0*/
  if ( v47 ) /*0x64c7a4*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v47 + 0x10))(v47, 1); /*0x64c7af*/
  v45[1].vtbl->super.super.CopyFromBase = 0; /*0x64c7b4*/
  v45->vtbl->super.ClearModified((TESForm *)v45, 0x30000); /*0x64c7c7*/
  if ( sub_5E05B0(v45) ) /*0x64c7cb*/
    sub_5E02B0(v45); /*0x64c7d6*/
  ((void (__thiscall *)(TESObjectREFR **, TESObjectREFR *, _DWORD))(*a1)->member.childCell.GetChildCell)(a1, a10, 0); /*0x64c7e5*/
}
