// MoonSugarEffect decode: ImageSpaceShaderList creation order: NightEye, HDR/Blur, optional Refraction, Hit, and Copy fallback at +0x18.
NiTPointerList__BSImageSpaceShader *__thiscall ImageSpaceshaderList::Create(NiTPointerList__BSImageSpaceShader *this)
{
  UInt32 renderTarget; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiGeometry *unk10; // edi
  ShaderDefinition *ShaderDefinition; // eax
  BSShader *shader; // eax
  ShaderDefinition *v7; // eax
  BSShader *v8; // eax
  ShaderDefinition *v9; // eax
  BSShader *v10; // eax
  ShaderDefinition *v11; // eax
  BSShader *v12; // eax
  ShaderDefinition *v13; // eax

  this->numItems = 0; /*0x803a5d*/
  this->start = 0; /*0x803a60*/
  this->end = 0; /*0x803a63*/
  this->__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<BSImageSpaceShader *>::`vftable'; /*0x803a66*/
  this->unk10 = 0; /*0x803a70*/
  this->renderTarget = 0; /*0x803a73*/
  NiTPointerList::FreeAllNodes(this); /*0x803a7b*/
  renderTarget = this->renderTarget; /*0x803a80*/
  v3 = InterlockedDecrement; /*0x803a85*/
  if ( renderTarget ) /*0x803a8b*/
  {
    if ( !v3((volatile LONG *)(renderTarget + 4)) ) /*0x803a91*/
      (**(void (__thiscall ***)(UInt32, int))renderTarget)(renderTarget, 1); /*0x803aa3*/
    this->renderTarget = 0; /*0x803aa5*/
  }
  this->unk18 = 0; /*0x803aa8*/
  unk10 = this->unk10; /*0x803aab*/
  if ( unk10 ) /*0x803ab0*/
  {
    if ( !v3((volatile LONG *)&unk10->member) ) /*0x803ab6*/
      unk10->__vftable->super.super.super.Destructor((NiRefObject *)unk10, 1); /*0x803ac8*/
    this->unk10 = 0; /*0x803aca*/
  }
  ShaderDefinition = GetShaderDefinition(0x12u); /*0x803acf*/
  if ( ShaderDefinition ) /*0x803ad9*/
  {
    shader = ShaderDefinition->shader; /*0x803adb*/
    if ( shader ) /*0x803ae0*/
      AddImageSpaceShader(this, shader); /*0x803ae5*/
  }
  if ( OB_RendererGlobalState_010201A0[0x1D7] ) // DeferredRendering HDR+Bloom force target: native image-space list chooses either HDR shader ID 0x08 or Blur/Bloom shader ID 0x07 from UseHDR. Plugin now forces UseHDR/ImageSpaceEffects and hooks AddImageSpaceShader to keep both in the list. /*0x803aea*/
    v7 = GetShaderDefinition(8u); /*0x803af8*/
  else
    v7 = GetShaderDefinition(7u); /*0x803af4*/
  if ( v7 ) /*0x803b02*/
  {
    v8 = v7->shader; /*0x803b04*/
    if ( v8 ) /*0x803b09*/
      AddImageSpaceShader(this, v8);            // DeferredRendering hook context: when native adds HDR to the image-space list, plugin appends Blur/Bloom via the native AddImageSpaceShader trampoline so both post effects run in one image-space chain. /*0x803b0e*/
  }
  if ( OB_ShaderPassControl_010201A0[0] ) /*0x803b13*/
  {
    v9 = GetShaderDefinition(0x15u); /*0x803b1d*/
    if ( v9 ) /*0x803b27*/
    {
      v10 = v9->shader; /*0x803b29*/
      if ( v10 ) /*0x803b2e*/
        AddImageSpaceShader(this, v10); /*0x803b33*/
    }
  }
  v11 = GetShaderDefinition(0xBu); /*0x803b3a*/
  if ( v11 ) /*0x803b44*/
  {
    v12 = v11->shader; /*0x803b46*/
    if ( v12 ) /*0x803b4b*/
      AddImageSpaceShader(this, v12); /*0x803b50*/
  }
  v13 = GetShaderDefinition(0xCu); /*0x803b57*/
  if ( v13 ) /*0x803b61*/
    this->unk18 = v13->shader; /*0x803b66*/
  return this; /*0x803b6b*/
}
