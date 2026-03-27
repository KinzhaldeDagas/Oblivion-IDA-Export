void __usercall sub_4E3490(TESObjectREFR *a1@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>)
{
  void *niNode; // ecx
  int v6; // edi
  char *v7; // ebx
  TESForm *baseForm; // esi
  void *v9; // eax
  const char *v10; // esi
  char *v11; // eax
  const char *v12; // eax
  int v13; // eax
  NiObject *v14; // eax
  NiObject *v15; // esi
  int type; // edi
  TESForm *v17; // eax
  CHAR *FormModelPAth; // eax
  int v19; // edi
  char v20; // al
  float v21; // edx
  int v22; // edi
  int v23; // eax
  int v24; // ebx
  void (__thiscall *Destructor)(NiRefObject *, bool); // edi
  CHAR *v26; // eax
  ActorAnimData *v27; // eax
  int **v28; // eax
  int **v29; // eax
  void *v30; // ecx
  NiNode *v31; // ebx
  const char *v32; // eax
  double Health; // st7
  char *v34; // eax
  volatile LONG *v35; // edi
  __int16 v36; // dx
  char *v37; // eax
  __int16 v39; // dx
  char v40; // cl
  _WORD *v41; // edi
  char v42; // al
  TESObjectREFRVtbl *v43; // eax
  TESForm *v44; // eax
  CHAR *v45; // ecx
  unsigned int v46; // eax
  CHAR *v47; // esi
  char *v48; // edi
  char *v50; // esi
  TESForm *v51; // eax
  char *v52; // eax
  char **v53; // eax
  TESForm *v54; // eax
  char *v55; // eax
  const char *v56; // eax
  char *v57; // eax
  char *v58; // edx
  char v59; // cl
  char *v60; // eax
  AnimSequenceSingle *v61; // eax
  AnimSequenceSingle *v62; // ecx
  ActorAnimData *v63; // eax
  int **v64; // eax
  int **v65; // eax
  void *v66; // ecx
  NiNode *v67; // ebx
  const char *v68; // eax
  double v69; // st7
  TESForm *v70; // esi
  char *v71; // eax
  __int16 v72; // cx
  char *v73; // eax
  __int16 v75; // cx
  char v76; // dl
  _WORD *v77; // edi
  char v78; // al
  TESObjectREFRVtbl *v79; // edx
  TESForm *v80; // eax
  CHAR *v81; // ecx
  unsigned int v82; // eax
  CHAR *v83; // esi
  char *v84; // edi
  char *v86; // esi
  TESForm *v87; // eax
  char *v88; // eax
  char **v89; // eax
  TESForm *v90; // eax
  char *v91; // eax
  const char *v92; // eax
  char *v93; // eax
  char *v94; // edx
  char v95; // cl
  char *v96; // eax
  AnimSequenceSingle *v97; // eax
  TESObjectREFRVtbl *v98; // esi
  int v99; // eax
  char *v100; // ebx
  void (__thiscall **v101)(volatile LONG *, int, char *, void *, TESObjectREFR *); // esi
  int v102; // eax
  void (__thiscall **v103)(volatile LONG *, int, char *, BSExtraDataVtbl *, TESObjectREFR *); // esi
  int v104; // eax
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v106; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // edi
  int v108; // eax
  void (__thiscall **v109)(TESObjectREFRVtbl *, void *); // edi
  void *AnimData; // eax
  _DWORD *v111; // eax
  BSExtraData *v112; // eax
  void *a2; // [esp+28h] [ebp-248h]
  BSExtraDataVtbl *a2a; // [esp+28h] [ebp-248h]
  size_t v115; // [esp+2Ch] [ebp-244h]
  const char *v116; // [esp+2Ch] [ebp-244h]
  int v117; // [esp+2Ch] [ebp-244h]
  char **v118; // [esp+2Ch] [ebp-244h]
  int v119; // [esp+2Ch] [ebp-244h]
  int v120; // [esp+2Ch] [ebp-244h]
  char **v121; // [esp+2Ch] [ebp-244h]
  int v122; // [esp+2Ch] [ebp-244h]
  char v123; // [esp+47h] [ebp-229h]
  TESForm *v124; // [esp+48h] [ebp-228h]
  AnimSequenceSingle *v125; // [esp+4Ch] [ebp-224h]
  NiAVObject *v126; // [esp+50h] [ebp-220h]
  char *v127; // [esp+54h] [ebp-21Ch] BYREF
  char Str[4]; // [esp+58h] [ebp-218h] BYREF
  __int16 v129; // [esp+5Ch] [ebp-214h]
  char v130[260]; // [esp+15Ch] [ebp-114h] BYREF
  int v131; // [esp+26Ch] [ebp-4h]

  niNode = a1->member.niNode;
  v6 = 0;
  v126 = 0;
  if ( niNode )
  {
    v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)niNode + 8))(niNode);
    v126 = (NiAVObject *)v6;
  }
  v7 = (char *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->Unk_5A)(
                 a1,
                 a4,
                 a3,
                 st5_0);
  v127 = v7;
  v125 = 0;
  sub_4D83B0(a1, 0);
  if ( v6 && (a1->member.super.flags & 0x20) == 0 )
  {
    baseForm = a1->member.baseForm;
    v124 = baseForm;
    if ( baseForm->member.type == kFormType_NPC || baseForm->member.type == kFormType_Creature )
    {
      v9 = OblivionDynamicCast(
             a1->member.baseForm,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESModel `RTTI Type Descriptor',
             0);
      v10 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)v9 + 0x14))(v9);
      v11 = strrchr(v10, 0x5C);
      if ( v11 )
      {
        LODWORD(v115) = 8;
        if ( _strnicmp(v11 + 1, "Skeleton", v115) )
        {
          v12 = (const char *)((int (__thiscall *)(TESForm *, const char *))a1->member.baseForm->vtbl->GetEditorName)(
                                a1->member.baseForm,
                                v10);
          PrintError("Actor '%s' needs to have a 'skeleton*.nif' model instead of '%s'.", v12, v116);
        }
      }
      baseForm = v124;
    }
    if ( a1->member.baseForm->member.type != kFormType_NPC )
    {
      if ( a1->member.baseForm->member.type != kFormType_Creature )
      {
        if ( *(_WORD *)(v6 + 0xB6) && **(_DWORD **)(v6 + 0xB0) && *(_DWORD *)(sub_405790(v6, 0) + 0xC) )
        {
          ((void (__thiscall *)(TESObjectREFR *, int))a1->vtbl->super.Unk_12)(a1, 0x2000000);
          v13 = sub_405790(v6, 0);
          v14 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v13 + 0xC));
          v15 = v14;
          if ( v14 )
          {
            if ( LOBYTE(v14[0xD].members.m_uiRefCount) )
            {
              type = a1->member.baseForm->member.type;
              v17 = a1->vtbl->GetBaseForm(a1);
              FormModelPAth = GetFormModelPAth(v17);
              PrintError(
                "%s '%s' is cumulative. This is not allowed. Re-export to correct this problem.",
                *(const char **)(0xC * type + 0xB05E04),
                FormModelPAth);
            }
            v123 = 0;
            if ( a1->vtbl->GetBaseForm(a1) )
            {
              if ( a1->vtbl->GetBaseForm(a1)->member.type == kFormType_Door )
              {
                LOBYTE(v127) = sub_45A500(SaveLoad_CurrentSavegame);
                if ( sub_420FD0(&a1->member.baseExtraList) )
                  sub_45A530(SaveLoad_CurrentSavegame, 1);
                v19 = sub_4533F0(SaveLoad_CurrentSavegame, (int)a1, 1);
                sub_4D6E60((char *)a1, v19);
                LOBYTE(v21) = v20 != ((v19 & 0x80000) != 0);
                sub_4DE460(a1, v21, 1);
                v123 = 1;
                sub_45A530(SaveLoad_CurrentSavegame, (char)v127);
              }
            }
            v22 = sub_4715A0(v15, *(_DWORD *)animGroupInfos_ptr);
            v23 = sub_4715A0(v15, (int)off_B10328);
            v24 = v23;
            if ( v22 )
            {
              if ( *(_DWORD *)(v22 + 0x24) )
              {
                v26 = GetFormModelPAth(a1->member.baseForm);
                PrintError("Idle animation must be looping '%s'.", v26);
              }
              else
              {
                sub_470B20((_DWORD *)v22, 0, 0, 1.0, 0.0, 0);
                *(float *)(v22 + 0x48) = -flt_A7DEB4;
              }
              if ( !v24 )
                goto LABEL_94;
            }
            else if ( !v23 )
            {
              if ( !v123 )
              {
                LOWORD(v15[1].__vftable) |= 8u;
                sub_4715C0(v15, 0.0);
                Destructor = v15[8].__vftable->super.Destructor;
                sub_470B20(Destructor, 0, 0, 1.0, 0.0, 0);
                *((float *)Destructor + 0x12) = -flt_A7DEB4;
                NiAVObject_UpdateNiAVObject(v126, *((float *)Destructor + 0xB), 1);
              }
              sub_4715C0(v15, 0.0);
              LOWORD(v15[1].__vftable) &= ~8u;
              goto LABEL_94;
            }
            sub_470B20((_DWORD *)v24, 0, 0, 1.0, 0.0, 0);
            *(float *)(v24 + 0x48) = -flt_A7DEB4;
          }
        }
        else
        {
          (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v6 + 0x60))(v6, 0.0, 0);
        }
LABEL_94:
        if ( a1->vtbl->IsActor(a1) )
        {
          vtbl = a1[1].vtbl;
          if ( vtbl )
          {
            if ( (unsigned int)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl->super.super.InitializeComponent + 2))(vtbl) <= 1 )
            {
              v106 = a1[1].vtbl;
              if ( v106 )
              {
                InitializeComponent = v106->super.super.InitializeComponent;
                v108 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int, _DWORD))v106->super.super.InitializeComponent
                        + 0x3B))(
                         v106,
                         1,
                         0);
                (*((void (__thiscall **)(TESObjectREFRVtbl *, int))InitializeComponent + 0x41))(v106, v108);
                (*((void (__thiscall **)(TESObjectREFRVtbl *, AnimSequenceSingle *))v106->super.super.InitializeComponent
                 + 0x45))(
                  v106,
                  v125);
                if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
                {
                  v109 = (void (__thiscall **)(TESObjectREFRVtbl *, void *))((char *)v106->super.super.InitializeComponent
                                                                           + 0x114);
                  AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
                  (*v109)(v106, AnimData);
                }
              }
            }
          }
          v111 = sub_700010(v126, (int)dword_B3CD7C);
          if ( v111 )
            *((_WORD *)v111 + 4) |= 0x40u;
        }
        v112 = sub_41E620(&a1->member.baseExtraList);
        if ( v112 )
        {
          if ( v125 )
          {
            NiAVObject_UpdateNiAVObject((NiAVObject *)a1->member.niNode, *(float *)&v112[1].members.type, 1);
            sub_41F5A0(&a1->member.baseExtraList.vtbl);
          }
        }
        return;
      }
      v27 = (ActorAnimData *)FormHeapAlloc(0xDCu);
      HIBYTE(v127) = HIBYTE(v27);
      v131 = 0;
      if ( v27 )
        v28 = (int **)NewActorAnimData(v27);
      else
        v28 = 0;
      v131 = 0xFFFFFFFF;
      v29 = sub_4D83B0(a1, v28);
      v30 = a1->member.niNode;
      v125 = (AnimSequenceSingle *)v29;
      if ( !v30
        || (v31 = (NiNode *)(*(int (__thiscall **)(void *))(*(_DWORD *)v30 + 8))(v30), (v126 = (NiAVObject *)v31) == 0) )
      {
        v32 = (const char *)((int (__thiscall *)(TESForm *, UInt32))baseForm->vtbl->GetEditorName)(
                              baseForm,
                              baseForm->member.refID);
        PrintError("SetAnimation cleared 3D because %s (%08X) was moved", v32, v117);
        return;
      }
      sub_4E1580(a1, st5_0, a3, a4);
      Health = TESObjectREFR_GetHealth((TESChildCELL *)a1);
      if ( Health <= *(float *)&SrcStr )
      {
        v36 = *(_WORD *)"\\";
        *(_DWORD *)Str = *(_DWORD *)"Data\\";
        v129 = v36;
        v37 = (char *)&v127 + 3;
        while ( *++v37 )
          ;
        v39 = *(_WORD *)"es";
        *(_DWORD *)v37 = *(_DWORD *)"Meshes";
        v40 = aMeshes_0[6];
        *((_WORD *)v37 + 2) = v39;
        v37[6] = v40;
        v41 = (_WORD *)((char *)&v127 + 3);
        do
        {
          v42 = *((_BYTE *)v41 + 1);
          v41 = (_WORD *)((char *)v41 + 1);
        }
        while ( v42 );
        v43 = a1->vtbl;
        *v41 = *(_WORD *)SubStr;
        v44 = v43->GetBaseForm(a1);
        v45 = GetFormModelPAth(v44);
        v46 = strlen(v45) + 1;
        v47 = v45;
        v48 = (char *)&v127 + 3;
        while ( *++v48 )
          ;
        qmemcpy(v48, v47, v46);
        v50 = strrchr(Str, 0x5C);
        *(_DWORD *)v50 = dword_A370DC;
        *((_DWORD *)v50 + 1) = dword_A370E0;
        v50[8] = byte_A370E4;
        v51 = a1->vtbl->GetBaseForm(a1);
        v52 = GetFormModelPAth(v51);
        v53 = sub_434850(Str, v52, 0);
        *(_DWORD *)v50 = dword_A370D0;
        v35 = (volatile LONG *)v53;
        *((_DWORD *)v50 + 1) = dword_A370D4;
        *((_WORD *)v50 + 4) = word_A370D8;
        v118 = v53;
        v54 = a1->vtbl->GetBaseForm(a1);
        v55 = GetFormModelPAth(v54);
        sub_434850(Str, v55, v118);
        baseForm = v124;
      }
      else
      {
        v34 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&baseForm[7].member.type + 0x14))(&baseForm[7].member);
        v35 = (volatile LONG *)sub_435830(v34, 0);
      }
      if ( !Menu_PickIdles__(v125, st5_0, a3, Health, v35, v31, a1) )
      {
        v56 = (const char *)((int (__thiscall *)(TESForm *, UInt32))baseForm->vtbl->GetEditorName)(
                              baseForm,
                              baseForm->member.refID);
        PrintError("Bad InitAnimation for Creature '%s' (%08X). Missing 'Idle' animation.", v56, v119);
      }
      if ( TESObjectREFR_GetHealth((TESChildCELL *)a1) > *(float *)&SrcStr )
      {
        v35 = (volatile LONG *)v124;
        if ( TESAnimation_HasAnimations(&v124[6].member) )
        {
          v57 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&v124[7].member.type + 0x14))(&v124[7].member);
          v58 = Str;
          do
          {
            v59 = *v57;
            *v58++ = *v57++;
          }
          while ( v59 );
          v60 = strrchr(Str, 0x5C);
          if ( v60 )
          {
            *v60 = 0;
            v61 = (AnimSequenceSingle *)sub_6899C0((char *)&v124[6].member);
            sub_476080(v125, v61, Str);
          }
        }
      }
      if ( !v125 )
        goto LABEL_94;
      v62 = v125;
LABEL_93:
      sub_476D10(v62, (int)v35, st5_0, a3, 0.0, (int)a1, 0.0, flt_A30634);
      goto LABEL_94;
    }
    if ( !v7 )
      goto LABEL_94;
    sub_4796F0(v7, (char)a1, st5_0, a3, a4);
    v63 = (ActorAnimData *)FormHeapAlloc(0xDCu);
    v131 = 1;
    if ( v63 )
      v64 = (int **)NewActorAnimData(v63);
    else
      v64 = 0;
    v131 = 0xFFFFFFFF;
    v65 = sub_4D83B0(a1, v64);
    v66 = a1->member.niNode;
    v125 = (AnimSequenceSingle *)v65;
    if ( !v66
      || (v67 = (NiNode *)(*(int (__thiscall **)(void *))(*(_DWORD *)v66 + 8))(v66), (v126 = (NiAVObject *)v67) == 0) )
    {
      v68 = (const char *)((int (__thiscall *)(TESForm *, UInt32))v124->vtbl->GetEditorName)(v124, v124->member.refID);
      PrintError("SetAnimation cleared 3D because %s (%08X) was moved", v68, v120);
      return;
    }
    sub_4E1580(a1, st5_0, a3, a4);
    v69 = TESObjectREFR_GetHealth((TESChildCELL *)a1);
    if ( v69 <= *(float *)&SrcStr )
    {
      v72 = *(_WORD *)"\\";
      *(_DWORD *)Str = *(_DWORD *)"Data\\";
      v129 = v72;
      v73 = (char *)&v127 + 3;
      while ( *++v73 )
        ;
      v75 = *(_WORD *)"es";
      *(_DWORD *)v73 = *(_DWORD *)"Meshes";
      v76 = aMeshes_0[6];
      *((_WORD *)v73 + 2) = v75;
      v73[6] = v76;
      v77 = (_WORD *)((char *)&v127 + 3);
      do
      {
        v78 = *((_BYTE *)v77 + 1);
        v77 = (_WORD *)((char *)v77 + 1);
      }
      while ( v78 );
      v79 = a1->vtbl;
      *v77 = *(_WORD *)SubStr;
      v80 = v79->GetBaseForm(a1);
      v81 = GetFormModelPAth(v80);
      v82 = strlen(v81) + 1;
      v83 = v81;
      v84 = (char *)&v127 + 3;
      while ( *++v84 )
        ;
      qmemcpy(v84, v83, v82);
      v86 = strrchr(Str, 0x5C);
      *(_DWORD *)v86 = dword_A370DC;
      *((_DWORD *)v86 + 1) = dword_A370E0;
      v86[8] = byte_A370E4;
      v87 = a1->vtbl->GetBaseForm(a1);
      v88 = GetFormModelPAth(v87);
      v89 = sub_434850(Str, v88, 0);
      *(_DWORD *)v86 = dword_A370D0;
      v35 = (volatile LONG *)v89;
      *((_DWORD *)v86 + 1) = dword_A370D4;
      *((_WORD *)v86 + 4) = word_A370D8;
      v121 = v89;
      v90 = a1->vtbl->GetBaseForm(a1);
      v91 = GetFormModelPAth(v90);
      sub_434850(Str, v91, v121);
      v70 = v124;
    }
    else
    {
      v70 = v124;
      v71 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&v124[7].member.type + 0x14))(&v124[7].member);
      v35 = (volatile LONG *)sub_435830(v71, 0);
    }
    if ( !Menu_PickIdles__(v125, st5_0, a3, v69, v35, v67, a1) )
    {
      v92 = (const char *)((int (__thiscall *)(TESForm *, UInt32))v70->vtbl->GetEditorName)(v70, v70->member.refID);
      PrintError("Bad InitAnimation for NPC '%s' (%08X). Missing 'Idle' animation.", v92, v122);
    }
    if ( TESObjectREFR_GetHealth((TESChildCELL *)a1) > *(float *)&SrcStr )
    {
      v35 = (volatile LONG *)v124;
      if ( TESAnimation_HasAnimations(&v124[6].member) )
      {
        v93 = (char *)(*(int (__thiscall **)(TESFormMembr *))(*(_DWORD *)&v124[7].member.type + 0x14))(&v124[7].member);
        v94 = v130;
        do
        {
          v95 = *v93;
          *v94++ = *v93++;
        }
        while ( v95 );
        v96 = strrchr(v130, 0x5C);
        if ( v96 )
        {
          *v96 = 0;
          v97 = (AnimSequenceSingle *)sub_6899C0((char *)&v124[6].member);
          sub_476080(v125, v97, v130);
        }
      }
    }
    v98 = a1[1].vtbl;
    if ( v98 )
    {
      if ( (*((unsigned __int8 (__thiscall **)(TESObjectREFRVtbl *))v98->super.super.InitializeComponent + 0xBF))(a1[1].vtbl) )
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v98->super.super.InitializeComponent + 0xC2))(v98, 1);
      if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
      {
        v99 = sub_6600D0(TESDataHandler_g_PlayerRef, 1);
        v100 = v127;
        if ( v127 == (char *)v99 )
        {
          v35 = (volatile LONG *)a1[1].vtbl;
          v101 = (void (__thiscall **)(volatile LONG *, int, char *, void *, TESObjectREFR *))(*v35 + 0x150);
          a2 = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
          LOBYTE(v102) = Actor_IsWeaponOut(a1);
          (*v101)(v35, v102, v100, a2, a1);
          goto LABEL_92;
        }
      }
      else
      {
        v100 = v127;
      }
      v35 = (volatile LONG *)a1[1].vtbl;
      v103 = (void (__thiscall **)(volatile LONG *, int, char *, BSExtraDataVtbl *, TESObjectREFR *))(*v35 + 0x150);
      a2a = TESObjectREFR_GetAnimData((Actor *)a1);
      LOBYTE(v104) = Actor_IsWeaponOut(a1);
      (*v103)(v35, v104, v100, a2a, a1);
    }
LABEL_92:
    v62 = v125;
    if ( !v125 )
      goto LABEL_94;
    goto LABEL_93;
  }
}
