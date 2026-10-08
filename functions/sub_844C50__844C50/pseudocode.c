void __thiscall sub_844C50(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
{
  int v6; // ebx
  NiD3DPass *v7; // esi
  int ShadowSceneNode; // eax
  NiRenderedTexture *InnerTexture; // eax
  int v10; // ebx
  int v11; // eax
  int v12; // esi
  int v13; // ebp
  NiTexture *Texture; // ebp
  UInt32 m_uiRefCount; // esi
  int v16; // eax
  NiD3DPass *v18; // [esp+14h] [ebp-10h]
  int v19; // [esp+28h] [ebp+4h]

  v6 = unk_B45BB0; /*0x844c7d*/
  v18 = (NiD3DPass *)unk_B45BB0; /*0x844c90*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x844c94*/
  v7 = value; /*0x844c96*/
  ShadowSceneNode = GetShadowSceneNode(value->TexturesPerPass >> 0x1C); /*0x844ca4*/
  if ( OB_RendererGlobalState_010201A0.pad_1DB[0] ) /*0x844cac*/
  {
    if ( (v7->TexturesPerPass & 0x200000) != 0 ) /*0x844cbc*/
    {
      v19 = unk_B430F4; /*0x844cc4*/
      goto LABEL_12; /*0x844cc8*/
    }
    if ( ShadowSceneNode ) /*0x844ccc*/
    {
      if ( !OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x844cd5*/
      {
        v19 = unk_B430F4; /*0x844cea*/
        goto LABEL_12; /*0x844cee*/
      }
      goto LABEL_6; /*0x844cd5*/
    }
  }
  else if ( ShadowSceneNode ) /*0x844cf2*/
  {
    if ( !OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x844cf4*/
    {
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x844d0a*/
      goto LABEL_11; /*0x844d0a*/
    }
LABEL_6:
    InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x844cd7*/
LABEL_11:
    v19 = (int)InnerTexture; /*0x844d0f*/
LABEL_12:
    if ( v19 ) /*0x844d18*/
      goto LABEL_14; /*0x844d18*/
  }
  v19 = unk_B430F4; /*0x844d1a*/
LABEL_14:
  if ( !unk_B42CE3 ) /*0x844d24*/
    flt_B464A0[1] = *(float *)&v7[1].PixelShaderTarget * flt_B464A0[1]; /*0x844d39*/
  v10 = **(_DWORD **)(v6 + 0x24); /*0x844d42*/
  v11 = sub_848FD0(v7, 0); /*0x844d49*/
  v12 = *(_DWORD *)(v10 + 4); /*0x844d4e*/
  v13 = v11; /*0x844d51*/
  if ( v12 != v11 ) /*0x844d55*/
  {
    if ( v12 ) /*0x844d59*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x844d5f*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x844d75*/
    }
    *(_DWORD *)(v10 + 4) = v13; /*0x844d79*/
    if ( v13 ) /*0x844d7c*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x844d82*/
  }
  sub_848FA0((_DWORD **)v10, (int)value); /*0x844d90*/
  Texture = v18->Stages.data->Texture; /*0x844d9c*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x844d9f*/
  v16 = v19; /*0x844da2*/
  if ( m_uiRefCount != v19 ) /*0x844da8*/
  {
    if ( m_uiRefCount ) /*0x844dac*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x844db2*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x844dc8*/
      v16 = v19; /*0x844dca*/
    }
    Texture->members.super.super.m_uiRefCount = v16; /*0x844dd0*/
    if ( v16 ) /*0x844dd3*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x844dd9*/
  }
  ++v18->RefCount; /*0x844de4*/
  value = v18; /*0x844de7*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844dff*/
  if ( v18->RefCount-- == 1 ) /*0x844e07*/
    NiD3DPass_ReleaseToPool(v18); /*0x844e12*/
  ++*((_DWORD *)this + 0xE); /*0x844e17*/
}
