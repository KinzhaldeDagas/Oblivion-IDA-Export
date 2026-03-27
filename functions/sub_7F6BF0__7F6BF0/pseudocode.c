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

  v49 = this;
  v5 = a2;
  v6 = (_DWORD *)a4;
  BuffData = a2->member.geomData->member.BuffData;
  renderState = g_Renderer->member.renderState;
  textureMgr = g_Renderer->member.textureMgr;
  v9 = *(_DWORD *)(a4 + 0x18);
  v10 = 0;
  v48 = 0;
  v55 = renderState;
  v50 = textureMgr;
  v57 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD **)(v6[9] + 4 * v10);
      if ( !v11
        || (v12 = *sub_75FB10(v11, &v52),
            v13 = *v49,
            v48 |= 1u,
            v14 = *(_DWORD *)(v13 + 4 * v10) == v12,
            LOBYTE(a2) = 1,
            v14) )
      {
        LOBYTE(a2) = 0;
      }
      if ( (v48 & 1) != 0 )
      {
        v15 = (void (__thiscall ***)(_DWORD, int))v52;
        v48 &= ~1u;
        if ( v52 )
        {
          if ( !InterlockedDecrement((volatile LONG *)(v52 + 4)) )
          {
            if ( v15 )
              (**v15)(v15, 1);
          }
        }
      }
      if ( (_BYTE)a2 )
      {
        v16 = sub_75FB10(v11, &v53);
        *(_DWORD *)(*v49 + 4 * v10) = *v16;
        if ( v53 )
        {
          v17 = (void (__thiscall ***)(_DWORD, int))v53;
          if ( !InterlockedDecrement((volatile LONG *)(v53 + 4)) )
            (**v17)(v17, 1);
        }
        LOBYTE(a2) = *sub_75FB10(v11, &v54) != 0;
        if ( v54 )
        {
          v18 = (void (__thiscall ***)(_DWORD, int))v54;
          if ( !InterlockedDecrement((volatile LONG *)(v54 + 4)) )
            (**v18)(v18, 1);
        }
        if ( (_BYTE)a2 )
        {
          v19 = sub_75FB10(v11, &v56);
          v20 = v55;
          vtbl = v55->vtbl;
          v22 = *(int (__thiscall **)(NiDX9TextureManager *, int, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)v50 + 8);
          v46 = *v19;
          v58 = 0;
          v23 = v22(v50, v46, &v47[2], &v47[1], v47);
          ((void (__thiscall *)(NiDX9RenderState *, unsigned int, int))vtbl->SetTexture)(v20, v10, v23);
          v58 = 0xFFFFFFFF;
          if ( v56 )
          {
            v24 = (void (__thiscall ***)(_DWORD, int))v56;
            if ( !InterlockedDecrement((volatile LONG *)(v56 + 4)) )
              (**v24)(v24, 1);
          }
        }
      }
      else if ( !v11 )
      {
        break;
      }
      if ( ++v10 >= v57 )
        break;
      v6 = (_DWORD *)a4;
    }
    v6 = (_DWORD *)a4;
  }
  if ( (_BYTE)a5 )
  {
    v25 = (NiD3DRenderStateGroup *)v6[0xC];
    if ( v25 )
      NiD3DRenderStateGroup::SetRenderStates(v25);
  }
  if ( v10 < dword_B28CB8 )
    sub_771790(v10);
  if ( v6[0x11] )
  {
    v26 = *(_DWORD *)(a3 + 0x2C);
    if ( v26 )
    {
      v27 = sub_7016D0(v5, (NiDynamicEffectState **)&a2);
      v58 = 1;
      v28 = sub_405760(v5, (volatile LONG **)&a5);
      v29 = v6[0x11];
      v30 = *(void (__thiscall **)(int, int, NiGeometry *, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, NiTransform *, NiBound *, _DWORD, _DWORD))(*(_DWORD *)v26 + 0x40);
      v44 = *v27;
      v42 = *v28;
      LOBYTE(v58) = 2;
      v30(
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
      LOBYTE(v58) = 1;
      if ( a5 )
      {
        v31 = (void (__thiscall ***)(_DWORD, int))a5;
        if ( !InterlockedDecrement((volatile LONG *)(a5 + 4)) )
          (**v31)(v31, 1);
      }
      v32 = a2;
      v58 = 0xFFFFFFFF;
      if ( a2 )
      {
        if ( !InterlockedDecrement((volatile LONG *)&a2->member) )
        {
          if ( v32 )
            v32->__vftable->super.super.super.Destructor((NiRefObject *)v32, 1);
        }
      }
    }
  }
  v33 = a4;
  if ( *(_DWORD *)(a4 + 0x58) )
  {
    v34 = *(_DWORD *)(a3 + 0x30);
    if ( v34 )
    {
      v35 = sub_7016D0(v5, (NiDynamicEffectState **)&a3);
      v58 = 3;
      v36 = sub_405760(v5, (volatile LONG **)&a4);
      v37 = *(_DWORD *)(v33 + 0x58);
      v38 = *(void (__thiscall **)(int, int, NiGeometry *, _DWORD, _DWORD, NiGeometryBufferData *, volatile LONG *, NiGeometry *, NiTransform *, NiBound *, _DWORD, _DWORD))(*(_DWORD *)v34 + 0x40);
      v45 = *v35;
      v43 = *v36;
      LOBYTE(v58) = 4;
      v38(
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
      LOBYTE(v58) = 3;
      if ( a4 )
      {
        v39 = (void (__thiscall ***)(_DWORD, int))a4;
        if ( !InterlockedDecrement((volatile LONG *)(a4 + 4)) )
          (**v39)(v39, 1);
      }
      v40 = (void (__thiscall ***)(_DWORD, int))a3;
      v58 = 0xFFFFFFFF;
      if ( a3 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(a3 + 4)) )
        {
          if ( v40 )
            (**v40)(v40, 1);
        }
      }
    }
  }
  return ((int (__thiscall *)(NiGeometry *, NiDX9Renderer *))v5->__vftable->Unk_22)(v5, g_Renderer);
}
