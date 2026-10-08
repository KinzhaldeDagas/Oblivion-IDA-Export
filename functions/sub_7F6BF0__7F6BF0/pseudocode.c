int __thiscall sub_7F6BF0(int *this, NiGeometry *a2, int a3, int a4, int a5)
{
  NiGeometry *v5; // ebx
  _DWORD *v6; // ebp
  NiDX9RenderState *renderState; // ecx
  NiDX9TextureManager *textureMgr; // edx
  unsigned int v9; // eax
  unsigned int v10; // edi
  _DWORD *v11; // esi
  int v12; // eax
  int v13; // ecx
  bool v14; // zf
  void (__thiscall ***v15)(_DWORD, int); // ebp
  _DWORD *v16; // eax
  void (__thiscall ***v17)(_DWORD, int); // ebp
  void (__thiscall ***v18)(_DWORD, int); // ebp
  int *v19; // eax
  NiDX9RenderState *v20; // ebp
  NiDX9RenderStateVtbl *vtbl; // esi
  int (__thiscall *v22)(NiDX9TextureManager *, int, _BYTE *, _BYTE *, _BYTE *); // edx
  int v23; // eax
  void (__thiscall ***v24)(_DWORD, int); // esi
  NiD3DRenderStateGroup *v25; // ecx
  int v26; // esi
  NiGeometry **v27; // edi
  volatile LONG **v28; // eax
  int v29; // ecx
  void (__thiscall *v30)(int, int, NiGeometry *, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, NiTransform *, NiBound *, _DWORD, _DWORD); // edx
  void (__thiscall ***v31)(_DWORD, int); // esi
  NiGeometry *v32; // esi
  int v33; // ebp
  int v34; // esi
  NiGeometry **v35; // edi
  volatile LONG **v36; // eax
  int v37; // ecx
  void (__thiscall *v38)(int, int, NiGeometry *, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, NiTransform *, NiBound *, _DWORD, _DWORD); // edx
  void (__thiscall ***v39)(_DWORD, int); // esi
  void (__thiscall ***v40)(_DWORD, int); // esi
  volatile LONG *v42; // [esp+18h] [ebp-64h]
  volatile LONG *v43; // [esp+18h] [ebp-64h]
  NiGeometry *v44; // [esp+1Ch] [ebp-60h]
  NiGeometry *v45; // [esp+1Ch] [ebp-60h]
  int v46; // [esp+20h] [ebp-5Ch]
  _BYTE v47[3]; // [esp+45h] [ebp-37h] BYREF
  int v48; // [esp+48h] [ebp-34h]
  int *v49; // [esp+4Ch] [ebp-30h]
  NiDX9TextureManager *v50; // [esp+50h] [ebp-2Ch]
  NiGeometryBufferData *BuffData; // [esp+54h] [ebp-28h]
  int v52; // [esp+58h] [ebp-24h] BYREF
  int v53; // [esp+5Ch] [ebp-20h] BYREF
  int v54; // [esp+60h] [ebp-1Ch] BYREF
  NiDX9RenderState *v55; // [esp+64h] [ebp-18h]
  int v56; // [esp+68h] [ebp-14h] BYREF
  unsigned int v57; // [esp+6Ch] [ebp-10h]
  int v58; // [esp+78h] [ebp-4h]

  v49 = this; /*0x7f6c17*/
  v5 = a2; /*0x7f6c1b*/
  v6 = (_DWORD *)a4; /*0x7f6c28*/
  BuffData = a2->member.geomData->member.BuffData; /*0x7f6c2c*/
  renderState = renderer->member.renderState; /*0x7f6c35*/
  textureMgr = renderer->member.textureMgr; /*0x7f6c3b*/
  v9 = *(_DWORD *)(a4 + 0x18); /*0x7f6c41*/
  v10 = 0; /*0x7f6c44*/
  v48 = 0; /*0x7f6c48*/
  v55 = renderState; /*0x7f6c4c*/
  v50 = textureMgr; /*0x7f6c50*/
  v57 = v9; /*0x7f6c54*/
  if ( v9 ) /*0x7f6c58*/
  {
    while ( 1 ) /*0x7f6c67*/
    {
      v11 = *(_DWORD **)(v6[9] + 4 * v10); /*0x7f6c67*/
      if ( !v11 /*0x7f6c8f*/
        || (v12 = *sub_75FB10(v11, &v52),
            v13 = *v49,
            v48 |= 1u,
            v14 = *(_DWORD *)(v13 + 4 * v10) == v12,
            LOBYTE(a2) = 1,
            v14) )
      {
        LOBYTE(a2) = 0; /*0x7f6c91*/
      }
      if ( (v48 & 1) != 0 ) /*0x7f6c9b*/
      {
        v15 = (void (__thiscall ***)(_DWORD, int))v52; /*0x7f6c9d*/
        v48 &= ~1u; /*0x7f6ca1*/
        if ( v52 ) /*0x7f6ca8*/
        {
          if ( !InterlockedDecrement((volatile LONG *)(v52 + 4)) ) /*0x7f6cae*/
          {
            if ( v15 ) /*0x7f6cba*/
              (**v15)(v15, 1); /*0x7f6cc5*/
          }
        }
      }
      if ( (_BYTE)a2 ) /*0x7f6ccc*/
      {
        v16 = sub_75FB10(v11, &v53); /*0x7f6cd9*/
        *(_DWORD *)(*v49 + 4 * v10) = *v16; /*0x7f6ce6*/
        if ( v53 ) /*0x7f6cef*/
        {
          v17 = (void (__thiscall ***)(_DWORD, int))v53; /*0x7f6cf1*/
          if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) ) /*0x7f6cf7*/
            (**v17)(v17, 1); /*0x7f6d0e*/
        }
        LOBYTE(a2) = *sub_75FB10(v11, &v54) != 0; /*0x7f6d23*/
        if ( v54 ) /*0x7f6d2a*/
        {
          v18 = (void (__thiscall ***)(_DWORD, int))v54; /*0x7f6d2c*/
          if ( !InterlockedDecrement((volatile LONG *)(v54 + 4)) ) /*0x7f6d32*/
            (**v18)(v18, 1); /*0x7f6d49*/
        }
        if ( (_BYTE)a2 ) /*0x7f6d50*/
        {
          v19 = sub_75FB10(v11, &v56); /*0x7f6d5d*/
          v20 = v55; /*0x7f6d68*/
          vtbl = v55->vtbl; /*0x7f6d6e*/
          v22 = *(int (__thiscall **)(NiDX9TextureManager *, int, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)v50 + 8); /*0x7f6d71*/
          v46 = *v19; /*0x7f6d87*/
          v58 = 0; /*0x7f6d88*/
          v23 = v22(v50, v46, &v47[2], &v47[1], v47); /*0x7f6d96*/
          ((void (__thiscall *)(NiDX9RenderState *, unsigned int, int))vtbl->SetTexture)(v20, v10, v23); /*0x7f6d9e*/
          v58 = 0xFFFFFFFF; /*0x7f6da6*/
          if ( v56 ) /*0x7f6dae*/
          {
            v24 = (void (__thiscall ***)(_DWORD, int))v56; /*0x7f6db0*/
            if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) ) /*0x7f6db6*/
              (**v24)(v24, 1); /*0x7f6dcc*/
          }
        }
      }
      else if ( !v11 ) /*0x7f6dd2*/
      {
        break; /*0x7f6dd2*/
      }
      if ( ++v10 >= v57 ) /*0x7f6ddb*/
        break; /*0x7f6ddb*/
      v6 = (_DWORD *)a4; /*0x7f6c60*/
    }
    v6 = (_DWORD *)a4; /*0x7f6de1*/
  }
  if ( (_BYTE)a5 ) /*0x7f6dea*/
  {
    v25 = (NiD3DRenderStateGroup *)v6[0xC]; /*0x7f6dec*/
    if ( v25 ) /*0x7f6df1*/
      NiD3DRenderStateGroup::SetRenderStates(v25); /*0x7f6df3*/
  }
  if ( v10 < dword_B28CB8 ) /*0x7f6dfe*/
    NiD3DTextureStage_DisableUnusedStages(v10); /*0x7f6e01*/
  if ( v6[0x11] ) /*0x7f6e09*/
  {
    v26 = *(_DWORD *)(a3 + 0x2C); /*0x7f6e17*/
    if ( v26 ) /*0x7f6e1c*/
    {
      v27 = sub_7016D0(v5, (NiDynamicEffectState **)&a2); /*0x7f6e2e*/
      v58 = 1; /*0x7f6e37*/
      v28 = NiGeometry_GetPropertyState(v5, (volatile LONG **)&a5); /*0x7f6e3f*/
      v29 = v6[0x11]; /*0x7f6e44*/
      v30 = *(void (__thiscall **)(int, int, NiGeometry *, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, NiTransform *, NiBound *, _DWORD, _DWORD))(*(_DWORD *)v26 + 0x40); /*0x7f6e4f*/
      v44 = *v27; /*0x7f6e5c*/
      v42 = *v28; /*0x7f6e5d*/
      LOBYTE(v58) = 2; /*0x7f6e6b*/
      v30( /*0x7f6e70*/
        v26,
        v29,
        v5,
        0,
        0,
        BuffData,
        v42,
        v44,
        &v5->member.super.m_worldTransform,
        &v5->member.super.m_kWorldBound,
        0,
        0);
      LOBYTE(v58) = 1; /*0x7f6e78*/
      if ( a5 ) /*0x7f6e7d*/
      {
        v31 = (void (__thiscall ***)(_DWORD, int))a5; /*0x7f6e7f*/
        if ( !InterlockedDecrement((volatile LONG *)(a5 + 4)) ) /*0x7f6e85*/
          (**v31)(v31, 1); /*0x7f6e9b*/
      }
      v32 = a2; /*0x7f6e9d*/
      v58 = 0xFFFFFFFF; /*0x7f6ea3*/
      if ( a2 ) /*0x7f6eab*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&a2->member) ) /*0x7f6eb1*/
        {
          if ( v32 ) /*0x7f6ebd*/
            v32->__vftable->super.super.super.Destructor((NiRefObject *)v32, 1); /*0x7f6ec7*/
        }
      }
    }
  }
  v33 = a4; /*0x7f6ec9*/
  if ( *(_DWORD *)(a4 + 0x58) ) /*0x7f6ecd*/
  {
    v34 = *(_DWORD *)(a3 + 0x30); /*0x7f6edb*/
    if ( v34 ) /*0x7f6ee0*/
    {
      v35 = sub_7016D0(v5, (NiDynamicEffectState **)&a3); /*0x7f6ef2*/
      v58 = 3; /*0x7f6efb*/
      v36 = NiGeometry_GetPropertyState(v5, (volatile LONG **)&a4); /*0x7f6f03*/
      v37 = *(_DWORD *)(v33 + 0x58); /*0x7f6f08*/
      v38 = *(void (__thiscall **)(int, int, NiGeometry *, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, NiTransform *, NiBound *, _DWORD, _DWORD))(*(_DWORD *)v34 + 0x40); /*0x7f6f13*/
      v45 = *v35; /*0x7f6f20*/
      v43 = *v36; /*0x7f6f21*/
      LOBYTE(v58) = 4; /*0x7f6f2f*/
      v38( /*0x7f6f34*/
        v34,
        v37,
        v5,
        0,
        0,
        BuffData,
        v43,
        v45,
        &v5->member.super.m_worldTransform,
        &v5->member.super.m_kWorldBound,
        0,
        0);
      LOBYTE(v58) = 3; /*0x7f6f3c*/
      if ( a4 ) /*0x7f6f41*/
      {
        v39 = (void (__thiscall ***)(_DWORD, int))a4; /*0x7f6f43*/
        if ( !InterlockedDecrement((volatile LONG *)(a4 + 4)) ) /*0x7f6f49*/
          (**v39)(v39, 1); /*0x7f6f5f*/
      }
      v40 = (void (__thiscall ***)(_DWORD, int))a3; /*0x7f6f61*/
      v58 = 0xFFFFFFFF; /*0x7f6f67*/
      if ( a3 ) /*0x7f6f6f*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) ) /*0x7f6f75*/
        {
          if ( v40 ) /*0x7f6f81*/
            (**v40)(v40, 1); /*0x7f6f8b*/
        }
      }
    }
  }
  return ((int (__thiscall *)(NiGeometry *, NiDX9Renderer *))v5->__vftable->Unk_22)(v5, renderer); /*0x7f6f9f*/
}
