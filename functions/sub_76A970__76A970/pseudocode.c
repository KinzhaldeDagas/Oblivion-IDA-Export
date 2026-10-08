// Oblivion-authoritative NiDX9 device reset transaction: releases light/index/vertex buffers and RT slots 1-3; invalidates screen RT groups, rendered textures/cubemaps/dynamic textures, shaders and geometry; runs pre-reset callbacks; Reset()s using the default RT group's saved D3DPRESENT_PARAMETERS; increments ResetCounter; rebuilds targets/textures/defaults/shaders/render state; then runs post-reset callbacks. Any failed phase returns false.
bool __thiscall NiDX9Renderer_RecreateDevice(NiDX9Renderer *this)
{
  UInt32 m_numBuckets; // ecx
  UInt32 v3; // eax
  NiTMap_Entry_void **m_buckets; // edx
  unsigned int *v5; // eax
  volatile LONG *v6; // edi
  int v7; // esi
  int v8; // eax
  NiRTTI *v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // esi
  NiRTTI *v13; // eax
  char v14; // al
  int v15; // eax
  UInt32 v16; // edx
  UInt32 v17; // eax
  NiTMap_Entry_void **v18; // ecx
  unsigned int *v19; // eax
  int v20; // esi
  UInt32 v21; // edx
  UInt32 v22; // eax
  NiTMap_Entry_void **v23; // ecx
  unsigned int *v24; // eax
  int v25; // esi
  UInt32 v26; // edx
  UInt32 v27; // eax
  NiTMap_Entry_void **v28; // ecx
  unsigned int *v29; // eax
  NiRenderedTexture *v30; // ecx
  bool v31; // zf
  int v32; // esi
  NiTList_Entry *head; // esi
  void *data; // ecx
  TESObjectCELL *end; // edi
  int v36; // esi
  unsigned __int8 (__cdecl *v37)(int, _DWORD); // eax
  void *v38; // ecx
  NiDX92DBufferData *v39; // esi
  NiDX92DBufferData *v40; // eax
  NiRTTI *v42; // eax
  char v43; // al
  UInt32 v44; // ecx
  UInt32 v45; // eax
  NiTMap_Entry_void **v46; // edx
  unsigned int *v47; // eax
  volatile LONG *v48; // edi
  int v49; // esi
  int v50; // eax
  NiRTTI *v51; // eax
  char v52; // al
  int v53; // esi
  NiRTTI *v54; // eax
  char v55; // al
  int v56; // eax
  void *v57; // ecx
  UInt32 v58; // edx
  UInt32 v59; // eax
  NiTMap_Entry_void **v60; // ecx
  unsigned int *v61; // eax
  UInt32 v62; // edx
  UInt32 v63; // eax
  NiTMap_Entry_void **v64; // ecx
  unsigned int *v65; // eax
  UInt32 v66; // edx
  UInt32 v67; // eax
  NiTMap_Entry_void **v68; // ecx
  unsigned int *v69; // eax
  NiTList_Entry *v70; // esi
  void *v71; // ecx
  TESObjectCELL *v72; // edi
  int v73; // esi
  unsigned __int8 (__cdecl *v74)(_DWORD, _DWORD); // eax
  unsigned int *v75; // [esp+54h] [ebp-10h] BYREF
  int a2; // [esp+58h] [ebp-Ch] BYREF
  NiRenderedTexture *v77; // [esp+5Ch] [ebp-8h] BYREF
  TESObjectCELL *v78; // [esp+60h] [ebp-4h] BYREF

  sub_776B10((_DWORD *)this->member.lightMgr); /*0x76a97f*/
  sub_7786C0((_DWORD *)this->member.indexBufferMgr); /*0x76a98a*/
  sub_777A50((_DWORD *)this->member.vertexBufferMgr); /*0x76a995*/
  UnsetRenderTarget(this->member.device, 1); /*0x76a9a3*/
  UnsetRenderTarget(this->member.device, 2); /*0x76a9b1*/
  UnsetRenderTarget(this->member.device, 3); /*0x76a9bf*/
  m_numBuckets = this->member.screenRTGroups.m_numBuckets; /*0x76a9c4*/
  v3 = 0; /*0x76a9cf*/
  if ( m_numBuckets ) /*0x76a9d3*/
  {
    m_buckets = this->member.screenRTGroups.m_buckets; /*0x76a9db*/
    while ( !*m_buckets ) /*0x76a9e2*/
    {
      ++v3; /*0x76a9e4*/
      ++m_buckets; /*0x76a9e7*/
      if ( v3 >= m_numBuckets ) /*0x76a9ec*/
        goto LABEL_5; /*0x76a9ec*/
    }
    v5 = (unsigned int *)this->member.screenRTGroups.m_buckets[v3]; /*0x76aa37*/
  }
  else
  {
LABEL_5:
    v5 = 0; /*0x76a9ee*/
  }
  v75 = v5; /*0x76a9f2*/
  while ( v75 )
  {
    a2 = 0; /*0x76aa15*/
    sub_7B2600((unsigned int **)&this->member.screenRTGroups, &v75, &v78, (unsigned int *)&a2); /*0x76aa19*/
    v6 = (volatile LONG *)a2; /*0x76aa1e*/
    v7 = *(_DWORD *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x70))(a2, 0) + 0x10); /*0x76aa2c*/
    if ( v7 )
    {
      v9 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x10))(v7); /*0x76aa43*/
      if ( v9 ) /*0x76aa47*/
      {
        while ( v9 != &stru_B4265C ) /*0x76aa55*/
        {
          v9 = v9->parent; /*0x76aa5b*/
          if ( !v9 ) /*0x76aa60*/
            goto LABEL_13; /*0x76aa60*/
        }
        v10 = 1; /*0x76acb3*/
      }
      else
      {
LABEL_13:
        v10 = 0; /*0x76aa62*/
      }
      v8 = v10 != 0 ? v7 : 0;
    }
    else
    {
      v8 = 0; /*0x76aa33*/
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x2C))(v8); /*0x76aa71*/
    v11 = (*(int (__thiscall **)(volatile LONG *))(*v6 + 0x74))(v6); /*0x76aa7a*/
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 0x10); /*0x76aa80*/
      if ( v12 )
      {
        v13 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x10))(v12); /*0x76aa8e*/
        if ( v13 ) /*0x76aa92*/
        {
          while ( v13 != &stru_B4263C ) /*0x76aa99*/
          {
            v13 = v13->parent; /*0x76aa9f*/
            if ( !v13 ) /*0x76aaa4*/
              goto LABEL_20; /*0x76aaa4*/
          }
          v14 = 1; /*0x76acba*/
        }
        else
        {
LABEL_20:
          v14 = 0; /*0x76aaa6*/
        }
        v15 = v14 != 0 ? v12 : 0;
        if ( v15 ) /*0x76aaae*/
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 0x2C))(v15); /*0x76aab7*/
      }
    }
    if ( !InterlockedDecrement(v6 + 1) ) /*0x76aabd*/
      (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1); /*0x76aacf*/
  }
  v16 = this->member.renderedTextures.m_numBuckets; /*0x76aadb*/
  v17 = 0; /*0x76aae1*/
  if ( v16 ) /*0x76aae5*/
  {
    v18 = this->member.renderedTextures.m_buckets; /*0x76aaed*/
    while ( !*v18 ) /*0x76aaf2*/
    {
      ++v17; /*0x76aaf8*/
      ++v18; /*0x76aafb*/
      if ( v17 >= v16 ) /*0x76ab00*/
        goto LABEL_30; /*0x76ab00*/
    }
    v19 = (unsigned int *)this->member.renderedTextures.m_buckets[v17]; /*0x76acc1*/
  }
  else
  {
LABEL_30:
    v19 = 0; /*0x76ab02*/
  }
  v75 = v19; /*0x76ab06*/
  while ( v75 ) /*0x76ab0a*/
  {
    NiTMap_U32Pointer_GetNextEntry( /*0x76ab27*/
      (NiTMap_TESCELL *)&this->member.renderedTextures,
      (NiTMap_Entry_TESCELL **)&v75,
      (void **)&a2,
      &v78);
    v20 = a2; /*0x76ab2f*/
    this->__vftable->super.Unk_33((NiRenderer *)this, (void *)a2); /*0x76ab3c*/
    NiTMap_SetAt(&this->member.renderedTextures.vtbl, v20, 0); /*0x76ab42*/
  }
  v21 = this->member.renderedCubeMaps.m_numBuckets; /*0x76ab4d*/
  v22 = 0; /*0x76ab53*/
  if ( v21 ) /*0x76ab57*/
  {
    v23 = this->member.renderedCubeMaps.m_buckets; /*0x76ab5f*/
    while ( !*v23 ) /*0x76ab63*/
    {
      ++v22; /*0x76ab69*/
      ++v23; /*0x76ab6c*/
      if ( v22 >= v21 ) /*0x76ab71*/
        goto LABEL_37; /*0x76ab71*/
    }
    v24 = (unsigned int *)this->member.renderedCubeMaps.m_buckets[v22]; /*0x76acc9*/
  }
  else
  {
LABEL_37:
    v24 = 0; /*0x76ab73*/
  }
  v75 = v24; /*0x76ab77*/
  while ( v75 ) /*0x76ab7b*/
  {
    NiTMap_U32Pointer_GetNextEntry( /*0x76ab97*/
      (NiTMap_TESCELL *)&this->member.renderedCubeMaps,
      (NiTMap_Entry_TESCELL **)&v75,
      (void **)&a2,
      &v78);
    v25 = a2; /*0x76ab9f*/
    this->__vftable->super.Unk_33((NiRenderer *)this, (void *)a2); /*0x76abac*/
    NiTMap_SetAt(&this->member.renderedCubeMaps.vtbl, v25, 0); /*0x76abb2*/
  }
  v26 = this->member.dynamicTextures.m_numBuckets; /*0x76abbd*/
  v27 = 0; /*0x76abc3*/
  if ( v26 ) /*0x76abc7*/
  {
    v28 = this->member.dynamicTextures.m_buckets; /*0x76abcf*/
    while ( !*v28 ) /*0x76abd3*/
    {
      ++v27; /*0x76abd9*/
      ++v28; /*0x76abdc*/
      if ( v27 >= v26 ) /*0x76abe1*/
        goto LABEL_44; /*0x76abe1*/
    }
    v29 = (unsigned int *)this->member.dynamicTextures.m_buckets[v27]; /*0x76acd1*/
  }
  else
  {
LABEL_44:
    v29 = 0; /*0x76abe3*/
  }
  v75 = v29; /*0x76abe7*/
  while ( v75 ) /*0x76abeb*/
  {
    NiTMap_U32Pointer_GetNextEntry( /*0x76ac07*/
      (NiTMap_TESCELL *)&this->member.dynamicTextures,
      (NiTMap_Entry_TESCELL **)&v75,
      (void **)&a2,
      (TESObjectCELL **)&v77);
    v30 = v77; /*0x76ac0c*/
    v31 = v77 == 0; /*0x76ac10*/
    v32 = a2; /*0x76ac12*/
    *(_DWORD *)(a2 + 0x24) = 0; /*0x76ac16*/
    if ( !v31 ) /*0x76ac19*/
      v30->__vftable->super.super.super.Destructor((NiRefObject *)v30, 1); /*0x76ac21*/
    NiTMap_SetAt(&this->member.dynamicTextures.vtbl, v32, 0); /*0x76ac27*/
  }
  NiDX9ResourceRegistry_ReleaseAll(); /*0x76ac32*/
  head = this->member.shaderInterfaces.head; /*0x76ac37*/
  while ( head ) /*0x76ac3f*/
  {
    data = head->data; /*0x76ac41*/
    head = head->next; /*0x76ac4c*/
    (*(void (__thiscall **)(void *))(*(_DWORD *)data + 0x58))(data); /*0x76ac4e*/
  }
  ((void (__thiscall *)(NiGeometryGroup *))this->member.dynamicGeometryGroup->vtbl->Destructor)(this->member.dynamicGeometryGroup); /*0x76ac5e*/
  end = (TESObjectCELL *)this->member.unkA98.end; /*0x76ac60*/
  v36 = 0; /*0x76ac67*/
  v78 = end; /*0x76ac6b*/
  if ( end ) /*0x76ac6f*/
  {
    while ( 1 ) /*0x76ac77*/
    {
      v37 = *((unsigned __int8 (__cdecl **)(int, _DWORD))this->member.unkA98.data + v36); /*0x76ac77*/
      if ( v37 ) /*0x76ac85*/
      {
        if ( !v37(1, *((_DWORD *)this->member.unkAA8.data + v36)) ) /*0x76ac8a*/
          break;                                // Pre-reset notification phase. Each registered callback receives phase=1 before IDirect3DDevice9::Reset; a false callback aborts the transaction. /*0x76ac8a*/
      }
      if ( ++v36 >= (unsigned int)end ) /*0x76ac98*/
        goto LABEL_55; /*0x76ac98*/
    }
    Shared_NoOpVirtual_60D0A0(v38); /*0x76acde*/
    return 0; /*0x76acde*/
  }
LABEL_55:
  v39 = this->member.defaultRTGroup->vtbl->GetBuffer(this->member.defaultRTGroup, 0)->members.data; /*0x76ac9a*/
  if ( v39 )
  {
    v42 = (NiRTTI *)v39->__vftable->GetRTTI(v39); /*0x76acf7*/
    if ( v42 ) /*0x76acfb*/
    {
      while ( v42 != &stru_B4265C ) /*0x76ad05*/
      {
        v42 = v42->parent; /*0x76ad0b*/
        if ( !v42 ) /*0x76ad10*/
          goto LABEL_67; /*0x76ad10*/
      }
      v43 = 1; /*0x76ada7*/
    }
    else
    {
LABEL_67:
      v43 = 0; /*0x76ad12*/
    }
    v40 = v43 != 0 ? v39 : 0;
  }
  else
  {
    v40 = 0; /*0x76acaf*/
  }
  if ( (int)this->member.device->lpVtbl->Reset(this->member.device, &v40[1]) < 0 )// Device-reset commit point: IDirect3DDevice9::Reset(device, saved presentation parameters from default RT-group buffer data). ResetCounter increments only after success. /*0x76ad2e*/
    return 0; /*0x76acef*/
  ++this->member.ResetCounter; /*0x76ad30*/
  v44 = this->member.screenRTGroups.m_numBuckets; /*0x76ad37*/
  v45 = 0; /*0x76ad3d*/
  if ( v44 ) /*0x76ad41*/
  {
    v46 = this->member.screenRTGroups.m_buckets; /*0x76ad49*/
    while ( !*v46 ) /*0x76ad52*/
    {
      ++v45; /*0x76ad54*/
      ++v46; /*0x76ad57*/
      if ( v45 >= v44 ) /*0x76ad5c*/
        goto LABEL_74; /*0x76ad5c*/
    }
    v47 = (unsigned int *)this->member.screenRTGroups.m_buckets[v45]; /*0x76adae*/
  }
  else
  {
LABEL_74:
    v47 = 0; /*0x76ad5e*/
  }
  v75 = v47; /*0x76ad62*/
  while ( v75 )
  {
    a2 = 0; /*0x76ad85*/
    sub_7B2600((unsigned int **)&this->member.screenRTGroups, &v75, &v77, (unsigned int *)&a2); /*0x76ad89*/
    v48 = (volatile LONG *)a2; /*0x76ad8e*/
    v49 = *(_DWORD *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x70))(a2, 0) + 0x10); /*0x76ad9c*/
    if ( v49 )
    {
      v51 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v49 + 0x10))(v49); /*0x76adba*/
      if ( v51 ) /*0x76adbe*/
      {
        while ( v51 != &stru_B4265C ) /*0x76adc5*/
        {
          v51 = v51->parent; /*0x76adcb*/
          if ( !v51 ) /*0x76add0*/
            goto LABEL_83; /*0x76add0*/
        }
        v52 = 1; /*0x76ae88*/
      }
      else
      {
LABEL_83:
        v52 = 0; /*0x76add2*/
      }
      v50 = v52 != 0 ? v49 : 0;
    }
    else
    {
      v50 = 0; /*0x76ada3*/
    }
    (*(void (__thiscall **)(int, IDirect3DDevice9 *))(*(_DWORD *)v50 + 0x30))(v50, this->member.device); /*0x76ade8*/
    v53 = (*(int (__thiscall **)(volatile LONG *))(*v48 + 0x84))(v48); /*0x76adf6*/
    if ( v53 )
    {
      v54 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v53 + 0x10))(v53); /*0x76ae03*/
      if ( v54 ) /*0x76ae07*/
      {
        while ( v54 != &stru_B4263C ) /*0x76ae15*/
        {
          v54 = v54->parent; /*0x76ae17*/
          if ( !v54 ) /*0x76ae1c*/
            goto LABEL_89; /*0x76ae1c*/
        }
        v55 = 1; /*0x76ae8f*/
      }
      else
      {
LABEL_89:
        v55 = 0; /*0x76ae1e*/
      }
      v56 = v55 != 0 ? v53 : 0;
      if ( v56 ) /*0x76ae26*/
        (*(void (__thiscall **)(int, IDirect3DDevice9 *))(*(_DWORD *)v56 + 0x30))(v56, this->member.device); /*0x76ae36*/
    }
    if ( !InterlockedDecrement(v48 + 1) ) /*0x76ae3c*/
      (**(void (__thiscall ***)(volatile LONG *, int))v48)(v48, 1); /*0x76ae4e*/
  }
  this->member.currentRTGroup = this->member.currentscreenRTGroup; /*0x76ae60*/
  if ( NiDX9Renderer_InitializeTextureDefaults(this) ) /*0x76ae68*/
  {
    v58 = this->member.renderedTextures.m_numBuckets; /*0x76ae93*/
    v59 = 0; /*0x76ae99*/
    if ( v58 ) /*0x76ae9d*/
    {
      v60 = this->member.renderedTextures.m_buckets; /*0x76aea5*/
      while ( !*v60 ) /*0x76aea9*/
      {
        ++v59; /*0x76aeaf*/
        ++v60; /*0x76aeb2*/
        if ( v59 >= v58 ) /*0x76aeb7*/
          goto LABEL_103; /*0x76aeb7*/
      }
      v61 = (unsigned int *)this->member.renderedTextures.m_buckets[v59]; /*0x76b052*/
    }
    else
    {
LABEL_103:
      v61 = 0; /*0x76aeb9*/
    }
    v75 = v61; /*0x76aebd*/
    while ( v75 ) /*0x76aec1*/
    {
      NiTMap_U32Pointer_GetNextEntry( /*0x76aed8*/
        (NiTMap_TESCELL *)&this->member.renderedTextures,
        (NiTMap_Entry_TESCELL **)&v75,
        (void **)&v77,
        (TESObjectCELL **)&a2);
      this->__vftable->super.CreateRenderedTexture((NiRenderer *)this, v77);// Post-reset resource reconstruction: recreate every tracked NiRenderedTexture renderer-data object; analogous passes follow for rendered cube maps and dynamic textures. /*0x76aeed*/
    }
    v62 = this->member.renderedCubeMaps.m_numBuckets; /*0x76aef5*/
    v63 = 0; /*0x76aefb*/
    if ( v62 ) /*0x76aeff*/
    {
      v64 = this->member.renderedCubeMaps.m_buckets; /*0x76af07*/
      while ( !*v64 ) /*0x76af12*/
      {
        ++v63; /*0x76af18*/
        ++v64; /*0x76af1b*/
        if ( v63 >= v62 ) /*0x76af20*/
          goto LABEL_110; /*0x76af20*/
      }
      v65 = (unsigned int *)this->member.renderedCubeMaps.m_buckets[v63]; /*0x76b05a*/
    }
    else
    {
LABEL_110:
      v65 = 0; /*0x76af22*/
    }
    v75 = v65; /*0x76af26*/
    while ( v75 ) /*0x76af2a*/
    {
      NiTMap_U32Pointer_GetNextEntry( /*0x76af45*/
        (NiTMap_TESCELL *)&this->member.renderedCubeMaps,
        (NiTMap_Entry_TESCELL **)&v75,
        (void **)&v77,
        (TESObjectCELL **)&a2);
      this->__vftable->super.CreateRenderedCubeMap((NiRenderer *)this, (NiRenderedCubeMap *)v77); /*0x76af5a*/
    }
    v66 = this->member.dynamicTextures.m_numBuckets; /*0x76af62*/
    v67 = 0; /*0x76af68*/
    if ( v66 ) /*0x76af6c*/
    {
      v68 = this->member.dynamicTextures.m_buckets; /*0x76af74*/
      while ( !*v68 ) /*0x76af78*/
      {
        ++v67; /*0x76af7e*/
        ++v68; /*0x76af81*/
        if ( v67 >= v66 ) /*0x76af86*/
          goto LABEL_117; /*0x76af86*/
      }
      v69 = (unsigned int *)this->member.dynamicTextures.m_buckets[v67]; /*0x76b062*/
    }
    else
    {
LABEL_117:
      v69 = 0; /*0x76af88*/
    }
    v75 = v69; /*0x76af8c*/
    while ( v75 ) /*0x76af90*/
    {
      NiTMap_U32Pointer_GetNextEntry( /*0x76afa7*/
        (NiTMap_TESCELL *)&this->member.dynamicTextures,
        (NiTMap_Entry_TESCELL **)&v75,
        (void **)&v77,
        (TESObjectCELL **)&a2);
      this->__vftable->super.CreateDynamicTexture((NiRenderer *)this, v77); /*0x76afbc*/
    }
    NiDX9ResourceRegistry_RecreateAll(this->member.device); /*0x76afcb*/
    v70 = this->member.shaderInterfaces.head; /*0x76afd0*/
    while ( v70 ) /*0x76afdb*/
    {
      v71 = v70->data; /*0x76afe0*/
      v70 = v70->next; /*0x76afeb*/
      (*(void (__thiscall **)(void *))(*(_DWORD *)v71 + 0x5C))(v71); /*0x76afed*/
    }
    ((void (__thiscall *)(NiDX9RenderState *))this->member.renderState->vtbl->Reset)(this->member.renderState); /*0x76b001*/
    sub_776240((_DWORD **)this->member.lightMgr); /*0x76b009*/
    v72 = v78; /*0x76b00e*/
    v73 = 0; /*0x76b012*/
    if ( !v78 ) /*0x76b016*/
      return 1; /*0x76b051*/
    while ( 1 ) /*0x76b026*/
    {
      v74 = *((unsigned __int8 (__cdecl **)(_DWORD, _DWORD))this->member.unkA98.data + v73); /*0x76b026*/
      if ( v74 ) /*0x76b034*/
      {
        if ( !v74(0, *((_DWORD *)this->member.unkAA8.data + v73)) ) /*0x76b038*/
          break;                                // Post-reset notification phase. Each registered callback receives phase=0 after renderer resources and state managers are restored; false marks recreation failed. /*0x76b038*/
      }
      if ( ++v73 >= (unsigned int)v72 ) /*0x76b046*/
        return 1; /*0x76b046*/
    }
  }
  Shared_NoOpVirtual_60D0A0(v57); /*0x76b06f*/
  return 0; /*0x76ace6*/
}
