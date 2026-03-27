EffectNode *__usercall ServeSentence@<eax>(
        Actor *a1@<ecx>,
        char *TESSkillByCode@<ebx>,
        signed int a3@<ebp>,
        signed int i@<edi>,
        double a5@<st7>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        double a11@<st6>,
        double a12@<st5>)
{
  UInt32 v13; // eax
  Sky *GlobalObject; // eax
  Sky *v15; // eax
  char GroupOffsetFromAV; // al
  char v17; // al
  TESForm *v18; // eax
  TESForm *ActorBaseForm; // eax
  char v20; // al
  unsigned __int8 *****ContainerChanges; // eax
  int v22; // edi
  TESObjectCELL *ParentCell; // ebx
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraDataVtbl *v25; // eax
  TESObjectREFR **v26; // eax
  TESObjectCELL *v27; // eax
  int *v28; // edi
  int v29; // eax
  PlayerCharacterVtbl *vtbl; // edi
  int j; // edi
  char v32; // al
  int *v33; // ebx
  double v34; // st7
  int v35; // eax
  char *v36; // ecx
  int v37; // edx
  const char *v38; // eax
  EffectNode *result; // eax
  EffectNode *k; // esi
  const char *v41; // [esp+8h] [ebp-854h]
  int v42; // [esp+Ch] [ebp-850h]
  TESObjectREFR **v43; // [esp+20h] [ebp-83Ch]
  float v44; // [esp+28h] [ebp-834h]
  int ArgList; // [esp+2Ch] [ebp-830h]
  float ArgLista; // [esp+2Ch] [ebp-830h]
  TESWorldSpace *WorldSpace; // [esp+30h] [ebp-82Ch]
  _DWORD v48[21]; // [esp+34h] [ebp-828h] BYREF
  char v49[2000]; // [esp+88h] [ebp-7D4h] BYREF

  v13 = a1[5].members.unk0E8[3];
  a1[5].members.unk07C = (Actor *)(0x18 * v13);
  LOBYTE(a1[5].members.unk080[0]) = 1;
  a1[6].members.super.super.parentCell = (TESObjectCELL *)((char *)a1[6].members.super.super.parentCell + v13);
  byte_B14E4C = 0;
  _sprintf(v49, "\n");
  LOBYTE(a1[1].members.unk0E8[5]) = 0;
  GlobalObject = Sky_CreateOrGetGlobalObject();
  GlobalObject->Flags0FC &= ~0x20u;
  while ( (int)a1[5].members.unk07C > 0 )
    sub_65F770((MagicTarget *)TESDataHandler_g_PlayerRef, (int)TESSkillByCode, i, a8);
  v15 = Sky_CreateOrGetGlobalObject();
  v15->Flags0FC |= 0x20u;
  memset(v48, 0, sizeof(v48));
  if ( (int)a1[5].members.unk0E8[3] > 0xA )
    a1[5].members.unk0E8[3] = 0xA;
  for ( ; a1[5].members.unk0E8[3]; --a1[5].members.unk0E8[3] )
  {
    for ( i = GetRandomLargeInteger_(0) % 0x15; i < 0xC; i += GetRandomLargeInteger_(0) % 0xA )
      ;
    GroupOffsetFromAV = ActorValue_GetGroupOffsetFromAV(2, i);
    TESSkillByCode = TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, GroupOffsetFromAV);
    a10 = ((double (__thiscall *)(Actor *, _DWORD))a1->vtbl->GetAV_F)(a1, *((_DWORD *)TESSkillByCode + 0xB));
    if ( Double_To_SInt32(a10) > 1 )
    {
      if ( i == 0x1F || i == 0x1E )
      {
        a3 = *((_DWORD *)TESSkillByCode + 0xB);
        TESSkillByCode = (char *)(Actor_GetBaseCalcAVi((int *)a1, (int)TESSkillByCode, i, (int)a1, a3) + 1);
        ActorBaseForm = Actor_GetActorBaseForm(a1, 0);
        ((void (__thiscall *)(TESForm *, signed int, char *))ActorBaseForm->vtbl[1].Unk_16)(
          ActorBaseForm,
          a3,
          TESSkillByCode);
        sub_57A6F0(a3);
        sub_5E2670((PlayerCharacter *)a1, a3, 1);
        v20 = ActorValue_GetGroupOffsetFromAV(2, i);
        a10 = *(float *)&v48[v20] + dbl_A2F928;
        *(float *)&v48[v20] = a10;
      }
      else
      {
        v17 = ActorValue_GetGroupOffsetFromAV(2, i);
        a10 = *(float *)&v48[v17] - dbl_A2F928;
        i = *((_DWORD *)TESSkillByCode + 0xB);
        *(float *)&v48[v17] = a10;
        TESSkillByCode = (char *)(Actor_GetBaseCalcAVi((int *)a1, (int)TESSkillByCode, i, (int)a1, i) - 1);
        v18 = Actor_GetActorBaseForm(a1, 0);
        ((void (__thiscall *)(TESForm *, signed int, char *))v18->vtbl[1].Unk_16)(v18, i, TESSkillByCode);
        sub_57A6F0(i);
        sub_5E2670((PlayerCharacter *)a1, i, 1);
      }
    }
  }
  sub_6765F0((int)TESSkillByCode, i, a8, a9, a10, 0, FormID, 1);
  if ( ObjectRef )
  {
    ContainerChanges = (unsigned __int8 *****)ExtraDataList_GetContainerChanges((ExtraDataList *)(ObjectRef + 0x44));
    if ( ContainerChanges )
      sub_4917E0(ContainerChanges, a8, a9, a10, (TESObjectREFR *)ObjectRef, (TESForm *)TESDataHandler_g_PlayerRef);
    sub_57A3B0(a8, a9, 0);
  }
  if ( FormID )
  {
    if ( dword_B35B90 )
      sub_4BE5A0((_DWORD *)dword_B35B90);
    if ( dword_B35B8C )
      sub_4BD980((_DWORD *)dword_B35B8C);
    v22 = 0x7FFFFFFF;
    a3 = 0x7FFFFFFF;
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)FormID);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)FormID);
    if ( ParentCell
      || WorldSpace
      && (v22 = (int)*(float *)(*((int (__thiscall **)(TESChildCELL *))FormID->vtbl + 0x5D))(FormID) >> 0xC,
          a10 = *(float *)((*((int (__thiscall **)(TESChildCELL *))FormID->vtbl + 0x5D))(FormID) + 4),
          a3 = (int)a10 >> 0xC,
          (ParentCell = (TESObjectCELL *)sub_4F1630(WorldSpace, a8, a9, a10, v22, a3)) != 0) )
    {
      TeleportExtraData = GetTeleportExtraData(FormID);
      v25 = sub_42B410(&TeleportExtraData->super);
      v26 = (TESObjectREFR **)GetTeleportExtraData(v25);
      v43 = v26;
      if ( v26 )
      {
        if ( sub_42B460(v26) )
        {
          v27 = sub_42B460(v43);
        }
        else
        {
          ArgList = (int)*(float *)sub_6899C0((char *)v43) >> 0xC;
          v44 = *(float *)(sub_6899C0((char *)v43) + 4);
          a10 = v44;
          if ( ArgList == v22 && a3 == (int)v44 >> 0xC )
            goto LABEL_34;
          v27 = (TESObjectCELL *)sub_4F1630(WorldSpace, a8, a9, a10, ArgList, (int)v44 >> 0xC);
        }
        ParentCell = v27;
LABEL_34:
        LOBYTE(a3) = (_BYTE)v43;
        v28 = (int *)sub_42B430((char *)v43);
        v29 = sub_6899C0((char *)v43);
        sub_66EAF0(
          (TESObjectREFR *)TESDataHandler_g_PlayerRef,
          a10,
          a7,
          a8,
          a9,
          a5,
          a6,
          a11,
          a12,
          *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v29,
          *(NiAVObject *(__thiscall **)(NiAVObject *, const char *))(v29 + 4),
          *(void *(__thiscall **)(NiAVObject *))(v29 + 8),
          *v28,
          v28[1],
          v28[2],
          ParentCell,
          1);
      }
    }
  }
  vtbl = TESDataHandler_g_PlayerRef->vtbl;
  ArgLista = ((double (__thiscall *)(PlayerCharacter *))vtbl->super.Unk_94)(TESDataHandler_g_PlayerRef) * dbl_A3D360;
  ((void (__thiscall *)(PlayerCharacter *, _DWORD))vtbl->super.Unk_95)(TESDataHandler_g_PlayerRef, LODWORD(ArgLista));
  a1[5].members.unk0E8[3] = 0;
  ObjectRef = 0;
  FormID = 0;
  sub_675E90(&ActorProcessManager_ptr, (int)a1);
  for ( j = 0xC; j < 0x21; ++j )
  {
    v32 = ActorValue_GetGroupOffsetFromAV(2, j);
    v33 = (int *)TESDataHandler_GetTESSkillByCode((char *)TESDataHandler, v32);
    v34 = *(float *)&v48[ActorValue_GetGroupOffsetFromAV(2, j)];
    v35 = Double_To_SInt32(v34);
    if ( v35 )
    {
      if ( j == 0x1F || j == 0x1E )
      {
        v37 = SGameSetting_SkillIncreased;
      }
      else
      {
        v37 = dword_B383B0;
        v35 = -v35;
      }
      a3 = sYour;
      v42 = v35;
      v41 = (const char *)v37;
      v38 = (const char *)sub_52EA90(v33);
      _sprintf(v49, "%s %s %s %s by %d.\n", v49, (const char *)a3, v38, v41, v42);
    }
  }
  ShowUIMessageBox(v36, a3, a8, a9, v34, v49, 0, 1, (const char *)sOk, 0);
  result = a1->members.magicTarget.vtbl->GetEffectList(&a1->members.magicTarget);
  for ( k = result; k; k = k->next )
  {
    if ( !k->next && !k->data )
      break;
    result = (EffectNode *)k->data;
    if ( k->data->members.effectItem->setting->effectCode == 0x47445553 )
    {
      result = (EffectNode *)OblivionDynamicCast(
                               result,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&ActiveEffect `RTTI Type Descriptor',
                               &SunDamageEffect `RTTI Type Descriptor',
                               0);
      BYTE1(result[7].next) = 1;
    }
  }
  return result;
}
