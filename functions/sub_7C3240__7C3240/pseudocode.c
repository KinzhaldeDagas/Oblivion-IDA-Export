// TallGrass shader-property render-pass producer. Selector 0x197 belongs to TallGrass and uses its special submission path, not Lighting30 0x14E..0x151.
NiTList_NiProperty *__thiscall TallGrassShaderProperty_GetRenderPasses(
        BSShaderProperty *this,
        RenderPass_DecodedLayout *vtable,
        int a3,
        int a4,
        int a5)
{
  __int16 v6; // ax
  ShadowSceneLight *v7; // esi
  RenderPass_DecodedLayout *v8; // eax
  RenderPass_DecodedLayout *v9; // ebx
  RenderPass_DecodedLayout *v10; // eax
  RenderPass_DecodedLayout *v11; // eax
  ShadowSceneLight *FirstActiveLight; // esi
  RenderPass_DecodedLayout *v13; // eax
  RenderPass_DecodedLayout *v14; // eax
  ShadowSceneLight_DecodedLayout *i; // edi
  RenderPass_DecodedLayout *v16; // eax
  RenderPass_DecodedLayout *v17; // edi
  NiTList_Entry_NiProperty *v18; // eax
  NiTList_Entry_NiProperty *start; // ecx

  if ( this->member.lastRenderPassState != a3 ) /*0x7c326e*/
  {
    BSShaderProperty_ClearRenderPassLists(this); /*0x7c3274*/
    if ( unk_B43344 ) /*0x7c3279*/
      v6 = BSShaderLightingProperty__CountFrustumVisibleEnabledLights((BSShaderLightingProperty *)this); /*0x7c3284*/
    else
      v6 = 0; /*0x7c328e*/
    if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 /*0x7c32a1*/
      || OB_RendererGlobalState_010201A0.bHighDynamicRangeMode )
    {
      if ( v6 ) /*0x7c333d*/
      {
        FirstActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x7c3348*/
        v13 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7c334a*/
        v9 = vtable; /*0x7c3358*/
        if ( v13 ) /*0x7c3360*/
          vtable = RenderPass_Construct(v13, vtable, 0x196u, 1u, 1u, FirstActiveLight); /*0x7c3373*/
        else
          vtable = 0; /*0x7c3383*/
        goto LABEL_21; /*0x7c337f*/
      }
      v14 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7c3390*/
      v9 = vtable; /*0x7c339e*/
      if ( v14 ) /*0x7c33aa*/
      {
        v10 = RenderPass_Construct(v14, vtable, 0x195u, 1u, 0, 0); /*0x7c33b9*/
        goto LABEL_20; /*0x7c33c1*/
      }
    }
    else
    {
      if ( !v6 ) /*0x7c32b1*/
      {
        v11 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7c32f6*/
        v9 = vtable; /*0x7c3304*/
        if ( v11 ) /*0x7c3310*/
          v10 = RenderPass_Construct(v11, vtable, 0xCu, 1u, 0, 0); /*0x7c331c*/
        else
          v10 = 0; /*0x7c3332*/
        goto LABEL_20; /*0x7c3329*/
      }
      v7 = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)this); /*0x7c32bc*/
      v8 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7c32be*/
      v9 = vtable; /*0x7c32cc*/
      if ( v8 ) /*0x7c32d8*/
      {
        v10 = RenderPass_Construct(v8, vtable, 0xDu, 1u, 1u, v7); /*0x7c32e7*/
LABEL_20:
        vtable = v10; /*0x7c33ca*/
LABEL_21:
        NiTList_AddHead(&this->member.passes.vtlb, &vtable); /*0x7c33ce*/
        if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 3 /*0x7c33fe*/
          && (OB_RendererGlobalState_010201A0.pad_00D[0x9A] & 0x10) != 0 )
        {
          for ( i = BSShaderLightingProperty__GetFirstActiveNonShadowLight((MEF_LightingPropertyIterationView32 *)this); /*0x7c340f*/
                i;
                i = BSShaderLightingProperty__GetNextActiveNonShadowLight((MEF_LightingPropertyIterationView32 *)this) )
          {
            if ( i->perSourceProjectorMode_F4 ) /*0x7c3415*/
            {
              v16 = (RenderPass_DecodedLayout *)FormHeapAlloc(0x10u); /*0x7c3420*/
              vtable = v16; /*0x7c3428*/
              if ( v16 ) /*0x7c3436*/
                v17 = RenderPass_Construct(v16, v9, 0, 0, 1u, i); /*0x7c3449*/
              else
                v17 = 0; /*0x7c344d*/
              v17->selector_04 = 0x197; /*0x7c344f*/
              v18 = (NiTList_Entry_NiProperty *)(*((int (__thiscall **)(NiTList_NiProperty *))this->member.passes.vtlb /*0x7c3464*/
                                                 + 1))(&this->member.passes);
              v18->data = (NiProperty *)v17; /*0x7c3466*/
              v18->prev = 0; /*0x7c3469*/
              v18->next = this->member.passes.start; /*0x7c3473*/
              start = this->member.passes.start; /*0x7c3475*/
              if ( start ) /*0x7c347a*/
                start->prev = v18; /*0x7c347c*/
              else
                this->member.passes.end = v18; /*0x7c3481*/
              ++this->member.passes.numItems; /*0x7c3484*/
              this->member.passes.start = v18; /*0x7c3488*/
            }
          }
        }
        this->member.lastRenderPassState = a3 | (*(unsigned __int16 *)&OB_RendererGlobalState_010201A0.pad_00D[6] << 8); /*0x7c34aa*/
        return &this->member.passes; /*0x7c34aa*/
      }
    }
    v10 = 0; /*0x7c33c3*/
    goto LABEL_20; /*0x7c33c3*/
  }
  return &this->member.passes; /*0x7c34b0*/
}
