// Synchronous character-creation face refresh: clear both cached player FaceGen nodes, reconcile/recreate them through TESRace_CreateFaceGenNodes, build one render state, apply it to both perspective nodes, update the player head, and destroy the state. A bFixFaceNormals scope around this call covers node construction completely.
void __thiscall RaceSexMenu_RefreshPlayerFace(void *this)
{
  double v1; // st5
  double v2; // st6
  double v3; // st7
  int v4; // ebx
  TESNPC *v5; // edi
  _DWORD *v6; // eax
  LONG (__stdcall *v7)(volatile LONG *); // ebp
  _DWORD *v8; // esi
  void (__thiscall ***v9)(_DWORD, int); // esi
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  void (__thiscall ***v12)(_DWORD, int); // esi
  ActorAnimData *v13; // eax
  double v14; // st7
  BSFaceGenNiNode *v15; // eax
  BSFaceGenNiNode *v16; // eax
  int v17; // [esp+20h] [ebp-D8h] BYREF
  int v18; // [esp+24h] [ebp-D4h] BYREF
  FaceGenRenderState v19; // [esp+28h] [ebp-D0h] BYREF
  unsigned int v20; // [esp+F4h] [ebp-4h]

  v4 = 0; /*0x5c9223*/
  v5 = (TESNPC *)reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5c9226*/
  if ( PlayerCharacter_GetAnimDataByPerspective(reference, 0) ) /*0x5c9228*/
  {
    if ( PlayerCharacter_GetAnimDataByPerspective(reference, 0)->manager ) /*0x5c923d*/
      v4 = *((_DWORD *)PlayerCharacter_GetAnimDataByPerspective(reference, 0)->manager + 0x1F); /*0x5c9257*/
  }
  v6 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4D)( /*0x5c926a*/
                   reference,
                   0);
  v7 = InterlockedDecrement; /*0x5c926c*/
  v8 = v6; /*0x5c9272*/
  if ( v6 ) /*0x5c9276*/
  {
    if ( v6[7] ) /*0x5c9278*/
    {
      sub_716620(v6, v4); /*0x5c9280*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD *))(*(_DWORD *)v8[7] + 0x88))(v8[7], &v18, v8); /*0x5c9299*/
      if ( v18 ) /*0x5c92a1*/
      {
        v9 = (void (__thiscall ***)(_DWORD, int))v18; /*0x5c92a3*/
        if ( !v7((volatile LONG *)(v18 + 4)) ) /*0x5c92a9*/
          (**v9)(v9, 1); /*0x5c92bb*/
      }
    }
  }
  v10 = (_DWORD *)((int (__thiscall *)(PlayerCharacter *, _DWORD))reference->vtbl->super.super.super.Unk_4C)( /*0x5c92cd*/
                    reference,
                    0);
  v11 = v10; /*0x5c92cf*/
  if ( v10 ) /*0x5c92d3*/
  {
    if ( v10[7] ) /*0x5c92d5*/
    {
      sub_716620(v10, v4); /*0x5c92dd*/
      (*(void (__thiscall **)(_DWORD, int *, _DWORD *))(*(_DWORD *)v11[7] + 0x88))(v11[7], &v17, v11); /*0x5c92f6*/
      if ( v17 ) /*0x5c92fe*/
      {
        v12 = (void (__thiscall ***)(_DWORD, int))v17; /*0x5c9300*/
        if ( !v7((volatile LONG *)(v17 + 4)) ) /*0x5c9306*/
          (**v12)(v12, 1); /*0x5c9318*/
      }
    }
  }
  reference->super.super.super.process->Unk_17(reference->super.super.super.process); /*0x5c9327*/
  TESNPC_ClearFaceGenNodes(v5);                 // Clear both cached player TESNPC FaceGen nodes before reconstruction, guaranteeing the following node update takes the TESRace_CreateFaceGenNodes path. /*0x5c932b*/
  v13 = (ActorAnimData *)reference->vtbl->super.super.super.GetActiveSkinInfo(reference); /*0x5c933e*/
  v14 = TESNPC_ReconcileFaceGenNodesForActor((int)v5, v3, (TESChildCELL *)reference, v13); /*0x5c934a*/
  FaceGenRenderState_Construct((FaceGenRenderState *)&v19.parameters.matrices[0].allocator08);// Construct a full 0xC4 FaceGenRenderState for the player refresh; this is larger than FaceGenHeadParameters alone. /*0x5c9353*/
  TESRace_BuildFaceGenRenderState( /*0x5c936f*/
    v5->member.form.race,
    v5,
    (FaceGenRenderState *)&v19.parameters.matrices[0].allocator08);// Blockhead source audit: hooks this render-state build call, invokes native TESRace_BuildFaceGenRenderState then swaps cloned model/texture/hair assets. Its paired destructor hook at 0x5C93C8 frees those clones before native destruction. Prettier Faces scopes the enclosing refresh via 0x5C9D55; distinct patch sites here. Blockhead's source type FaceGenHeadParameters at these calls corresponds to the larger render state, not only the four coefficient matrices.
  v15 = (BSFaceGenNiNode *)((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.super.Unk_4C)(reference);// Push the FaceGenRenderState pointer before the perspective-node virtual call. The following pushed zero is that virtual call's perspective argument; its thiscall cleanup leaves this state pointer for BSFaceGen_ApplyHeadParametersToNode. /*0x5c9389*/
  BSFaceGen_ApplyHeadParametersToNode(v15, 0);  // Apply the same render state to the first player FaceGen node. /*0x5c938c*/
  v16 = (BSFaceGenNiNode *)((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.super.super.Unk_4D)(reference);// Push the same FaceGenRenderState for the second node before the perspective-node virtual call; the intervening zero belongs to that thiscall, not to ApplyHeadParameters. /*0x5c93a9*/
  BSFaceGen_ApplyHeadParametersToNode(v16, 0);  // Apply the same render state to the second player FaceGen node. /*0x5c93ac*/
  UpdatePlayerHead(v1, v2, v14); /*0x5c93b4*/
  v20 = 0xFFFFFFFF; /*0x5c93bd*/
  FaceGenRenderState_Destruct(&v19); /*0x5c93c8*/
}
