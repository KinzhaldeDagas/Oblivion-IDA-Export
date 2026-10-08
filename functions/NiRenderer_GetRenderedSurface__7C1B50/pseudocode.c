// Oblivion BSTextureManager cache lookup/allocation. Reuses a matching BSRenderedTexture by size, format, auxiliary value, and flags or creates one, then moves the resource to the in-use list.
BSRenderedTexture *__thiscall BSTextureManager_GetOrCreateRenderedTexture(
        BSTextureManager *this,
        NiDX9Renderer *renderer,
        int width,
        int height,
        unsigned int targetFlags,
        int d3dFormat,
        int aux)
{
  NiDX9Renderer *v7; // ebp
  NiRenderTargetGroup *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  NiDX9Renderer *v13; // edi
  NiAccumulator *accumulator; // esi
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  BSRenderedTexture **v23; // eax
  BSRenderedTexture **v24; // esi
  int v25; // eax
  int v26; // ecx
  bool v27; // cc
  BSRenderedTexture **v28; // edi
  Ni2DBuffer *RenderedTexture; // eax
  NiTPointerList_Node_void *v30; // eax
  NiTPointerList_Node_void *end; // ecx
  NiAccumulator *v33; // [esp+10h] [ebp-10h]
  int heighta; // [esp+18h] [ebp-8h]
  int v36; // [esp+1Ch] [ebp-4h]

  v7 = renderer; /*0x7c1b55*/
  v33 = 0; /*0x7c1b69*/
  v9 = renderer->__vftable->super.GetDefaultRTGroup(renderer); /*0x7c1b71*/
  v36 = v9->vtbl->GetWidth(v9, 0); /*0x7c1b81*/
  v10 = (int)v7->__vftable->super.GetDefaultRTGroup((NiRenderer *)v7); /*0x7c1b8a*/
  v11 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x50))(v10, 0); /*0x7c1b95*/
  v12 = d3dFormat; /*0x7c1b97*/
  heighta = v11; /*0x7c1b9d*/
  if ( d3dFormat ) /*0x7c1ba1*/
  {
    if ( (targetFlags & 8) == 0 ) /*0x7c1bac*/
    {
      switch ( d3dFormat ) /*0x7c1bc5*/
      {
        case 0x14: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[4] ) /*0x7c1c14*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c14*/
          break; /*0x7c1c14*/
        case 0x15: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[5] ) /*0x7c1c1f*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c1f*/
          break; /*0x7c1c1f*/
        case 0x16: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[6] ) /*0x7c1c2a*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c2a*/
          break; /*0x7c1c2a*/
        case 0x17: /*0x7c1bc5*/
          if ( !unk_B42E98[0] ) /*0x7c1bd3*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1bd3*/
          break; /*0x7c1bd3*/
        case 0x18: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[0] ) /*0x7c1be5*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1be5*/
          break; /*0x7c1be5*/
        case 0x19: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[1] ) /*0x7c1bf3*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1bf3*/
          break; /*0x7c1bf3*/
        case 0x1A: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[2] ) /*0x7c1bfe*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1bfe*/
          break; /*0x7c1bfe*/
        case 0x24: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[9] ) /*0x7c1c4b*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c4b*/
          break; /*0x7c1c4b*/
        case 0x32: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[0xB] ) /*0x7c1c5a*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c61*/
          break; /*0x7c1c61*/
        case 0x51: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[3] ) /*0x7c1c09*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c09*/
          break; /*0x7c1c09*/
        case 0x71: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[8] ) /*0x7c1c40*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c40*/
          break; /*0x7c1c40*/
        case 0x72: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[7] ) /*0x7c1c35*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c35*/
          break; /*0x7c1c35*/
        case 0x74: /*0x7c1bc5*/
          if ( !OB_RendererGlobalState_010201A0[0xA] ) /*0x7c1c56*/
            goto NiRenderer_GetRenderedSurface___def_7C1BC5; /*0x7c1c56*/
          break; /*0x7c1c56*/
        default:
NiRenderer_GetRenderedSurface___def_7C1BC5:
          if ( d3dFormat == 0x24 ) /*0x7c1c66*/
          {
            d3dFormat = 0x71; /*0x7c1c68*/
            v12 = 0x71; /*0x7c1c70*/
          }
          break; /*0x7c1c70*/
      }
    }
  }
  renderer = (NiDX9Renderer *)this->unk00.start; /*0x7c1c79*/
  v13 = renderer; /*0x7c1c74*/
  if ( renderer )
  {
    do
    {
      if ( v33 ) /*0x7c1c88*/
      {
        renderer = v13; /*0x7c1dc5*/
        goto LABEL_67; /*0x7c1dc5*/
      }
      accumulator = v13->member.super.accumulator; /*0x7c1c8e*/
      v15 = *(_DWORD *)(*(_DWORD *)accumulator + 0x20); /*0x7c1c93*/
      if ( v15 ) /*0x7c1c98*/
        v16 = (*(int (__thiscall **)(int))(*(_DWORD *)v15 + 0x4C))(v15); /*0x7c1c9f*/
      else
        v16 = 0; /*0x7c1ca3*/
      if ( (v16 == width
         || !width
         && ((v17 = *(_DWORD *)(*(_DWORD *)accumulator + 0x20)) == 0
           ? (v18 = 0)
           : (v18 = (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x4C))(v17)),
             v18 == v36))
        && ((v19 = *(_DWORD *)(*(_DWORD *)accumulator + 0x20)) == 0
          ? (v20 = 0)
          : (v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x50))(v19)),
            (v20 == height
          || !height
          && ((v21 = *(_DWORD *)(*(_DWORD *)accumulator + 0x20)) == 0
            ? (v22 = 0)
            : (v22 = (*(int (__thiscall **)(int))(*(_DWORD *)v21 + 0x50))(v21)),
              v22 == heighta))
         && *((_DWORD *)accumulator + 1) == v12
         && *((_DWORD *)accumulator + 2) == aux
         && (*((_DWORD *)accumulator + 3) | 0x22) == (targetFlags | 0x22)) )
      {
        v33 = accumulator; /*0x7c1d28*/
      }
      else
      {
        v13 = (NiDX9Renderer *)v13->__vftable; /*0x7c1d2e*/
      }
    }
    while ( v13 );
    renderer = 0; /*0x7c1d3c*/
    if ( !v33 ) /*0x7c1d40*/
      goto LABEL_58; /*0x7c1d40*/
LABEL_67:
    NiTPointerList_RemoveNode(this, (NiTPointerList_Node_void **)&renderer); /*0x7c1dc9*/
    *((_BYTE *)v33 + 0x10) = 1; /*0x7c1de0*/
    v28 = (BSRenderedTexture **)v33; /*0x7c1de3*/
  }
  else
  {
LABEL_58:
    v23 = (BSRenderedTexture **)FormHeapAlloc(0x14u); /*0x7c1d46*/
    if ( v23 ) /*0x7c1d52*/
    {
      *v23 = 0; /*0x7c1d54*/
      v24 = v23; /*0x7c1d5a*/
    }
    else
    {
      v24 = 0; /*0x7c1d5e*/
    }
    v25 = aux; /*0x7c1d64*/
    v24[3] = (BSRenderedTexture *)targetFlags; /*0x7c1d68*/
    v26 = width; /*0x7c1d6b*/
    v27 = width <= 0; /*0x7c1d6f*/
    v24[1] = (BSRenderedTexture *)v12; /*0x7c1d71*/
    v28 = v24; /*0x7c1d79*/
    v24[2] = (BSRenderedTexture *)v25; /*0x7c1d7b*/
    *((_BYTE *)v24 + 0x10) = 1; /*0x7c1d7e*/
    if ( v27 || height <= 0 ) /*0x7c1d88*/
      RenderedTexture = (Ni2DBuffer *)BSTextureManager_CreateRenderedTexture( /*0x7c1db6*/
                                        this,
                                        v7,
                                        v36,
                                        heighta,
                                        d3dFormat,
                                        v25,
                                        targetFlags);
    else
      RenderedTexture = (Ni2DBuffer *)BSTextureManager_CreateRenderedTexture( /*0x7c1d9a*/
                                        this,
                                        v7,
                                        v26,
                                        height,
                                        d3dFormat,
                                        v25,
                                        targetFlags);
    NiSmartPointer_Set__((Ni2DBuffer **)v24, RenderedTexture); /*0x7c1dbe*/
  }
  v30 = (NiTPointerList_Node_void *)(*((int (__thiscall **)(NiTPointerList_void *))this->unk10.__vftable + 1))(&this->unk10); /*0x7c1df4*/
  v30->data = v28; /*0x7c1df6*/
  v30->next = 0; /*0x7c1df9*/
  v30->prev = this->unk10.end; /*0x7c1e02*/
  end = this->unk10.end; /*0x7c1e05*/
  if ( end ) /*0x7c1e0a*/
  {
    end->next = v30; /*0x7c1e0c*/
    ++this->unk10.numItems; /*0x7c1e0e*/
  }
  else
  {
    ++this->unk10.numItems; /*0x7c1e20*/
    this->unk10.start = v30; /*0x7c1e23*/
  }
  this->unk10.end = v30; /*0x7c1e11*/
  return *v28; /*0x7c1e16*/
}
