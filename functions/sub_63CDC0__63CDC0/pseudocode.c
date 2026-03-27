void __userpurge sub_63CDC0(
        HighProcess *ecx0@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        double a5@<st2>,
        double refractionAmount@<st1>,
        double a7@<st0>,
        Actor *a1,
        HighProcess *a9)
{
  HighProcess *v9; // ebp
  _DWORD *ShadowSceneNode; // eax
  char v11; // bl
  _DWORD *v12; // eax
  TESForm *v13; // ebx
  int v14; // edx
  int *v15; // edi
  int v16; // ebp
  int v17; // eax
  ActorVtbl *vtbl; // edi
  ExtraRefractionProperty *RefractionProperty; // eax
  NiNode *v20; // eax
  NiNode *v21; // eax
  const char *refID; // [esp+28h] [ebp-10h]
  int v23; // [esp+2Ch] [ebp-Ch]
  NiNode *v24; // [esp+2Ch] [ebp-Ch]

  v9 = ecx0;
  if ( ecx0->unk16C )
  {
    if ( a1->vtbl->super.super.GetNiNode(a1) )
    {
      v23 = ((int (__usercall *)@<eax>(Actor *@<ecx>, int, int, int, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->super.super.GetNiNode)(
              a1,
              a3,
              a2,
              a4,
              a7,
              refractionAmount,
              a5);
      ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
      sub_7C5E70(ShadowSceneNode, v23);
      v11 = 0;
      if ( a1->vtbl->GetActorValue(a1, kActorVal_Vampirism) )
      {
        if ( !g_bUpdatePlayerModel )
        {
          g_bUpdatePlayerModel = 1;
          v11 = 1;
        }
      }
      sub_4E1580((TESObjectREFR *)a1, a5, refractionAmount, a7);
      if ( v11 )
        g_bUpdatePlayerModel = 0;
      v24 = a1->vtbl->super.super.GetNiNode(a1);
      v12 = (_DWORD *)GetShadowSceneNode(0);
      sub_7C5D00(v12, v24);
      v13 = 0;
      if ( Actor_IsNPC(a1) )
        v13 = a1->vtbl->super.super.GetBaseForm(a1);
      v15 = (int *)sub_5E12B0(a1);
      if ( v15 )
      {
        v16 = *v15;
        v17 = ((int (__thiscall *)(Actor *, _DWORD, int))a1->vtbl->super.super.IsDead)(a1, 0, 1);
        (*(void (__thiscall **)(int *, int))(v16 + 0x9C))(v15, v17);
        v9 = a9;
      }
      if ( v13 )
        sub_528550((unsigned int)v13, v14, (int)a1);
      ((void (__thiscall *)(HighProcess *, Actor *))v9->Unk_10A)(v9, a1);
      if ( ImageSpaceEffectEnabled && enableRefraction && ShaderPackage >= 2 && Actor_GetRefractionAmount(a1) )
      {
        vtbl = a1->vtbl;
        RefractionProperty = ExtraDataList::GetRefractionProperty(&a1->members.super.super.baseExtraList);
        refractionAmount = RefractionProperty->refractionAmount;
        ((void (__usercall *)(Actor *@<ecx>, int, _DWORD, double@<st0>))vtbl->SetTransparency)(
          a1,
          1,
          RefractionProperty->refractionAmount,
          a7);
      }
      else
      {
        sub_5EE1B0(a1, a7);
      }
      if ( a1 == (Actor *)TESDataHandler_g_PlayerRef && sub_57A310() )
      {
        sub_664E60(
          (Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef,
          (char)v9,
          a5,
          refractionAmount,
          a7);
        v9->unk16C = 0;
      }
      else
      {
        v20 = a1->vtbl->super.super.GetNiNode(a1);
        if ( a1 == (Actor *)TESDataHandler_g_PlayerRef && !TESDataHandler_g_PlayerRef->isThirdPerson )
          v20 = (NiNode *)sub_405790((int)v20, 0);
        sub_5EA1A0((int)a1, (int)v9, v20);
        if ( a1 != (Actor *)TESDataHandler_g_PlayerRef )
        {
          refID = (const char *)a1->members.super.super.super.refID;
          v21 = (NiNode *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->super.super.GetNiNode)(
                            a1,
                            a7,
                            refractionAmount,
                            a5);
          sub_481410(v21, refID);
        }
        v9->unk16C = 0;
      }
    }
  }
}
