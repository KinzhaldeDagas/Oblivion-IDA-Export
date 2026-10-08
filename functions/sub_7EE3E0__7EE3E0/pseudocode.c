// [Verified] Appends DECAL_DATA* to this BSShaderLightingProperty's list at +0x80: allocates a node through the list allocator vfunc, stores data at node+8, links at tail, and increments numItems at +0x8C. Resets the base BSShaderProperty cached render-pass state at +0x24. Called by BSTempEffectDecal_Ctor, BSTempEffectDecal_LoadGame, and BSTempEffectGeometryDecal_BuildGeneratedGeometry.
NiTPointerListNode_DECAL_DATA_t *__thiscall BSShaderLightingProperty_AddDecalData(
        BSShaderLightingPropertyLayout_t *this,
        DECAL_DATA *data)
{
  NiTPointerList_DecalDataLayout_t *p_decalDataList_80; // esi
  NiTPointerListNode_DECAL_DATA_t *result; // eax
  NiTPointerListNode_DECAL_DATA_t *tail; // ecx

  p_decalDataList_80 = &this->decalDataList_80; /*0x7ee3ed*/
  result = (NiTPointerListNode_DECAL_DATA_t *)(*((int (__thiscall **)(NiTPointerList_DecalDataLayout_t *))this->decalDataList_80.vftable /*0x7ee3f5*/
                                               + 1))(&this->decalDataList_80);
  result->data_08 = data; /*0x7ee3fb*/
  result->next_00 = 0; /*0x7ee3fe*/
  result->prev_04 = p_decalDataList_80->tail; /*0x7ee407*/
  tail = p_decalDataList_80->tail; /*0x7ee40a*/
  if ( tail ) /*0x7ee40f*/
  {
    tail->next_00 = result; /*0x7ee411*/
    ++p_decalDataList_80->numItems; /*0x7ee413*/
  }
  else
  {
    ++p_decalDataList_80->numItems; /*0x7ee426*/
    p_decalDataList_80->head = result; /*0x7ee42a*/
  }
  p_decalDataList_80->tail = result; /*0x7ee417*/
  this->base.member.lastRenderPassState = 0; /*0x7ee41a*/
  return result; /*0x7ee421*/
}
