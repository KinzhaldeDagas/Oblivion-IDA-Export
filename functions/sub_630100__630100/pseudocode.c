void __userpurge sub_630100(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Actor *a5)
{
  int v6; // ebx
  TESPackage *v8; // ebp
  char v9; // al
  double Distance; // st7
  void (__thiscall *v11)(_DWORD *, Actor *, _DWORD, _DWORD, int); // eax
  float *v12; // ebx
  float *v13; // eax
  double v14; // st7
  TESTopic *Topic; // eax
  void (__thiscall *v16)(_DWORD *, Actor *); // eax
  int v17; // eax
  TESPackageVtbl *i; // esi
  void (__thiscall *InitializeComponent)(BaseFormComponent *); // ebx
  TESForm *MerchantContainer; // ebp
  int ***ContainerChanges; // eax
  ActorAnimData *v22; // eax
  BSExtraDataVtbl *ExtraPackage; // eax
  int v24; // edx
  TESForm *v25; // [esp+4h] [ebp-34h]
  TESForm *v26; // [esp+Ch] [ebp-2Ch]
  TESObjectREFR *v27; // [esp+10h] [ebp-28h]
  float v28; // [esp+20h] [ebp-18h]
  float v29; // [esp+20h] [ebp-18h]
  int v30; // [esp+24h] [ebp-14h] BYREF
  float v31; // [esp+28h] [ebp-10h]
  float v32[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float v33; // [esp+3Ch] [ebp+4h]
  float v34; // [esp+3Ch] [ebp+4h]

  v6 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184))( /*0x630113*/
         a1,
         a4,
         a3,
         a2);
  if ( (*(int (__thiscall **)(_DWORD *))(*a1 + 0x36C))(a1) ) /*0x63011f*/
    a5->vtbl->AddPackageWakeUp(a5); /*0x630133*/
  v8 = 0; /*0x630135*/
  if ( v6 ) /*0x630139*/
  {
    if ( *(_BYTE *)(v6 + 0x20) == 0xF ) /*0x63013f*/
      v8 = (TESPackage *)v6; /*0x630141*/
  }
  (*(void (__thiscall **)(_DWORD *, PlayerCharacter *))(*a1 + 0xD0))(a1, reference); /*0x630154*/
  sub_566DC0(v8, kTerrainLODQuadRayDirectionZ, a3, a2, a5, 0, kTerrainLODQuadRayDirectionZ); /*0x630165*/
  if ( v9 ) /*0x63016c*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0xC0))(a1) ) /*0x6301ca*/
    {
      v22 = a5->vtbl->super.super.GetAnimData(a5); /*0x63039d*/
      if ( ActorAnimData_IsIdleInactive(v22) ) /*0x6303a1*/
      {
        ExtraPackage = ExtraDataList::GetExtraPackage(&a5->members.super.super.baseExtraList); /*0x6303ad*/
        if ( ExtraPackage && LOBYTE(ExtraPackage[4].Destructor) == 4 ) /*0x6303ba*/
        {
          v24 = *a1; /*0x6303c1*/
          a1[0xB] = reference; /*0x6303c9*/
          (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, unsigned int, _DWORD))(v24 + 0x198))( /*0x6303d5*/
            a1,
            a5,
            0,
            0xFFFFFFFF,
            0);
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a5, 1); /*0x6303ee*/
        }
      }
    }
    else
    {
      (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0xBC))(a1, 1); /*0x6301e0*/
      v12 = a5->vtbl->super.super.GetPos(a5); /*0x6301f6*/
      v13 = reference->vtbl->super.super.super.GetPos(reference); /*0x6301fe*/
      v33 = v13[1] - v12[1]; /*0x63020b*/
      v28 = v13[2] - v12[2]; /*0x630215*/
      v32[0] = *v13 - *v12; /*0x63021d*/
      v32[1] = v33; /*0x630225*/
      v32[2] = v28; /*0x63022d*/
      v29 = Vector3_CalculateHeadingRadiansXY(v32); /*0x630236*/
      *(float *)&v30 = 0.0; /*0x630244*/
      sub_683D80((int)a5, v29, (float *)&v30); /*0x630251*/
      v31 = v29; /*0x630256*/
      v34 = (double)(int)MEMORY[0xB36C10].value * dbl_A31C78; /*0x63026b*/
      if ( sub_5E0590(a5) ) /*0x63026f*/
        v34 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x630284*/
      v31 = fabs(v31); /*0x63028e*/
      v14 = v31; /*0x630292*/
      if ( v34 >= (double)v31 ) /*0x6302a1*/
      {
        sub_5E05F0(a5, 0x30); /*0x6302bc*/
      }
      else
      {
        v14 = v29; /*0x6302a3*/
        sub_685530(a5, v29, 1); /*0x6302ae*/
      }
      Topic = TESTopic::GetTopic(DialogueType_Combat, 3); /*0x6302c5*/
      a5->members.unk0E4 = (Actor *)reference; /*0x6302d7*/
      a5->members.super.process->SayTopic(a5->members.super.process, a5, Topic, 0, 0, 1); /*0x6302ec*/
      v16 = *(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x594); /*0x6302f0*/
      *((_BYTE *)a1 + 0x25D) = 1; /*0x6302f9*/
      v16(a1, a5); /*0x630300*/
      v17 = ((int (__stdcall *)(PlayerCharacter *))reference->vtbl->super.super.super.GetBaseForm)(reference); /*0x630311*/
      sub_6286E0(a1, (int)a5, v17, v27); /*0x630317*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x484))(a1, a1[0xB]); /*0x63032a*/
      for ( i = v8[1].__vftable; i; i = (TESPackageVtbl *)i->super.super.ClearComponentReferences ) /*0x630331*/
      {
        InitializeComponent = i->super.super.InitializeComponent; /*0x630340*/
        if ( !i->super.super.InitializeComponent ) /*0x630340*/
          break; /*0x630344*/
        if ( !*((_DWORD *)InitializeComponent + 1) ) /*0x63034a*/
        {
          MerchantContainer = (TESForm *)a5; /*0x630353*/
          if ( ExtraDataList_GetMerchantContainer(&a5->members.super.super.baseExtraList) ) /*0x630355*/
            MerchantContainer = (TESForm *)ExtraDataList_GetMerchantContainer(&a5->members.super.super.baseExtraList); /*0x630366*/
          v26 = *((TESForm **)InitializeComponent + 9); /*0x630370*/
          v25 = (TESForm *)reference; /*0x630375*/
          ContainerChanges = (int ***)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x630376*/
          sub_4919E0(ContainerChanges, a2, v14, v34, v25, MerchantContainer, v26); /*0x63037d*/
        }
      }
    }
  }
  else
  {
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)reference, 0); /*0x630178*/
    v11 = *(void (__thiscall **)(_DWORD *, Actor *, _DWORD, _DWORD, int))(*a1 + 0x58C); /*0x63018c*/
    if ( Distance <= dbl_A2FC70 ) /*0x630192*/
      v11(a1, a5, 0, 0, 0x101); /*0x6301b4*/
    else
      v11(a1, a5, 0, 0, 0x201); /*0x63019e*/
  }
}
