Ni2DBuffer **__thiscall BSTextureManager_Create(Ni2DBuffer **this)
{
  Ni2DBuffer **v2; // ebx
  NiRenderTargetGroup *v3; // eax
  NiRenderTargetGroup *v4; // ecx
  NiDX9Renderer *v5; // eax
  int *v6; // eax
  Ni2DBuffer *v7; // eax
  Ni2DBuffer *v8; // eax
  int v9; // ebx
  int v11; // [esp-4h] [ebp-24h]

  *(this + 3) = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = (Ni2DBuffer *)&NiTPointerList<BSTextureManager::RenderedTextureData *>::`vftable';
  *(this + 7) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 4) = (Ni2DBuffer *)&NiTPointerList<BSTextureManager::RenderedTextureData *>::`vftable';
  *(this + 0xB) = 0;
  *(this + 9) = 0;
  *(this + 0xA) = 0;
  *(this + 8) = (Ni2DBuffer *)&NiTPointerList<NiPointer<BSRenderedTexture>>::`vftable';
  *(this + 0xF) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0;
  *(this + 0xC) = (Ni2DBuffer *)&NiTPointerList<NiPointer<BSRenderedTexture>>::`vftable';
  v2 = this + 0x10;
  *(this + 0x10) = 0;
  *(this + 0x11) = 0;
  v3 = g_Renderer->__vftable->super.GetDefaultRTGroup(g_Renderer);
  v4 = v3;
  if ( iMultisample < 2 )
  {
    v8 = (Ni2DBuffer *)v3->vtbl->GetDepthStencilBuffer(v3);
    NiSmartPointer_Set__(v2, v8);
  }
  else
  {
    v5 = g_Renderer;
    dword_B294EC = 0;
    v11 = (int)v5;
    v6 = (int *)v4->vtbl->GetBuffer(v4, 0);
    v7 = (Ni2DBuffer *)sub_70BE00(v6, v11);
    NiSmartPointer_Set__(v2, v7);
    dword_B294EC = 1;
  }
  v9 = (int)*(this + 0x11);
  if ( v9 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    *(this + 0x11) = 0;
  }
  return this;
}
