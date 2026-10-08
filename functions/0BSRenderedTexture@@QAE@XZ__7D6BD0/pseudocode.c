BSRenderedTexture *__thiscall BSRenderedTexture::BSRenderedTexture(
        BSRenderedTexture *this,
        NiRenderedTexture *a2,
        char a3,
        NiDepthStencilBuffer *a4)
{
  void (__stdcall *v5)(volatile LONG *); // ebp
  NiDepthStencilBuffer *v6; // edi
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
  NiRenderTargetGroup *v21; // eax
  NiRenderTargetGroup *v22; // esi
  NiRenderTargetGroup *v23; // edi
  NiRenderer *v24; // [esp-8h] [ebp-30h]
  NiDX9Renderer *v25; // [esp-4h] [ebp-2Ch]
  NiDepthStencilBuffer *a3a; // [esp+30h] [ebp+8h]
  int v28; // [esp+34h] [ebp+Ch]

  v5 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x7d6bfd*/
  this->vtbl = (NiRefObjectVtbl **)&NiRefObject::`vftable'; /*0x7d6c0a*/
  this->members.super.m_uiRefCount = 0; /*0x7d6c10*/
  v5(&MEMORY[0xB3FD64]); /*0x7d6c13*/
  this->vtbl = (NiRefObjectVtbl **)&BSRenderedTexture::`vftable'; /*0x7d6c2b*/
  ArrayConstructor( /*0x7d6c35*/
    (char *)&this->members.RenderTargetGroup,
    4u,
    6,
    (void (__thiscall *)(char *))Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))NiPointerSlot_Release);
  this->members.RenderedTexture = 0; /*0x7d6c3a*/
  v6 = 0; /*0x7d6c3d*/
  if ( a2 ) /*0x7d6c4a*/
  {
    this->members.RenderedTexture = a2; /*0x7d6c6e*/
    v5((volatile LONG *)&a2->member); /*0x7d6c77*/
  }
  if ( !a3 ) /*0x7d6c7e*/
    goto LABEL_18; /*0x7d6c7e*/
  if ( !a2 || (v7 = a2->__vftable->super.super.GetType(a2)) == 0 ) /*0x7d6c93*/
  {
LABEL_9:
    v6 = a4; /*0x7d6ca3*/
    if ( !a4 /*0x7d6cc9*/
      || (width = a4->members.width, width < a2->__vftable->super.GetWidth((NiTexture *)a2))
      || (height = a4->members.height, height < a2->__vftable->super.GetHeight((NiTexture *)a2)) )
    {
      v25 = unk_B43104; /*0x7d6cd6*/
      v10 = (int *)a2->__vftable->GetBuffer(a2); /*0x7d6cd9*/
      a3a = (NiDepthStencilBuffer *)sub_70BE00(v10, (int)v25); /*0x7d6ce4*/
      goto LABEL_19; /*0x7d6ce8*/
    }
LABEL_18:
    a3a = v6; /*0x7d6d21*/
    goto LABEL_19; /*0x7d6d21*/
  }
  while ( v7 != &stru_BAA880 ) /*0x7d6c9a*/
  {
    v7 = v7->parent; /*0x7d6c9c*/
    if ( !v7 ) /*0x7d6ca1*/
      goto LABEL_9; /*0x7d6ca1*/
  }
  m_uiRefCount = (int *)a2[1].member.super.super.super.m_uiRefCount; /*0x7d6cf0*/
  if ( a4 && a4->members.width >= m_uiRefCount[2] && a4->members.height >= m_uiRefCount[3] ) /*0x7d6d03*/
    a3a = a4; /*0x7d6d05*/
  else
    a3a = (NiDepthStencilBuffer *)sub_70BE00(m_uiRefCount, (int)unk_B43104); /*0x7d6d1b*/
LABEL_19:
  if ( a2 && (v12 = a2->__vftable->super.super.GetType(a2)) != 0 ) /*0x7d6d34*/
  {
    while ( v12 != &stru_BAA880 ) /*0x7d6d3b*/
    {
      v12 = v12->parent; /*0x7d6d3d*/
      if ( !v12 ) /*0x7d6d42*/
        goto LABEL_23; /*0x7d6d42*/
    }
    p_RenderTargetGroup = &this->members.RenderTargetGroup; /*0x7d6da8*/
    p_member = (Ni2DBuffer **)&a2[1].member; /*0x7d6dac*/
    v28 = 6; /*0x7d6daf*/
    do /*0x7d6e1c*/
    {
      v21 = NiRenderTargetGroup::CreateWithBuffers(*p_member, (NiRenderer *)renderer, a3a); /*0x7d6dcf*/
      v22 = *p_RenderTargetGroup; /*0x7d6dd4*/
      v23 = v21; /*0x7d6dd7*/
      if ( *p_RenderTargetGroup != v21 ) /*0x7d6dde*/
      {
        if ( v22 ) /*0x7d6de2*/
        {
          if ( !InterlockedDecrement((volatile LONG *)&v22->members) ) /*0x7d6de8*/
            ((void (__thiscall *)(NiRenderTargetGroup *, int))v22->vtbl->gap0[0])(v22, 1); /*0x7d6dfe*/
        }
        *p_RenderTargetGroup = v23; /*0x7d6e02*/
        if ( v23 ) /*0x7d6e05*/
          InterlockedIncrement((volatile LONG *)&v23->members); /*0x7d6e0b*/
      }
      ++p_member; /*0x7d6e11*/
      ++p_RenderTargetGroup; /*0x7d6e14*/
      --v28; /*0x7d6e17*/
    }
    while ( v28 ); /*0x7d6e1c*/
    return this; /*0x7d6e1e*/
  }
  else
  {
LABEL_23:
    v24 = (NiRenderer *)renderer; /*0x7d6d44*/
    v13 = a2->__vftable->GetBuffer(a2); /*0x7d6d57*/
    v14 = (Ni2DBuffer *)NiRenderTargetGroup::CreateWithBuffers(v13, v24, a3a); /*0x7d6d5a*/
    NiSmartPointer_Set__((Ni2DBuffer **)&this->members.RenderTargetGroup, v14); /*0x7d6d67*/
    unk008 = this->members.unk008; /*0x7d6d6c*/
    v16 = 5; /*0x7d6d6f*/
    do /*0x7d6da2*/
    {
      v17 = *unk008; /*0x7d6d74*/
      if ( *unk008 ) /*0x7d6d74*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x7d6d7e*/
        {
          if ( v17 ) /*0x7d6d8a*/
            (**(void (__thiscall ***)(UInt32, int))v17)(v17, 1); /*0x7d6d94*/
        }
        *unk008 = 0; /*0x7d6d96*/
      }
      ++unk008; /*0x7d6d9c*/
      --v16; /*0x7d6d9f*/
    }
    while ( v16 ); /*0x7d6da2*/
    return this; /*0x7d6da4*/
  }
}
