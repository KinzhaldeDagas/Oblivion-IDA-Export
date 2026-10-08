void __thiscall sub_846F90(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
{
  int v6; // ebx
  NiD3DPass *v8; // edi
  UInt32 Stage; // ebp
  int v10; // eax
  int v11; // ebp
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  int v15; // [esp+14h] [ebp-24h]
  int v16; // [esp+14h] [ebp-24h]
  unsigned int v18; // [esp+24h] [ebp-14h]
  UInt32 v19; // [esp+48h] [ebp+10h]
  NiTexture *Texture; // [esp+48h] [ebp+10h]

  v6 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x846fc2*/
  v8 = (NiD3DPass *)unk_B45B50; /*0x846fe0*/
  *(float *)&v18 = (float)*(unsigned __int8 *)(a5[0x32] + v6); /*0x847014*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), dword_B25AD4, v18, dword_B25ADC); /*0x847024*/
  Stage = v8->Stages.data->Stage; /*0x84702c*/
  v19 = Stage; /*0x84703c*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6); /*0x847040*/
  v11 = *(_DWORD *)(Stage + 4); /*0x847042*/
  v15 = v10; /*0x847047*/
  if ( v11 != v10 ) /*0x84704b*/
  {
    if ( v11 ) /*0x84704f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x847055*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x84706c*/
      v10 = v15; /*0x84706e*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x847078*/
    if ( v10 ) /*0x84707b*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x847081*/
  }
  sub_848FA0((_DWORD **)v19, (int)a5); /*0x847093*/
  Texture = v8->Stages.data->Texture; /*0x84709f*/
  v12 = sub_848FD0(a5, v6); /*0x8470a6*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x8470af*/
  v16 = v12; /*0x8470b4*/
  if ( m_uiRefCount != v12 ) /*0x8470b8*/
  {
    if ( m_uiRefCount ) /*0x8470bc*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x8470c2*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x8470d8*/
      v12 = v16; /*0x8470da*/
    }
    Texture->members.super.super.m_uiRefCount = v12; /*0x8470e4*/
    if ( v12 ) /*0x8470e7*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x8470ed*/
  }
  sub_848FA0(Texture, (int)a5); /*0x8470fb*/
  if ( (_BYTE)value ) /*0x847105*/
  {
    ++v8->RefCount; /*0x84710c*/
    value = v8; /*0x84710f*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x847127*/
    if ( v8->RefCount-- == 1 ) /*0x84712f*/
      NiD3DPass_ReleaseToPool(v8); /*0x84713a*/
    ++*((_DWORD *)this + 0xE); /*0x84713f*/
  }
}
