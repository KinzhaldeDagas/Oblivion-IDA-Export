// MoonSugarEffect decode: BeginScene prepack flush. Iterates renderer PrePackObjects, locks/stages shared VB ranges, uses declaration/default/skinned packers, rebuilds IBs, unlocks, clears the map, and heap-frees temporary entries. Plugin mask passes should not borrow this renderer-owned queue/lifetime.
void __thiscall sub_769030(NiDX9Renderer *this)
{
  NiDX9Renderer *v1; // ebp
  UInt32 m_numBuckets; // ecx
  UInt32 v3; // eax
  NiTMap_Entry_void **m_buckets; // edx
  NiTMap_Entry_TESCELL *v5; // eax
  NiGeometryBufferData **v6; // ebx
  NiGeometryBufferData *v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // edx
  NiGeometryBufferData *v10; // eax
  UInt32 StreamCount; // ecx
  NiGeometryBufferData *VertexStride; // esi
  UInt32 MaxVertCount; // eax
  int *v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  UInt32 v17; // esi
  UInt32 v18; // eax
  bool v19; // cf
  int *v20; // ebp
  IDirect3DVertexDeclaration9 *VertexDeclaration; // ecx
  int v22; // ebx
  UInt32 FVF; // eax
  NiGeometry *Flags; // ecx
  int v25; // edx
  int v26; // ebx
  int v27; // ecx
  int i; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // eax
  int v32; // edx
  NiGeometryBufferData **v33; // esi
  NiGeometryBufferData **v34; // edi
  NiGeometryBufferData *v35; // eax
  int v36; // eax
  NiGeometryBufferData **v37; // esi
  size_t v38; // [esp+4h] [ebp-38h]
  int v39; // [esp+Ch] [ebp-30h]
  UInt32 *p_Flags; // [esp+1Ch] [ebp-20h]
  int v42; // [esp+24h] [ebp-18h] BYREF
  NiTMap_Entry_TESCELL *v43; // [esp+28h] [ebp-14h] BYREF
  NiGeometryBufferData *v44; // [esp+2Ch] [ebp-10h] BYREF
  void *v45; // [esp+30h] [ebp-Ch] BYREF
  int v46; // [esp+34h] [ebp-8h]
  NiGeometryBufferData *v47; // [esp+38h] [ebp-4h]

  v1 = this; /*0x769036*/
  NiDX9Renderer_EnterRendererAndPrecache(this); /*0x76903d*/
  m_numBuckets = v1->member.PrePackObjects.m_numBuckets; /*0x769042*/
  v3 = 0; /*0x769048*/
  if ( m_numBuckets ) /*0x76904c*/
  {
    m_buckets = v1->member.PrePackObjects.m_buckets; /*0x769054*/
    while ( !*m_buckets ) /*0x769059*/
    {
      ++v3; /*0x76905b*/
      ++m_buckets; /*0x76905e*/
      if ( v3 >= m_numBuckets ) /*0x769063*/
        goto LABEL_5; /*0x769063*/
    }
    v5 = (NiTMap_Entry_TESCELL *)v1->member.PrePackObjects.m_buckets[v3]; /*0x7690d6*/
  }
  else
  {
LABEL_5:
    v5 = 0; /*0x769065*/
  }
  v6 = 0; /*0x769067*/
  v43 = v5; /*0x76906b*/
  p_Flags = 0; /*0x76906f*/
  while ( v43 )
  {
    NiTMap_U32Pointer_GetNextEntry((NiTMap_TESCELL *)&v1->member.PrePackObjects, &v43, &v45, (TESObjectCELL **)&v44); /*0x769095*/
    v7 = v44; /*0x76909a*/
    if ( v44 )
    {
      if ( v45 )
      {
        v8 = 0xFFFFFFFF; /*0x7690b1*/
        v9 = 0; /*0x7690b4*/
        v10 = v44; /*0x7690b6*/
        do /*0x7690f5*/
        {
          StreamCount = v10->StreamCount; /*0x7690c0*/
          VertexStride = (NiGeometryBufferData *)v10->VertexStride; /*0x7690c3*/
          MaxVertCount = v10->MaxVertCount; /*0x7690c6*/
          if ( StreamCount >= *(_DWORD *)(MaxVertCount + 0x1C) ) /*0x7690cc*/
            v14 = 0; /*0x7690db*/
          else
            v14 = *(int **)(*(_DWORD *)(MaxVertCount + 0x24) + 4 * StreamCount); /*0x7690d1*/
          v15 = v14[3]; /*0x7690dd*/
          if ( v15 < v8 ) /*0x7690e2*/
            v8 = v14[3]; /*0x7690e4*/
          v16 = v14[5] + v15; /*0x7690e9*/
          if ( v16 > v9 ) /*0x7690ed*/
            v9 = v16; /*0x7690ef*/
          v10 = VertexStride; /*0x7690f3*/
        }
        while ( VertexStride ); /*0x7690f5*/
        if ( v9 > v8 )
        {
          HIDWORD(v38) = v14[4]; /*0x769105*/
          LODWORD(v38) = v9 - v8; /*0x769108*/
          v46 = NiDX9VertexBufferManager_LockToStaging((char *)this->member.vertexBufferMgr, v14[2], v8, v38, v39); /*0x76911a*/
          do
          {
            v17 = v7->MaxVertCount; /*0x769120*/
            v18 = v7->StreamCount; /*0x769123*/
            v19 = v18 < *(_DWORD *)(v17 + 0x1C); /*0x769126*/
            v47 = (NiGeometryBufferData *)v7->VertexStride; /*0x76912c*/
            if ( v19 ) /*0x769130*/
              v20 = *(int **)(*(_DWORD *)(v17 + 0x24) + 4 * v18); /*0x769135*/
            else
              v20 = 0; /*0x76913a*/
            VertexDeclaration = v7->VertexDeclaration; /*0x76913f*/
            v22 = v46 + v20[3]; /*0x769142*/
            if ( !VertexDeclaration /*0x769162*/
              || !((int (__thiscall *)(IDirect3DVertexDeclaration9 *, UInt32, NiGeometryGroup *, UInt32, int, int *, UInt32, int))VertexDeclaration->lpVtbl[5].Release)(
                    VertexDeclaration,
                    v7->Flags,
                    v7->GeometryGroup,
                    v7->FVF,
                    0xFFF,
                    v20,
                    v18,
                    v46 + v20[3]) )
            {
              FVF = v7->FVF; /*0x769168*/
              Flags = (NiGeometry *)v7->Flags; /*0x76916d*/
              if ( FVF ) /*0x76917a*/
                sub_7774C0( /*0x769188*/
                  (char *)this->member.vertexBufferMgr,
                  (int)Flags,
                  (int)v7->GeometryGroup,
                  FVF,
                  0xFF,
                  v20,
                  v22);
              else
                sub_776E90((char *)this->member.vertexBufferMgr, v17, Flags, &v7->GeometryGroup->vtbl, 0xFF, v20, v22); /*0x76919a*/
            }
            if ( !v7->StreamCount )
            {
              if ( *(_DWORD *)(v17 + 0x4C) )
              {
                v25 = *(_DWORD *)(v17 + 0x48); /*0x7691b3*/
                v26 = 0; /*0x7691b6*/
                v27 = 0; /*0x7691b8*/
                if ( v25 ) /*0x7691bc*/
                {
                  for ( i = *(_DWORD *)(v17 + 0x44); i; v26 += v29 ) /*0x7691c3*/
                    v29 = *(unsigned __int16 *)(v25 + 2 * i-- - 2); /*0x7691c5*/
                  v27 = v26; /*0x7691d3*/
                }
                else
                {
                  v30 = *(_DWORD *)(v17 + 0x38); /*0x7691d7*/
                  if ( v30 == 4 ) /*0x7691dd*/
                  {
                    v26 = 3 * *(_DWORD *)(v17 + 0x3C); /*0x7691e2*/
                    v27 = 3 * *(_DWORD *)(v17 + 0x40); /*0x7691e8*/
                  }
                  else if ( v30 == 5 ) /*0x7691f0*/
                  {
                    v26 = *(_DWORD *)(v17 + 0x3C) + 2; /*0x7691f8*/
                    v27 = *(_DWORD *)(v17 + 0x40) + 2; /*0x7691fb*/
                  }
                }
                v19 = *(_BYTE *)(v17 + 0x10) != 0; /*0x769204*/
                v42 = *(_DWORD *)(v17 + 0x2C); /*0x769206*/
                v31 = NiDX9IndexBufferManager_PackBuffer(
                        (int)this->member.indexBufferMgr,
                        v7,
                        v17,
                        *(_DWORD *)(v17 + 0x4C),
                        (void *)v26,
                        v27,
                        *(_DWORD *)(v17 + 0x30),
                        (unsigned int *)&v42,
                        1,
                        v19 ? (void *)0x10 : 0);
                v32 = v42; /*0x769230*/
                *(_DWORD *)(v17 + 0x30) = v31; /*0x769234*/
                *(_DWORD *)(v17 + 0x28) = v26; /*0x769237*/
                *(_DWORD *)(v17 + 0x2C) = v32; /*0x76923a*/
              }
            }
            v7->VertexStride = p_Flags; /*0x769241*/
            p_Flags = &v7->Flags; /*0x769244*/
            v7 = v47; /*0x769248*/
          }
          while ( v47 );
          sub_776D80((int)this->member.vertexBufferMgr, v17, v20[2]); /*0x769262*/
        }
        v1 = this; /*0x769267*/
        v6 = (NiGeometryBufferData **)p_Flags; /*0x76926b*/
      }
      else
      {
        v33 = (NiGeometryBufferData **)v44; /*0x769294*/
        do /*0x7692e6*/
        {
          v34 = (NiGeometryBufferData **)v33[8]; /*0x76929a*/
          if ( !v33[7] ) /*0x769296*/
          {
            v35 = v33[2]; /*0x76929f*/
            if ( v35 ) /*0x7692a6*/
              NiDX9Renderer::PackSkinnedGeometryBuffer( /*0x7692ba*/
                v1,
                (int)v33[6],
                (int)*v33,
                (int)v33[1],
                (int)v35,
                (NiD3DShaderDeclaration *)v33[3],
                1);
            else
              NiDX9Renderer::PackGeometryBuffers( /*0x7692d2*/
                v1,
                v33[6],
                (NiTriShapeData *)*v33,
                v33[1],
                (NiD3DShaderDeclaration *)v33[3],
                1);
          }
          p_Flags = (UInt32 *)v33; /*0x7692d9*/
          v33[8] = (NiGeometryBufferData *)v6; /*0x7692dd*/
          v6 = v33; /*0x7692e0*/
          v33 = v34; /*0x7692e4*/
        }
        while ( v34 ); /*0x7692e6*/
      }
    }
  }
  NiTMap_Clear(&v1->member.PrePackObjects.vtbl); /*0x769280*/
  if ( v6 ) /*0x769287*/
  {
    while ( 1 ) /*0x7692f4*/
    {
      v36 = (int)*v6; /*0x7692f4*/
      v37 = (NiGeometryBufferData **)v6[8]; /*0x7692fa*/
      if ( (HIWORD((*v6)->IBSize) & 0xF000) == 0x4000 && !v6[7] ) /*0x769307*/
      {
        *(_WORD *)(v36 + 0x2E) &= 0xF000u; /*0x76930d*/
        sub_765370(v36, (int)v6[1], (int)v6[2]); /*0x76931c*/
      }
      FormHeapFree((unsigned int)v6); /*0x769322*/
      if ( !v37 ) /*0x769330*/
        break; /*0x769330*/
      v6 = v37; /*0x7692f0*/
    }
  }
  NiDX9Renderer_LeavePrecacheAndRenderer(v1); /*0x76933b*/
}
