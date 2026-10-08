// Branch render helper used by dword_B42E90 mode 0x122. Uses/appends branch pass dword_B477F4 (index 25), binds property texture plus canopy shadow map state.
void __thiscall sub_85E160(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *a6)
{
  NiD3DPass *v7; // edi
  UInt32 Stage; // ebp
  int v9; // eax
  int v10; // ebx
  NiTexture *Texture; // ebx
  int v12; // eax
  UInt32 m_uiRefCount; // ebp
  int *p_members; // ebx
  UInt32 Unk08; // ebp
  NiRenderedTexture *v16; // ebx
  NiRenderedTexture *v17; // ecx
  int v19; // [esp+30h] [ebp+Ch]
  int v20; // [esp+34h] [ebp+10h]
  NiRenderedTexture *v21; // [esp+34h] [ebp+10h]

  v7 = (NiD3DPass *)LODWORD(OB_ShaderConstantStorage_010201A0[0x678]); /*0x85e195*/
  (*((void (__thiscall **)(NiTArray_NiD3DPass *, int, _DWORD, _DWORD))this->_vtbl + 0x2F))( /*0x85e1a3*/
    this,
    a2,
    0,
    *(_DWORD *)(a4 + 0x10));
  Stage = v7->Stages.data->Stage; /*0x85e1ac*/
  v9 = sub_848FD0(a5, 0);                       // SpeedTreeOBSE 2026-05-31 branch normal map apply evidence: branch render helper fetches property texture index 0 through 0x848FD0/vtable +0x8C, matching the OBSE writer target SpeedTreeBranchShaderProperty+0xC0[0]. /*0x85e1b3*/
  v10 = *(_DWORD *)(Stage + 4); /*0x85e1b8*/
  v19 = v9; /*0x85e1bd*/
  if ( v10 != v9 ) /*0x85e1c1*/
  {
    if ( v10 ) /*0x85e1c5*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x85e1cb*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x85e1e1*/
      v9 = v19; /*0x85e1e3*/
    }
    *(_DWORD *)(Stage + 4) = v9; /*0x85e1e9*/
    if ( v9 ) /*0x85e1ec*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x85e1f2*/
  }
  sub_848FA0((_DWORD **)Stage, (int)a5); /*0x85e200*/
  Texture = v7->Stages.data->Texture; /*0x85e208*/
  v12 = unk_B43108; /*0x85e20b*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x85e210*/
  p_members = (int *)&Texture->members; /*0x85e213*/
  v20 = unk_B43108; /*0x85e218*/
  if ( m_uiRefCount != unk_B43108 ) /*0x85e21c*/
  {
    if ( m_uiRefCount ) /*0x85e220*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x85e226*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x85e23d*/
      v12 = v20; /*0x85e23f*/
    }
    *p_members = v12; /*0x85e245*/
    if ( v12 ) /*0x85e247*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x85e24d*/
  }
  Unk08 = v7->Stages.data->Unk08; /*0x85e256*/
  v16 = *(NiRenderedTexture **)(Unk08 + 4); /*0x85e25e*/
  v17 = g_CanopyShadowMap; /*0x85e263*/
  v21 = g_CanopyShadowMap; /*0x85e265*/
  if ( v16 != g_CanopyShadowMap ) /*0x85e269*/
  {
    if ( v16 ) /*0x85e26d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)&v16->member) ) /*0x85e273*/
        v16->__vftable->super.super.super.Destructor((NiRefObject *)v16, 1); /*0x85e289*/
      v17 = v21; /*0x85e28b*/
    }
    *(_DWORD *)(Unk08 + 4) = v17; /*0x85e291*/
    if ( v17 ) /*0x85e294*/
      InterlockedIncrement((volatile LONG *)&v17->member); /*0x85e29a*/
  }
  if ( !(_BYTE)a6 ) /*0x85e2a5*/
  {
    ++v7->RefCount; /*0x85e2ac*/
    a6 = v7; /*0x85e2af*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((NiD3DPass **)this + 0xE), &a6); /*0x85e2c7*/
    if ( v7->RefCount-- == 1 ) /*0x85e2cf*/
      NiD3DPass_ReleaseToPool(v7); /*0x85e2da*/
    ++*((_DWORD *)this + 0xE); /*0x85e2df*/
  }
}
