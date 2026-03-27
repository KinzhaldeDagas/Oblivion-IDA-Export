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
  int v16; // edi
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

  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  sub_7B20B0(this + 6);
  *((_WORD *)this + 6) = *(_WORD *)(a2 + 0x2C);
  v5 = (int)*(this + 1);
  if ( v5 != a2 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    *(this + 1) = (NiAVObject *)a2;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v6 = *((unsigned __int16 *)this + 6);
  *(this + 9) = a3;
  *(this + 4) = (NiAVObject *)FormHeapAlloc((unsigned __int64)v6 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v6);
  v7 = (NiAVObject *)FormHeapAlloc(
                       (unsigned __int64)*((unsigned __int16 *)this + 6) >> 0x1E != 0
                     ? 0xFFFFFFFF
                     : 4 * *((unsigned __int16 *)this + 6));
  v8 = 0;
  v9 = 0;
  v10 = *((_WORD *)this + 6) == 0;
  *(this + 5) = v7;
  if ( !v10 )
  {
    v11 = 0;
    do
    {
      *(float *)((char *)&(*(this + 4))->vtbl + v11) = 0.0;
      *(float *)((char *)&(*(this + 4))->members.super.super.m_uiRefCount + v11) = 0.0;
      *(float *)((char *)&(*(this + 4))->members.super.m_pcName + v11) = 0.0;
      *(float *)((char *)&(*(this + 4))->members.super.m_controller + v11) = 0.0;
      *((_DWORD *)&(*(this + 5))->vtbl + v9++) = 0;
      v11 += 0x10;
    }
    while ( v9 < *((unsigned __int16 *)this + 6) );
  }
  v12 = *((_WORD *)this + 6);
  v13 = 0;
  *((_WORD *)this + 7) = v12;
  if ( v12 )
  {
    v14 = 0;
    do
    {
      *(float *)((char *)&(*(this + 4))->members.super.m_pcName + v14) = 0.0;
      *(float *)((char *)&(*(this + 4))->members.super.m_controller + v14) = 0.0;
      *((_DWORD *)&(*(this + 5))->vtbl + v13++) = 0;
      v14 += 0x10;
    }
    while ( v13 < *((unsigned __int16 *)this + 7) );
  }
  *((_WORD *)this + 7) = 0;
  sub_802AE0((int)this);
  v15 = (int)*this;
  if ( *this )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
    {
      if ( v15 )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *this = 0;
  }
  v16 = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 0xC) == 1 )
  {
    v17 = (NiAVObject *)FormHeapAlloc(0xD4u);
    if ( !v17 )
      goto LABEL_23;
    v18 = sub_864430(v17, v16);
  }
  else
  {
    v19 = (NiAVObject *)FormHeapAlloc(0xD4u);
    if ( !v19 )
      goto LABEL_23;
    v18 = sub_8645D0(v19, v16);
  }
  v8 = v18;
LABEL_23:
  v20 = (int)*this;
  if ( *this != v8 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    }
    *this = v8;
    if ( v8 )
      InterlockedIncrement((volatile LONG *)&v8->members);
  }
  if ( ShaderPackage >= 2 )
    v21 = *(BSShaderProperty **)(a2 + 0x1C);
  else
    v21 = *(BSShaderProperty **)(a2 + 0x20);
  if ( v21 )
    sub_405680((NiNode *)*this, v21);
  if ( *(_DWORD *)(a2 + 0x24) )
    sub_405680((NiNode *)*this, *(BSShaderProperty **)(a2 + 0x24));
  v22 = (BSShaderLightingProperty *)FormHeapAlloc(0xACu);
  if ( v22 )
    v23 = (BSShaderProperty *)sub_7B22C0(v22);
  else
    v23 = 0;
  numItems = v23[1].member.passes.numItems;
  if ( numItems != *(_DWORD *)(a2 + 0x18) )
  {
    if ( numItems )
    {
      if ( !InterlockedDecrement((volatile LONG *)(numItems + 4)) )
        (**(void (__thiscall ***)(UInt32, int))numItems)(numItems, 1);
    }
    v25 = *(_DWORD *)(a2 + 0x18);
    v23[1].member.passes.numItems = v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)(v25 + 4));
  }
  v23[1].member.passes.end = (NiTList_Entry_NiProperty *)this;
  if ( a4 )
    v23->member.passInfo |= 4u;
  else
    v23->member.passInfo &= ~4u;
  v23->member.lastRenderPassState = 0;
  if ( *(_BYTE *)(a2 + 0x30) )
    v23->member.passInfo |= 0x2000u;
  else
    v23->member.passInfo &= ~0x2000u;
  v23->member.lastRenderPassState = 0;
  sub_405680((NiNode *)*this, v23);
  v26 = (BSShaderProperty *)*(this + 2);
  if ( v26 != v23 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v26->member) )
        (*(void (__thiscall **)(BSShaderProperty *, int))v26->vtbl)(v26, 1);
    }
    *(this + 2) = (NiAVObject *)v23;
    InterlockedIncrement((volatile LONG *)&v23->member);
  }
  ShaderDefinition = GetShaderDefinition(3u);
  shader = ShaderDefinition->shader;
  m_extraDataList = (*this)[1].members.super.m_extraDataList;
  v35 = (int)*this;
  if ( m_extraDataList != (NiExtraData **)shader )
  {
    if ( m_extraDataList )
    {
      if ( !InterlockedDecrement((volatile LONG *)m_extraDataList + 1) )
        ((void (__thiscall *)(NiExtraData **, int))(*m_extraDataList)->__vftable)(m_extraDataList, 1);
    }
    *(_DWORD *)(v35 + 0xBC) = shader;
    if ( shader )
      InterlockedIncrement((volatile LONG *)&shader->member);
  }
  ShaderDefinition->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)ShaderDefinition->shader, *this);
  m_pcName = (*this)[1].members.super.m_pcName;
  if ( !m_pcName || !*((_DWORD *)m_pcName + 0xD) )
  {
    v31 = *(_DWORD *)(a2 + 0x2C) * *(_DWORD *)(a2 + 0x14);
    v32 = (NiObject *)FormHeapAlloc(0x2Cu);
    if ( v32 )
      v33 = (unsigned __int16 *)sub_7E3AE0(v32, v31, 1);
    else
      v33 = 0;
    sub_7263B0(v33, 1u);
    sub_7260B0((int)v33, (int)v33, 0, *(void **)(a2 + 0x10), (_DWORD *)(4 * v31), 0);
    sub_7262A0((int)v33, 0, 0, 0, 1, v31, 4, 4);
    sub_6C61E0((_DWORD *)(*this)[1].members.super.m_pcName, (int)v33);
  }
  return this;
}
