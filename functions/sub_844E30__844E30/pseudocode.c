void __thiscall sub_844E30(NiTArray_NiD3DPass *this, int a2, int a3, int a4, NiD3DPass *value)
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

  v6 = unk_B45BB4; /*0x844e5d*/
  v18 = (NiD3DPass *)unk_B45BB4; /*0x844e70*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))(this, a2, 0, 0); /*0x844e74*/
  v7 = value; /*0x844e76*/
  ShadowSceneNode = GetShadowSceneNode(value->TexturesPerPass >> 0x1C); /*0x844e84*/
  if ( OB_RendererGlobalState_010201A0.pad_1DB[0] ) /*0x844e8c*/
  {
    if ( (v7->TexturesPerPass & 0x200000) != 0 ) /*0x844e9c*/
    {
      v19 = unk_B430F4; /*0x844ea4*/
      goto LABEL_12; /*0x844ea8*/
    }
    if ( ShadowSceneNode ) /*0x844eac*/
    {
      if ( !OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x844eb5*/
      {
        v19 = unk_B430F4; /*0x844eca*/
        goto LABEL_12; /*0x844ece*/
      }
      goto LABEL_6; /*0x844eb5*/
    }
  }
  else if ( ShadowSceneNode ) /*0x844ed2*/
  {
    if ( !OB_RendererGlobalState_010201A0.pad_1DB[0x39] ) /*0x844ed4*/
    {
      InnerTexture = (NiRenderedTexture *)unk_B430F4; /*0x844eea*/
      goto LABEL_11; /*0x844eea*/
    }
LABEL_6:
    InnerTexture = BSRenderedTexture::GetInnerTexture(*(BSRenderedTexture **)(ShadowSceneNode + 0x120)); /*0x844eb7*/
LABEL_11:
    v19 = (int)InnerTexture; /*0x844eef*/
LABEL_12:
    if ( v19 ) /*0x844ef8*/
      goto LABEL_14; /*0x844ef8*/
  }
  v19 = unk_B430F4; /*0x844efa*/
LABEL_14:
  if ( !unk_B42CE3 ) /*0x844f04*/
    flt_B464A0[1] = *(float *)&v7[1].PixelShaderTarget * flt_B464A0[1]; /*0x844f19*/
  v10 = **(_DWORD **)(v6 + 0x24); /*0x844f22*/
  v11 = sub_848FD0(v7, 0); /*0x844f29*/
  v12 = *(_DWORD *)(v10 + 4); /*0x844f2e*/
  v13 = v11; /*0x844f31*/
  if ( v12 != v11 ) /*0x844f35*/
  {
    if ( v12 ) /*0x844f39*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) ) /*0x844f3f*/
        (**(void (__thiscall ***)(int, int))v12)(v12, 1); /*0x844f55*/
    }
    *(_DWORD *)(v10 + 4) = v13; /*0x844f59*/
    if ( v13 ) /*0x844f5c*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x844f62*/
  }
  sub_848FA0((_DWORD **)v10, (int)value); /*0x844f70*/
  Texture = v18->Stages.data->Texture; /*0x844f7c*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x844f7f*/
  v16 = v19; /*0x844f82*/
  if ( m_uiRefCount != v19 ) /*0x844f88*/
  {
    if ( m_uiRefCount ) /*0x844f8c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x844f92*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x844fa8*/
      v16 = v19; /*0x844faa*/
    }
    Texture->members.super.super.m_uiRefCount = v16; /*0x844fb0*/
    if ( v16 ) /*0x844fb3*/
      InterlockedIncrement((volatile LONG *)(v16 + 4)); /*0x844fb9*/
  }
  ++v18->RefCount; /*0x844fc4*/
  value = v18; /*0x844fc7*/
  NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x844fdf*/
  if ( v18->RefCount-- == 1 ) /*0x844fe7*/
    NiD3DPass_ReleaseToPool(v18); /*0x844ff2*/
  ++*((_DWORD *)this + 0xE); /*0x844ff7*/
}
