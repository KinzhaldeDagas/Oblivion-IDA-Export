BSRenderedTexture *__thiscall BSRenderedTexture::BSRenderedTexture(
        BSRenderedTexture *this,
        NiRenderedTexture *a2,
        char a3,
        NiDepthStencilBuffer *a4)
{
  void (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // edi
  NiRTTI *v7; // eax
  UInt32 width; // ebp
  UInt32 height; // ebp
  int *v10; // eax
  int *m_uiRefCount; // eax
  NiRTTI *v12; // eax
  Ni2DBuffer *v13; // eax
  Ni2DBuffer *v14; // eax
  UInt32 *unk008; // edi
  int v16; // ebp
  UInt32 v17; // esi
  NiRenderTargetGroup **p_RenderTargetGroup; // ebp
  Ni2DBuffer **p_member; // ebx
  NiRenderTargetGroup *NewRenderTargetGroupAndDoSomething; // eax
  NiRenderTargetGroup *v22; // esi
  NiRenderTargetGroup *v23; // edi
  NiRenderer *v24; // [esp-8h] [ebp-30h]
  NiDX9Renderer *v25; // [esp-4h] [ebp-2Ch]
  NiDepthStencilBuffer *a3a; // [esp+30h] [ebp+8h]
  int v28; // [esp+34h] [ebp+Ch]

  v5 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  this->vtbl = (NiRefObjectVtbl **)&NiRefObject::`vftable';
  this->members.super.m_uiRefCount = 0;
  v5(&NiRefObject_objcount);
  this->vtbl = (NiRefObjectVtbl **)&BSRenderedTexture::`vftable';
  ArrayConstructor(
    &this->members.RenderTargetGroup,
    4u,
    6,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  this->members.RenderedTexture = 0;
  v6 = 0;
  if ( a2 )
  {
    this->members.RenderedTexture = a2;
    v5((volatile LONG *)&a2->member);
  }
  if ( !a3 )
    goto LABEL_18;
  if ( !a2 || (v7 = a2->__vftable->super.super.GetType(a2)) == 0 )
  {
LABEL_9:
    v6 = (int)a4;
    if ( !a4
      || (width = a4->members.width, width < a2->__vftable->super.GetWidth((NiTexture *)a2))
      || (height = a4->members.height, height < a2->__vftable->super.GetHeight((NiTexture *)a2)) )
    {
      v25 = dword_B43104;
      v10 = (int *)a2->__vftable->GetBuffer(a2);
      a3a = (NiDepthStencilBuffer *)sub_70BE00(v10, (int)v25);
      goto LABEL_19;
    }
LABEL_18:
    a3a = (NiDepthStencilBuffer *)v6;
    goto LABEL_19;
  }
  while ( v7 != (NiRTTI *)&unk_BAA880 )
  {
    v7 = v7->parent;
    if ( !v7 )
      goto LABEL_9;
  }
  m_uiRefCount = (int *)a2[1].member.super.super.super.m_uiRefCount;
  if ( a4 && a4->members.width >= m_uiRefCount[2] && a4->members.height >= m_uiRefCount[3] )
    a3a = a4;
  else
    a3a = (NiDepthStencilBuffer *)sub_70BE00(m_uiRefCount, (int)dword_B43104);
LABEL_19:
  if ( a2 && (v12 = a2->__vftable->super.super.GetType(a2)) != 0 )
  {
    while ( v12 != (NiRTTI *)&unk_BAA880 )
    {
      v12 = v12->parent;
      if ( !v12 )
        goto LABEL_23;
    }
    p_RenderTargetGroup = &this->members.RenderTargetGroup;
    p_member = (Ni2DBuffer **)&a2[1].member;
    v28 = 6;
    do
    {
      NewRenderTargetGroupAndDoSomething = CreateNewRenderTargetGroupAndDoSomething(
                                             *p_member,
                                             (NiRenderer *)g_Renderer,
                                             a3a);
      v22 = *p_RenderTargetGroup;
      v23 = NewRenderTargetGroupAndDoSomething;
      if ( *p_RenderTargetGroup != NewRenderTargetGroupAndDoSomething )
      {
        if ( v22 )
        {
          if ( !InterlockedDecrement((volatile LONG *)&v22->members) )
            ((void (__thiscall *)(NiRenderTargetGroup *, int))v22->vtbl->gap0[0])(v22, 1);
        }
        *p_RenderTargetGroup = v23;
        if ( v23 )
          InterlockedIncrement((volatile LONG *)&v23->members);
      }
      ++p_member;
      ++p_RenderTargetGroup;
      --v28;
    }
    while ( v28 );
    return this;
  }
  else
  {
LABEL_23:
    v24 = (NiRenderer *)g_Renderer;
    v13 = a2->__vftable->GetBuffer(a2);
    v14 = (Ni2DBuffer *)CreateNewRenderTargetGroupAndDoSomething(v13, v24, a3a);
    NiSmartPointer_Set__((Ni2DBuffer **)&this->members.RenderTargetGroup, v14);
    unk008 = this->members.unk008;
    v16 = 5;
    do
    {
      v17 = *unk008;
      if ( *unk008 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) )
        {
          if ( v17 )
            (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1);
        }
        *unk008 = 0;
      }
      ++unk008;
      --v16;
    }
    while ( v16 );
    return this;
  }
}
