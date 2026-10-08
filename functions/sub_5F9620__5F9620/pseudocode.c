// Probable name: Actor_ProcessAttackReachProbe. This routine is called from Actor_ProcessAction's two reach/attack branches and from Actor_AttackHandling::DetermineTarget; it returns a byte and contains target/static-hit probing, impact-particle registration, and conditional attack/script follow-up. The two floating x87 inputs are visible in DetermineTarget's caller, but their semantic roles and Actor_ProcessAction's input values remain Unknown.
char __usercall Actor_ProcessAttackReachProbe@<al>(Actor *a1@<ecx>, double st6_0@<st1>, double a3@<st0>)
{
  TESObjectCELL *DwordAtOffset40; // eax
  ExtraDataList *v5; // edi
  int *v6; // ebx
  TESObjectREFRVtbl *process; // ecx
  int *unk1F4; // edi
  int v9; // eax
  double v10; // st5
  int vtbl_high; // eax
  int *v12; // ebx
  int v13; // eax
  Data *v14; // edi
  int v15; // ecx
  int v16; // eax
  int v17; // ebx
  TESObjectREFRVtbl *p_super; // eax
  int v19; // eax
  NiTransform *v20; // edi
  NiPoint3 *v21; // eax
  float *v22; // eax
  float v23; // ecx
  float v24; // edx
  float v25; // eax
  NiPoint3 *WeaponTipLocalPointForHit; // eax
  float *v27; // eax
  TESObjectCELL *(__thiscall *v28)(TESChildCELL *); // ecx
  TESForm *v29; // edx
  float v30; // eax
  TESObjectREFRVtbl *v31; // ecx
  int v32; // eax
  int v33; // eax
  double v34; // st7
  int v35; // eax
  int v36; // edi
  int v37; // eax
  int *v38; // eax
  int v39; // eax
  int *SafeFloatPointer; // eax
  float *v41; // ecx
  double v42; // st7
  double v43; // st6
  int *v44; // eax
  int *v45; // eax
  int v46; // edi
  double v47; // st7
  float *v48; // eax
  Actor *data; // edi
  const char *BloodParticlePath; // eax
  TESObjectCELL *v51; // eax
  int v52; // ebx
  TESObjectREFRVtbl *v53; // edi
  float *v54; // eax
  UInt32 v55; // eax
  int v56; // eax
  _DWORD *v57; // ebx
  TESObjectREFRVtbl *v58; // ecx
  EntryData *v59; // eax
  TESForm *type; // edx
  int vtbl_low; // ebx
  int v62; // eax
  int **v63; // eax
  unsigned int *v64; // edi
  unsigned __int8 v65; // al
  int v66; // edx
  TESObjectCELL *v67; // eax
  int v68; // eax
  _DWORD *v69; // esi
  float v71; // [esp+Ch] [ebp-F0h]
  const char *flags; // [esp+14h] [ebp-E8h]
  TESObjectCELL *(__thiscall *GetChildCell)(TESChildCELL *); // [esp+18h] [ebp-E4h]
  TESForm *baseForm; // [esp+1Ch] [ebp-E0h]
  int x_low; // [esp+20h] [ebp-DCh]
  Actor *v76; // [esp+20h] [ebp-DCh]
  float scale; // [esp+24h] [ebp-D8h]
  int v78; // [esp+24h] [ebp-D8h]
  int v79; // [esp+24h] [ebp-D8h]
  void *niNode; // [esp+28h] [ebp-D4h]
  TESObjectCELL *parentCell; // [esp+2Ch] [ebp-D0h]
  char v82; // [esp+2Ch] [ebp-D0h]
  float aa; // [esp+30h] [ebp-CCh]
  signed int ab; // [esp+30h] [ebp-CCh]
  char a; // [esp+30h] [ebp-CCh]
  float damageOffset; // [esp+34h] [ebp-C8h]
  char v87; // [esp+53h] [ebp-A9h]
  char v88; // [esp+53h] [ebp-A9h]
  float Damage; // [esp+54h] [ebp-A8h] BYREF
  TESObjectREFR v90; // [esp+58h] [ebp-A4h] BYREF
  float v91[3]; // [esp+B4h] [ebp-48h] BYREF
  float a2[3]; // [esp+C0h] [ebp-3Ch] BYREF
  float v93[7]; // [esp+CCh] [ebp-30h] BYREF
  unsigned int v94; // [esp+F8h] [ebp-4h]

  v87 = 0; /*0x5f9662*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5f9667*/
  v5 = (ExtraDataList *)DwordAtOffset40; /*0x5f966c*/
  if ( !DwordAtOffset40 ) /*0x5f9670*/
  {
    v6 = 0; /*0x5f9695*/
    goto LABEL_6; /*0x5f9695*/
  }
  if ( !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5f967b*/
  {
    v6 = (int *)MEMORY[0xB35C24]; /*0x5f968d*/
LABEL_6:
    v90.member.super.flags = (TESForm::FormFlags)v6; /*0x5f9697*/
    goto LABEL_7; /*0x5f9697*/
  }
  v6 = (int *)sub_424180(v5 + 2); /*0x5f9685*/
  v90.member.super.flags = (TESForm::FormFlags)v6; /*0x5f9687*/
LABEL_7:
  process = (TESObjectREFRVtbl *)a1->members.super.process; /*0x5f969b*/
  unk1F4 = (int *)reference->unk1F4; /*0x5f96a5*/
  LODWORD(v90.member.rot.y) = unk1F4; /*0x5f96ab*/
  if ( process /*0x5f96c1*/
    && (v9 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))process->super.super.InitializeComponent + 0x3B))(
               process,
               1)) != 0
    && *(_DWORD *)(v9 + 8) )
  {
    v10 = unk_B37D38; /*0x5f96c7*/
  }
  else
  {
    v10 = (double)unk_B37D30; /*0x5f96cf*/
  }
  *(float *)&v90.member.super.refID = v10; /*0x5f96d7*/
  if ( v6 && unk1F4 && !bhkSphereShapeProbeCollector_GetWorldFromPhantom(unk1F4) ) /*0x5f96eb*/
  {
    sub_5F11F0( /*0x5f9704*/
      a1,
      a3,
      (float *)&v90.member.baseExtraList.members.m_presenceBitfield[4],
      (float *)&v90.member.baseExtraList);
    bhkSphereShapeProbeCollector_GetPhantomTransform(unk1F4, v6); /*0x5f970c*/
    vtbl_high = HIWORD(MobileObject_GetCollisionFilterInfo((MobileObject *)a1, &v90)->vtbl); /*0x5f971d*/
    if ( unk1F4[0x6A] != vtbl_high ) /*0x5f9727*/
      bhkSphereShapeProbeCollector_SetCollisionIdentityHigh16(unk1F4, vtbl_high); /*0x5f972c*/
    if ( !bhkSphereShapeProbeCollector_CastAlongVector( /*0x5f974c*/
            (float *)unk1F4,
            (float *)&v90.member.baseExtraList.members.m_presenceBitfield[4],
            (float *)&v90.member.baseExtraList,
            *(float *)&v90.member.super.refID) )
      goto LABEL_97; /*0x5f974c*/
    v12 = unk1F4; /*0x5f9752*/
    sub_4806E0(*(_DWORD *)(unk1F4[4] + 0x28)); /*0x5f975b*/
    if ( v13 ) /*0x5f9765*/
    {
      v14 = (Data *)sub_4DC270(v13); /*0x5f9770*/
      v90.member.super.modlist.data = v14; /*0x5f9772*/
    }
    else
    {
      v14 = 0; /*0x5f9778*/
      v90.member.super.modlist.data = 0; /*0x5f977a*/
    }
    v15 = v12[4]; /*0x5f977e*/
    v16 = *(_DWORD *)(v15 + 0x28); /*0x5f9781*/
    if ( *(_BYTE *)(v16 + 0x18) == 1 ) /*0x5f9788*/
    {
      v17 = v16 + *(_DWORD *)(v16 + 0x10); /*0x5f9791*/
      if ( v17 ) /*0x5f9793*/
      {
        p_super = &a1->vtbl->super.super; /*0x5f979c*/
        v90.member.super.refID = *(_DWORD *)(v17 + 0xC); /*0x5f979e*/
        v88 = 1; /*0x5f97aa*/
        v19 = (int)p_super->GetNiNode((TESObjectREFR *)a1); /*0x5f97af*/
        if ( v19 ) /*0x5f97b3*/
        {
          v20 = (NiTransform *)(v19 + 0x64); /*0x5f97b8*/
          v21 = (NiPoint3 *)a1->members.super.process->GetUnk20C(a1->members.super.process); /*0x5f97c3*/
          v22 = NiTransform_TransformPoint(v20, (float *)&v90.member.childCell, v21); /*0x5f97cd*/
          v23 = *v22; /*0x5f97d2*/
          v24 = v22[1]; /*0x5f97d4*/
          v25 = v22[2]; /*0x5f97d7*/
          v90.member.rot.z = v23; /*0x5f97da*/
          v90.member.pos[0] = v24; /*0x5f97e8*/
          v90.member.pos[1] = v25; /*0x5f97ec*/
          WeaponTipLocalPointForHit = (NiPoint3 *)Actor_GetWeaponTipLocalPointForHit(a1, a2); /*0x5f97f0*/
          v27 = NiTransform_TransformPoint(v20, v91, WeaponTipLocalPointForHit); /*0x5f9800*/
          v28 = *(TESObjectCELL *(__thiscall **)(TESChildCELL *))v27; /*0x5f9805*/
          v29 = *((TESForm **)v27 + 1); /*0x5f9807*/
          v30 = v27[2]; /*0x5f980a*/
          v90.member.childCell.GetChildCell = v28; /*0x5f980d*/
          v90.member.baseForm = v29; /*0x5f9811*/
          v90.member.rot.x = v30; /*0x5f9815*/
        }
        Damage = *(float *)&v90.member.childCell.GetChildCell - v90.member.rot.z; /*0x5f9825*/
        *(float *)&v90.member.super.type = *(float *)&v90.member.baseForm - v90.member.pos[0]; /*0x5f9831*/
        *(float *)&v90.member.super.modlist.next = v90.member.rot.x - v90.member.pos[1]; /*0x5f983d*/
        v90.member.rot.z = Damage; /*0x5f9845*/
        v90.member.pos[0] = *(float *)&v90.member.super.type; /*0x5f984d*/
        v90.member.pos[1] = *(float *)&v90.member.super.modlist.next; /*0x5f9855*/
        Vector3_NormalizeInPlace(&v90.member.rot.z); /*0x5f9859*/
        HavokVector_ToWorldVector(&v90.member.scale, *(__m128 **)(LODWORD(v90.member.rot.y) + 0x10)); /*0x5f986d*/
        v31 = (TESObjectREFRVtbl *)a1->members.super.process; /*0x5f9872*/
        if ( v31 /*0x5f988a*/
          && (v32 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))v31->super.super.InitializeComponent + 0x3B))(
                      v31,
                      1)) != 0 )
        {
          v33 = *(_DWORD *)(v32 + 8); /*0x5f988c*/
        }
        else
        {
          v33 = 0; /*0x5f9891*/
        }
        if ( v33 ) /*0x5f9895*/
        {
          v34 = *(float *)(v33 + 0x7C); /*0x5f9897*/
        }
        else
        {
          sub_5E4330(a1, 4); /*0x5f98a0*/
          if ( v35 ) /*0x5f98a7*/
          {
            v34 = *(float *)(*(_DWORD *)(v35 + 8) + 0x58); /*0x5f98ac*/
          }
          else
          {
            v34 = 0.0; /*0x5f98b1*/
            v88 = 0; /*0x5f98b3*/
          }
        }
        *(float *)&v90.member.super.type = v34; /*0x5f98bc*/
        v36 = *(_DWORD *)(*(_DWORD *)(LODWORD(v90.member.rot.y) + 0x10) + 0x2C); /*0x5f98d1*/
        *(float *)&v90.member.super.type = *(float *)&v90.member.super.type + dbl_A30E48; /*0x5f98d9*/
        Damage = 0.0; /*0x5f98dd*/
        if ( (*(_BYTE *)sub_497340((_DWORD *)v90.member.super.refID, &v90) & 0x3F) == 0x11 ) /*0x5f98f2*/
        {
          *(float *)&v37 = COERCE_FLOAT(sub_440AC0(MEMORY[0xB333A0], &v90.member.scale)); /*0x5f98ff*/
        }
        else
        {
          v38 = (int *)sub_494F10((_DWORD *)v90.member.super.refID); /*0x5f990a*/
          if ( !v38 /*0x5f992d*/
            || (Damage = *((float *)v38 + 4), v36 == 0xFFFFFFFF)
            || (v39 = (*(int (__thiscall **)(int *))(*v38 + 0x88))(v38)) == 0 )
          {
LABEL_41:
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x118]); /*0x5f9940*/
            *(float *)&v90.member.super.type = Float_Min(*(float *)&v90.member.super.type, *(float *)SafeFloatPointer); /*0x5f9962*/
            v90.member.super.modlist.next = *(TESForm::ModReferenceList **)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x116]); /*0x5f9972*/
            v41 = *(float **)(v17 + 0x50); /*0x5f9976*/
            v42 = *(float *)&v90.member.super.modlist.next; /*0x5f9979*/
            *(float *)&v90.member.super.modlist.next = *(float *)&v90.member.super.modlist.next * v90.member.rot.z; /*0x5f9983*/
            v90.member.pos[2] = v90.member.pos[0] * v42; /*0x5f998d*/
            *(float *)&v90.vtbl = v42 * v90.member.pos[1]; /*0x5f9995*/
            *(float *)&v90.member.super.modlist.next = *(float *)&v90.member.super.modlist.next /*0x5f99a7*/
                                                     * *(float *)&v90.member.super.type;
            v90.member.pos[2] = v90.member.pos[2] * *(float *)&v90.member.super.type; /*0x5f99b1*/
            *(float *)&v90.vtbl = *(float *)&v90.member.super.type * *(float *)&v90.vtbl; /*0x5f99b9*/
            v90.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))v90.member.super.modlist.next; /*0x5f99c1*/
            *(float *)&v90.member.baseForm = v90.member.pos[2]; /*0x5f99c9*/
            v90.member.rot.x = *(float *)&v90.vtbl; /*0x5f99d1*/
            *(float *)&v90.member.super.type = sub_89DA90(v41); /*0x5f99df*/
            v43 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x11A]); /*0x5f99ec*/
            if ( v43 > *(float *)&v90.member.super.type ) /*0x5f99f5*/
            {
              v44 = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x11A]); /*0x5f99fc*/
              *(float *)&v90.vtbl = *(float *)&v90.member.super.type / *(float *)v44; /*0x5f9a0c*/
              NiPoint3::MutliplyByValue((NiPoint3 *)&v90.member.childCell, *(float *)&v90.vtbl); /*0x5f9a17*/
            }
            if ( (*sub_497340((_DWORD *)v90.member.super.refID, &v90) & 0x3F) == 8 ) /*0x5f9a32*/
            {
              v45 = GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x11C]); /*0x5f9a39*/
              NiPoint3::MutliplyByValue((NiPoint3 *)&v90.member.childCell, *(float *)v45); /*0x5f9a48*/
            }
            sub_4529E0(v93, (float *)&v90.member.childCell); /*0x5f9a5a*/
            (*(void (__thiscall **)(TESForm::FormFlags))(*(_DWORD *)v90.member.super.flags + 0x58))(v90.member.super.flags); /*0x5f9a6b*/
            v46 = *(_DWORD *)(LODWORD(v90.member.rot.y) + 0x10); /*0x5f9a71*/
            sub_8A6410(v17); /*0x5f9a76*/
            (*(void (__thiscall **)(_DWORD, float *, int))(**(_DWORD **)(v17 + 0x50) + 0x60))( /*0x5f9a8c*/
              *(_DWORD *)(v17 + 0x50),
              v93,
              v46);
            v47 = ((double (__thiscall *)(TESForm::FormFlags))*(_DWORD *)(*(_DWORD *)v90.member.super.flags + 0x58))(v90.member.super.flags); /*0x5f9a97*/
            sub_5F05F0( /*0x5f9ac3*/
              (int)a1,
              v43,
              v47,
              SLODWORD(v90.member.scale),
              (int)v90.member.niNode,
              (int)v90.member.parentCell,
              (int)v90.member.super.modlist.data,
              (_DWORD *)v90.member.super.refID,
              SLODWORD(Damage));
            if ( !v88 ) /*0x5f9acd*/
              goto LABEL_85; /*0x5f9acd*/
            v90.member.childCell.GetChildCell = (TESObjectCELL *(__thiscall *)(TESChildCELL *))LODWORD(v90.member.rot.z); /*0x5f9adf*/
            v90.member.baseForm = (TESForm *)LODWORD(v90.member.pos[0]); /*0x5f9ae7*/
            v90.member.rot.x = v90.member.pos[1]; /*0x5f9aee*/
            aa = sub_47D9E0((float *)&v90.member.childCell, (float *)&v90.member.baseExtraList); /*0x5f9b04*/
            v48 = sub_47DA10(v91, aa, (float *)&v90.member.baseExtraList); /*0x5f9b08*/
            sub_43F320((float *)&v90.member.childCell, v48); /*0x5f9b15*/
            Vector3_NormalizeInPlace((float *)&v90.member.childCell); /*0x5f9b1e*/
            if ( (*sub_497340((_DWORD *)v90.member.super.refID, &v90) & 0x3F) == 8 ) /*0x5f9b39*/
            {
              data = (Actor *)v90.member.super.modlist.data; /*0x5f9b3b*/
              if ( !v90.member.super.modlist.data /*0x5f9b4d*/
                || !(*(unsigned __int8 (__thiscall **)(Data *))(v90.member.super.modlist.data->errorState + 0x190))(v90.member.super.modlist.data) )
              {
                *(float *)&v90.member.super.flags = g_GameSettingStringPointers_B36CD8[0x136]; /*0x5f9b62*/
                goto LABEL_53; /*0x5f9b66*/
              }
              BloodParticlePath = Actor_GetBloodParticlePath(data);// Verified: actor/creature hit-target branch obtains the target actor's blood-particle path after target validity/health checks; the other branch selects a static impact-material particle. /*0x5f9b55*/
            }
            else
            {
              BloodParticlePath = (const char *)ImpactMaterial_GetHitParticlePath(SLODWORD(Damage));// Verified: non-actor static impact branch obtains its particle path from ImpactMaterial_GetHitParticlePath(material ID), then shares particle construction/registration with actor hits. /*0x5f9b6d*/
            }
            v90.member.super.flags = (TESForm::FormFlags)BloodParticlePath; /*0x5f9b75*/
LABEL_53:
            if ( v90.member.super.flags ) /*0x5f9b7e*/
            {
              Shared_GetDwordAtOffset40(a1); /*0x5f9b86*/
              ab = sub_4C9BE0((TESObjectREFR *)a1); /*0x5f9b96*/
              v51 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1); /*0x5f9b99*/
              v52 = sub_441800(v51, ab, 3u); /*0x5f9ba7*/
              v53 = (TESObjectREFRVtbl *)FormHeapAlloc(0x20u); /*0x5f9bae*/
              v90.vtbl = v53; /*0x5f9bb3*/
              v54 = 0; /*0x5f9bb7*/
              v94 = 0; /*0x5f9bbb*/
              if ( v53 ) /*0x5f9bc2*/
              {
                scale = v90.member.scale; /*0x5f9bdf*/
                niNode = v90.member.niNode; /*0x5f9be5*/
                parentCell = v90.member.parentCell; /*0x5f9bec*/
                GetChildCell = v90.member.childCell.GetChildCell; /*0x5f9bf8*/
                baseForm = v90.member.baseForm; /*0x5f9bfe*/
                x_low = LODWORD(v90.member.rot.x); /*0x5f9c01*/
                flags = (const char *)v90.member.super.flags; /*0x5f9c08*/
                v71 = flt_A31E2C; /*0x5f9c0d*/
                v55 = Shared_GetDwordAtOffset40(a1); /*0x5f9c10*/
                v54 = BSTempEffectParticle_Constructor( /*0x5f9c18*/
                        v53,
                        v55,
                        v71,
                        v52,
                        flags,
                        *(float *)&GetChildCell,
                        *(float *)&baseForm,
                        x_low,
                        scale,
                        (UInt32)niNode,
                        (const char *)parentCell,
                        1.0,
                        1);                     // Verified: Actor_ProcessAttackReachProbe passes normalized hit direction, the computed three-component particle local position, scale 1.0 and cached-clone true to BSTempEffectParticle_Constructor. Local-position components share the same constructor ABI as body-hit particles.
              }
              v94 = 0xFFFFFFFF; /*0x5f9c23*/
              ActorProcessManager_RegisterTempEffect((int *)&qword_B3BB2C[0x75], (volatile LONG *)v54); /*0x5f9c2e*/
            }
            goto LABEL_85; /*0x5f9c33*/
          }
          *(float *)&v37 = COERCE_FLOAT((*(int (__thiscall **)(int, int))(*(_DWORD *)v39 + 0x9C))(v39, v36)); /*0x5f993a*/
        }
        Damage = *(float *)&v37; /*0x5f993c*/
        goto LABEL_41; /*0x5f993c*/
      }
    }
    if ( a1 == (Actor *)reference ) /*0x5f9c3e*/
      goto LABEL_87; /*0x5f9c3e*/
    v56 = sub_47DDE0(*(_DWORD *)(v15 + 0x28)); /*0x5f9c45*/
    if ( v56 ) /*0x5f9c4f*/
      v57 = *(_DWORD **)(v56 + 0xC); /*0x5f9c51*/
    else
      v57 = 0; /*0x5f9c56*/
    if ( !v14 /*0x5f9ca6*/
      || !(*(unsigned __int8 (__thiscall **)(Data *))(v14->errorState + 0x190))(v14)
      || (*(unsigned __int8 (__thiscall **)(Data *, _DWORD))(v14->errorState + 0x198))(v14, 0)
      || !v57
      || (*(_BYTE *)sub_497340(v57, &v90) & 0x3F) != 0x14 )
    {
LABEL_86:
      if ( a1 != (Actor *)reference ) /*0x5f9e0d*/
      {
LABEL_97:
        bhkSphereShapeProbeCollector_GetPhantomTransform((int *)LODWORD(v90.member.rot.y), 0); /*0x5f9e6f*/
        return v87; /*0x5f9e75*/
      }
LABEL_87:
      if ( v14 && (v67 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v14)) != 0 && (sub_4440C0(v67), v68) ) /*0x5f9e27*/
        v69 = *(_DWORD **)(v68 + 0x24); /*0x5f9e29*/
      else
        v69 = 0; /*0x5f9e2e*/
      if ( v69 ) /*0x5f9e32*/
      {
        if ( v14 == (Data *)InterfaceManager_GetSingleton(0, 1)->unk0C0[2] ) /*0x5f9e46*/
        {
          if ( sub_536AE0(v69, (int)v14) ) /*0x5f9e4b*/
          {
            if ( v14 != (Data *)0xFFFFFFBC ) /*0x5f9e59*/
            {
              Script_AddEventToExtraScript(v14, &v14->name[0x28], 0x10000000);// RealArenaTraining: player static reach probe event. Args: source/ref=EDI, targetExtra=EDI+0x44, mask=0x10000000. Used for arena bag/doll melee props after player and crosshair/ref checks. /*0x5f9e62*/
              v87 = 1; /*0x5f9e6a*/
            }
          }
        }
      }
      goto LABEL_97; /*0x5f9e6a*/
    }
    v58 = (TESObjectREFRVtbl *)a1->members.super.process; /*0x5f9cac*/
    if ( v58 ) /*0x5f9cb1*/
    {
      v59 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))v58->super.super.InitializeComponent + 0x3B))( /*0x5f9cbd*/
                           v58,
                           1);
      if ( v59 ) /*0x5f9cc1*/
      {
        type = v59->type; /*0x5f9cc3*/
        goto LABEL_71; /*0x5f9cc6*/
      }
    }
    else
    {
      v59 = 0; /*0x5f9cc8*/
    }
    type = 0; /*0x5f9cca*/
LABEL_71:
    if ( type ) /*0x5f9cce*/
      vtbl_low = SLOBYTE(type[6].vtbl); /*0x5f9cd0*/
    else
      vtbl_low = 0xFFFFFFFF; /*0x5f9cd9*/
    Damage = 0.0; /*0x5f9ce0*/
    if ( v59 ) /*0x5f9ce4*/
    {
      Damage = EquippedWeaponData_GetDamage(v59, a1, 1.0); /*0x5f9cf4*/
    }
    else if ( Actor_IsCreature(a1) ) /*0x5f9cfc*/
    {
      v90.vtbl = (TESObjectREFRVtbl *)((int (__thiscall *)(Actor *))a1->vtbl->Unk_D3)(a1); /*0x5f9d11*/
      Damage = (float)(int)v90.vtbl; /*0x5f9d19*/
    }
    else
    {
      (*(void (__thiscall **)(Data *, float *, TESForm::FormFlags *))(v14->errorState + 0x19C))( /*0x5f9d33*/
        v14,
        &Damage,
        &v90.member.super.flags);
      damageOffset = Actor_GetFatigueFraction(a1, vtbl_low, (int)v14); /*0x5f9d46*/
      v82 = ((int (__thiscall *)(Actor *))a1->vtbl->GetActorValue)(a1); /*0x5f9d51*/
      v78 = ((int (__thiscall *)(Actor *))a1->vtbl->GetActorValue)(a1); /*0x5f9d60*/
      v62 = ((int (__thiscall *)(Actor *))a1->vtbl->GetActorValue)(a1); /*0x5f9d6b*/
      Calc_HandToHandDamage(v62, 0x11, v78, COERCE_FLOAT(7), v82, 0, (float *)LODWORD(damageOffset)); /*0x5f9d6e*/
    }
    if ( Actor_IsCreature((Actor *)v14) ) /*0x5f9d78*/
    {
      a = 0; /*0x5f9d83*/
      v79 = vtbl_low; /*0x5f9d89*/
      v76 = (Actor *)v14; /*0x5f9d8a*/
    }
    else
    {
      v63 = Actor_SelectArmorOrShieldForHitDamage(v90.member.super.modlist.data); /*0x5f9d91*/
      v64 = (unsigned int *)v63; /*0x5f9d98*/
      a = 1; /*0x5f9d9c*/
      if ( v63 ) /*0x5f9da0*/
      {
        v65 = TESObjectARMO_ISHeavyArmor(v63[2]); /*0x5f9da5*/
        sub_6AF880( /*0x5f9dc3*/
          st6_0,
          Damage,
          a1,
          Damage,
          SLODWORD(Damage),
          (Actor *)v90.member.super.modlist.data,
          vtbl_low,
          v65,
          0xFFFFFFFF,
          1,
          0);
        ContainerEntryExtraData_DestroyDataTable(v64, v66); /*0x5f9dcd*/
        FormHeapFree((unsigned int)v64); /*0x5f9dd3*/
LABEL_85:
        v14 = v90.member.super.modlist.data; /*0x5f9dfe*/
        v87 = 1; /*0x5f9e02*/
        goto LABEL_86; /*0x5f9e02*/
      }
      v79 = vtbl_low; /*0x5f9de3*/
      v76 = (Actor *)v90.member.super.modlist.data; /*0x5f9de4*/
    }
    sub_6AF880(st6_0, Damage, a1, Damage, COERCE_INT(0.0), v76, v79, 0xFFFFFFFF, 0xFFFFFFFF, a, 0); /*0x5f9df6*/
    goto LABEL_85; /*0x5f9df6*/
  }
  return v87; /*0x5f9e7e*/
}
