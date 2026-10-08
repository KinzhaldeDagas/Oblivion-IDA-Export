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
  SitSleep v19; // eax
  TESObjectREFRVtbl *v22; // ecx
  TESObjectREFR *v23; // edi
  TESObjectREFRVtbl *v24; // ecx
  ExtraDataList *p_baseExtraList; // ebx
  double v26; // st7
  TESForm *v27; // eax
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
  PlayerCharacter *v38; // edi
  char *v39; // eax
  char *v40; // eax
  bool v41; // zf
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // eax
  int v43; // eax
  char *v44; // eax
  char *v45; // eax
  char *v46; // eax
  void (__thiscall *v47)(BaseFormComponent *, BaseFormComponent *); // ecx
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

  vtbl = a1[2].vtbl; /*0x6010d9*/
  if ( vtbl != (TESObjectREFRVtbl *)5 && vtbl != (TESObjectREFRVtbl *)3 ) /*0x6010eb*/
  {
    v18 = a11; /*0x6010f1*/
    if ( a11 != a1 /*0x60114f*/
      && !a1->vtbl->IsDead(a1, 0)
      && !((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0E)(a1)
      && !LOBYTE(a1[2].member.super.modlist.data)
      && (a12
       || (v19 = a1->vtbl->GetSleepState(a1)) == kSitSleep_None
       || v19 == kSitSleep_Sitting
       || v19 == kSitSleep_Sleeping) )
    {
      if ( ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 4) ) /*0x601161*/
        goto LABEL_13; /*0x601161*/
      Distance = TesObjectREF_GetDistance(a1, a11, 0); /*0x60116b*/
      __asm { fstp    [esp+30h+var_14] } /*0x601170*/
      a1->vtbl[1].super.Unk_31((TESForm *)a1); /*0x60117e*/
      __asm { fmul    qword ptr ds:0A3C770h } /*0x601180*/
      __asm { fstp    dword ptr [esp+30h+var_1C+4] }
      __asm
      {
        fld     [esp+30h+var_14]
        fstp    qword ptr [esp+30h+var_14]
      }
      a1->vtbl[1].super.Unk_31((TESForm *)a1); /*0x60119c*/
      __asm /*0x60119e*/
      {
        fadd    dword ptr [esp+30h+var_1C+4]
        fcomp   qword ptr [esp+30h+var_14]
        fnstsw  ax
      }
      if ( __SETP__(HIBYTE(_AX) & 5, 0) ) /*0x6011a8*/
      {
LABEL_13:
        LOBYTE(v76) = a15 > 0; /*0x6011bc*/
        if ( a1->vtbl->GetSleepState(a1) ) /*0x6011c8*/
          a1->vtbl[1].Unk_5E(a1); /*0x6011d8*/
        v82 = 0; /*0x6011dc*/
        if ( a15 ) /*0x6011e4*/
        {
          v82 = a15; /*0x60122a*/
        }
        else
        {
          v22 = a1[1].vtbl; /*0x6011e6*/
          v23 = a1; /*0x6011eb*/
          if ( v22 ) /*0x6011ed*/
          {
            if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))v22->super.super.InitializeComponent + 0xF4))(v22) ) /*0x6011f7*/
              v23 = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent /*0x60120a*/
                                      + 0xF4))(a1[1].vtbl);
          }
          v24 = a11[1].vtbl; /*0x60120c*/
          if ( v24 ) /*0x601211*/
          {
            Distance = ((double (__thiscall *)(TESObjectREFRVtbl *, TESObjectREFR *, TESObjectREFR *))*((_DWORD *)v24->super.super.InitializeComponent + 0x5C))( /*0x60121d*/
                         v24,
                         a11,
                         v23);
            v82 = Double_To_SInt32(Distance); /*0x601224*/
          }
        }
        if ( ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].GetSleepState)(a1, 1) ) /*0x60123a*/
        {
          if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1) ) /*0x6015c0*/
          {
            if ( !a11 ) /*0x6015c8*/
              return; /*0x6015c8*/
            v55 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x6015d8*/
            if ( (TESObjectREFR *)CombatController_GetCurrentTarget(v55) != a11 ) /*0x6015e3*/
            {
              __asm { fld     dword ptr ds:0A31E2Ch } /*0x6015e5*/
              __asm { fstp    dword ptr [esi+0ACh] }
              *(float *)&a1[1].member.baseExtraList.members.m_presenceBitfield[8] = _ET1; /*0x6015f3*/
              __asm { fldz } /*0x6015f9*/
              __asm
              {
                fst     [esp+38h+var_34]; float
                fstp    [esp+38h+var_38]; float
              }
              v57 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x601612*/
              CombatController_TryAddTarget(v57, (int)a11, a8, Distance, (Actor *)a11, v82, *(float *)&v76, v61, v63); /*0x601616*/
              v58 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].IsMobileObject)(a1); /*0x601626*/
              sub_61EAE0(v58, a2, a11); /*0x60162a*/
            }
          }
          goto LABEL_81; /*0x60162a*/
        }
        p_baseExtraList = &a1->member.baseExtraList; /*0x601249*/
        v26 = Script_AddEventToExtraScript(a11, &a1->member.baseExtraList, 0x8000); /*0x60124e*/
        v27 = a1->vtbl->GetBaseForm(a1); /*0x601260*/
        v28 = 0; /*0x601266*/
        v29 = 0; /*0x601268*/
        v74 = 0; /*0x60126d*/
        if ( v27->member.type == kFormType_NPC ) /*0x601275*/
        {
          LODWORD(v74) = v27; /*0x601284*/
          v28 = (BSExtraDataVtbl *)v27; /*0x601288*/
        }
        else if ( v27->member.type == kFormType_Creature ) /*0x60127a*/
        {
          HIDWORD(v74) = v27; /*0x60127c*/
          v29 = (BSExtraDataVtbl *)v27; /*0x601280*/
        }
        if ( (TESObjectREFR *)sub_579540() == a1 ) /*0x601291*/
          sub_578D50(0); /*0x601295*/
        CopyFromBase = a1[1].vtbl->super.super.CopyFromBase; /*0x6012a0*/
        if ( CopyFromBase ) /*0x6012a5*/
        {
          if ( (*((_DWORD *)CopyFromBase + 7) & 0x100000) != 0 ) /*0x6012b4*/
          {
            if ( v28 ) /*0x6012b8*/
            {
              sub_5227A0(v28, a8, a9, v26, a1, 1, 1, 0, 1); /*0x6012c5*/
            }
            else if ( v29 ) /*0x6012d1*/
            {
              sub_51E240(v29, (int)p_baseExtraList, a8, a9, v26, a1, 1, 1, 1); /*0x6012e0*/
            }
          }
          else if ( (*((_DWORD *)CopyFromBase + 7) & 0x200000) != 0 ) /*0x6012fa*/
          {
            v31 = ((int (__thiscall *)(TESObjectREFR *, unsigned int))a1->vtbl[1].Unk_44)(a1, 0xFFFFFFFF); /*0x601308*/
            v32 = (Sky *)v31; /*0x60130a*/
            if ( v31 ) /*0x60130e*/
            {
              v33 = *(_DWORD *)(v31 + 8); /*0x601310*/
              nodeMoonsRoot = 0; /*0x601313*/
              if ( v33 ) /*0x601317*/
              {
                if ( *(_BYTE *)(v33 + 4) == 0x21 ) /*0x60131d*/
                  nodeMoonsRoot = v32->nodeMoonsRoot; /*0x60131f*/
              }
              Actor_EquipItem( /*0x60132c*/
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
              if ( LOBYTE(nodeMoonsRoot->members.super.m_worldTransform.pos.z) == 5 ) /*0x601338*/
              {
                v32 = (Sky *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl[1].AddItem)(a1); /*0x601348*/
                v36 = (unsigned __int16 *)v32->nodeMoonsRoot; /*0x60134a*/
                Health = TESHealthForm_GetHealth(v32); /*0x601353*/
                Actor_EquipItem( /*0x60135c*/
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
              ContainerEntryExtraData_DestroyDataTable((unsigned int *)v32, v35); /*0x601363*/
              FormHeapFree((unsigned int)v32); /*0x601369*/
              v28 = (BSExtraDataVtbl *)v74; /*0x60136e*/
            }
          }
        }
        if ( a12 || !a16 ) /*0x601385*/
        {
          v38 = (PlayerCharacter *)a11; /*0x60148b*/
          goto LABEL_58; /*0x60148b*/
        }
        v38 = (PlayerCharacter *)a11; /*0x60138b*/
        if ( a11 ) /*0x601391*/
        {
          if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a11->vtbl[1].GetSleepState)(a11, 1) /*0x6013ad*/
            && !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) )
          {
            sub_5E91E0((Actor *)a1, 0x1D, 0x49564E49, 1); /*0x6013be*/
            if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) ) /*0x6013cb*/
              sub_5E91E0((Actor *)a1, 0x1D, 0x4C4D4843, 1); /*0x6013dc*/
            if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) ) /*0x6013e9*/
            {
              v39 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent /*0x6013f9*/
                             + 0x14))(a1[1].vtbl);
              MagicItem_LoadVFXModels(v39, 0); /*0x6013fd*/
            }
          }
        }
        if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl) ) /*0x60140e*/
          goto LABEL_58; /*0x60140e*/
        v40 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl); /*0x601418*/
        v41 = sub_419CF0(v40) == 0; /*0x601424*/
        InitializeComponent = a1[1].vtbl->super.super.InitializeComponent; /*0x601426*/
        if ( !v41 ) /*0x601428*/
        {
          v43 = (*((int (__stdcall **)(TESForm::ModReferenceList *))InitializeComponent + 0x14))(&a1[1].member.super.modlist); /*0x601433*/
          MagicCaster_CastMagicItem(&a1[1].member, v43, 0, v65); /*0x601439*/
          v44 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl); /*0x601448*/
          MagicItem_UnloadVFXModels(v44, 0); /*0x60144c*/
          v65 = 0; /*0x601459*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x15))(a1[1].vtbl); /*0x60145b*/
LABEL_58:
          sub_5EAE70((Actor *)a1, (int)p_baseExtraList, (int)v38, v65); /*0x60148f*/
          (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x5E))( /*0x6014a3*/
            a1[1].vtbl,
            0);
          v47 = a1[1].vtbl->super.super.CopyFromBase; /*0x6014a8*/
          if ( v47 ) /*0x6014ad*/
          {
            if ( !TESPackage_IsRuntimePackage((TESPackage *)v47) ) /*0x6014af*/
            {
              v48 = a1[1].vtbl; /*0x6014b8*/
              v62 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v48->super.super.InitializeComponent + 0xE4))(v48); /*0x6014cb*/
              v60 = (*((int (__thiscall **)(TESObjectREFRVtbl *))v48->super.super.InitializeComponent + 0x30))(v48); /*0x6014d8*/
              v49 = (BSExtraData *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v48->super.super.InitializeComponent /*0x6014df*/
                                    + 0x33))(v48);
              sub_4268B0( /*0x6014ec*/
                &a1->member.baseExtraList,
                (TESPackage *)v48->super.super.CopyFromBase,
                (int)v48->super.super.ClearComponentReferences,
                v49,
                v60,
                v62);
              v38 = (PlayerCharacter *)a11; /*0x6014f1*/
            }
          }
          v50 = (CombatController *)FormHeapAlloc(0x1C0u); /*0x6014fa*/
          if ( v50 ) /*0x601510*/
            v51 = CombatController::CombatController(v50, (int)a1, v38, v82, *(float *)&v76); /*0x601525*/
          else
            v51 = 0; /*0x601529*/
          if ( a14 ) /*0x601538*/
            CombatController_SetCombatMode((int)v51, 7); /*0x60153e*/
          if ( a12 ) /*0x601548*/
            *((_BYTE *)v51 + 0x4D) = 1; /*0x60154a*/
          v52 = a1[1].vtbl; /*0x60154e*/
          if ( v52 ) /*0x601553*/
          {
            v53 = v52->super.super.CopyFromBase; /*0x601555*/
            if ( v53 ) /*0x60155a*/
            {
              v54 = *((_DWORD *)v53 + 7); /*0x60155c*/
              if ( (v54 & 0x100000) != 0 || (v54 & 0x200000) != 0 ) /*0x60156e*/
              {
                if ( v28 ) /*0x601572*/
                {
                  sub_5227A0(v28, a8, a9, v26, a1, 1, 1, 0, 1); /*0x60157f*/
                }
                else if ( HIDWORD(v74) ) /*0x60158c*/
                {
                  sub_51E240((BSExtraDataVtbl *)HIDWORD(v74), (int)p_baseExtraList, a8, a9, v26, a1, 1, 1, 1); /*0x601595*/
                }
              }
            }
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 8))(a1[1].vtbl); /*0x6015a2*/
          Actor_AddPackage_((Actor *)a1, (TESPackage *)v51, 0, 1); /*0x6015ab*/
          v18 = a11; /*0x6015b0*/
LABEL_81:
          if ( v18 ) /*0x601631*/
          {
            if ( unk_B3B908 ) /*0x601633*/
            {
              Name = TESObjectREFR_GetName(v18); /*0x601643*/
              v59 = TESObjectREFR_GetName(a1); /*0x601646*/
              Interface_ConsolePrint("%.20s is entering combat with %.20s!", v59, Name); /*0x601651*/
            }
          }
          return; /*0x601651*/
        }
        v45 = (char *)(*((int (**)(void))InitializeComponent + 0x14))(); /*0x601462*/
        if ( !sub_419E50(v45) ) /*0x601466*/
        {
          v46 = (char *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x14))(a1[1].vtbl); /*0x60147d*/
          MagicItem_LoadVFXModels(v46, 0); /*0x601481*/
        }
      }
    }
  }
}
