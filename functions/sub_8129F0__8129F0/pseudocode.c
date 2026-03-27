unsigned __int16 *__thiscall sub_8129F0(unsigned __int16 *this, int a2, int a3, int a4, char a5)
{
  int v7; // edi
  unsigned int v8; // eax
  int v9; // edi
  int v10; // edi
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

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  sub_7C28E0((float *)this + 6);
  *((_BYTE *)this + 0x40) = a5;
  *(this + 6) = *(_WORD *)(a2 + 0x2C);
  v7 = *((_DWORD *)this + 1);
  if ( v7 != a2 )
  {
    if ( v7 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
        (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *((_DWORD *)this + 1) = a2;
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  }
  v8 = *(this + 6);
  *((_DWORD *)this + 0xE) = a3;
  *((_DWORD *)this + 0xF) = a4;
  *((_DWORD *)this + 5) = FormHeapAlloc((unsigned __int64)v8 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v8);
  *((_DWORD *)this + 4) = FormHeapAlloc((unsigned __int64)*(this + 6) >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * *(this + 6));
  sub_812980((int)this);
  v9 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) )
    {
      if ( v9 )
        (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    }
    *(_DWORD *)this = 0;
  }
  v10 = *(_DWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 0x30) != 1 )
  {
    v13 = (NiAVObject *)FormHeapAlloc(0xD4u);
    if ( v13 )
    {
      v12 = sub_8645D0(v13, v10);
      goto LABEL_17;
    }
LABEL_16:
    v12 = 0;
    goto LABEL_17;
  }
  v11 = (NiAVObject *)FormHeapAlloc(0xD4u);
  if ( !v11 )
    goto LABEL_16;
  v12 = sub_864430(v11, v10);
LABEL_17:
  NiSmartPointer_Set__((Ni2DBuffer **)this, (Ni2DBuffer *)v12);
  if ( ShaderPackage >= 2 && UseHDR )
    v14 = *(BSShaderProperty **)(a2 + 0x18);
  else
    v14 = *(BSShaderProperty **)(a2 + 0x1C);
  if ( v14 )
    sub_405680(*(NiNode **)this, v14);
  if ( *(_DWORD *)(a2 + 0x20) )
    sub_405680(*(NiNode **)this, *(BSShaderProperty **)(a2 + 0x20));
  v15 = (TallGrassShaderProperty *)FormHeapAlloc(0xB0u);
  if ( v15 )
    v16 = (BSShaderProperty *)TallGrassShaderProperty::TallGrassShaderProperty(v15);
  else
    v16 = 0;
  vtlb = v16[1].member.unk38.vtlb;
  if ( vtlb != *(void ***)(a2 + 0x14) )
  {
    if ( vtlb )
    {
      if ( !InterlockedDecrement((volatile LONG *)vtlb + 1) )
        (*(void (__thiscall **)(void **, int))*vtlb)(vtlb, 1);
    }
    v18 = *(_DWORD *)(a2 + 0x14);
    v16[1].member.unk38.vtlb = (void **)v18;
    if ( v18 )
      InterlockedIncrement((volatile LONG *)(v18 + 4));
  }
  v16[1].member.passes.end = (NiTList_Entry_NiProperty *)this;
  if ( a5 )
    v16->member.passInfo |= 4u;
  else
    v16->member.passInfo &= ~4u;
  v16->member.lastRenderPassState = 0;
  if ( *(_BYTE *)(a2 + 0x31) )
    v16->member.passInfo |= 0x2000u;
  else
    v16->member.passInfo &= ~0x2000u;
  v16->member.lastRenderPassState = 0;
  sub_405680(*(NiNode **)this, v16);
  v19 = *((BSShaderProperty **)this + 2);
  if ( v19 != v16 )
  {
    if ( v19 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v19->member) )
        (*(void (__thiscall **)(BSShaderProperty *, int))v19->vtbl)(v19, 1);
    }
    *((_DWORD *)this + 2) = v16;
    InterlockedIncrement((volatile LONG *)&v16->member);
  }
  ShaderDefinition = GetShaderDefinition(2u);
  shader = ShaderDefinition->shader;
  v27 = ShaderDefinition;
  v22 = *(BSShader **)(*(_DWORD *)this + 0xBC);
  v28 = *(_DWORD *)this;
  if ( v22 != shader )
  {
    if ( v22 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v22->member) )
        v22->__vftable->super.super.super.super.Destructor((NiRefObject *)v22, 1);
    }
    *(_DWORD *)(v28 + 0xBC) = shader;
    if ( shader )
      InterlockedIncrement((volatile LONG *)&shader->member);
  }
  v27->shader->__vftable->super.super.super.UpdateInternalVars((NiShader *)v27->shader, *(void **)this);
  v23 = *(_DWORD *)(a2 + 0x2C) * *(_DWORD *)(a2 + 0x10);
  v24 = (NiObject *)FormHeapAlloc(0x2Cu);
  if ( v24 )
    v25 = (unsigned __int16 *)sub_7E3AE0(v24, v23, 1);
  else
    v25 = 0;
  sub_7263B0(v25, 1u);
  sub_7260B0((int)v25, v23, 0, *(void **)(a2 + 0xC), (_DWORD *)(4 * v23), 0);
  sub_7262A0((int)v25, 0, 0, 0, 1, v23, 4, 4);
  sub_6C61E0(*(_DWORD **)(*(_DWORD *)this + 0xB4), (int)v25);
  return this;
}
