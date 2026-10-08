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

  *(this + 3) = 0; /*0x7c201c*/
  *(this + 1) = 0; /*0x7c201f*/
  *(this + 2) = 0; /*0x7c2022*/
  *this = (Ni2DBuffer *)&NiTPointerList<BSTextureManager::RenderedTextureData *>::`vftable'; /*0x7c2025*/
  *(this + 7) = 0; /*0x7c202f*/
  *(this + 5) = 0; /*0x7c2032*/
  *(this + 6) = 0; /*0x7c2035*/
  *(this + 4) = (Ni2DBuffer *)&NiTPointerList<BSTextureManager::RenderedTextureData *>::`vftable'; /*0x7c2038*/
  *(this + 0xB) = 0; /*0x7c2044*/
  *(this + 9) = 0; /*0x7c2047*/
  *(this + 0xA) = 0; /*0x7c204a*/
  *(this + 8) = (Ni2DBuffer *)&NiTPointerList<NiPointer<BSRenderedTexture>>::`vftable'; /*0x7c204d*/
  *(this + 0xF) = 0; /*0x7c2050*/
  *(this + 0xD) = 0; /*0x7c2053*/
  *(this + 0xE) = 0; /*0x7c2056*/
  *(this + 0xC) = (Ni2DBuffer *)&NiTPointerList<NiPointer<BSRenderedTexture>>::`vftable'; /*0x7c2059*/
  v2 = this + 0x10; /*0x7c205c*/
  *(this + 0x10) = 0; /*0x7c205f*/
  *(this + 0x11) = 0; /*0x7c2061*/
  v3 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7c2074*/
  v4 = v3; /*0x7c207d*/
  if ( *(int *)&MEMORY[0xB33E90][0x1130] < 2 ) /*0x7c207f*/
  {
    v8 = (Ni2DBuffer *)v3->vtbl->GetDepthStencilBuffer(v3); /*0x7c20b7*/
    NiSmartPointer_Set__(v2, v8); /*0x7c20bc*/
  }
  else
  {
    v5 = renderer; /*0x7c2081*/
    dword_B294EC = 0; /*0x7c2086*/
    v11 = (int)v5; /*0x7c208e*/
    v6 = (int *)v4->vtbl->GetBuffer(v4, 0); /*0x7c2093*/
    v7 = (Ni2DBuffer *)sub_70BE00(v6, v11); /*0x7c2096*/
    NiSmartPointer_Set__(v2, v7); /*0x7c20a1*/
    dword_B294EC = 1; /*0x7c20a6*/
  }
  v9 = (int)*(this + 0x11); /*0x7c20c1*/
  if ( v9 ) /*0x7c20c6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7c20cc*/
      (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x7c20e2*/
    *(this + 0x11) = 0; /*0x7c20e4*/
  }
  return this; /*0x7c20e9*/
}
