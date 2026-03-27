char __thiscall sub_76A970(NiDX9Renderer *this)
{
  UInt32 m_numBuckets; // ecx
  UInt32 v3; // eax
  NiTMap_Entry_void **m_buckets; // edx
  unsigned int *v5; // eax
  volatile LONG *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // eax
  char v10; // al
  int v11; // eax
  int v12; // esi
  int v13; // eax
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
  int v42; // eax
  char v43; // al
  UInt32 v44; // ecx
  UInt32 v45; // eax
  NiTMap_Entry_void **v46; // edx
  unsigned int *v47; // eax
  volatile LONG *v48; // edi
  int v49; // esi
  int v50; // eax
  int v51; // eax
  char v52; // al
  int v53; // esi
  int v54; // eax
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

  sub_776B10((_DWORD *)this->member.lightMgr);
  sub_7786C0((_DWORD *)this->member.indexBufferMgr);
  sub_777A50((_DWORD *)this->member.vertexBufferMgr);
  UnsetRenderTarget(this->member.device, 1);
  UnsetRenderTarget(this->member.device, 2);
  UnsetRenderTarget(this->member.device, 3);
  m_numBuckets = this->member.screenRTGroups.m_numBuckets;
  v3 = 0;
  if ( m_numBuckets )
  {
    m_buckets = this->member.screenRTGroups.m_buckets;
    while ( !*m_buckets )
    {
      ++v3;
      ++m_buckets;
      if ( v3 >= m_numBuckets )
        goto LABEL_5;
    }
    v5 = (unsigned int *)this->member.screenRTGroups.m_buckets[v3];
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  v75 = v5;
  while ( v75 )
  {
    a2 = 0;
    sub_7B2600(&this->member.screenRTGroups.vtbl, &v75, &v78, (unsigned int *)&a2);
    v6 = (volatile LONG *)a2;
    v7 = *(_DWORD *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x70))(a2, 0) + 0x10);
    if ( v7 )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x10))(v7);
      if ( v9 )
      {
        while ( (_UNKNOWN *)v9 != &unk_B4265C )
        {
          v9 = *(_DWORD *)(v9 + 4);
          if ( !v9 )
            goto LABEL_13;
        }
        v10 = 1;
      }
      else
      {
LABEL_13:
        v10 = 0;
      }
      v8 = v10 != 0 ? v7 : 0;
    }
    else
    {
      v8 = 0;
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x2C))(v8);
    v11 = (*(int (__thiscall **)(volatile LONG *))(*v6 + 0x74))(v6);
    if ( v11 )
    {
      v12 = *(_DWORD *)(v11 + 0x10);
      if ( v12 )
      {
        v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0x10))(v12);
        if ( v13 )
        {
          while ( (_UNKNOWN *)v13 != &unk_B4263C )
          {
            v13 = *(_DWORD *)(v13 + 4);
            if ( !v13 )
              goto LABEL_20;
          }
          v14 = 1;
        }
        else
        {
LABEL_20:
          v14 = 0;
        }
        v15 = v14 != 0 ? v12 : 0;
        if ( v15 )
          (*(void (__thiscall **)(int))(*(_DWORD *)v15 + 0x2C))(v15);
      }
    }
    if ( !InterlockedDecrement(v6 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
  }
  v16 = this->member.renderedTextures.m_numBuckets;
  v17 = 0;
  if ( v16 )
  {
    v18 = this->member.renderedTextures.m_buckets;
    while ( !*v18 )
    {
      ++v17;
      ++v18;
      if ( v17 >= v16 )
        goto LABEL_30;
    }
    v19 = (unsigned int *)this->member.renderedTextures.m_buckets[v17];
  }
  else
  {
LABEL_30:
    v19 = 0;
  }
  v75 = v19;
  while ( v75 )
  {
    sub_452600((NiTMap_TESCELL *)&this->member.renderedTextures, (NiTMap_Entry_TESCELL **)&v75, (void **)&a2, &v78);
    v20 = a2;
    this->__vftable->super.Unk_33((NiRenderer *)this, (void *)a2);
    NiTMap_SetAt(&this->member.renderedTextures.vtbl, v20, 0);
  }
  v21 = this->member.renderedCubeMaps.m_numBuckets;
  v22 = 0;
  if ( v21 )
  {
    v23 = this->member.renderedCubeMaps.m_buckets;
    while ( !*v23 )
    {
      ++v22;
      ++v23;
      if ( v22 >= v21 )
        goto LABEL_37;
    }
    v24 = (unsigned int *)this->member.renderedCubeMaps.m_buckets[v22];
  }
  else
  {
LABEL_37:
    v24 = 0;
  }
  v75 = v24;
  while ( v75 )
  {
    sub_452600((NiTMap_TESCELL *)&this->member.renderedCubeMaps, (NiTMap_Entry_TESCELL **)&v75, (void **)&a2, &v78);
    v25 = a2;
    this->__vftable->super.Unk_33((NiRenderer *)this, (void *)a2);
    NiTMap_SetAt(&this->member.renderedCubeMaps.vtbl, v25, 0);
  }
  v26 = this->member.dynamicTextures.m_numBuckets;
  v27 = 0;
  if ( v26 )
  {
    v28 = this->member.dynamicTextures.m_buckets;
    while ( !*v28 )
    {
      ++v27;
      ++v28;
      if ( v27 >= v26 )
        goto LABEL_44;
    }
    v29 = (unsigned int *)this->member.dynamicTextures.m_buckets[v27];
  }
  else
  {
LABEL_44:
    v29 = 0;
  }
  v75 = v29;
  while ( v75 )
  {
    sub_452600(
      (NiTMap_TESCELL *)&this->member.dynamicTextures,
      (NiTMap_Entry_TESCELL **)&v75,
      (void **)&a2,
      (TESObjectCELL **)&v77);
    v30 = v77;
    v31 = v77 == 0;
    v32 = a2;
    *(_DWORD *)(a2 + 0x24) = 0;
    if ( !v31 )
      v30->__vftable->super.super.super.Destructor((NiRefObject *)v30, 1);
    NiTMap_SetAt(&this->member.dynamicTextures.vtbl, v32, 0);
  }
  sub_76DB00();
  head = this->member.shaderInterfaces.head;
  while ( head )
  {
    data = head->data;
    head = head->next;
    (*(void (__thiscall **)(void *))(*(_DWORD *)data + 0x58))(data);
  }
  ((void (__thiscall *)(NiGeometryGroup *))this->member.dynamicGeometryGroup->vtbl->Destructor)(this->member.dynamicGeometryGroup);
  end = (TESObjectCELL *)this->member.unkA98.end;
  v36 = 0;
  v78 = end;
  if ( end )
  {
    while ( 1 )
    {
      v37 = *((unsigned __int8 (__cdecl **)(int, _DWORD))this->member.unkA98.data + v36);
      if ( v37 )
      {
        if ( !v37(1, *((_DWORD *)this->member.unkAA8.data + v36)) )
          break;
      }
      if ( ++v36 >= (unsigned int)end )
        goto LABEL_55;
    }
    TESTexture::ClearComponentReferences(v38);
    return 0;
  }
LABEL_55:
  v39 = this->member.defaultRTGroup->vtbl->GetBuffer(this->member.defaultRTGroup, 0)->members.data;
  if ( v39 )
  {
    v42 = (int)v39->__vftable->GetRTTI(v39);
    if ( v42 )
    {
      while ( (_UNKNOWN *)v42 != &unk_B4265C )
      {
        v42 = *(_DWORD *)(v42 + 4);
        if ( !v42 )
          goto LABEL_67;
      }
      v43 = 1;
    }
    else
    {
LABEL_67:
      v43 = 0;
    }
    v40 = v43 != 0 ? v39 : 0;
  }
  else
  {
    v40 = 0;
  }
  if ( (int)this->member.device->lpVtbl->Reset(this->member.device, &v40[1]) < 0 )
    return 0;
  ++this->member.ResetCounter;
  v44 = this->member.screenRTGroups.m_numBuckets;
  v45 = 0;
  if ( v44 )
  {
    v46 = this->member.screenRTGroups.m_buckets;
    while ( !*v46 )
    {
      ++v45;
      ++v46;
      if ( v45 >= v44 )
        goto LABEL_74;
    }
    v47 = (unsigned int *)this->member.screenRTGroups.m_buckets[v45];
  }
  else
  {
LABEL_74:
    v47 = 0;
  }
  v75 = v47;
  while ( v75 )
  {
    a2 = 0;
    sub_7B2600(&this->member.screenRTGroups.vtbl, &v75, &v77, (unsigned int *)&a2);
    v48 = (volatile LONG *)a2;
    v49 = *(_DWORD *)((*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x70))(a2, 0) + 0x10);
    if ( v49 )
    {
      v51 = (*(int (__thiscall **)(int))(*(_DWORD *)v49 + 0x10))(v49);
      if ( v51 )
      {
        while ( (_UNKNOWN *)v51 != &unk_B4265C )
        {
          v51 = *(_DWORD *)(v51 + 4);
          if ( !v51 )
            goto LABEL_83;
        }
        v52 = 1;
      }
      else
      {
LABEL_83:
        v52 = 0;
      }
      v50 = v52 != 0 ? v49 : 0;
    }
    else
    {
      v50 = 0;
    }
    (*(void (__thiscall **)(int, IDirect3DDevice9 *))(*(_DWORD *)v50 + 0x30))(v50, this->member.device);
    v53 = (*(int (__thiscall **)(volatile LONG *))(*v48 + 0x84))(v48);
    if ( v53 )
    {
      v54 = (*(int (__thiscall **)(int))(*(_DWORD *)v53 + 0x10))(v53);
      if ( v54 )
      {
        while ( (_UNKNOWN *)v54 != &unk_B4263C )
        {
          v54 = *(_DWORD *)(v54 + 4);
          if ( !v54 )
            goto LABEL_89;
        }
        v55 = 1;
      }
      else
      {
LABEL_89:
        v55 = 0;
      }
      v56 = v55 != 0 ? v53 : 0;
      if ( v56 )
        (*(void (__thiscall **)(int, IDirect3DDevice9 *))(*(_DWORD *)v56 + 0x30))(v56, this->member.device);
    }
    if ( !InterlockedDecrement(v48 + 1) )
      (**(void (__thiscall ***)(volatile LONG *, int))v48)(v48, 1);
  }
  this->member.currentRTGroup = this->member.currentscreenRTGroup;
  if ( sub_768C10(this) )
  {
    v58 = this->member.renderedTextures.m_numBuckets;
    v59 = 0;
    if ( v58 )
    {
      v60 = this->member.renderedTextures.m_buckets;
      while ( !*v60 )
      {
        ++v59;
        ++v60;
        if ( v59 >= v58 )
          goto LABEL_103;
      }
      v61 = (unsigned int *)this->member.renderedTextures.m_buckets[v59];
    }
    else
    {
LABEL_103:
      v61 = 0;
    }
    v75 = v61;
    while ( v75 )
    {
      sub_452600(
        (NiTMap_TESCELL *)&this->member.renderedTextures,
        (NiTMap_Entry_TESCELL **)&v75,
        (void **)&v77,
        (TESObjectCELL **)&a2);
      this->__vftable->super.CreateRenderedTexture((NiRenderer *)this, v77);
    }
    v62 = this->member.renderedCubeMaps.m_numBuckets;
    v63 = 0;
    if ( v62 )
    {
      v64 = this->member.renderedCubeMaps.m_buckets;
      while ( !*v64 )
      {
        ++v63;
        ++v64;
        if ( v63 >= v62 )
          goto LABEL_110;
      }
      v65 = (unsigned int *)this->member.renderedCubeMaps.m_buckets[v63];
    }
    else
    {
LABEL_110:
      v65 = 0;
    }
    v75 = v65;
    while ( v75 )
    {
      sub_452600(
        (NiTMap_TESCELL *)&this->member.renderedCubeMaps,
        (NiTMap_Entry_TESCELL **)&v75,
        (void **)&v77,
        (TESObjectCELL **)&a2);
      this->__vftable->super.CreateRenderedCubeMap((NiRenderer *)this, (NiRenderedCubeMap *)v77);
    }
    v66 = this->member.dynamicTextures.m_numBuckets;
    v67 = 0;
    if ( v66 )
    {
      v68 = this->member.dynamicTextures.m_buckets;
      while ( !*v68 )
      {
        ++v67;
        ++v68;
        if ( v67 >= v66 )
          goto LABEL_117;
      }
      v69 = (unsigned int *)this->member.dynamicTextures.m_buckets[v67];
    }
    else
    {
LABEL_117:
      v69 = 0;
    }
    v75 = v69;
    while ( v75 )
    {
      sub_452600(
        (NiTMap_TESCELL *)&this->member.dynamicTextures,
        (NiTMap_Entry_TESCELL **)&v75,
        (void **)&v77,
        (TESObjectCELL **)&a2);
      this->__vftable->super.CreateDynamicTexture((NiRenderer *)this, v77);
    }
    sub_76DB60((int)this->member.device);
    v70 = this->member.shaderInterfaces.head;
    while ( v70 )
    {
      v71 = v70->data;
      v70 = v70->next;
      (*(void (__thiscall **)(void *))(*(_DWORD *)v71 + 0x5C))(v71);
    }
    ((void (__thiscall *)(NiDX9RenderState *))this->member.renderState->vtbl->Reset)(this->member.renderState);
    sub_776240((_DWORD **)this->member.lightMgr);
    v72 = v78;
    v73 = 0;
    if ( !v78 )
      return 1;
    while ( 1 )
    {
      v74 = *((unsigned __int8 (__cdecl **)(_DWORD, _DWORD))this->member.unkA98.data + v73);
      if ( v74 )
      {
        if ( !v74(0, *((_DWORD *)this->member.unkAA8.data + v73)) )
          break;
      }
      if ( ++v73 >= (unsigned int)v72 )
        return 1;
    }
  }
  TESTexture::ClearComponentReferences(v57);
  return 0;
}
