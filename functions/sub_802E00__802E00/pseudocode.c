//
// [2026-10-06 directional distant pass] Verified 0x28-byte batch: scene geometry+0, shared CachedGeometry+4, DistantLODShaderProperty+8, capacity ushort+C, count ushort+E, packed float4 array+10, owner-cell array+14, source descriptor+18..20, group key+24. Creates TallGrassTriShape and binds shader definition3 (DistantLODShader, not TallGrassShader). Property+9C borrows batch; property+A0 owns diffuse texture.
NiAVObject **__thiscall sub_802E00(NiAVObject **this, int a2, NiAVObject *a3, char a4)
{
  int v5; // edi
  unsigned int v6; // eax
  NiAVObject *v7; // eax
  NiAVObject *v8; // ebp
  int v9; // ecx
  bool v10; // zf
  int v11; // eax
  __int16 v12; // cx
  int v13; // eax
  int v14; // ecx
  int v15; // edi
  NiScreenElementsData *v16; // edi
  NiAVObject *v17; // eax
  NiAVObject *v18; // eax
  NiAVObject *v19; // eax
  int v20; // edi
  BSShaderProperty *v21; // eax
  BSShaderLightingProperty *v22; // eax
  BSShaderProperty *v23; // edi
  UInt32 numItems; // ebp
  UInt32 v25; // eax
  BSShaderProperty *v26; // ebp
  ShaderDefinition *ShaderDefinition; // ebx
  BSShader *shader; // ebp
  NiExtraData **m_extraDataList; // edi
  const char *m_pcName; // eax
  int v31; // ebp
  NiObject *v32; // eax
  unsigned __int16 *v33; // edi
  int v35; // [esp+34h] [ebp+Ch]

  *this = 0; /*0x802e2d*/
  *(this + 1) = 0; /*0x802e33*/
  *(this + 2) = 0; /*0x802e36*/
  sub_7B20B0(this + 6); /*0x802e41*/
  *((_WORD *)this + 6) = *(_WORD *)(a2 + 0x2C); /*0x802e4e*/
  v5 = (int)*(this + 1); /*0x802e52*/
  if ( v5 != a2 ) /*0x802e57*/
  {
    if ( v5 ) /*0x802e5b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x802e61*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x802e77*/
    }
    *(this + 1) = (NiAVObject *)a2; /*0x802e7d*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x802e80*/
  }
  v6 = *((unsigned __int16 *)this + 6); /*0x802e8a*/
  *(this + 9) = a3; /*0x802e8e*/
  *(this + 4) = (NiAVObject *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
  v7 = (NiAVObject *)FormHeapAlloc(
                       (unsigned __int64)*((unsigned __int16 *)this + 6) >> 0x1E != 0
                     ? 0xFFFFFFFF
                     : 4 * *((unsigned __int16 *)this + 6));
  v8 = 0; /*0x802ec6*/
  v9 = 0; /*0x802ecb*/
  v10 = *((_WORD *)this + 6) == 0; /*0x802ecd*/
  *(this + 5) = v7; /*0x802ed1*/
  if ( !v10 ) /*0x802ed4*/
  {
    v11 = 0; /*0x802ed6*/
    do /*0x802f05*/
    {
      *(float *)((char *)&(*(this + 4))->vtbl + v11) = 0.0; /*0x802edb*/
      *(float *)((char *)&(*(this + 4))->members.super.super.m_uiRefCount + v11) = 0.0; /*0x802ee1*/
      *(float *)((char *)&(*(this + 4))->members.super.m_pcName + v11) = 0.0; /*0x802ee8*/
      *(float *)((char *)&(*(this + 4))->members.super.m_controller + v11) = 0.0; /*0x802eef*/
      *((_DWORD *)&(*(this + 5))->vtbl + v9++) = 0; /*0x802ef6*/
      v11 += 0x10; /*0x802f00*/
    }
    while ( v9 < *((unsigned __int16 *)this + 6) ); /*0x802f05*/
  }
  v12 = *((_WORD *)this + 6); /*0x802f07*/
  v13 = 0; /*0x802f0b*/
  *((_WORD *)this + 7) = v12; /*0x802f10*/
  if ( v12 ) /*0x802f14*/
  {
    v14 = 0; /*0x802f16*/
    do /*0x802f38*/
    {
      *(float *)((char *)&(*(this + 4))->members.super.m_pcName + v14) = 0.0; /*0x802f1b*/
      *(float *)((char *)&(*(this + 4))->members.super.m_controller + v14) = 0.0; /*0x802f22*/
      *((_DWORD *)&(*(this + 5))->vtbl + v13++) = 0; /*0x802f29*/
      v14 += 0x10; /*0x802f33*/
    }
    while ( v13 < *((unsigned __int16 *)this + 7) ); /*0x802f38*/
  }
  *((_WORD *)this + 7) = 0; /*0x802f3e*/
  sub_802AE0((int)this); /*0x802f42*/
  v15 = (int)*this; /*0x802f47*/
  if ( *this ) /*0x802f47*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x802f51*/
    {
      if ( v15 ) /*0x802f5d*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x802f67*/
    }
    *this = 0; /*0x802f69*/
  }
  v16 = *(NiScreenElementsData **)(a2 + 8); /*0x802f6f*/
  if ( *(_BYTE *)(a2 + 0xC) == 1 ) /*0x802f77*/
  {
    v17 = (NiAVObject *)FormHeapAlloc(0xD4u); /*0x802f79*/
    if ( !v17 ) /*0x802f8c*/
      goto LABEL_23; /*0x802f8c*/
    v18 = TallGrassTriStrips__ctor(v17, v16); /*0x802f91*/
  }
  else
  {
    v19 = (NiAVObject *)FormHeapAlloc(0xD4u); /*0x802f98*/
    if ( !v19 ) /*0x802fab*/
      goto LABEL_23; /*0x802fab*/
    v18 = sub_8645D0(v19, v16); /*0x802fb0*/
  }
  v8 = v18; /*0x802fb5*/
LABEL_23:
  v20 = (int)*this; /*0x802fb7*/
  if ( *this != v8 ) /*0x802fc0*/
  {
    if ( v20 ) /*0x802fc4*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x802fca*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x802fe0*/
    }
    *this = v8; /*0x802fe4*/
    if ( v8 ) /*0x802fe6*/
      InterlockedIncrement((volatile LONG *)&v8->members); /*0x802fec*/
  }
  if ( *(int *)&OB_RendererGlobalState_010201A0[0xAF] >= 2 ) /*0x802ff9*/
    v21 = *(BSShaderProperty **)(a2 + 0x1C); /*0x803000*/
  else
    v21 = *(BSShaderProperty **)(a2 + 0x20); /*0x802ffb*/
  if ( v21 ) /*0x803005*/
    sub_405680((NiNode *)*this, v21); /*0x80300a*/
  if ( *(_DWORD *)(a2 + 0x24) ) /*0x80300f*/
    sub_405680((NiNode *)*this, *(BSShaderProperty **)(a2 + 0x24)); /*0x803019*/
  v22 = (BSShaderLightingProperty *)FormHeapAlloc(0xACu); /*0x803023*/
  if ( v22 ) /*0x803036*/
    v23 = (BSShaderProperty *)sub_7B22C0(v22); /*0x80303f*/
  else
    v23 = 0; /*0x803043*/
  numItems = v23[1].member.passes.numItems; /*0x803045*/
  if ( numItems != *(_DWORD *)(a2 + 0x18) ) /*0x803053*/
  {
    if ( numItems ) /*0x803057*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(numItems + 4)) ) /*0x80305d*/
        (**(void (__thiscall ***)(UInt32, int))numItems)(numItems, 1); /*0x803074*/
    }
    v25 = *(_DWORD *)(a2 + 0x18); /*0x803076*/
    v23[1].member.passes.numItems = v25; /*0x80307b*/
    if ( v25 ) /*0x803081*/
      InterlockedIncrement((volatile LONG *)(v25 + 4)); /*0x803087*/
  }
  v23[1].member.passes.end = (NiTList_Entry_NiProperty *)this; /*0x803092*/
  if ( a4 ) /*0x803098*/
    v23->member.passInfo |= 4u; /*0x80309a*/
  else
    v23->member.passInfo &= ~4u; /*0x8030a0*/
  v23->member.lastRenderPassState = 0; /*0x8030a6*/
  if ( *(_BYTE *)(a2 + 0x30) ) /*0x8030a9*/
    v23->member.passInfo |= 0x2000u; /*0x8030ae*/
  else
    v23->member.passInfo &= ~0x2000u; /*0x8030b7*/
  v23->member.lastRenderPassState = 0; /*0x8030be*/
  sub_405680((NiNode *)*this, v23); /*0x8030c4*/
  v26 = (BSShaderProperty *)*(this + 2); /*0x8030c9*/
  if ( v26 != v23 ) /*0x8030ce*/
  {
    if ( v26 ) /*0x8030d2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v26->member) ) /*0x8030d8*/
        (*(void (__thiscall **)(BSShaderProperty *, int))v26->vtbl)(v26, 1); /*0x8030ef*/
    }
    *(this + 2) = (NiAVObject *)v23; /*0x8030f1*/
    InterlockedIncrement((volatile LONG *)&v23->member); /*0x8030f8*/
  }
  ShaderDefinition = GetShaderDefinition(3u); /*0x803105*/
  shader = ShaderDefinition->shader; /*0x803109*/
  m_extraDataList = (*this)[1].members.super.m_extraDataList; /*0x80310c*/
  v35 = (int)*this; /*0x803117*/
  if ( m_extraDataList != (NiExtraData **)shader ) /*0x80311b*/
  {
    if ( m_extraDataList ) /*0x80311f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)m_extraDataList + 1) ) /*0x803125*/
        ((void (__thiscall *)(NiExtraData **, int))(*m_extraDataList)->__vftable)(m_extraDataList, 1); /*0x80313b*/
    }
    *(_DWORD *)(v35 + 0xBC) = shader; /*0x803143*/
    if ( shader ) /*0x803149*/
      InterlockedIncrement((volatile LONG *)&shader->member); /*0x80314f*/
  }
  ShaderDefinition->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)ShaderDefinition->shader, *this); /*0x803160*/
  m_pcName = (*this)[1].members.super.m_pcName; /*0x803164*/
  if ( !m_pcName || !*((_DWORD *)m_pcName + 0xD) ) /*0x80316e*/
  {
    v31 = *(_DWORD *)(a2 + 0x2C) * *(_DWORD *)(a2 + 0x14); /*0x80317b*/
    v32 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x803181*/
    if ( v32 ) /*0x803194*/
      v33 = (unsigned __int16 *)sub_7E3AE0(v32, v31, 1); /*0x8031a0*/
    else
      v33 = 0; /*0x8031a4*/
    OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v33, 1u); /*0x8031af*/
    OB_NiAdditionalGeometryData_SetDataBlock_010201A0( /*0x8031c6*/
      (int)v33,
      (int)v33,
      0,
      *(void **)(a2 + 0x10),
      (_DWORD *)(4 * v31),
      0);
    OB_NiAdditionalGeometryData_SetDataStream_010201A0((int)v33, 0, 0, 0, 1, v31, 4, 4); /*0x8031da*/
    sub_6C61E0((_DWORD *)(*this)[1].members.super.m_pcName, (int)v33); /*0x8031e8*/
  }
  return this; /*0x8031ef*/
}
