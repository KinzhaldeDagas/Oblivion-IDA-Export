void __userpurge sub_6010B0(
        TESObjectREFR *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double Distance@<st0>,
        TESObjectREFR *a11,
        char a12,
        int a13,
        char a14,
        int a15,
        char a16)
{
  TESObjectREFRVtbl *vtbl; // eax
  TESObjectREFR *v18; // ebp
  int v19; // eax
  TESObjectREFRVtbl *v22; // ecx
  TESObjectREFR *v23; // edi
  TESObjectREFRVtbl *v24; // ecx
  int p_baseExtraList; // ebx
  double v26; // st7
  int v27; // eax
  BSExtraDataVtbl *v28; // ebp
  BSExtraDataVtbl *v29; // edi
  void (__thiscall *CopyFromBase)(BaseFormComponent *, BaseFormComponent *); // eax
  int v31; // eax
  Sky *v32; // edi
  int v33; // eax
  NiNode *nodeMoonsRoot; // ebp
  int v35; // edx
  unsigned __int16 *v36; // ebp
  NiNode *Health; // eax
  TESObjectREFR *v38; // edi
  char *v39; // eax
  char *v40; // eax
  bool v41; // zf
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // eax
  int v43; // eax
  char *v44; // eax
  char *v45; // eax
  char *v46; // eax
  TESPackage *v47; // ecx
  TESObjectREFRVtbl *v48; // edi
  BSExtraData *v49; // eax
  CombatController *v50; // eax
  CombatController *v51; // edi
  TESObjectREFRVtbl *v52; // eax
  void (__thiscall *v53)(BaseFormComponent *, BaseFormComponent *); // eax
  int v54; // eax
  int v55; // eax
  int v57; // eax
  int v58; // eax
  char *v59; // eax
  char v60; // [esp+Ch] [ebp-38h]
  float v61; // [esp+Ch] [ebp-38h]
  char v62; // [esp+10h] [ebp-34h]
  float v63; // [esp+10h] [ebp-34h]
  char *Name; // [esp+10h] [ebp-34h]
  int v65; // [esp+14h] [ebp-30h]
  int v66; // [esp+18h] [ebp-2Ch]
  int v67; // [esp+18h] [ebp-2Ch]
  int v68; // [esp+1Ch] [ebp-28h]
  int v69; // [esp+1Ch] [ebp-28h]
  int v70; // [esp+20h] [ebp-24h]
  int v71; // [esp+20h] [ebp-24h]
  int v72; // [esp+24h] [ebp-20h]
  int v73; // [esp+24h] [ebp-20h]
  __int64 v74; // [esp+28h] [ebp-1Ch]
  __int64 v76; // [esp+30h] [ebp-14h]
  int v78; // [esp+38h] [ebp-Ch]
  int v79; // [esp+38h] [ebp-Ch]
  int v80; // [esp+3Ch] [ebp-8h]
  int v81; // [esp+3Ch] [ebp-8h]
  int v82; // [esp+58h] [ebp+14h]

  vtbl = a1[2].vtbl;
  if ( vtbl != (TESObjectREFRVtbl *)5 && vtbl != (TESObjectREFRVtbl *)3 )
  {
    v18 = a11;
    if ( a11 != a1
      && !a1->vtbl->IsDead(a1, 0)
      && !((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1)
      && !LOBYTE(a1[2].member.super.modlist.data)
      && (a12 || (v19 = a1->vtbl->GetSleepState(a1)) == 0 || v19 == 4 || v19 == 9) )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 4) )
        goto LABEL_13;
      Distance = TesObjectREF_GetDistance(a1, a11, 0);
      __asm { fstp    [esp+30h+var_14] }
      a1->vtbl[1].super.Unk_31((TESForm *)a1);
      __asm { fmul    qword ptr ds:0A3C770h }
      __asm { fstp    dword ptr [esp+30h+var_1C+4] }
      __asm
      {
        fld     [esp+30h+var_14]
        fstp    qword ptr [esp+30h+var_14]
      }
      a1->vtbl[1].super.Unk_31((TESForm *)a1);
      __asm
      {
        fadd    dword ptr [esp+30h+var_1C+4]
        fcomp   qword ptr [esp+30h+var_14]
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) )
      {
LABEL_13:
        LOBYTE(v76) = a15 > 0;
        if ( a1->vtbl->GetSleepState(a1) )
          a1->vtbl[1].Unk_5E(a1);
        v82 = 0;
        if ( a15 )
        {
          v82 = a15;
        }
        else
        {
          v22 = a1[1].vtbl;
          v23 = a1;
          if ( v22 )
          {
            if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v22->super.super.InitializeComponent + 0xF4))(v22) )
              v23 = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent
                                      + 0xF4))(a1[1].vtbl);
          }
          v24 = a11[1].vtbl;
          if ( v24 )
          {
            Distance = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *))*((_DWORD *)v24->super.super.InitializeComponent + 0x5C))(
                         v24,
                         a11,
                         v23);
            v82 = Double_To_SInt32(Distance);
          }
        }
        if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].GetSleepState)(a1, 1) )
        {
          if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) )
          {
            if ( !a11 )
              return;
            v55 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
            if ( (TESObjectREFR *)sub_6135F0(v55) != a11 )
            {
              __asm { fld     dword ptr ds:0A31E2Ch }
              __asm { fstp    dword ptr [esi+0ACh] }
              *(float *)&a1[1].member.baseExtraList.members.m_presenceBitfield[8] = _ET1;
              __asm { fldz }
              __asm
              {
                fst     [esp+38h+var_34]; float
                fstp    [esp+38h+var_38]; float
              }
              v57 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
              sub_616190(v57, (int)a11, a8, Distance, (int)a11, v82, *(float *)&v76, v61, v63);
              v58 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1);
              sub_61EAE0(v58, a2, (int)a11);
            }
          }
          goto LABEL_81;
        }
        p_baseExtraList = (int)&a1->member.baseExtraList;
        v26 = Script_AddEventToExtraScript(a11, &a1->member.baseExtraList, 0x8000);
        v27 = (int)a1->vtbl->GetBaseForm(a1);
        v28 = 0;
        v29 = 0;
        v74 = 0;
        if ( *(_BYTE *)(v27 + 4) == 0x23 )
        {
          LODWORD(v74) = v27;
          v28 = (BSExtraDataVtbl *)v27;
        }
        else if ( *(_BYTE *)(v27 + 4) == 0x24 )
        {
          HIDWORD(v74) = v27;
          v29 = (BSExtraDataVtbl *)v27;
        }
        if ( (TESObjectREFR *)sub_579540() == a1 )
          sub_578D50(0);
        CopyFromBase = a1[1].vtbl->super.super.CopyFromBase;
        if ( CopyFromBase )
        {
          if ( (*((_DWORD *)CopyFromBase + 7) & 0x100000) != 0 )
          {
            if ( v28 )
            {
              sub_5227A0(v28, a8, a9, v26, a1, 1, 1, 0, 1);
            }
            else if ( v29 )
            {
              sub_51E240(v29, p_baseExtraList, a8, a9, v26, a1, 1, 1, 1);
            }
          }
          else if ( (*((_DWORD *)CopyFromBase + 7) & 0x200000) != 0 )
          {
            v31 = ((int (__thiscall *)(TESObjectREFR *, unsigned int))a1->vtbl[1].Unk_44)(a1, 0xFFFFFFFF);
            v32 = (Sky *)v31;
            if ( v31 )
            {
              v33 = *(_DWORD *)(v31 + 8);
              nodeMoonsRoot = 0;
              if ( v33 )
              {
                if ( *(_BYTE *)(v33 + 4) == 0x21 )
                  nodeMoonsRoot = v32->nodeMoonsRoot;
              }
              Actor_EquipItem(
                (PlayerCharacter *)a1,
                (unsigned __int16 *)nodeMoonsRoot,
                a8,
                a9,
                a6,
                v26,
                a3,
                a7,
                a5,
                a4,
                (TESForm *)v33,
                1,
                0,
                1,
                0,
                v65,
                v66,
                v68,
                v70,
                v72,
                v74,
                SHIDWORD(v74),
                v76,
                SHIDWORD(v76),
                v78,
                v80);
              if ( LOBYTE(nodeMoonsRoot->members.super.m_worldTransform.pos.z) == 5 )
              {
                v32 = (Sky *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].AddItem)(a1);
                v36 = (unsigned __int16 *)v32->nodeMoonsRoot;
                Health = TESHealthForm_GetHealth(v32);
                Actor_EquipItem(
                  (PlayerCharacter *)a1,
                  v36,
                  a8,
                  a9,
                  a6,
                  v26,
                  a3,
                  a7,
                  a5,
                  a4,
                  (TESForm *)v36,
                  (signed int)Health,
                  0,
                  1,
                  0,
                  v65,
                  v67,
                  v69,
                  v71,
                  v73,
                  v74,
                  SHIDWORD(v74),
                  v76,
                  SHIDWORD(v76),
                  v79,
                  v81);
              }
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v32, v35);
              FormHeapFree((unsigned int)v32);
              v28 = (BSExtraDataVtbl *)v74;
            }
          }
        }
        if ( a12 || !a16 )
        {
          v38 = a11;
          goto LABEL_58;
        }
        v38 = a11;
        if ( a11 )
        {
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a11->vtbl[1].GetSleepState)(a11, 1)
            && !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) )
          {
            sub_5E91E0((Actor *)a1, 0x1D, 0x49564E49, 1);
            if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) )
              sub_5E91E0((Actor *)a1, 0x1D, 0x4C4D4843, 1);
            if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) )
            {
              v39 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent
                             + 0x14))(a1[1].vtbl);
              sub_41A610(v39, 0);
            }
          }
        }
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) )
          goto LABEL_58;
        v40 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl);
        v41 = sub_419CF0(v40) == 0;
        InitializeComponent = a1[1].vtbl->super.super.InitializeComponent;
        if ( !v41 )
        {
          v43 = (*((int (__stdcall **)(Data **))InitializeComponent + 0x14))(&a1[1].member.super.modlist.data);
          MagicCaster_CastMagicItem(&a1[1].member, v43, 0, v65);
          v44 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl);
          sub_419F10(v44, 0);
          v65 = 0;
          (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x15))(a1[1].vtbl);
LABEL_58:
          sub_5EAE70((Actor *)a1, p_baseExtraList, (int)v38, v65);
          (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x5E))(
            a1[1].vtbl,
            0);
          v47 = (TESPackage *)a1[1].vtbl->super.super.CopyFromBase;
          if ( v47 )
          {
            if ( !sub_5660A0(v47) )
            {
              v48 = a1[1].vtbl;
              v62 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v48->super.super.InitializeComponent + 0xE4))(v48);
              v60 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v48->super.super.InitializeComponent + 0x30))(v48);
              v49 = (BSExtraData *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v48->super.super.InitializeComponent
                                    + 0x33))(v48);
              sub_4268B0(
                &a1->member.baseExtraList,
                (TESPackage *)v48->super.super.CopyFromBase,
                (int)v48->super.super.ClearComponentReferences,
                v49,
                v60,
                v62);
              v38 = a11;
            }
          }
          v50 = (CombatController *)FormHeapAlloc(0x1C0u);
          if ( v50 )
            v51 = CombatController::CombatController(v50, (int)a1, (int)v38, v82, *(float *)&v76);
          else
            v51 = 0;
          if ( a14 )
            sub_612DE0((int)v51, (char)v28, a8, a9, v26, 7);
          if ( a12 )
            *((_BYTE *)v51 + 0x4D) = 1;
          v52 = a1[1].vtbl;
          if ( v52 )
          {
            v53 = v52->super.super.CopyFromBase;
            if ( v53 )
            {
              v54 = *((_DWORD *)v53 + 7);
              if ( (v54 & 0x100000) != 0 || (v54 & 0x200000) != 0 )
              {
                if ( v28 )
                {
                  sub_5227A0(v28, a8, a9, v26, a1, 1, 1, 0, 1);
                }
                else if ( HIDWORD(v74) )
                {
                  sub_51E240((BSExtraDataVtbl *)HIDWORD(v74), p_baseExtraList, a8, a9, v26, a1, 1, 1, 1);
                }
              }
            }
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 8))(a1[1].vtbl);
          Actor_AddPackage_((Actor *)a1, (TESPackage *)v51, 0, 1);
          v18 = a11;
LABEL_81:
          if ( v18 )
          {
            if ( byte_B3B908 )
            {
              Name = TESObjectREFR_GetName(v18);
              v59 = TESObjectREFR_GetName(a1);
              Interface_ConsolePrint("%.20s is entering combat with %.20s!", v59, Name);
            }
          }
          return;
        }
        v45 = (char *)(*((int (**)(void))InitializeComponent + 0x14))();
        if ( !sub_419E50(v45) )
        {
          v46 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl);
          sub_41A610(v46, 0);
        }
      }
    }
  }
}
