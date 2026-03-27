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

  if ( !this->unk10 )
    ImageSpaceShaderList::AssignScreenElements(this);
  start = this->start;
  next = start->next;
  data = start->data;
  memset(&v21.start, 0, 0xC);
  v21.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&NiTPointerList<BSImageSpaceShader *>::`vftable';
  for ( v21.unk18 = 0; data; next = next->next )
  {
    if ( (unsigned __int8)data->__vftable->IsShaderActive(data) )
    {
      v8 = v21.__vftable->AllocateNode(&v21);
      v8->data = data;
      v8->next = 0;
      v8->prev = v21.end;
      if ( v21.end )
        v21.end->next = v8;
      else
        v21.start = v8;
      ++v21.numItems;
      v21.end = v8;
    }
    if ( !next )
      break;
    data = next->data;
  }
  v9 = v21.start;
  if ( v21.start )
  {
    DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, a2, 3);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->renderTarget, DefaultRenderTarget);
    v11 = v9->data;
    renderTarget = (NiDX9Renderer *)this->renderTarget;
    v12 = v9->next;
    for ( a2 = (NiDX9Renderer *)a3; v11; v12 = v12->next )
    {
      shader = (BSImageSpaceShader *)this->unk10->member.shader;
      unk10 = this->unk10;
      if ( shader != v11 )
      {
        if ( shader )
        {
          if ( !InterlockedDecrement((volatile LONG *)&shader->member) )
            shader->__vftable->super.super.super.super.super.Destructor((NiRefObject *)shader, 1);
        }
        unk10->member.shader = (NiObject *)v11;
        InterlockedIncrement((volatile LONG *)&v11->member);
      }
      v11->__vftable->super.super.super.super.UpdateInternalVars((NiShader *)v11, this->unk10);
      LOBYTE(v20) = v12 == 0;
      if ( a2 )
      {
        p_renderTarget = &a4;
        if ( v12 )
          p_renderTarget = (BSRenderedTexture **)&renderTarget;
        v11->__vftable->RenderShader(
          v11,
          (NiScreenElements *)this->unk10,
          (BSRenderedTexture *)&a2,
          (BSRenderedTexture *)p_renderTarget,
          v20);
      }
      v15 = a2;
      a2 = renderTarget;
      renderTarget = v15;
      if ( !v12 )
        break;
      v11 = v12->data;
    }
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)this->renderTarget);
  }
  else if ( this->unk18 )
  {
    sub_4EC910(this->unk10, this->unk18);
    this->unk18->__vftable->super.super.super.UpdateInternalVars((NiShader *)this->unk18, &this->unk10->__vftable);
    ((void (__thiscall *)(BSShader *, NiGeometry *, BSRenderedTexture **, BSRenderedTexture **, int))this->unk18->__vftable[1].super.super.super.super.Destructor)(
      this->unk18,
      this->unk10,
      &a3,
      &a4,
      1);
  }
  v16 = this->unk10;
  v17 = v16->member.shader;
  if ( v17 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v17->members) )
      v17->__vftable->super.Destructor((NiRefObject *)v17, 1);
    v16->member.shader = 0;
  }
  v21.unk18 = (BSShader *)0xFFFFFFFF;
  NiTPointerList<BSImageSpaceShader *>::~NiTPointerList<BSImageSpaceShader *>(&v21);
}
