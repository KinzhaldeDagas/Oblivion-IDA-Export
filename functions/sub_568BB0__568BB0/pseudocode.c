// 3DTheft: package target resolver/follower bookkeeping. Runtime packages with packageFlags bit 0x800 skip normal follower extra-data side effects for actor targets.
double __thiscall sub_568BB0(int this, TESObjectREFR *arg0)
{
  TargetData *v3; // ecx
  int TargetType; // eax
  PlayerCharacter *objectCode; // edi
  int v6; // eax
  float *v7; // eax
  double result; // st7
  TESObjectCELL *DwordAtOffset40; // eax
  TESForm *form; // edi
  ObjectType v11; // eax
  float *v12; // eax
  TESObjectCELL *v13; // eax
  ObjectType v14; // eax
  char v15; // bl
  float *v16; // [esp-4h] [ebp-24h]
  float *v17; // [esp-4h] [ebp-24h]
  float a3; // [esp+0h] [ebp-20h]
  float a3a; // [esp+0h] [ebp-20h]
  float *v20; // [esp+4h] [ebp-1Ch]
  float *v21; // [esp+4h] [ebp-1Ch]
  float a5; // [esp+8h] [ebp-18h]
  float a5a; // [esp+8h] [ebp-18h]

  v3 = *(TargetData **)(this + 0x28); /*0x568bb3*/
  if ( v3 ) /*0x568bb8*/
  {
    TargetType = TargetData::GetTargetType(v3); /*0x568bc0*/
    objectCode = 0; /*0x568bc9*/
    if ( TargetType ) /*0x568bcd*/
    {
      v6 = TargetType - 1; /*0x568bd3*/
      if ( v6 ) /*0x568bd6*/
      {
        if ( v6 == 1 ) /*0x568bdb*/
        {
          sub_569E80(*(TargetData **)(this + 0x28)); /*0x568be4*/
          a5 = MEMORY[0xB3A3C8]; /*0x568c00*/
          v7 = arg0->vtbl->GetPos(arg0); /*0x568c03*/
          result = MEMORY[0xB3A3C8]; /*0x568c05*/
          v20 = v7; /*0x568c0b*/
          a3 = MEMORY[0xB3A3C8]; /*0x568c17*/
          v16 = arg0->vtbl->GetPos(arg0); /*0x568c1c*/
          DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x568c1f*/
          sub_446B90( /*0x568c2b*/
            DwordAtOffset40,
            v16,
            a3,
            v20,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_567730,
            0);
          objectCode = (PlayerCharacter *)unk_B3A3C4; /*0x568c30*/
          unk_B3A3C4 = 0; /*0x568c36*/
          goto LABEL_17; /*0x568c40*/
        }
LABEL_30:
        sub_5E03C0(arg0, (int)objectCode); /*0x568e00*/
        return result; /*0x568e03*/
      }
      form = 0; /*0x568c48*/
      if ( sub_569E70(*(TargetData **)(this + 0x28)).form ) /*0x568c4a*/
      {
        v11.form = sub_569E70(*(TargetData **)(this + 0x28)).form; /*0x568c56*/
        if ( v11.form->vtbl->super.Unk_29((TESForm *)v11.objectCode) ) /*0x568c65*/
          form = (TESForm *)sub_569E70(*(TargetData **)(this + 0x28)).form; /*0x568c73*/
      }
      if ( reference && form == reference->vtbl->super.super.super.GetBaseForm(reference) ) /*0x568c8b*/
      {
        objectCode = reference; /*0x568c8d*/
      }
      else
      {
        a5a = MEMORY[0xB3A3C8]; /*0x568caf*/
        v12 = arg0->vtbl->GetPos(arg0); /*0x568cb2*/
        result = MEMORY[0xB3A3C8]; /*0x568cb4*/
        v21 = v12; /*0x568cbc*/
        a3a = MEMORY[0xB3A3C8]; /*0x568cc6*/
        v17 = arg0->vtbl->GetPos(arg0); /*0x568ccb*/
        v13 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x568cce*/
        sub_446B90(v13, v17, a3a, v21, a5a, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_567730, (int)form); /*0x568cda*/
        objectCode = (PlayerCharacter *)unk_B3A3C4; /*0x568cdf*/
        unk_B3A3C4 = 0; /*0x568ce5*/
      }
    }
    else
    {
      v14.form = sub_569E60(*(TargetData **)(this + 0x28)).form; /*0x568cf4*/
      objectCode = (PlayerCharacter *)v14.objectCode; /*0x568cf9*/
      if ( !v14.objectCode ) /*0x568cfd*/
        goto LABEL_30; /*0x568cfd*/
      if ( (*(_DWORD *)(v14.objectCode + 8) & 0x20) != 0 && v14.objectCode != 0xFFFFFFBC ) /*0x568d13*/
        objectCode = (PlayerCharacter *)ExtraDataList_GetReferencePointer((ExtraDataList *)(v14.objectCode + 0x44)); /*0x568d1a*/
    }
LABEL_17:
    if ( objectCode /*0x568d3f*/
      && objectCode->vtbl->super.super.super.IsActor((TESObjectREFR *)objectCode)
      && (*(_DWORD *)(this + 0x1C) & 0x800) == 0 )
    {
      v15 = *(_BYTE *)(this + 0x20); /*0x568d45*/
      if ( v15 == 1 || v15 == 7 ) /*0x568d50*/
      {
        ExtraDataList_GetFollowerExtra(); /*0x568d7b*/
        if ( objectCode == reference /*0x568dba*/
          && (PlayerCharacter *)(*((int (__thiscall **)(TESObjectREFRVtbl *))arg0[1].vtbl->super.super.InitializeComponent
                                 + 0xF4))(arg0[1].vtbl) != reference
          && !sub_663A60((int)arg0)
          && sub_663A00() > (int)stru_B36A80.value )
        {
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *, unsigned int))arg0[1].vtbl->super.super.InitializeComponent /*0x568dca*/
           + 0x62))(
            arg0[1].vtbl,
            arg0,
            0xFFFFFFFF);
          result = kTerrainLODQuadRayDirectionZ; /*0x568dcc*/
          GameUI_QueueMessage(stru_B394E8.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x568de1*/
          sub_5E03C0(arg0, (int)objectCode); /*0x568dec*/
          return result; /*0x568df4*/
        }
        sub_424C50(&objectCode->super.super.super.super.baseExtraList, (void (__thiscall *)(BSExtraData *))arg0);// 3DTheft decode 2026-05-17: Follow/Escort target resolver links the package owner actor into the target actor's ExtraFollower list when package flag 0x800 is clear. /*0x568dfb*/
      }
      else if ( v15 == 2 ) /*0x568d55*/
      {
        sub_424C50(&arg0->member.baseExtraList, (void (__thiscall *)(BSExtraData *))objectCode); /*0x568d5f*/
        sub_5E03C0(arg0, (int)objectCode); /*0x568d67*/
        return result; /*0x568d6f*/
      }
    }
    goto LABEL_30; /*0x568d55*/
  }
  return result; /*0x568d6e*/
}
