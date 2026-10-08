// NiTriShapeData::UpdateNormals. Allocate/zero normal storage, accumulate one normalized face normal per triangle into its vertices, propagate contributions through the duplicate-vertex table, normalize all vertex results, and mark normals dirty. On NBT format data the allocator clears three vector planes but this routine repopulates only normals.
void __thiscall NiTriShapeData_UpdateNormals(NiTriShapeData *self)
{
  UInt16 *m_pusTriList; // esi
  UInt16 v3; // ax
  UInt16 v4; // ax
  UInt16 v5; // cx
  UInt16 *v6; // esi
  UInt16 v7; // dx
  int v8; // ebx
  NiPoint3 *m_pkVertex; // eax
  int v10; // esi
  int v11; // ebp
  NiPoint3 *m_pkNormal; // eax
  double v13; // st7
  float *v14; // eax
  double v15; // st6
  double v16; // st7
  double v17; // st6
  double v18; // st5
  NiPoint3 *v19; // eax
  double x; // st4
  float *p_x; // eax
  NiPoint3 *v22; // eax
  double v23; // st4
  float *v24; // eax
  NiSharedNormalArrayEntry *m_pkSharedNormals; // eax
  int count; // ecx
  int v27; // edx
  int v28; // eax
  NiPoint3 *v29; // eax
  NiSharedNormalArrayEntry *v30; // eax
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  NiPoint3 *v34; // eax
  NiSharedNormalArrayEntry *v35; // eax
  int v36; // ecx
  int v37; // edx
  int v38; // eax
  NiPoint3 *v39; // eax
  UInt16 v40; // ax
  int v41; // [esp+8h] [ebp-38h]
  UInt16 *v42; // [esp+Ch] [ebp-34h]
  int v43; // [esp+10h] [ebp-30h]
  int v44; // [esp+14h] [ebp-2Ch]
  int v45; // [esp+18h] [ebp-28h]
  float v46; // [esp+1Ch] [ebp-24h] BYREF
  float v47; // [esp+20h] [ebp-20h]
  float v48; // [esp+24h] [ebp-1Ch]
  float v49; // [esp+28h] [ebp-18h]
  float v50; // [esp+2Ch] [ebp-14h]
  float v51; // [esp+30h] [ebp-10h]
  float v52; // [esp+34h] [ebp-Ch]
  float v53; // [esp+38h] [ebp-8h]
  float v54; // [esp+3Ch] [ebp-4h]

  NiGeometryData_AllocateAndClearNormals((int)self, 1); /*0x738119*/
  m_pusTriList = self->member.m_pusTriList; /*0x738123*/
  v3 = self->__vftable->GetNumTris((NiTriBasedGeomData *)self); /*0x738128*/
  if ( v3 ) /*0x738130*/
  {
    v41 = v3; /*0x73813b*/
    while ( 1 ) /*0x738145*/
    {
      v4 = *m_pusTriList; /*0x738145*/
      v5 = m_pusTriList[1]; /*0x738148*/
      v6 = m_pusTriList + 1; /*0x73814c*/
      v7 = v6[1]; /*0x73814f*/
      v42 = v6 + 2; /*0x738159*/
      v8 = v4; /*0x738160*/
      m_pkVertex = self->member.super.super.m_pkVertex; /*0x738163*/
      v44 = v5; /*0x738166*/
      v43 = v8; /*0x73816a*/
      v10 = v5; /*0x738176*/
      v8 *= 0xC; /*0x73817a*/
      v45 = v7; /*0x738185*/
      v52 = m_pkVertex[v10].x - *(float *)((char *)&m_pkVertex->x + v8); /*0x73818d*/
      v11 = v7; /*0x738197*/
      v53 = m_pkVertex[v10].y - *(float *)((char *)&m_pkVertex->y + v8); /*0x7381a2*/
      v54 = m_pkVertex[v10].z - *(float *)((char *)&m_pkVertex->z + v8); /*0x7381ae*/
      v49 = m_pkVertex[v11].x - m_pkVertex[v10].x; /*0x7381b8*/
      v50 = m_pkVertex[v11].y - m_pkVertex[v10].y; /*0x7381c4*/
      v51 = m_pkVertex[v11].z - m_pkVertex[v10].z; /*0x7381d0*/
      v46 = v51 * v53 - v50 * v54; /*0x7381f4*/
      v47 = v54 * v49 - v51 * v52; /*0x73820e*/
      v48 = v52 * v50 - v49 * v53; /*0x738218*/
      NiPoint3_NormalizeApproximateInPlace(&v46); /*0x73821c*/
      m_pkNormal = self->member.super.super.m_pkNormal; /*0x738221*/
      v13 = *(float *)((char *)&m_pkNormal->x + v8); /*0x738224*/
      v14 = (float *)((char *)&m_pkNormal->x + v8); /*0x73822e*/
      v15 = v13 + v46; /*0x738234*/
      v16 = v46; /*0x738234*/
      *v14 = v15; /*0x738236*/
      v17 = v47; /*0x738238*/
      v14[1] = v47 + v14[1]; /*0x738241*/
      v18 = v48; /*0x73824f*/
      v14[2] = v14[2] + v48; /*0x738251*/
      v19 = self->member.super.super.m_pkNormal; /*0x738254*/
      x = v19[v10].x; /*0x738257*/
      p_x = &v19[v10].x; /*0x73825a*/
      *p_x = x + v16; /*0x73825e*/
      p_x[1] = v17 + p_x[1]; /*0x738265*/
      p_x[2] = p_x[2] + v18; /*0x73826d*/
      v22 = self->member.super.super.m_pkNormal; /*0x738270*/
      v23 = v22[v11].x; /*0x738273*/
      v24 = &v22[v11].x; /*0x738276*/
      *v24 = v23 + v16; /*0x73827a*/
      v24[1] = v24[1] + v17; /*0x738281*/
      v24[2] = v18 + v24[2]; /*0x738289*/
      m_pkSharedNormals = self->member.m_pkSharedNormals;// When shared-normal entry count equals m_usVertices, add each triangle contribution to the vertex and every UInt16 index in its 8-byte entry. This keeps authored UV-split vertices smooth. /*0x73828c*/
      if ( m_pkSharedNormals ) /*0x738291*/
      {
        if ( self->member.m_usSharedNormalsArraySize == self->member.super.super.m_usVertices ) /*0x73829f*/
        {
          count = m_pkSharedNormals[v43].count; /*0x7382ad*/
          if ( (_WORD)count ) /*0x7382b4*/
          {
            v27 = (int)&m_pkSharedNormals[v43].indices[(unsigned __int16)count]; /*0x7382b9*/
            do /*0x7382eb*/
            {
              v28 = *(unsigned __int16 *)(v27 - 2); /*0x7382bc*/
              v27 -= 2; /*0x7382c3*/
              v29 = &self->member.super.super.m_pkNormal[v28]; /*0x7382c9*/
              count += 0xFFFF; /*0x7382cc*/
              v29->x = v29->x + v16; /*0x7382d9*/
              v29->y = v29->y + v17; /*0x7382e0*/
              v29->z = v29->z + v18; /*0x7382e8*/
            }
            while ( (_WORD)count ); /*0x7382eb*/
          }
          v30 = &self->member.m_pkSharedNormals[v44]; /*0x7382f4*/
          v31 = v30->count; /*0x7382f7*/
          if ( (_WORD)v31 ) /*0x738300*/
          {
            v32 = (int)&v30->indices[(unsigned __int16)v31]; /*0x738305*/
            do /*0x738337*/
            {
              v33 = *(unsigned __int16 *)(v32 - 2); /*0x738308*/
              v32 -= 2; /*0x738311*/
              v34 = &self->member.super.super.m_pkNormal[v33]; /*0x738317*/
              v31 += 0xFFFF; /*0x73831a*/
              v34->x = v16 + v34->x; /*0x738325*/
              v34->y = v17 + v34->y; /*0x73832c*/
              v34->z = v34->z + v18; /*0x738334*/
            }
            while ( (_WORD)v31 ); /*0x738337*/
          }
          v35 = &self->member.m_pkSharedNormals[v45]; /*0x738340*/
          v36 = v35->count; /*0x738343*/
          if ( (_WORD)v36 ) /*0x73834c*/
          {
            v37 = (int)&v35->indices[(unsigned __int16)v36]; /*0x738351*/
            do /*0x738383*/
            {
              v38 = *(unsigned __int16 *)(v37 - 2); /*0x738354*/
              v37 -= 2; /*0x73835b*/
              v39 = &self->member.super.super.m_pkNormal[v38]; /*0x738361*/
              v36 += 0xFFFF; /*0x738364*/
              v39->x = v39->x + v16; /*0x738371*/
              v39->y = v17 + v39->y; /*0x738378*/
              v39->z = v39->z + v18; /*0x738380*/
            }
            while ( (_WORD)v36 ); /*0x738383*/
          }
        }
      }
      if ( !--v41 ) /*0x738390*/
        break; /*0x738390*/
      m_pusTriList = v42; /*0x738141*/
    }
  }
  v40 = self->__vftable->super.GetNumVertices((NiGeometryData *)self); /*0x7383a1*/
  NiPoint3_NormalizeStridedArray(&self->member.super.super.m_pkNormal->x, v40, 0xC); /*0x7383ab*/
  self->member.super.super.m_usDirtyFlags |= 2u; /*0x7383b3*/
}
