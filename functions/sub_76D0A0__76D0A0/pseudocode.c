void __thiscall sub_76D0A0(unsigned __int16 *this, int a2, int a3, char a4, char a5)
{
  NiD3DPass **v6; // esi
  NiD3DPass **v7; // eax
  NiD3DPass *v8; // ecx
  NiD3DPass **v9; // edi
  bool v10; // zf
  NiD3DPass *v11; // eax
  NiD3DPass *v12; // eax
  NiD3DPass *v13; // edi
  unsigned int v14; // ebx
  NiD3DPass *v15; // edi
  NiD3DPass *v16; // edi
  NiD3DPass *v17; // esi
  NiD3DPass *v18; // [esp+8h] [ebp-4h] BYREF

  v6 = (NiD3DPass **)(this + 0x1E); /*0x76d0a9*/
  if ( !*((_DWORD *)this + 0xF) ) /*0x76d0a4*/
  {
    v7 = NiD3DPassPool_Acquire(&v18); /*0x76d0b9*/
    v8 = *v6; /*0x76d0be*/
    v9 = v7; /*0x76d0c0*/
    if ( *v6 != *v7 ) /*0x76d0c7*/
    {
      if ( v8 ) /*0x76d0cb*/
      {
        v10 = v8->RefCount-- == 1; /*0x76d0cd*/
        if ( v10 ) /*0x76d0d1*/
          NiD3DPass_ReleaseToPool(v8); /*0x76d0d3*/
      }
      v11 = *v9; /*0x76d0d8*/
      v10 = *v9 == 0; /*0x76d0da*/
      *v6 = *v9; /*0x76d0dc*/
      if ( !v10 ) /*0x76d0de*/
        ++v11->RefCount; /*0x76d0e0*/
    }
    v12 = v18; /*0x76d0e4*/
    if ( v18 ) /*0x76d0ea*/
    {
      --v18->RefCount; /*0x76d0ec*/
      if ( !v12->RefCount ) /*0x76d0f5*/
        NiD3DPass_ReleaseToPool(v12); /*0x76d0fa*/
    }
    v13 = *v6; /*0x76d0ff*/
    if ( !(*v6)->RenderStateGroup ) /*0x76d101*/
      v13->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x76d10c*/
    NiD3DRenderStateGroup_SetRenderState((_DWORD *)v13->RenderStateGroup, 0xA8, 7, 1); /*0x76d11b*/
    v14 = *((_DWORD *)this + 0xE); /*0x76d124*/
    if ( v14 >= *(this + 0x24) ) /*0x76d12c*/
      sub_76CCA0(this + 0x20, v14 + *(this + 0x27)); /*0x76d137*/
    NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, v14, v6); /*0x76d140*/
    if ( *((_DWORD *)this + 0xE) ) /*0x76d145*/
    {
      if ( a2 == 2 && a3 == 1 ) /*0x76d159*/
      {
        NiD3DPass_SetRenderState(*v6, 0x1B, 0, 1); /*0x76d163*/
      }
      else
      {
        v15 = *v6; /*0x76d16a*/
        if ( !(*v6)->RenderStateGroup ) /*0x76d16c*/
          v15->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x76d177*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v15->RenderStateGroup, 0x13, a2, 0); /*0x76d182*/
        v16 = *v6; /*0x76d187*/
        if ( !(*v6)->RenderStateGroup ) /*0x76d189*/
          v16->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x76d194*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v16->RenderStateGroup, 0x14, a3, 0); /*0x76d1a3*/
        v17 = *v6; /*0x76d1a8*/
        if ( !v17->RenderStateGroup ) /*0x76d1aa*/
          v17->RenderStateGroup = (NiD3DRenderStateGroup *)NiD3DRenderStateGroupPool_Acquire(); /*0x76d1b5*/
        NiD3DRenderStateGroup_SetRenderState((_DWORD *)v17->RenderStateGroup, 0x1B, 1, 1); /*0x76d1c1*/
      }
    }
    *((_BYTE *)this + 0x50) = a4; /*0x76d1d0*/
    *((_BYTE *)this + 0x51) = a5; /*0x76d1d3*/
    *((_DWORD *)this + 0x16) = dword_B28CB0; /*0x76d1dc*/
    *((_DWORD *)this + 0x17) = dword_B28CB4; /*0x76d1e6*/
    if ( a4 ) /*0x76d1ea*/
    {
      --*((_DWORD *)this + 0x16); /*0x76d1ef*/
      --*((_DWORD *)this + 0x17); /*0x76d1f2*/
    }
  }
}
