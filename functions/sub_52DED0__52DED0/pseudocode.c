// Create the paired BSFaceGenNiNodeBiped and BSFaceGenNiNodeSkinned nodes with shared animation data, build a FaceGenRenderState, populate head geometry, and optionally apply the resulting appearance to both nodes.
bool __thiscall TESRace_CreateFaceGenNodes(
        TESRace *this,
        NiObjectNET **outBipedNode,
        NiObjectNET **outSkinnedNode,
        TESNPC *npc,
        bool applyAppearance,
        bool preferBipedGeometry)
{
  BSFaceGenAnimationData *v6; // ebp
  BSFaceGenAnimationData *v7; // eax
  BSFaceGenNiNode *v8; // eax
  NiObjectNET *v9; // eax
  BSFaceGenNiNode *v10; // eax
  NiObjectNET *v11; // eax
  FaceGenRenderState parameters; // [esp+1Ch] [ebp-D0h] BYREF
  int v15; // [esp+E8h] [ebp-4h]

  v6 = 0; /*0x52df0f*/
  *outBipedNode = 0; /*0x52df11*/
  *outSkinnedNode = 0; /*0x52df18*/
  v7 = (BSFaceGenAnimationData *)FormHeapAlloc(0x1E0u); /*0x52df1a*/
  v15 = 0; /*0x52df28*/
  if ( v7 ) /*0x52df2f*/
    v6 = BSFaceGenAnimationData::BSFaceGenAnimationData(v7); /*0x52df38*/
  v8 = (BSFaceGenNiNode *)FormHeapAlloc(0x118u); /*0x52df49*/
  v15 = 1; /*0x52df57*/
  if ( v8 ) /*0x52df62*/
    v9 = (NiObjectNET *)BSFaceGenNiNode::BSFaceGenNiNode(v8); /*0x52df66*/
  else
    v9 = 0; /*0x52df6d*/
  v15 = 0xFFFFFFFF; /*0x52df76*/
  *outBipedNode = v9; /*0x52df7d*/
  NiObjectNET_SetName(v9, "BSFaceGenNiNodeBiped"); /*0x52df7f*/
  (*((void (__thiscall **)(NiObjectNET *, BSFaceGenAnimationData *))(*outBipedNode)->vtbl + 0x28))(*outBipedNode, v6); /*0x52df8f*/
  (*((void (__thiscall **)(NiObjectNET *, int))(*outBipedNode)->vtbl + 0x2C))(*outBipedNode, 1); /*0x52df9d*/
  (*((void (__thiscall **)(NiObjectNET *, int))(*outBipedNode)->vtbl + 0x2E))(*outBipedNode, 1); /*0x52dfab*/
  v10 = (BSFaceGenNiNode *)FormHeapAlloc(0x118u); /*0x52dfb2*/
  v15 = 2; /*0x52dfc0*/
  if ( v10 ) /*0x52dfcb*/
    v11 = (NiObjectNET *)BSFaceGenNiNode::BSFaceGenNiNode(v10); /*0x52dfcf*/
  else
    v11 = 0; /*0x52dfd6*/
  v15 = 0xFFFFFFFF; /*0x52dfdf*/
  *outSkinnedNode = v11; /*0x52dfe6*/
  NiObjectNET_SetName(v11, "BSFaceGenNiNodeSkinned"); /*0x52dfe8*/
  (*((void (__thiscall **)(NiObjectNET *, BSFaceGenAnimationData *))(*outSkinnedNode)->vtbl + 0x28))( /*0x52dff8*/
    *outSkinnedNode,
    v6);
  (*((void (__thiscall **)(NiObjectNET *, _DWORD))(*outSkinnedNode)->vtbl + 0x2C))(*outSkinnedNode, 0); /*0x52e006*/
  (*((void (__thiscall **)(NiObjectNET *, _DWORD))(*outSkinnedNode)->vtbl + 0x2E))(*outSkinnedNode, 0); /*0x52e014*/
  FaceGenRenderState_Construct(&parameters); /*0x52e01a*/
  v15 = 3; /*0x52e030*/
  TESRace_BuildFaceGenRenderState(this, npc, &parameters); /*0x52e03b*/
  BSFaceGen_BuildHeadGeometryNodes((NiNode **)outBipedNode, (NiNode **)outSkinnedNode, &parameters, preferBipedGeometry); /*0x52e04f*/
  if ( applyAppearance ) /*0x52e05f*/
  {
    BSFaceGen_ApplyHeadParametersToNode((BSFaceGenNiNode *)*outBipedNode, &parameters); /*0x52e069*/
    BSFaceGen_ApplyHeadParametersToNode((BSFaceGenNiNode *)*outSkinnedNode, &parameters); /*0x52e076*/
  }
  if ( npc ) /*0x52e080*/
  {
    if ( npc->member.super.super.super.refID == 7 ) /*0x52e086*/
    {
      BYTE1((*outBipedNode)[0xB].members.m_pcName) = 1; /*0x52e08a*/
      BYTE1((*outSkinnedNode)[0xB].members.m_pcName) = 1; /*0x52e093*/
    }
  }
  v15 = 0xFFFFFFFF; /*0x52e09e*/
  FaceGenRenderState_Destruct(&parameters); /*0x52e0a5*/
  return 1; /*0x52e0ac*/
}
