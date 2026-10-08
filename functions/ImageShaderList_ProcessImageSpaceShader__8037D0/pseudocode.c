// MoonSugarEffect decode: ImageSpaceShaderList processing builds a temporary active shader list, binds each shader to the shared screen element, and ping-pongs source/destination targets.
void __thiscall ImageShaderList::ProcessImageSpaceShader(
        NiTPointerList__BSImageSpaceShader *this,
        NiDX9Renderer *a2,
        BSRenderedTexture *a3,
        BSRenderedTexture *a4)
{
  NiPointerList_Node_BSImageSpaceShader *start; // eax
  NiPointerList_Node_BSImageSpaceShader *next; // ebx
  BSImageSpaceShader *data; // esi
  NiPointerList_Node_BSImageSpaceShader *v8; // eax
  NiPointerList_Node_BSImageSpaceShader *v9; // ebx
  Ni2DBuffer *DefaultRenderTarget; // eax
  BSImageSpaceShader *v11; // esi
  NiPointerList_Node_BSImageSpaceShader *v12; // ebx
  BSImageSpaceShader *shader; // ebp
  BSRenderedTexture **p_renderTarget; // ecx
  NiDX9Renderer *v15; // eax
  NiGeometry *v16; // edi
  NiObject *v17; // esi
  NiDX9Renderer *renderTarget; // [esp+18h] [ebp-28h] BYREF
  NiGeometry *unk10; // [esp+1Ch] [ebp-24h]
  int v20; // [esp+20h] [ebp-20h]
  NiTPointerList__BSImageSpaceShader v21; // [esp+24h] [ebp-1Ch] BYREF

  if ( !this->unk10 ) /*0x8037fb*/
    ImageSpaceShaderList::AssignScreenElements(this); /*0x803800*/
  start = this->start; /*0x803805*/
  next = start->next; /*0x803808*/
  data = start->data; /*0x80380a*/
  memset(&v21.start, 0, 0xC); /*0x803814*/
  v21.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<BSImageSpaceShader *>::`vftable'; /*0x80381c*/
  for ( v21.unk18 = 0; data; next = next->next ) /*0x80382a*/
  {
    if ( (unsigned __int8)data->__vftable->IsShaderActive(data) ) /*0x80383a*/
    {
      v8 = v21.__vftable->AllocateNode(&v21); /*0x80384b*/
      v8->data = data; /*0x80384d*/
      v8->next = 0; /*0x803850*/
      v8->prev = v21.end; /*0x803856*/
      if ( v21.end ) /*0x80385f*/
        v21.end->next = v8; /*0x803861*/
      else
        v21.start = v8; /*0x803865*/
      ++v21.numItems; /*0x803869*/
      v21.end = v8; /*0x80386e*/
    }
    if ( !next ) /*0x803874*/
      break; /*0x803874*/
    data = next->data; /*0x803876*/
  }
  v9 = v21.start; /*0x803882*/
  if ( v21.start ) /*0x803888*/
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget( /*0x8038de*/
                                          *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
                                          a2,
                                          3);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->renderTarget, DefaultRenderTarget); /*0x8038e6*/
    v11 = v9->data; /*0x8038ed*/
    renderTarget = (NiDX9Renderer *)this->renderTarget; /*0x8038f6*/
    v12 = v9->next; /*0x8038fd*/
    for ( a2 = (NiDX9Renderer *)a3; v11; v12 = v12->next ) /*0x803903*/
    {
      shader = (BSImageSpaceShader *)this->unk10->member.shader; /*0x803913*/
      unk10 = this->unk10; /*0x80391b*/
      if ( shader != v11 ) /*0x80391f*/
      {
        if ( shader ) /*0x803923*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&shader->member) ) /*0x803929*/
            shader->__vftable->super.super.super.super.super.Destructor((NiRefObject *)shader, 1); /*0x803940*/
        }
        unk10->member.shader = (NiObject *)v11; /*0x80394a*/
        InterlockedIncrement((volatile LONG *)&v11->member); /*0x803950*/
      }
      v11->__vftable->super.super.super.super.UpdateInternalVars((NiShader *)v11, this->unk10); /*0x803961*/
      LOBYTE(v20) = v12 == 0; /*0x80396d*/
      if ( a2 ) /*0x803971*/
      {
        p_renderTarget = &a4; /*0x803975*/
        if ( v12 ) /*0x803979*/
          p_renderTarget = (BSRenderedTexture **)&renderTarget; /*0x80397b*/
        v11->__vftable->RenderShader( /*0x803998*/
          v11,
          (NiScreenElements *)this->unk10,
          (BSRenderedTexture *)&a2,
          (BSRenderedTexture *)p_renderTarget,
          v20);
      }
      v15 = a2; /*0x80399c*/
      a2 = renderTarget; /*0x8039a4*/
      renderTarget = v15; /*0x8039a8*/
      if ( !v12 ) /*0x8039ac*/
        break; /*0x8039ac*/
      v11 = v12->data; /*0x8039ae*/
    }
    BSTextureManager__ReturnRenderedTexture( /*0x8039ca*/
      *(BSTextureManager **)&OB_RendererGlobalState_010201A0.pad_0B3[4],
      (BSRenderedTexture *)this->renderTarget);
  }
  else if ( this->unk18 ) /*0x80388a*/
  {
    NiGeometry_SetShader(this->unk10, this->unk18); /*0x803899*/
    this->unk18->__vftable->super.super.super.UpdateInternalVars((NiShader *)this->unk18, &this->unk10->__vftable); /*0x8038aa*/
    ((void (__thiscall *)(BSShader *, NiGeometry *, BSRenderedTexture **, BSRenderedTexture **, int))this->unk18->__vftable[1].super.super.super.super.Destructor)( /*0x8038c7*/
      this->unk18,
      this->unk10,
      &a3,
      &a4,
      1);
  }
  v16 = this->unk10; /*0x8039cf*/
  v17 = v16->member.shader; /*0x8039d2*/
  if ( v17 ) /*0x8039da*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&v17->members) ) /*0x8039e0*/
      v17->__vftable->super.Destructor((NiRefObject *)v17, 1); /*0x8039f6*/
    v16->member.shader = 0; /*0x8039f8*/
  }
  v21.unk18 = (BSShader *)0xFFFFFFFF; /*0x803a02*/
  NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(&v21); /*0x803a0a*/
}
