// HighProcess vtable+0x318, resolved from 0xA71814. If +0x16C and actor has 3D: removes shadow receivers, calls 0x4E1580, re-adds shadow state, calls TESNPC_RefreshFaceGenForActor3D for NPC actor, performs further actor/render updates, clears +0x16C. Missing NiNode leaves flag pending. Broader than head-only refresh. Decompiler register/x87 arguments remain unreliable; no ABI correction inferred yet. Does not prove a vanilla LoadGame bug.
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
  void *ShadowSceneNode; // eax
  char v11; // bl
  _DWORD *v12; // eax
  TESForm *v13; // ebx
  int v14; // edx
  int *v15; // edi
  int v16; // ebp
  int v17; // eax
  ActorVtbl *vtbl; // edi
  ExtraRefractionProperty *RefractionPropertyExtra; // eax
  NiNode *ChildAtIndex; // eax
  NiNode *v21; // eax
  const char *refID; // [esp+28h] [ebp-10h]
  NiAVObject *v23; // [esp+2Ch] [ebp-Ch]
  NiNode *v24; // [esp+2Ch] [ebp-Ch]

  v9 = ecx0; /*0x63cdc2*/
  if ( ecx0->unk16C ) /*0x63cdc4*/
  {
    if ( a1->vtbl->super.super.GetNiNode(a1) ) /*0x63cde4*/
    {
      v23 = (NiAVObject *)((int (__usercall *)@<eax>(Actor *@<ecx>, int, int, int, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->super.super.GetNiNode)( /*0x63cdfc*/
                            a1,
                            a3,
                            a2,
                            a4,
                            a7,
                            refractionAmount,
                            a5);
      ShadowSceneNode = (void *)GetShadowSceneNode(0); /*0x63cdff*/
      ShadowSceneNode_RemoveObjectReceivers(ShadowSceneNode, v23); /*0x63ce09*/
      v11 = 0; /*0x63ce1a*/
      if ( a1->vtbl->GetActorValue(a1, kActorVal_Vampirism) ) /*0x63ce1c*/
      {
        if ( !MEMORY[0xB33D80] ) /*0x63ce22*/
        {
          MEMORY[0xB33D80] = 1; /*0x63ce2a*/
          v11 = 1; /*0x63ce31*/
        }
      }
      sub_4E1580((TESObjectREFR *)a1, a5, refractionAmount, a7); /*0x63ce35*/
      if ( v11 ) /*0x63ce3c*/
        MEMORY[0xB33D80] = 0; /*0x63ce3e*/
      v24 = a1->vtbl->super.super.GetNiNode(a1); /*0x63ce51*/
      v12 = (_DWORD *)GetShadowSceneNode(0); /*0x63ce54*/
      sub_7C5D00(v12, v24); /*0x63ce5e*/
      v13 = 0; /*0x63ce65*/
      if ( Actor_IsNPC(a1) ) /*0x63ce67*/
        v13 = a1->vtbl->super.super.GetBaseForm(a1); /*0x63ce7c*/
      v15 = (int *)sub_5E12B0(a1); /*0x63ce85*/
      if ( v15 ) /*0x63ce89*/
      {
        v16 = *v15; /*0x63ce93*/
        v17 = ((int (__thiscall *)(Actor *, _DWORD, int))a1->vtbl->super.super.IsDead)(a1, 0, 1); /*0x63ce9b*/
        (*(void (__thiscall **)(int *, int))(v16 + 0x9C))(v15, v17); /*0x63cea6*/
        v9 = a9; /*0x63cea8*/
      }
      if ( v13 ) /*0x63ceae*/
        TESNPC_RefreshFaceGenForActor3D((unsigned int)v13, v14, (int)a1); /*0x63ceb3*/
      ((void (__thiscall *)(HighProcess *, Actor *))v9->Unk_10A)(v9, a1); /*0x63ceca*/
      if ( OB_RendererGlobalState_010201A0[0xA5] /*0x63cee9*/
        && OB_ShaderPassControl_010201A0[0]
        && *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2
        && Actor_GetRefractionAmount(a1) )
      {
        vtbl = a1->vtbl; /*0x63cef2*/
        RefractionPropertyExtra = ExtraDataList_GetRefractionPropertyExtra(&a1->members.super.super.baseExtraList); /*0x63cef7*/
        refractionAmount = RefractionPropertyExtra->refractionAmount; /*0x63cefc*/
        ((void (__usercall *)(Actor *@<ecx>, int, _DWORD, double@<st0>))vtbl->SetTransparency)( /*0x63cf0d*/
          a1,
          1,
          RefractionPropertyExtra->refractionAmount,
          a7);
      }
      else
      {
        sub_5EE1B0(a1, a7); /*0x63cf13*/
      }
      if ( a1 == (Actor *)reference && sub_57A310() ) /*0x63cf22*/
      {
        sub_664E60((Concurrency::details::SchedulerBase *)reference, (int)v9, a5, refractionAmount); /*0x63cf31*/
        v9->unk16C = 0; /*0x63cf37*/
      }
      else
      {
        ChildAtIndex = a1->vtbl->super.super.GetNiNode(a1); /*0x63cf4d*/
        if ( a1 == (Actor *)reference && !reference->isThirdPerson ) /*0x63cf59*/
          ChildAtIndex = (NiNode *)NiNode_GetChildAtIndex(ChildAtIndex, 0); /*0x63cf66*/
        sub_5EA1A0((int)a1, (int)v9, ChildAtIndex); /*0x63cf6e*/
        if ( a1 != (Actor *)reference ) /*0x63cf79*/
        {
          refID = (const char *)a1->members.super.super.super.refID; /*0x63cf7e*/
          v21 = (NiNode *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>, double@<st2>))a1->vtbl->super.super.GetNiNode)( /*0x63cf89*/
                            a1,
                            a7,
                            refractionAmount,
                            a5);
          sub_481410(v21, refID); /*0x63cf8c*/
        }
        v9->unk16C = 0; /*0x63cf94*/
      }
    }
  }
}
