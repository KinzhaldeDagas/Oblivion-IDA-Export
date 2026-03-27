void __userpurge sub_766880(NiDX9Renderer *a1@<ecx>, int a2@<ebp>, _WORD *a3@<edi>, int a4@<esi>, float *a5)
{
  NiGeometryData *v6; // ebp
  int m_usVertices; // ecx
  float v8; // edx
  IDirect3DIndexBuffer9 *v9; // ecx
  float v10; // edx
  NiGeometryGroup *dynamicGeometryGroup; // eax
  float v12; // edx
  float v13; // eax
  float v14; // ecx
  int vftable; // eax
  float *p_x; // esi
  float *m_pkTexture; // edi
  float *m_pkColor; // ebp
  NiDX9IndexBufferManager *indexBufferMgr; // ecx
  UInt32 v20; // eax
  NiGeometryBufferData *v21; // ecx
  NiGeometryBufferData *v22; // eax
  NiVBChip *v23; // eax
  int VB; // ecx
  float *v25; // eax
  double v26; // st7
  double v27; // st7
  bool v28; // zf
  unsigned int v29; // edx
  unsigned int v30; // ebp
  unsigned int v31; // ecx
  double v32; // st7
  unsigned int v33; // ecx
  double v34; // st7
  unsigned int v35; // edx
  unsigned int v36; // edi
  unsigned int v37; // ecx
  double v38; // st7
  unsigned int v39; // ecx
  double v40; // st7
  NiVBChip *v41; // ebp
  NiGeometryBufferData *v42; // esi
  UInt32 v43; // edi
  UINT v44; // ecx
  size_t v45; // [esp+ACh] [ebp-8Ch]
  UInt32 v46; // [esp+B0h] [ebp-88h]
  int v48; // [esp+B4h] [ebp-84h]
  int v49; // [esp+B4h] [ebp-84h]
  int v52; // [esp+C4h] [ebp-74h] BYREF
  int v53; // [esp+C8h] [ebp-70h]
  signed int v54; // [esp+CCh] [ebp-6Ch]
  UInt32 v55; // [esp+D0h] [ebp-68h]
  NiGeometryBufferData *v56; // [esp+D4h] [ebp-64h]
  NiVBChip *v57; // [esp+D8h] [ebp-60h]
  int v58; // [esp+DCh] [ebp-5Ch]
  int v59; // [esp+E0h] [ebp-58h]
  float v60; // [esp+E4h] [ebp-54h]
  signed int v61; // [esp+E8h] [ebp-50h]
  float v62; // [esp+ECh] [ebp-4Ch]
  float v64; // [esp+F4h] [ebp-44h] BYREF
  float v65; // [esp+F8h] [ebp-40h]
  IDirect3DIndexBuffer9 *v66; // [esp+FCh] [ebp-3Ch]
  float v67; // [esp+100h] [ebp-38h] BYREF
  _BYTE v68[52]; // [esp+104h] [ebp-34h] BYREF

  if ( !a1->member.lostDevice )
  {
    v6 = *((NiGeometryData **)a5 + 0x2D);
    m_usVertices = v6->member.m_usVertices;
    v58 = (int)v6;
    v59 = m_usVertices;
    if ( (_WORD)m_usVertices )
    {
      v8 = a5[9];
      qmemcpy(v68, a5 + 0x19, sizeof(v68));
      v64 = a5[8];
      v9 = *((IDirect3DIndexBuffer9 **)a5 + 0xA);
      v65 = v8;
      v10 = a5[0xB];
      dynamicGeometryGroup = a1->member.dynamicGeometryGroup;
      v66 = v9;
      v67 = v10;
      NiGeometryGroup::AddGeometryDataToGroup(dynamicGeometryGroup, v6, 0, 0, 0, 0);
      v12 = v65;
      v13 = *(float *)&v66;
      a1->member.camUp.y = v64;
      v14 = v67;
      a1->member.camUp.z = v12;
      a1->member.modelCamRight.x = v13;
      a1->member.modelCamRight.y = v14;
      vftable = (int)v6[1].__vftable;
      p_x = &v6->member.m_pkVertex->x;
      m_pkTexture = (float *)v6->member.m_pkTexture;
      m_pkColor = (float *)v6->member.m_pkColor;
      v54 = (unsigned __int16)v59;
      indexBufferMgr = a1->member.indexBufferMgr;
      v52 = 0;
      if ( sub_778500(indexBufferMgr, (int)m_pkTexture, (unsigned __int16)v59, vftable, &v52, 0, 1, a3) )
      {
        if ( v52 )
        {
          v53 = 2;
          v55 = 0xC;
          if ( m_pkTexture )
          {
            v53 = 0x102;
            v55 = 0x14;
          }
          if ( m_pkColor )
          {
            v53 |= 0x40u;
            v55 += 4;
          }
          v56 = *(NiGeometryBufferData **)(v58 + 0x38);
          sub_777F70(v56, 1u);
          v20 = v54;
          v21 = v56;
          v46 = v53;
          v56->VertCount = v54;
          v21->MaxVertCount = v20;
          sub_7780A0(v21, v46);
          v22 = v56;
          if ( v56->StreamCount )
            *v56->VertexStride = v55;
          NiGeometryBufferData::RefreshVBChips(v22, 0);
          if ( v56->StreamCount )
          {
            v23 = *v56->VBChip;
            v57 = v23;
          }
          else
          {
            v57 = 0;
            v23 = 0;
          }
          VB = (int)v23->VB;
          if ( VB )
          {
            HIDWORD(v45) = v23->LockFlags;
            LODWORD(v45) = v23->Size;
            v25 = (float *)sub_776C90((char *)a1->member.vertexBufferMgr, VB, v23->Offset, v45, v48);
            if ( m_pkTexture )
            {
              if ( m_pkColor )
              {
                if ( !v25 )
                  return;
                if ( v54 )
                {
                  v59 = v54;
                  do
                  {
                    *v25 = *p_x;
                    v25[1] = p_x[1];
                    v25[2] = p_x[2];
                    v60 = m_pkColor[3] * dbl_A3DDD8;
                    v53 = (int)v60;
                    v60 = *m_pkColor * dbl_A3DDD8;
                    v54 = (int)v60;
                    v26 = m_pkColor[1] * dbl_A3DDD8;
                    v61 = v54;
                    v60 = v26;
                    v55 = (int)v60;
                    v60 = m_pkColor[2] * dbl_A3DDD8;
                    v58 = (int)v60;
                    v25 += 6;
                    p_x += 3;
                    *((_DWORD *)v25 + 0xFFFFFFFD) = v58 | ((v55 | ((v54 | (v53 << 8)) << 8)) << 8);
                    v25[0xFFFFFFFE] = *m_pkTexture;
                    m_pkColor += 4;
                    v27 = m_pkTexture[1];
                    m_pkTexture += 2;
                    v28 = v59-- == 1;
                    v25[0xFFFFFFFF] = v27;
                  }
                  while ( !v28 );
                }
              }
              else
              {
                if ( !v25 )
                  return;
                v29 = v54;
                v30 = 0;
                if ( v54 >= 4 )
                {
                  v31 = ((unsigned int)(v54 - 4) >> 2) + 1;
                  v30 = 4 * v31;
                  do
                  {
                    v32 = *p_x;
                    p_x += 0xC;
                    *v25 = v32;
                    m_pkTexture += 8;
                    v25 += 0x14;
                    --v31;
                    v25[0xFFFFFFED] = p_x[0xFFFFFFF5];
                    v25[0xFFFFFFEE] = p_x[0xFFFFFFF6];
                    v25[0xFFFFFFEF] = m_pkTexture[0xFFFFFFF8];
                    v25[0xFFFFFFF0] = m_pkTexture[0xFFFFFFF9];
                    v25[0xFFFFFFF1] = p_x[0xFFFFFFF7];
                    v25[0xFFFFFFF2] = p_x[0xFFFFFFF8];
                    v25[0xFFFFFFF3] = p_x[0xFFFFFFF9];
                    v25[0xFFFFFFF4] = m_pkTexture[0xFFFFFFFA];
                    v25[0xFFFFFFF5] = m_pkTexture[0xFFFFFFFB];
                    v25[0xFFFFFFF6] = p_x[0xFFFFFFFA];
                    v25[0xFFFFFFF7] = p_x[0xFFFFFFFB];
                    v25[0xFFFFFFF8] = p_x[0xFFFFFFFC];
                    v25[0xFFFFFFF9] = m_pkTexture[0xFFFFFFFC];
                    v25[0xFFFFFFFA] = m_pkTexture[0xFFFFFFFD];
                    v25[0xFFFFFFFB] = p_x[0xFFFFFFFD];
                    v25[0xFFFFFFFC] = p_x[0xFFFFFFFE];
                    v25[0xFFFFFFFD] = p_x[0xFFFFFFFF];
                    v25[0xFFFFFFFE] = m_pkTexture[0xFFFFFFFE];
                    v25[0xFFFFFFFF] = m_pkTexture[0xFFFFFFFF];
                  }
                  while ( v31 );
                }
                if ( v30 < v29 )
                {
                  v33 = v29 - v30;
                  do
                  {
                    v34 = *p_x;
                    p_x += 3;
                    *v25 = v34;
                    m_pkTexture += 2;
                    v25 += 5;
                    --v33;
                    v25[0xFFFFFFFC] = p_x[0xFFFFFFFE];
                    v25[0xFFFFFFFD] = p_x[0xFFFFFFFF];
                    v25[0xFFFFFFFE] = m_pkTexture[0xFFFFFFFE];
                    v25[0xFFFFFFFF] = m_pkTexture[0xFFFFFFFF];
                  }
                  while ( v33 );
                }
              }
            }
            else if ( m_pkColor )
            {
              if ( !v25 )
                return;
              if ( v54 )
              {
                v58 = v54;
                do
                {
                  *v25 = *p_x;
                  v25[1] = p_x[1];
                  v25[2] = p_x[2];
                  v62 = m_pkColor[3] * dbl_A3DDD8;
                  v53 = (int)v62;
                  v62 = *m_pkColor * dbl_A3DDD8;
                  v54 = (int)v62;
                  v62 = m_pkColor[1] * dbl_A3DDD8;
                  v55 = (int)v62;
                  v62 = m_pkColor[2] * dbl_A3DDD8;
                  v59 = (int)v62;
                  v25 += 4;
                  *((_DWORD *)v25 + 0xFFFFFFFF) = v59 | ((v55 | ((v54 | (v53 << 8)) << 8)) << 8);
                  p_x += 3;
                  m_pkColor += 4;
                  --v58;
                }
                while ( v58 );
              }
            }
            else
            {
              if ( !v25 )
                return;
              v35 = v54;
              v36 = 0;
              if ( v54 >= 4 )
              {
                v37 = ((unsigned int)(v54 - 4) >> 2) + 1;
                v36 = 4 * v37;
                do
                {
                  v38 = *p_x;
                  p_x += 0xC;
                  *v25 = v38;
                  v25 += 0xC;
                  --v37;
                  v25[0xFFFFFFF5] = p_x[0xFFFFFFF5];
                  v25[0xFFFFFFF6] = p_x[0xFFFFFFF6];
                  v25[0xFFFFFFF7] = p_x[0xFFFFFFF7];
                  v25[0xFFFFFFF8] = p_x[0xFFFFFFF8];
                  v25[0xFFFFFFF9] = p_x[0xFFFFFFF9];
                  v25[0xFFFFFFFA] = p_x[0xFFFFFFFA];
                  v25[0xFFFFFFFB] = p_x[0xFFFFFFFB];
                  v25[0xFFFFFFFC] = p_x[0xFFFFFFFC];
                  v25[0xFFFFFFFD] = p_x[0xFFFFFFFD];
                  v25[0xFFFFFFFE] = p_x[0xFFFFFFFE];
                  v25[0xFFFFFFFF] = p_x[0xFFFFFFFF];
                }
                while ( v37 );
              }
              if ( v36 < v35 )
              {
                v39 = v35 - v36;
                do
                {
                  v40 = *p_x;
                  p_x += 3;
                  *v25 = v40;
                  v25 += 3;
                  --v39;
                  v25[0xFFFFFFFE] = p_x[0xFFFFFFFE];
                  v25[0xFFFFFFFF] = p_x[0xFFFFFFFF];
                }
                while ( v39 );
              }
            }
            v41 = v57;
            sub_776D80((int)a1->member.vertexBufferMgr, (int)v57->VB);
            v42 = v56;
            if ( !a1->member.defaultShader->__vftable->Unk28(
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    (int)v56,
                    (int)a1->member.super.propertyState,
                    (unsigned int)a1->member.super.dynamicEffectState,
                    (int)v68,
                    (int)&v64) )
            {
              ((void (__thiscall *)(NiD3DShader *, _DWORD, _DWORD, NiGeometryBufferData *, NiPropertyState *, NiDynamicEffectState *, _BYTE *, float *, int, int, int))a1->member.defaultShader->__vftable->Unk2C)(
                a1->member.defaultShader,
                0,
                0,
                v42,
                a1->member.super.propertyState,
                a1->member.super.dynamicEffectState,
                v68,
                &v64,
                v49,
                a4,
                a2);
              v43 = a1->member.defaultShader->__vftable->Unk48((NiD3DShaderInterface *)a1->member.defaultShader);
              if ( v42->StreamCount )
                v44 = *v42->VertexStride;
              else
                v44 = 0;
              a1->member.device->lpVtbl->SetStreamSource(a1->member.device, 0, v41->VB, 0, v44);
              a1->member.device->lpVtbl->SetIndices(a1->member.device, v66);
              if ( v43 )
              {
                do
                {
                  a1->member.defaultShader->__vftable->Unk30(
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    (int)v42,
                    (int)a1->member.super.propertyState,
                    (int)a1->member.super.dynamicEffectState,
                    (int)&v68[0xC],
                    (int)&v67);
                  a1->member.defaultShader->__vftable->Unk34(
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    0,
                    (int)v42,
                    (int)a1->member.super.propertyState,
                    (int)a1->member.super.dynamicEffectState,
                    (float *)&v68[0xC],
                    (int)&v67);
                  a1->member.defaultShader->__vftable->SetupShaderPrograms(
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    0,
                    (int)v42,
                    (int)a1->member.super.propertyState,
                    (int)a1->member.super.dynamicEffectState,
                    (float *)&v68[0xC],
                    (int)&v67);
                  (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)a1->member.renderState->member.ShaderConstantManager
                                                                       + 4))(a1->member.renderState->member.ShaderConstantManager);
                  a1->member.device->lpVtbl->DrawIndexedPrimitive(
                    a1->member.device,
                    D3DPT_LINELIST,
                    v42->BaseVertexIndex,
                    0,
                    v42->VertCount,
                    0,
                    v55 >> 1);
                  a1->member.defaultShader->__vftable->Unk40(
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    0,
                    (UInt32)v42,
                    (UInt32)a1->member.super.propertyState,
                    (UInt32)a1->member.super.dynamicEffectState,
                    (UInt32)&v68[0xC],
                    (UInt32)&v67);
                }
                while ( a1->member.defaultShader->__vftable->Unk4C((NiD3DShaderInterface *)a1->member.defaultShader) );
              }
              ((void (__thiscall *)(NiD3DShader *, _DWORD, _DWORD, NiGeometryBufferData *, NiPropertyState *))a1->member.defaultShader->__vftable->Unk44)(
                a1->member.defaultShader,
                0,
                0,
                v42,
                a1->member.super.propertyState);
            }
          }
        }
      }
    }
  }
}
