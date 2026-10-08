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

  if ( !a1->member.lostDevice ) /*0x766886*/
  {
    v6 = *((NiGeometryData **)a5 + 0x2D); /*0x766898*/
    m_usVertices = v6->member.m_usVertices; /*0x76689e*/
    v58 = (int)v6; /*0x7668a5*/
    v59 = m_usVertices; /*0x7668a9*/
    if ( (_WORD)m_usVertices ) /*0x7668ad*/
    {
      v8 = a5[9]; /*0x7668b3*/
      qmemcpy(v68, a5 + 0x19, sizeof(v68)); /*0x7668c8*/
      v64 = a5[8]; /*0x7668cf*/
      v9 = *((IDirect3DIndexBuffer9 **)a5 + 0xA); /*0x7668d3*/
      v65 = v8; /*0x7668d8*/
      v10 = a5[0xB]; /*0x7668dc*/
      dynamicGeometryGroup = a1->member.dynamicGeometryGroup; /*0x7668df*/
      v66 = v9; /*0x7668e6*/
      v67 = v10; /*0x7668f1*/
      NiGeometryGroup::AddGeometryDataToGroup(dynamicGeometryGroup, v6, 0, 0, 0, 0); /*0x7668f5*/
      v12 = v65; /*0x7668fe*/
      v13 = *(float *)&v66; /*0x766902*/
      a1->member.camUp.y = v64; /*0x766906*/
      v14 = v67; /*0x76690c*/
      a1->member.camUp.z = v12; /*0x766910*/
      a1->member.modelCamRight.x = v13; /*0x766918*/
      a1->member.modelCamRight.y = v14; /*0x76691e*/
      vftable = (int)v6[1].__vftable; /*0x766924*/
      p_x = &v6->member.m_pkVertex->x; /*0x76692c*/
      m_pkTexture = (float *)v6->member.m_pkTexture; /*0x76692f*/
      m_pkColor = (float *)v6->member.m_pkColor; /*0x766932*/
      v54 = (unsigned __int16)v59; /*0x76693d*/
      indexBufferMgr = a1->member.indexBufferMgr; /*0x766942*/
      v52 = 0; /*0x766948*/
      if ( sub_778500(indexBufferMgr, (int)m_pkTexture, (unsigned __int16)v59, vftable, &v52, 0, 1, a3) ) /*0x766950*/
      {
        if ( v52 ) /*0x766966*/
        {
          v53 = 2; /*0x76696e*/
          v55 = 0xC; /*0x766976*/
          if ( m_pkTexture ) /*0x76697e*/
          {
            v53 = 0x102; /*0x766980*/
            v55 = 0x14; /*0x766988*/
          }
          if ( m_pkColor ) /*0x766992*/
          {
            v53 |= 0x40u; /*0x766994*/
            v55 += 4; /*0x766999*/
          }
          v56 = *(NiGeometryBufferData **)(v58 + 0x38); /*0x7669a7*/
          sub_777F70(v56, 1u); /*0x7669ab*/
          v20 = v54; /*0x7669b0*/
          v21 = v56; /*0x7669b4*/
          v46 = v53; /*0x7669bc*/
          v56->VertCount = v54; /*0x7669bd*/
          v21->MaxVertCount = v20; /*0x7669c0*/
          sub_7780A0(v21, v46); /*0x7669c3*/
          v22 = v56; /*0x7669c8*/
          if ( v56->StreamCount ) /*0x7669cc*/
            *v56->VertexStride = v55; /*0x7669d9*/
          NiGeometryBufferData::RefreshVBChips(v22, 0); /*0x7669e4*/
          if ( v56->StreamCount ) /*0x7669ed*/
          {
            v23 = *v56->VBChip; /*0x7669f6*/
            v57 = v23; /*0x7669f8*/
          }
          else
          {
            v57 = 0; /*0x7669fe*/
            v23 = 0; /*0x766a06*/
          }
          VB = (int)v23->VB; /*0x766a0a*/
          if ( VB ) /*0x766a0f*/
          {
            HIDWORD(v45) = v23->LockFlags; /*0x766a18*/
            LODWORD(v45) = v23->Size; /*0x766a1f*/
            v25 = (float *)NiDX9VertexBufferManager_LockToStaging( /*0x766a28*/
                             (char *)a1->member.vertexBufferMgr,
                             VB,
                             v23->Offset,
                             v45,
                             v48);
            if ( m_pkTexture ) /*0x766a2f*/
            {
              if ( m_pkColor ) /*0x766a37*/
              {
                if ( !v25 ) /*0x766a3f*/
                  return; /*0x766a3f*/
                if ( v54 ) /*0x766a4b*/
                {
                  v59 = v54; /*0x766a51*/
                  do /*0x766afb*/
                  {
                    *v25 = *p_x; /*0x766a57*/
                    v25[1] = p_x[1]; /*0x766a5c*/
                    v25[2] = p_x[2]; /*0x766a62*/
                    v60 = m_pkColor[3] * dbl_A3DDD8; /*0x766a6e*/
                    v53 = (int)v60; /*0x766a76*/
                    v60 = *m_pkColor * dbl_A3DDD8; /*0x766a87*/
                    v54 = (int)v60; /*0x766a8f*/
                    v26 = m_pkColor[1] * dbl_A3DDD8; /*0x766a9a*/
                    v61 = v54; /*0x766aa0*/
                    v60 = v26; /*0x766aa4*/
                    v55 = (int)v60; /*0x766aac*/
                    v60 = m_pkColor[2] * dbl_A3DDD8; /*0x766abd*/
                    v58 = (int)v60; /*0x766ac5*/
                    v25 += 6; /*0x766ad0*/
                    p_x += 3; /*0x766adf*/
                    *((_DWORD *)v25 + 0xFFFFFFFD) = v58 | ((v55 | ((v54 | (v53 << 8)) << 8)) << 8); /*0x766ae2*/
                    v25[0xFFFFFFFE] = *m_pkTexture; /*0x766ae7*/
                    m_pkColor += 4; /*0x766aea*/
                    v27 = m_pkTexture[1]; /*0x766aed*/
                    m_pkTexture += 2; /*0x766af0*/
                    v28 = v59-- == 1; /*0x766af3*/
                    v25[0xFFFFFFFF] = v27; /*0x766af8*/
                  }
                  while ( !v28 ); /*0x766afb*/
                }
              }
              else
              {
                if ( !v25 ) /*0x766b08*/
                  return; /*0x766b08*/
                v29 = v54; /*0x766b0e*/
                v30 = 0; /*0x766b12*/
                if ( v54 >= 4 ) /*0x766b17*/
                {
                  v31 = ((unsigned int)(v54 - 4) >> 2) + 1; /*0x766b23*/
                  v30 = 4 * v31; /*0x766b26*/
                  do /*0x766bb2*/
                  {
                    v32 = *p_x; /*0x766b30*/
                    p_x += 0xC; /*0x766b32*/
                    *v25 = v32; /*0x766b35*/
                    m_pkTexture += 8; /*0x766b37*/
                    v25 += 0x14; /*0x766b3d*/
                    --v31; /*0x766b40*/
                    v25[0xFFFFFFED] = p_x[0xFFFFFFF5]; /*0x766b43*/
                    v25[0xFFFFFFEE] = p_x[0xFFFFFFF6]; /*0x766b49*/
                    v25[0xFFFFFFEF] = m_pkTexture[0xFFFFFFF8]; /*0x766b4f*/
                    v25[0xFFFFFFF0] = m_pkTexture[0xFFFFFFF9]; /*0x766b55*/
                    v25[0xFFFFFFF1] = p_x[0xFFFFFFF7]; /*0x766b5b*/
                    v25[0xFFFFFFF2] = p_x[0xFFFFFFF8]; /*0x766b61*/
                    v25[0xFFFFFFF3] = p_x[0xFFFFFFF9]; /*0x766b67*/
                    v25[0xFFFFFFF4] = m_pkTexture[0xFFFFFFFA]; /*0x766b6d*/
                    v25[0xFFFFFFF5] = m_pkTexture[0xFFFFFFFB]; /*0x766b73*/
                    v25[0xFFFFFFF6] = p_x[0xFFFFFFFA]; /*0x766b79*/
                    v25[0xFFFFFFF7] = p_x[0xFFFFFFFB]; /*0x766b7f*/
                    v25[0xFFFFFFF8] = p_x[0xFFFFFFFC]; /*0x766b85*/
                    v25[0xFFFFFFF9] = m_pkTexture[0xFFFFFFFC]; /*0x766b8b*/
                    v25[0xFFFFFFFA] = m_pkTexture[0xFFFFFFFD]; /*0x766b91*/
                    v25[0xFFFFFFFB] = p_x[0xFFFFFFFD]; /*0x766b97*/
                    v25[0xFFFFFFFC] = p_x[0xFFFFFFFE]; /*0x766b9d*/
                    v25[0xFFFFFFFD] = p_x[0xFFFFFFFF]; /*0x766ba3*/
                    v25[0xFFFFFFFE] = m_pkTexture[0xFFFFFFFE]; /*0x766ba9*/
                    v25[0xFFFFFFFF] = m_pkTexture[0xFFFFFFFF]; /*0x766baf*/
                  }
                  while ( v31 ); /*0x766bb2*/
                }
                if ( v30 < v29 ) /*0x766bba*/
                {
                  v33 = v29 - v30; /*0x766bc2*/
                  do /*0x766bec*/
                  {
                    v34 = *p_x; /*0x766bc4*/
                    p_x += 3; /*0x766bc6*/
                    *v25 = v34; /*0x766bc9*/
                    m_pkTexture += 2; /*0x766bcb*/
                    v25 += 5; /*0x766bd1*/
                    --v33; /*0x766bd4*/
                    v25[0xFFFFFFFC] = p_x[0xFFFFFFFE]; /*0x766bd7*/
                    v25[0xFFFFFFFD] = p_x[0xFFFFFFFF]; /*0x766bdd*/
                    v25[0xFFFFFFFE] = m_pkTexture[0xFFFFFFFE]; /*0x766be3*/
                    v25[0xFFFFFFFF] = m_pkTexture[0xFFFFFFFF]; /*0x766be9*/
                  }
                  while ( v33 ); /*0x766bec*/
                }
              }
            }
            else if ( m_pkColor ) /*0x766bf5*/
            {
              if ( !v25 ) /*0x766bfd*/
                return; /*0x766bfd*/
              if ( v54 ) /*0x766c09*/
              {
                v58 = v54; /*0x766c0f*/
                do /*0x766ca5*/
                {
                  *v25 = *p_x; /*0x766c15*/
                  v25[1] = p_x[1]; /*0x766c1a*/
                  v25[2] = p_x[2]; /*0x766c20*/
                  v62 = m_pkColor[3] * dbl_A3DDD8; /*0x766c2c*/
                  v53 = (int)v62; /*0x766c34*/
                  v62 = *m_pkColor * dbl_A3DDD8; /*0x766c45*/
                  v54 = (int)v62; /*0x766c4d*/
                  v62 = m_pkColor[1] * dbl_A3DDD8; /*0x766c5e*/
                  v55 = (int)v62; /*0x766c66*/
                  v62 = m_pkColor[2] * dbl_A3DDD8; /*0x766c77*/
                  v59 = (int)v62; /*0x766c7f*/
                  v25 += 4; /*0x766c94*/
                  *((_DWORD *)v25 + 0xFFFFFFFF) = v59 | ((v55 | ((v54 | (v53 << 8)) << 8)) << 8); /*0x766c97*/
                  p_x += 3; /*0x766c9a*/
                  m_pkColor += 4; /*0x766c9d*/
                  --v58; /*0x766ca0*/
                }
                while ( v58 ); /*0x766ca5*/
              }
            }
            else
            {
              if ( !v25 ) /*0x766cb2*/
                return; /*0x766cb2*/
              v35 = v54; /*0x766cb8*/
              v36 = 0; /*0x766cbc*/
              if ( v54 >= 4 ) /*0x766cc1*/
              {
                v37 = ((unsigned int)(v54 - 4) >> 2) + 1; /*0x766cc9*/
                v36 = 4 * v37; /*0x766ccc*/
                do /*0x766d22*/
                {
                  v38 = *p_x; /*0x766cd3*/
                  p_x += 0xC; /*0x766cd5*/
                  *v25 = v38; /*0x766cd8*/
                  v25 += 0xC; /*0x766cda*/
                  --v37; /*0x766cdd*/
                  v25[0xFFFFFFF5] = p_x[0xFFFFFFF5]; /*0x766ce3*/
                  v25[0xFFFFFFF6] = p_x[0xFFFFFFF6]; /*0x766ce9*/
                  v25[0xFFFFFFF7] = p_x[0xFFFFFFF7]; /*0x766cef*/
                  v25[0xFFFFFFF8] = p_x[0xFFFFFFF8]; /*0x766cf5*/
                  v25[0xFFFFFFF9] = p_x[0xFFFFFFF9]; /*0x766cfb*/
                  v25[0xFFFFFFFA] = p_x[0xFFFFFFFA]; /*0x766d01*/
                  v25[0xFFFFFFFB] = p_x[0xFFFFFFFB]; /*0x766d07*/
                  v25[0xFFFFFFFC] = p_x[0xFFFFFFFC]; /*0x766d0d*/
                  v25[0xFFFFFFFD] = p_x[0xFFFFFFFD]; /*0x766d13*/
                  v25[0xFFFFFFFE] = p_x[0xFFFFFFFE]; /*0x766d19*/
                  v25[0xFFFFFFFF] = p_x[0xFFFFFFFF]; /*0x766d1f*/
                }
                while ( v37 ); /*0x766d22*/
              }
              if ( v36 < v35 ) /*0x766d26*/
              {
                v39 = v35 - v36; /*0x766d2a*/
                do /*0x766d49*/
                {
                  v40 = *p_x; /*0x766d30*/
                  p_x += 3; /*0x766d32*/
                  *v25 = v40; /*0x766d35*/
                  v25 += 3; /*0x766d37*/
                  --v39; /*0x766d3a*/
                  v25[0xFFFFFFFE] = p_x[0xFFFFFFFE]; /*0x766d40*/
                  v25[0xFFFFFFFF] = p_x[0xFFFFFFFF]; /*0x766d46*/
                }
                while ( v39 ); /*0x766d49*/
              }
            }
            v41 = v57; /*0x766d4b*/
            sub_776D80((int)a1->member.vertexBufferMgr, (int)p_x, (int)v57->VB); /*0x766d59*/
            v42 = v56; /*0x766d5e*/
            if ( !a1->member.defaultShader->__vftable->Unk28( /*0x766d84*/
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    (int)v56,
                    (int)a1->member.super.propertyState,
                    (unsigned int)a1->member.super.dynamicEffectState,
                    (int)v68,
                    (int)&v64) )
            {
              ((void (__thiscall *)(NiD3DShader *, _DWORD, _DWORD, NiGeometryBufferData *, NiPropertyState *, NiDynamicEffectState *, _BYTE *, float *, int, int, int))a1->member.defaultShader->__vftable->Unk2C)( /*0x766db0*/
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
              v43 = a1->member.defaultShader->__vftable->Unk48((NiD3DShaderInterface *)a1->member.defaultShader); /*0x766dc3*/
              if ( v42->StreamCount ) /*0x766dbf*/
                v44 = *v42->VertexStride; /*0x766dca*/
              else
                v44 = 0; /*0x766dce*/
              a1->member.device->lpVtbl->SetStreamSource(a1->member.device, 0, v41->VB, 0, v44); /*0x766de8*/
              a1->member.device->lpVtbl->SetIndices(a1->member.device, v66); /*0x766dfe*/
              if ( v43 ) /*0x766e02*/
              {
                do /*0x766eea*/
                {
                  a1->member.defaultShader->__vftable->Unk30( /*0x766e32*/
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    (int)v42,
                    (int)a1->member.super.propertyState,
                    (int)a1->member.super.dynamicEffectState,
                    (int)&v68[0xC],
                    (int)&v67);
                  a1->member.defaultShader->__vftable->Unk34( /*0x766e58*/
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    0,
                    (int)v42,
                    (int)a1->member.super.propertyState,
                    (int)a1->member.super.dynamicEffectState,
                    (float *)&v68[0xC],
                    (int)&v67);
                  a1->member.defaultShader->__vftable->SetupShaderPrograms( /*0x766e7e*/
                    (NiD3DShaderInterface *)a1->member.defaultShader,
                    0,
                    0,
                    0,
                    (int)v42,
                    (int)a1->member.super.propertyState,
                    (int)a1->member.super.dynamicEffectState,
                    (float *)&v68[0xC],
                    (int)&v67);
                  (*(void (__thiscall **)(NiDX9ShaderConstantManager *))(*(_DWORD *)a1->member.renderState->member.ShaderConstantManager /*0x766e91*/
                                                                       + 4))(a1->member.renderState->member.ShaderConstantManager);
                  a1->member.device->lpVtbl->DrawIndexedPrimitive( /*0x766eb7*/
                    a1->member.device,
                    D3DPT_LINELIST,
                    v42->BaseVertexIndex,
                    0,
                    v42->VertCount,
                    0,
                    v55 >> 1);
                  a1->member.defaultShader->__vftable->Unk40( /*0x766edd*/
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
                while ( a1->member.defaultShader->__vftable->Unk4C((NiD3DShaderInterface *)a1->member.defaultShader) ); /*0x766eea*/
              }
              ((void (__thiscall *)(NiD3DShader *, _DWORD, _DWORD, NiGeometryBufferData *, NiPropertyState *))a1->member.defaultShader->__vftable->Unk44)( /*0x766f16*/
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
