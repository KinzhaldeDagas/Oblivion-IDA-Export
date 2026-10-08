// For active lights, discard/release frame-local shadow map +0x114, mark backing sources culled, and invalidate pending receiver-property state.
void __thiscall sub_7C5BE0(_DWORD *this)
{
  _DWORD *v1; // ebp
  _DWORD *v2; // edi
  bool v3; // bl
  void (__thiscall ***v4)(_DWORD, int); // esi
  int v5; // esi
  _DWORD *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  int v8; // [esp+4h] [ebp-Ch]
  int v9; // [esp+8h] [ebp-8h] BYREF
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v1 = (_DWORD *)*(this + 0x3E); /*0x7c5be4*/
  v8 = 0; /*0x7c5bec*/
  while ( v1 ) /*0x7c5bf4*/
  {
    v2 = (_DWORD *)v1[2]; /*0x7c5c00*/
    v1 = (_DWORD *)*v1; /*0x7c5c08*/
    v3 = 0; /*0x7c5c23*/
    if ( v2 ) /*0x7c5c0b*/
    {
      v8 |= 1u; /*0x7c5c19*/
      if ( *ShadowSceneLight_GetLightRef(v2, &v9) ) /*0x7c5c1e*/
        v3 = 1; /*0x7c5c0b*/
    }
    if ( (v8 & 1) != 0 ) /*0x7c5c2e*/
    {
      v4 = (void (__thiscall ***)(_DWORD, int))v9; /*0x7c5c30*/
      v8 &= ~1u; /*0x7c5c34*/
      if ( v9 ) /*0x7c5c3b*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v9 + 4)) ) /*0x7c5c41*/
        {
          if ( v4 ) /*0x7c5c4d*/
            (**v4)(v4, 1); /*0x7c5c57*/
        }
      }
    }
    if ( v3 )                                   // Next ShadowPass cleanup is driven by backing NiLight cull state and releases map/receiver data; it does not read prior projector transform or range. /*0x7c5c5b*/
    {
      BSTextureManager__ReturnFrustumShadowTexture( /*0x7c5c6e*/
        *(BSTextureManager **)&OB_RendererGlobalState_010201A0[0xB7],
        v2[0x45]);
      v5 = v2[0x45]; /*0x7c5c73*/
      if ( v5 ) /*0x7c5c7b*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7c5c81*/
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c5c97*/
        v2[0x45] = 0; /*0x7c5c99*/
      }
      v6 = ShadowSceneLight_GetLightRef(v2, &v10); /*0x7c5caa*/
      *(_WORD *)(*v6 + 0x18) |= 1u; /*0x7c5cb1*/
      if ( v10 ) /*0x7c5cbc*/
      {
        v7 = (void (__thiscall ***)(_DWORD, int))v10; /*0x7c5cbe*/
        if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x7c5cc4*/
          (**v7)(v7, 1); /*0x7c5cda*/
      }
      ShadowSceneLight_InvalidatePendingReceiverProperties(v2); /*0x7c5cde*/
    }
  }
}
