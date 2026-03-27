char __thiscall sub_7C6310(Ni2DBuffer **this, UInt32 a2, int a3, char a4)
{
  char v6; // al
  Ni2DBuffer **v7; // esi
  BSCubeMapCamera *v8; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBufferMembr *p_members; // eax
  Ni2DBuffer *DefaultRenderTarget; // eax
  Ni2DBuffer *v12; // ebp
  int v13; // eax
  #9279 *vftable; // ebp
  Ni2DBuffer *v15; // edi
  UInt32 width; // edi
  UInt32 *p_width; // ebp
  unsigned int v18; // eax
  Ni2DBuffer *v19; // esi
  #9279 *v20; // edi
  Ni2DBuffer *v21; // esi
  Ni2DBuffer *v23; // [esp+14h] [ebp-14h]
  int v24; // [esp+14h] [ebp-14h]
  char v26; // [esp+2Ch] [ebp+4h]

  v6 = *(_BYTE *)(a2 + 0x18);
  *(_WORD *)(a2 + 0x18) &= ~1u;
  v7 = this + 0x49;
  v26 = v6 & 1;
  if ( !*(this + 0x49) )
  {
    v8 = (BSCubeMapCamera *)FormHeapAlloc(0x150u);
    if ( v8 )
      v9 = (Ni2DBuffer *)BSCubeMapCamera::BSCubeMapCamera(v8, 3);
    else
      v9 = 0;
    NiSmartPointer_Set__(v7, v9);
  }
  (*v7)[0xE].members.height = 3;
  p_members = &(*v7)[4].members;
  p_members->super.m_uiRefCount = *(_DWORD *)(a2 + 0x88);
  p_members->width = *(_DWORD *)(a2 + 0x8C);
  p_members->height = *(_DWORD *)(a2 + 0x90);
  if ( *(this + 0x48) )
  {
    if ( !a4 )
      goto LABEL_16;
    sub_7C1EE0(g_textureManager, (BSRenderedTexture *)*(this + 0x48));
  }
  DefaultRenderTarget = (Ni2DBuffer *)BSTextureManager_GetDefaultRenderTarget(g_textureManager, dword_B43104, 0x18);
  v12 = *(this + 0x48);
  v23 = DefaultRenderTarget;
  if ( v12 != DefaultRenderTarget )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v12->members) )
        (*(void (__thiscall **)(Ni2DBuffer *, int))v12->__vftable)(v12, 1);
      DefaultRenderTarget = v23;
    }
    *(this + 0x48) = DefaultRenderTarget;
    if ( DefaultRenderTarget )
      InterlockedIncrement((volatile LONG *)&DefaultRenderTarget->members);
  }
LABEL_16:
  v13 = (int)*(this + 0x48);
  vftable = (*v7)[0x10].__vftable;
  v15 = *v7 + 0x10;
  v24 = v13;
  if ( vftable != (#9279 *)v13 )
  {
    if ( vftable )
    {
      if ( !InterlockedDecrement((volatile LONG *)vftable + 1) )
        (**(void (__thiscall ***)(#9279 *, int))vftable)(vftable, 1);
      v13 = v24;
    }
    v15->__vftable = (#9279 *)v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  width = (*v7)[0x10].members.width;
  p_width = &(*v7)[0x10].members.width;
  if ( width != a2 )
  {
    if ( width )
    {
      if ( !InterlockedDecrement((volatile LONG *)(width + 4)) )
        (**(void (__thiscall ***)(UInt32, int))width)(width, 1);
    }
    *p_width = a2;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  if ( a4 )
  {
    v18 = 0xFFFFFFFF;
  }
  else
  {
    v18 = (unsigned int)*(this + 0x4A);
    *(this + 0x4A) = (Ni2DBuffer *)(v18 + 1);
  }
  (*((void (__thiscall **)(Ni2DBuffer *, unsigned int))(*v7)->__vftable + 0x21))(*v7, v18);
  v19 = *v7;
  v20 = v19[0x10].__vftable;
  v21 = v19 + 0x10;
  if ( v20 )
  {
    if ( !InterlockedDecrement((volatile LONG *)v20 + 1) )
      (**(void (__thiscall ***)(#9279 *, int))v20)(v20, 1);
    v21->__vftable = 0;
  }
  if ( v26 )
    *(_WORD *)(a2 + 0x18) |= 1u;
  else
    *(_WORD *)(a2 + 0x18) &= ~1u;
  if ( (int)*(this + 0x4A) < 6 )
    return 0;
  *(this + 0x4A) = 0;
  return 1;
}
