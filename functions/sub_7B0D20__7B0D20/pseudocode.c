int __thiscall sub_7B0D20(char *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  NiD3DTextureStage *v9; // ebp
  int v10; // eax
  int v11; // eax
  NiD3DTextureStage *v12; // eax
  NiTexture *InnerTexture; // eax
  NiD3DTextureStage *v14; // edi
  bool v15; // zf
  int v16; // eax
  int v17; // ecx
  NiTexture **v18; // eax
  NiTexture *v19; // ebx
  NiTexture *Texture; // edi
  NiD3DTextureStage *v21; // eax
  NiTexture *v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // edi
  char *v26; // ebx
  int v27; // ecx
  int v28; // eax
  int v29; // edi
  int v30; // eax
  int v31; // edi
  int v32; // edi
  int v33; // edi
  int v34; // edi
  int v36; // [esp+14h] [ebp-1Ch]
  NiD3DTextureStage *v37; // [esp+18h] [ebp-18h] BYREF
  int v38; // [esp+1Ch] [ebp-14h] BYREF
  int i; // [esp+20h] [ebp-10h]
  unsigned int v40; // [esp+2Ch] [ebp-4h]

  v36 = 0; /*0x7b0d53*/
  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this); /*0x7b0d57*/
  v9 = 0; /*0x7b0d59*/
  v37 = 0; /*0x7b0d5b*/
  v10 = *((_DWORD *)this + 0x24); /*0x7b0d5f*/
  v40 = 0; /*0x7b0d67*/
  if ( v10 ) /*0x7b0d6b*/
  {
    v11 = v10 - 1; /*0x7b0d71*/
    if ( v11 ) /*0x7b0d74*/
    {
      if ( v11 == 1 ) /*0x7b0d79*/
      {
        v12 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1C) + 0x24); /*0x7b0d85*/
        if ( v12 ) /*0x7b0d89*/
        {
          ++v12[7].Unk08; /*0x7b0d8b*/
          v9 = v12; /*0x7b0d8f*/
          v37 = v12; /*0x7b0d91*/
        }
        InnerTexture = (NiTexture *)BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x7b0d98*/
        NiD3DTextureStage_SetTexture(v9, InnerTexture); /*0x7b0da0*/
        NiD3DTextureStage_ApplyFilterPreset(v9, 1u); /*0x7b0da9*/
        if ( *((_DWORD *)this + 0x38) ) /*0x7b0dae*/
        {
          sub_7AEC20(&v37, *(NiD3DTextureStage **)(*(_DWORD *)(*((_DWORD *)this + 0x1C) + 0x24) + 4)); /*0x7b0dc8*/
          v9 = v37; /*0x7b0dd3*/
          NiD3DTextureStage_SetTexture(v37, *((NiTexture **)this + 0x38)); /*0x7b0dda*/
          NiD3DTextureStage_ApplyFilterPreset(v9, 0); /*0x7b0de0*/
        }
      }
    }
    else
    {
      for ( i = 0; i < 0x10; i += 4 ) /*0x7b0de5*/
      {
        v14 = *(NiD3DTextureStage **)(i + *(_DWORD *)(*((_DWORD *)this + 0x1C) + 0x24)); /*0x7b0df3*/
        if ( v9 != v14 ) /*0x7b0df8*/
        {
          if ( v9 ) /*0x7b0dfc*/
          {
            v15 = v9[7].Unk08-- == 1; /*0x7b0dfe*/
            if ( v15 ) /*0x7b0e02*/
              sub_772560(v9); /*0x7b0e06*/
          }
          v9 = v14; /*0x7b0e0d*/
          v37 = v14; /*0x7b0e0f*/
          if ( v14 ) /*0x7b0e13*/
            ++v14[7].Unk08; /*0x7b0e15*/
        }
        v16 = *((_DWORD *)this + 0x1F); /*0x7b0e19*/
        if ( v16 ) /*0x7b0e1e*/
        {
          v17 = v38; /*0x7b0e20*/
          v18 = (NiTexture **)(v16 + 0x20); /*0x7b0e24*/
        }
        else
        {
          v17 = 0; /*0x7b0e29*/
          v36 |= 1u; /*0x7b0e2b*/
          v38 = 0; /*0x7b0e30*/
          v18 = (NiTexture **)&v38; /*0x7b0e34*/
        }
        v19 = *v18; /*0x7b0e3d*/
        if ( (v36 & 1) != 0 ) /*0x7b0e3f*/
        {
          v36 &= ~1u; /*0x7b0e41*/
          if ( v17 ) /*0x7b0e48*/
          {
            if ( !InterlockedDecrement((volatile LONG *)(v17 + 4)) ) /*0x7b0e4e*/
              (**(void (__thiscall ***)(int, int))v38)(v38, 1); /*0x7b0e62*/
          }
        }
        Texture = v9->Texture; /*0x7b0e64*/
        if ( Texture != v19 ) /*0x7b0e69*/
        {
          if ( Texture ) /*0x7b0e6d*/
          {
            if ( !InterlockedDecrement((volatile LONG *)&Texture->members) ) /*0x7b0e73*/
              Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1); /*0x7b0e89*/
          }
          v9->Texture = v19; /*0x7b0e8d*/
          if ( v19 ) /*0x7b0e90*/
            InterlockedIncrement((volatile LONG *)&v19->members); /*0x7b0e96*/
        }
        NiD3DTextureStage_ApplyFilterPreset(v9, 0); /*0x7b0ea0*/
      }
    }
  }
  else
  {
    v21 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1C) + 0x24); /*0x7b0ec1*/
    if ( v21 ) /*0x7b0ec5*/
    {
      ++v21[7].Unk08; /*0x7b0ec7*/
      v9 = v21; /*0x7b0ecb*/
      v37 = v21; /*0x7b0ecd*/
    }
    v22 = (NiTexture *)BSRenderedTexture::GetInnerTexture(*((BSRenderedTexture **)this + 0x1F)); /*0x7b0ed4*/
    NiD3DTextureStage_SetTexture(v9, v22); /*0x7b0edc*/
    NiD3DTextureStage_ApplyFilterPreset(v9, 1u); /*0x7b0ee5*/
  }
  v23 = *((_DWORD *)this + 0x1C); /*0x7b0eea*/
  v24 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x25); /*0x7b0ef3*/
  v25 = *(_DWORD *)(v23 + 0x58); /*0x7b0efa*/
  v26 = this + 0x70; /*0x7b0eff*/
  i = v24; /*0x7b0f02*/
  v38 = v23; /*0x7b0f06*/
  if ( v25 != v24 ) /*0x7b0f0a*/
  {
    if ( v25 ) /*0x7b0f0e*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v25 + 4)) ) /*0x7b0f14*/
        (**(void (__thiscall ***)(int, int))v25)(v25, 1); /*0x7b0f2a*/
      v24 = i; /*0x7b0f2c*/
    }
    *(_DWORD *)(v38 + 0x58) = v24; /*0x7b0f36*/
    if ( v24 ) /*0x7b0f39*/
      InterlockedIncrement((volatile LONG *)(v24 + 4)); /*0x7b0f3f*/
  }
  v27 = *(_DWORD *)v26; /*0x7b0f45*/
  v28 = *((_DWORD *)this + *((_DWORD *)this + 0x24) + 0x28); /*0x7b0f4d*/
  v29 = *(_DWORD *)(*(_DWORD *)v26 + 0x44); /*0x7b0f54*/
  i = v28; /*0x7b0f59*/
  v38 = v27; /*0x7b0f5d*/
  if ( v29 != v28 ) /*0x7b0f61*/
  {
    if ( v29 ) /*0x7b0f65*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) ) /*0x7b0f6b*/
        (**(void (__thiscall ***)(int, int))v29)(v29, 1); /*0x7b0f81*/
      v28 = i; /*0x7b0f83*/
    }
    *(_DWORD *)(v38 + 0x44) = v28; /*0x7b0f8d*/
    if ( v28 ) /*0x7b0f90*/
      InterlockedIncrement((volatile LONG *)(v28 + 4)); /*0x7b0f96*/
  }
  v30 = *((_DWORD *)this + 0x2B); /*0x7b0f9c*/
  if ( v30 == 5 || v30 == 2 || v30 == 4 ) /*0x7b0faf*/
  {
    v32 = *(_DWORD *)v26; /*0x7b0fc9*/
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) ) /*0x7b0fcb*/
      *(_DWORD *)(v32 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0fd6*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v32 + 0x30), 0x1Bu, 1u, 0); /*0x7b0fe2*/
    v33 = *(_DWORD *)v26; /*0x7b0fe7*/
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) ) /*0x7b0fe9*/
      *(_DWORD *)(v33 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0ff4*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v33 + 0x30), 0x13u, 2u, 0); /*0x7b1000*/
    v34 = *(_DWORD *)v26; /*0x7b1005*/
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) ) /*0x7b1007*/
      *(_DWORD *)(v34 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b1012*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v34 + 0x30), 0x14u, 2u, 0); /*0x7b101e*/
  }
  else
  {
    v31 = *(_DWORD *)v26; /*0x7b0fb1*/
    if ( !*(_DWORD *)(*(_DWORD *)v26 + 0x30) ) /*0x7b0fb3*/
      *(_DWORD *)(v31 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7b0fbe*/
    NiD3DRenderStateGroup_SetRenderState(*(OblivionRenderStateGroupPrefix **)(v31 + 0x30), 0x1Bu, 0, 0); /*0x7b0fc7*/
  }
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)this + 4, *((_DWORD *)this + 0xE), (NiD3DPass **)this + 0x1C); /*0x7b102b*/
  ++*((_DWORD *)this + 0xE); /*0x7b1030*/
  v40 = 0xFFFFFFFF; /*0x7b1039*/
  if ( v9 ) /*0x7b103d*/
  {
    v15 = v9[7].Unk08-- == 1; /*0x7b103f*/
    if ( v15 ) /*0x7b1042*/
      sub_772560(v9); /*0x7b1046*/
  }
  return 0; /*0x7b104d*/
}
