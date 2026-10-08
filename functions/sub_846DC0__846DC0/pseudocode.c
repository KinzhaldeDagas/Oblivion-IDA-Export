void __thiscall sub_846DC0(NiTArray_NiD3DPass *this, int a2, int a3, int a4, _DWORD *a5, NiD3DPass *value)
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

  v6 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x846df2*/
  v8 = (NiD3DPass *)unk_B45B48; /*0x846e10*/
  *(float *)&v18 = (float)*(unsigned __int8 *)(a5[0x32] + v6); /*0x846e44*/
  OB_BSShader_SetSharedFloat4Constant_010201A0(0x1Fu, COERCE_UNSIGNED_INT(1.0), dword_B25AD4, v18, dword_B25ADC); /*0x846e54*/
  Stage = v8->Stages.data->Stage; /*0x846e5c*/
  v19 = Stage; /*0x846e6c*/
  v10 = (*(int (__thiscall **)(_DWORD *, int))(*a5 + 0x88))(a5, v6); /*0x846e70*/
  v11 = *(_DWORD *)(Stage + 4); /*0x846e72*/
  v15 = v10; /*0x846e77*/
  if ( v11 != v10 ) /*0x846e7b*/
  {
    if ( v11 ) /*0x846e7f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x846e85*/
        (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x846e9c*/
      v10 = v15; /*0x846e9e*/
    }
    *(_DWORD *)(v19 + 4) = v10; /*0x846ea8*/
    if ( v10 ) /*0x846eab*/
      InterlockedIncrement((volatile LONG *)(v10 + 4)); /*0x846eb1*/
  }
  sub_848FA0((_DWORD **)v19, (int)a5); /*0x846ec3*/
  Texture = v8->Stages.data->Texture; /*0x846ecf*/
  v12 = sub_848FD0(a5, v6); /*0x846ed6*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x846edf*/
  v16 = v12; /*0x846ee4*/
  if ( m_uiRefCount != v12 ) /*0x846ee8*/
  {
    if ( m_uiRefCount ) /*0x846eec*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x846ef2*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x846f08*/
      v12 = v16; /*0x846f0a*/
    }
    Texture->members.super.super.m_uiRefCount = v12; /*0x846f14*/
    if ( v12 ) /*0x846f17*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x846f1d*/
  }
  sub_848FA0(Texture, (int)a5); /*0x846f2b*/
  if ( (_BYTE)value ) /*0x846f35*/
  {
    ++v8->RefCount; /*0x846f3c*/
    value = v8; /*0x846f3f*/
    NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x846f57*/
    if ( v8->RefCount-- == 1 ) /*0x846f5f*/
      NiD3DPass_ReleaseToPool(v8); /*0x846f6a*/
    ++*((_DWORD *)this + 0xE); /*0x846f6f*/
  }
}
