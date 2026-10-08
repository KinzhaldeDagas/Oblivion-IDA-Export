// [Verified] Appends one 1x decal RenderPass per batch from a DECAL_DATA item count. The count is supplied from BSShaderLightingProperty+0x8C by BSShaderPPLightingProperty_BuildInheritedLightPasses; batch size is OB_ShaderPassControl.decalPassBatchSize. With emitMode==1, creates selector 0x18A/BSSM_DECAL or 0x18B/BSSM_DECAL_A according to useDecalVariantA; otherwise increments the output pass count. `passByte` is forwarded unchanged; its downstream meaning remains Unknown. Fallout uses distinct selectors 0x1FF/0x1FE and has a separate accumulator geometry-group path; direct equivalence is Unknown.
int __thiscall BSShaderProperty_AppendDecalPassesByBatch(
        BSShaderProperty *this,
        NiGeometry *geometry,
        unsigned __int16 *outPassCount,
        int emitMode,
        char *passByte,
        char useDecalVariantA,
        int decalCount)
{
  int result; // eax
  RenderPass_DecodedLayout *v9; // eax
  RenderPass_DecodedLayout *v10; // edi
  NiTList_NiProperty *p_passes; // esi
  NiTList_Entry_NiProperty *v12; // eax
  NiTList_Entry_NiProperty *v13; // ecx
  RenderPass_DecodedLayout *v14; // eax
  RenderPass_DecodedLayout *v15; // edi
  NiTList_Entry_NiProperty *end; // ecx

  for ( result = decalCount; result > 0; decalCount = result ) /*0x85a22c*/
  {
    if ( useDecalVariantA ) /*0x85a237*/
    {
      if ( (_BYTE)emitMode != 1 ) /*0x85a2cd*/
      {
LABEL_16:
        ++*outPassCount; /*0x85a35c*/
        goto LABEL_17; /*0x85a360*/
      }
      v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85a2d5*/
      if ( v14 ) /*0x85a2eb*/
        v15 = RenderPass_Construct(v14, geometry, 0x18Bu, *passByte, 0, 0); /*0x85a30c*/
      else
        v15 = 0; /*0x85a310*/
      p_passes = &this->member.passes; /*0x85a318*/
      v12 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb + 1))(&this->member.passes); /*0x85a325*/
      v12->data = (NiProperty *)v15; /*0x85a327*/
      v12->next = 0; /*0x85a32a*/
      v12->prev = this->member.passes.end; /*0x85a333*/
      end = this->member.passes.end; /*0x85a336*/
      if ( !end ) /*0x85a33b*/
      {
LABEL_15:
        p_passes->start = v12; /*0x85a34c*/
        p_passes->end = v12; /*0x85a34f*/
        ++p_passes->numItems; /*0x85a352*/
        result = decalCount; /*0x85a356*/
        goto LABEL_17; /*0x85a35a*/
      }
      end->next = v12; /*0x85a33d*/
      this->member.passes.end = v12; /*0x85a33f*/
      ++this->member.passes.numItems; /*0x85a342*/
      result = decalCount; /*0x85a346*/
    }
    else
    {
      if ( (_BYTE)emitMode != 1 ) /*0x85a242*/
        goto LABEL_16; /*0x85a242*/
      v9 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x85a24a*/
      if ( v9 ) /*0x85a260*/
        v10 = RenderPass_Construct(v9, geometry, 0x18Au, *passByte, 0, 0); /*0x85a281*/
      else
        v10 = 0; /*0x85a285*/
      p_passes = &this->member.passes; /*0x85a28d*/
      v12 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb + 1))(&this->member.passes); /*0x85a29a*/
      v12->data = (NiProperty *)v10; /*0x85a29c*/
      v12->next = 0; /*0x85a29f*/
      v12->prev = this->member.passes.end; /*0x85a2a8*/
      v13 = this->member.passes.end; /*0x85a2ab*/
      if ( !v13 ) /*0x85a2b0*/
        goto LABEL_15; /*0x85a2b0*/
      v13->next = v12; /*0x85a2b6*/
      this->member.passes.end = v12; /*0x85a2b8*/
      ++this->member.passes.numItems; /*0x85a2bb*/
      result = decalCount; /*0x85a2bf*/
    }
LABEL_17:
    result -= OB_ShaderPassControl_010201A0.decalPassBatchSize; /*0x85a364*/
  }
  return result; /*0x85a376*/
}
