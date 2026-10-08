// Probable: TESBoundObject 3D helper; if the bound form's model path is nonempty it obtains reference-specific model data through TESBoundObject_GetReferenceModelData, otherwise creates an empty NiNode. Then ensures the result is parented under a root NiNode.
NiNode *__thiscall sub_4B0A30(TESBoundObject *this, TESObjectREFR *reference)
{
  void *ReferenceModelData; // eax
  NiNode *v4; // eax
  void *v5; // edi
  NiNode *v6; // eax
  NiNode *v7; // esi

  if ( strlen((const char *)(*(int (__thiscall **)(_DWORD *))(*((_DWORD *)this + 0xC) + 0x14))((_DWORD *)this + 0xC)) ) /*0x4b0a60*/
  {
    ReferenceModelData = TESBoundObject_GetReferenceModelData(this, reference); /*0x4b0a77*/
  }
  else
  {
    v4 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4b0a83*/
    if ( v4 ) /*0x4b0a99*/
      ReferenceModelData = NiNode::NiNode(v4, 0); /*0x4b0a9f*/
    else
      ReferenceModelData = 0; /*0x4b0aa6*/
  }
  v5 = ReferenceModelData; /*0x4b0ab0*/
  if ( !ReferenceModelData || (*(int (__thiscall **)(void *))(*(_DWORD *)ReferenceModelData + 8))(ReferenceModelData) ) /*0x4b0abd*/
    return (NiNode *)v5; /*0x4b0b1c*/
  v6 = (NiNode *)FormHeapAlloc(0xDCu); /*0x4b0ac8*/
  if ( v6 ) /*0x4b0ade*/
    v7 = NiNode::NiNode(v6, 0); /*0x4b0ae9*/
  else
    v7 = 0; /*0x4b0aed*/
  ((void (__thiscall *)(NiNode *, void *, _DWORD))v7->vtbl->AddObject)(v7, v5, 0); /*0x4b0b04*/
  return v7; /*0x4b0b08*/
}
