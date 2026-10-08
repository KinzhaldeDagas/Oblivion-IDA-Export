unsigned __int16 *__thiscall sub_8129F0(unsigned __int16 *this, int a2, int a3, int a4, char a5)
{
  int v7; // edi
  unsigned int v8; // eax
  int v9; // edi
  NiTriShapeData *v10; // edi
  NiAVObject *v11; // eax
  NiAVObject *v12; // eax
  NiAVObject *v13; // eax
  BSShaderProperty *v14; // eax
  TallGrassShaderProperty *v15; // eax
  BSShaderProperty *v16; // edi
  void **vtlb; // ebp
  int v18; // eax
  BSShaderProperty *v19; // ebp
  ShaderDefinition *ShaderDefinition; // eax
  BSShader *shader; // ebp
  BSShader *v22; // edi
  int v23; // edi
  NiObject *v24; // eax
  unsigned __int16 *v25; // ebp
  ShaderDefinition *v27; // [esp+28h] [ebp+4h]
  int v28; // [esp+34h] [ebp+10h]

  *(_DWORD *)this = 0; /*0x812a1d*/
  *((_DWORD *)this + 1) = 0; /*0x812a23*/
  *((_DWORD *)this + 2) = 0; /*0x812a26*/
  sub_7C28E0((float *)this + 6); /*0x812a31*/
  *((_BYTE *)this + 0x40) = a5; /*0x812a3e*/
  *(this + 6) = *(_WORD *)(a2 + 0x2C); /*0x812a45*/
  v7 = *((_DWORD *)this + 1); /*0x812a49*/
  if ( v7 != a2 ) /*0x812a4e*/
  {
    if ( v7 ) /*0x812a52*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x812a58*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x812a6e*/
    }
    *((_DWORD *)this + 1) = a2; /*0x812a74*/
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x812a77*/
  }
  v8 = *(this + 6); /*0x812a85*/
  *((_DWORD *)this + 0xE) = a3; /*0x812a89*/
  *((_DWORD *)this + 0xF) = a4; /*0x812a8c*/
  *((_DWORD *)this + 5) = FormHeapAlloc((unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8);
  *((_DWORD *)this + 4) = FormHeapAlloc((unsigned __int64)*(this + 6) >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * *(this + 6));
  sub_812980((int)this); /*0x812aca*/
  v9 = *(_DWORD *)this; /*0x812acf*/
  if ( *(_DWORD *)this ) /*0x812acf*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x812ad9*/
    {
      if ( v9 ) /*0x812ae5*/
        (**(void (__thiscall ***)(int, int))v9)(v9, 1); /*0x812aef*/
    }
    *(_DWORD *)this = 0; /*0x812af1*/
  }
  v10 = *(NiTriShapeData **)(a2 + 8); /*0x812afb*/
  if ( *(_BYTE *)(a2 + 0x30) != 1 ) /*0x812b03*/
  {
    v13 = (NiAVObject *)FormHeapAlloc(0xD4u); /*0x812b24*/
    if ( v13 ) /*0x812b37*/
    {
      v12 = sub_8645D0(v13, v10); /*0x812b3c*/
      goto LABEL_17; /*0x812b41*/
    }
LABEL_16:
    v12 = 0; /*0x812b43*/
    goto LABEL_17; /*0x812b43*/
  }
  v11 = (NiAVObject *)FormHeapAlloc(0xD4u); /*0x812b05*/
  if ( !v11 ) /*0x812b18*/
    goto LABEL_16; /*0x812b18*/
  v12 = TallGrassTriStrips__ctor(v11, (NiScreenElementsData *)v10); /*0x812b1d*/
LABEL_17:
  NiSmartPointer_Set__((Ni2DBuffer **)this, (Ni2DBuffer *)v12); /*0x812b45*/
  if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 /*0x812b5b*/
    && OB_RendererGlobalState_010201A0.bHighDynamicRangeMode )
  {
    v14 = *(BSShaderProperty **)(a2 + 0x18); /*0x812b64*/
  }
  else
  {
    v14 = *(BSShaderProperty **)(a2 + 0x1C); /*0x812b69*/
  }
  if ( v14 ) /*0x812b6e*/
    sub_405680(*(NiNode **)this, v14); /*0x812b73*/
  if ( *(_DWORD *)(a2 + 0x20) ) /*0x812b78*/
    sub_405680(*(NiNode **)this, *(BSShaderProperty **)(a2 + 0x20)); /*0x812b82*/
  v15 = (TallGrassShaderProperty *)FormHeapAlloc(0xB0u); /*0x812b8c*/
  if ( v15 ) /*0x812b9f*/
    v16 = (BSShaderProperty *)TallGrassShaderProperty::TallGrassShaderProperty(v15); /*0x812ba8*/
  else
    v16 = 0; /*0x812bac*/
  vtlb = v16[1].member.unk38.vtlb; /*0x812bae*/
  if ( vtlb != *(void ***)(a2 + 0x14) ) /*0x812bbc*/
  {
    if ( vtlb ) /*0x812bc0*/
    {
      if ( !InterlockedDecrement((volatile LONG *)vtlb + 1) ) /*0x812bc6*/
        (*(void (__thiscall **)(void **, int))*vtlb)(vtlb, 1); /*0x812bdd*/
    }
    v18 = *(_DWORD *)(a2 + 0x14); /*0x812bdf*/
    v16[1].member.unk38.vtlb = (void **)v18; /*0x812be4*/
    if ( v18 ) /*0x812bea*/
      InterlockedIncrement((volatile LONG *)(v18 + 4)); /*0x812bf0*/
  }
  v16[1].member.passes.end = (NiTList_Entry_NiProperty *)this; /*0x812bfb*/
  if ( a5 ) /*0x812c01*/
    v16->member.passInfo |= 4u; /*0x812c03*/
  else
    v16->member.passInfo &= ~4u; /*0x812c09*/
  v16->member.lastRenderPassState = 0; /*0x812c0f*/
  if ( *(_BYTE *)(a2 + 0x31) ) /*0x812c12*/
    v16->member.passInfo |= 0x2000u; /*0x812c17*/
  else
    v16->member.passInfo &= ~0x2000u; /*0x812c20*/
  v16->member.lastRenderPassState = 0; /*0x812c27*/
  sub_405680(*(NiNode **)this, v16); /*0x812c2d*/
  v19 = *((BSShaderProperty **)this + 2); /*0x812c32*/
  if ( v19 != v16 ) /*0x812c37*/
  {
    if ( v19 ) /*0x812c3b*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->member) ) /*0x812c41*/
        (*(void (__thiscall **)(BSShaderProperty *, int))v19->vtbl)(v19, 1); /*0x812c58*/
    }
    *((_DWORD *)this + 2) = v16; /*0x812c5a*/
    InterlockedIncrement((volatile LONG *)&v16->member); /*0x812c61*/
  }
  ShaderDefinition = GetShaderDefinition(2u); /*0x812c69*/
  shader = ShaderDefinition->shader; /*0x812c6e*/
  v27 = ShaderDefinition; /*0x812c71*/
  v22 = *(BSShader **)(*(_DWORD *)this + 0xBC); /*0x812c77*/
  v28 = *(_DWORD *)this; /*0x812c82*/
  if ( v22 != shader ) /*0x812c86*/
  {
    if ( v22 ) /*0x812c8a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v22->member) ) /*0x812c90*/
        v22->__vftable->super.super.super.super.Destructor((NiRefObject *)v22, 1); /*0x812ca6*/
    }
    *(_DWORD *)(v28 + 0xBC) = shader; /*0x812cae*/
    if ( shader ) /*0x812cb4*/
      InterlockedIncrement((volatile LONG *)&shader->member); /*0x812cba*/
  }
  v27->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v27->shader, *(void **)this); /*0x812ccf*/
  v23 = *(_DWORD *)(a2 + 0x2C) * *(_DWORD *)(a2 + 0x10); /*0x812cd4*/
  v24 = (NiObject *)FormHeapAlloc(0x2Cu); /*0x812cda*/
  if ( v24 ) /*0x812ced*/
    v25 = (unsigned __int16 *)sub_7E3AE0(v24, v23, 1); /*0x812cf9*/
  else
    v25 = 0; /*0x812cfd*/
  OB_NiAdditionalGeometryData_SetDataBlockCount_010201A0(v25, 1u); /*0x812d08*/
  OB_NiAdditionalGeometryData_SetDataBlock_010201A0(v25, 0, *(void **)(a2 + 0xC), 4 * v23, 0); /*0x812d1f*/
  OB_NiAdditionalGeometryData_SetDataStream_010201A0(v25, 0, 0, 0, 1u, v23, 4u, 4u); /*0x812d33*/
  sub_6C61E0(*(_DWORD **)(*(_DWORD *)this + 0xB4), (int)v25); /*0x812d41*/
  return this; /*0x812d48*/
}
