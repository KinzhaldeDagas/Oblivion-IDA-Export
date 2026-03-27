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

  v1 = this;
  sub_763FE0(this);
  m_numBuckets = v1->member.PrePackObjects.m_numBuckets;
  v3 = 0;
  if ( m_numBuckets )
  {
    m_buckets = v1->member.PrePackObjects.m_buckets;
    while ( !*m_buckets )
    {
      ++v3;
      ++m_buckets;
      if ( v3 >= m_numBuckets )
        goto LABEL_5;
    }
    v5 = (NiTMap_Entry_TESCELL *)v1->member.PrePackObjects.m_buckets[v3];
  }
  else
  {
LABEL_5:
    v5 = 0;
  }
  v6 = 0;
  v43 = v5;
  p_Flags = 0;
  while ( v43 )
  {
    sub_452600((NiTMap_TESCELL *)&v1->member.PrePackObjects, &v43, &v45, (TESObjectCELL **)&v44);
    v7 = v44;
    if ( v44 )
    {
      if ( v45 )
      {
        v8 = 0xFFFFFFFF;
        v9 = 0;
        v10 = v44;
        do
        {
          StreamCount = v10->StreamCount;
          VertexStride = (NiGeometryBufferData *)v10->VertexStride;
          MaxVertCount = v10->MaxVertCount;
          if ( StreamCount >= *(_DWORD *)(MaxVertCount + 0x1C) )
            v14 = 0;
          else
            v14 = *(int **)(*(_DWORD *)(MaxVertCount + 0x24) + 4 * StreamCount);
          v15 = v14[3];
          if ( v15 < v8 )
            v8 = v14[3];
          v16 = v14[5] + v15;
          if ( v16 > v9 )
            v9 = v16;
          v10 = VertexStride;
        }
        while ( VertexStride );
        if ( v9 > v8 )
        {
          HIDWORD(v38) = v14[4];
          LODWORD(v38) = v9 - v8;
          v46 = sub_776C90((char *)this->member.vertexBufferMgr, v14[2], v8, v38, v39);
          do
          {
            v17 = v7->MaxVertCount;
            v18 = v7->StreamCount;
            v19 = v18 < *(_DWORD *)(v17 + 0x1C);
            v47 = (NiGeometryBufferData *)v7->VertexStride;
            if ( v19 )
              v20 = *(int **)(*(_DWORD *)(v17 + 0x24) + 4 * v18);
            else
              v20 = 0;
            VertexDeclaration = v7->VertexDeclaration;
            v22 = v46 + v20[3];
            if ( !VertexDeclaration
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
              FVF = v7->FVF;
              Flags = (NiGeometry *)v7->Flags;
              if ( FVF )
                sub_7774C0(
                  (char *)this->member.vertexBufferMgr,
                  (int)Flags,
                  (int)v7->GeometryGroup,
                  FVF,
                  0xFF,
                  v20,
                  v22);
              else
                sub_776E90((char *)this->member.vertexBufferMgr, v17, Flags, &v7->GeometryGroup->vtbl, 0xFF, v20, v22);
            }
            if ( !v7->StreamCount )
            {
              if ( *(_DWORD *)(v17 + 0x4C) )
              {
                v25 = *(_DWORD *)(v17 + 0x48);
                v26 = 0;
                v27 = 0;
                if ( v25 )
                {
                  for ( i = *(_DWORD *)(v17 + 0x44); i; v26 += v29 )
                    v29 = *(unsigned __int16 *)(v25 + 2 * i-- - 2);
                  v27 = v26;
                }
                else
                {
                  v30 = *(_DWORD *)(v17 + 0x38);
                  if ( v30 == 4 )
                  {
                    v26 = 3 * *(_DWORD *)(v17 + 0x3C);
                    v27 = 3 * *(_DWORD *)(v17 + 0x40);
                  }
                  else if ( v30 == 5 )
                  {
                    v26 = *(_DWORD *)(v17 + 0x3C) + 2;
                    v27 = *(_DWORD *)(v17 + 0x40) + 2;
                  }
                }
                v19 = *(_BYTE *)(v17 + 0x10) != 0;
                v42 = *(_DWORD *)(v17 + 0x2C);
                v31 = sub_7781F0(
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
                v32 = v42;
                *(_DWORD *)(v17 + 0x30) = v31;
                *(_DWORD *)(v17 + 0x28) = v26;
                *(_DWORD *)(v17 + 0x2C) = v32;
              }
            }
            v7->VertexStride = p_Flags;
            p_Flags = &v7->Flags;
            v7 = v47;
          }
          while ( v47 );
          sub_776D80((int)this->member.vertexBufferMgr, v20[2]);
        }
        v1 = this;
        v6 = (NiGeometryBufferData **)p_Flags;
      }
      else
      {
        v33 = (NiGeometryBufferData **)v44;
        do
        {
          v34 = (NiGeometryBufferData **)v33[8];
          if ( !v33[7] )
          {
            v35 = v33[2];
            if ( v35 )
              NiDX9Renderer::PackSkinnedGeometryBuffer(
                v1,
                (int)v33[6],
                (int)*v33,
                (int)v33[1],
                (int)v35,
                (NiD3DShaderDeclaration *)v33[3],
                1);
            else
              NiDX9Renderer::PackGeometryBuffers(
                v1,
                v33[6],
                (NiTriShapeData *)*v33,
                v33[1],
                (NiD3DShaderDeclaration *)v33[3],
                1u);
          }
          p_Flags = (UInt32 *)v33;
          v33[8] = (NiGeometryBufferData *)v6;
          v6 = v33;
          v33 = v34;
        }
        while ( v34 );
      }
    }
  }
  NiTMap_Clear(&v1->member.PrePackObjects.vtbl);
  if ( v6 )
  {
    while ( 1 )
    {
      v36 = (int)*v6;
      v37 = (NiGeometryBufferData **)v6[8];
      if ( (HIWORD((*v6)->IBSize) & 0xF000) == 0x4000 && !v6[7] )
      {
        *(_WORD *)(v36 + 0x2E) &= 0xF000u;
        sub_765370(v36, (int)v6[1], (int)v6[2]);
      }
      FormHeapFree((unsigned int)v6);
      if ( !v37 )
        break;
      v6 = v37;
    }
  }
  sub_764040(v1);
}
