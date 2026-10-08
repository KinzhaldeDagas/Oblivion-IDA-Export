// MoonSugarEffect decode: NiDX9Renderer::PackGeometryBuffers for non-skinned geometry. Validates/reuses BuffData when streams are live and not force-dirty; otherwise resizes streams, repacks vertices via NiD3DShaderDeclaration +0x6C or default packer, rebuilds IB through 0x7781F0, and clears low dirty flags.
// DX11 static-buffer audit 2026-10-01: force argument low byte0 + HasLiveStreams true + geometry-data dirtyFlags high nibble4000 returns1 before any pack/update work. Low12 dirty bits do not invalidate this particular early return. Other cases resize/repack or update descriptor/IB fields and need explicit preparation; a current buffer pointer alone is not proof that packing can be skipped.
// DX11 clean-descriptor audit 2026-10-01: with live streams, no skin, no forced pack, nonvolatile high flags and low dirty bits0, matching declaration stream count skips vertex/index upload but still updates buffer Flags, VertCount/MaxVertCount, TriCount/MaxTriCount, ArrayLengths/IndexArray and NumArrays. Concrete NiTriShapeData uses data+48 index pointer, null lengths and one array. NiTriStripsData uses data+48 lengths, data+4C indices and WORD+44 strip count. Selected declaration StreamCount is+20; null declaration implies1. Changed draw counts/array metadata require refreshing draw templates; correct bindings alone do not authorize replay.
char __thiscall NiDX9Renderer::PackGeometryBuffers(
        NiDX9Renderer *this,
        NiGeometryBufferData *a2,
        NiTriShapeData *a3,
        _DWORD *a4,
        NiD3DShaderDeclaration *a5,
        UInt32 IBSize)
{
  char v8; // al
  int v10; // ecx
  NiRTTI *v11; // eax
  int v12; // ebx
  NiGeometryGroup *GeometryGroup; // ebp
  UInt32 i; // ebx
  UInt32 v15; // eax
  NiVBChip *v16; // ebp
  IDirect3DIndexBuffer9 *IB; // ebp
  bool v18; // cf
  int v19; // eax
  IDirect3DIndexBuffer9 *v20; // ebx
  UInt32 v21; // ecx
  NiSharedNormalArrayEntry *m_pusTriList; // [esp+24h] [ebp-28h]
  UInt16 *v24; // [esp+2Ch] [ebp-20h]
  int Src; // [esp+30h] [ebp-1Ch]
  UInt16 v26; // [esp+34h] [ebp-18h]
  UInt16 m_usTriangles; // [esp+38h] [ebp-14h]
  unsigned __int16 m_uiTriListLength; // [esp+3Ch] [ebp-10h]
  int v29; // [esp+40h] [ebp-Ch]
  UInt16 v30; // [esp+44h] [ebp-8h]
  UInt16 m_usVertices; // [esp+48h] [ebp-4h]
  char v32; // [esp+50h] [ebp+4h]
  unsigned int streamCount; // [esp+54h] [ebp+8h]

  if ( !a2 || !a3 ) /*0x767b5e*/
    return 0; /*0x767e8d*/
  v8 = NiGeometryBufferData_HasLiveStreams(a2); /*0x767b66*/
  v32 = v8; /*0x767b6f*/
  if ( !(_BYTE)IBSize && v8 && (a3->member.super.super.m_usDirtyFlags & 0xF000) == 0x4000 ) /*0x767b85*/
    return 1; /*0x767b8f*/
  v10 = 0; /*0x767b9f*/
  if ( a3->member.super.super.m_pkColor ) /*0x767ba1*/
    v10 = 0x400000; /*0x767ba6*/
  if ( a3->member.super.super.m_pkNormal ) /*0x767b92*/
    v10 |= (unsigned int)&loc_800000; /*0x767baf*/
  a2->Flags = v10 | ((a3->member.super.super.format & 0x3F) << 0x18); /*0x767bba*/
  v30 = a3->__vftable->super.GetNumVertices((NiGeometryData *)a3); /*0x767bce*/
  m_usVertices = a3->member.super.super.m_usVertices; /*0x767bd2*/
  m_pusTriList = 0; /*0x767bdb*/
  v24 = 0; /*0x767bdf*/
  v11 = a3->__vftable->super.super.GetType(a3); /*0x767be3*/
  if ( v11 ) /*0x767be7*/
  {
    while ( v11 != &stru_B3FD2C ) /*0x767bf5*/
    {
      v11 = v11->parent; /*0x767bf7*/
      if ( !v11 ) /*0x767bfc*/
        goto LABEL_14; /*0x767bfc*/
    }
    v26 = a3->__vftable->GetNumTris((NiTriBasedGeomData *)a3); /*0x767c6b*/
    m_usTriangles = a3->member.super.m_usTriangles; /*0x767c73*/
    m_pusTriList = (NiSharedNormalArrayEntry *)a3->member.m_pusTriList; /*0x767c7d*/
    v24 = 0; /*0x767c81*/
    m_uiTriListLength = 1; /*0x767c85*/
    Src = 3 * m_usTriangles; /*0x767c8d*/
  }
  else
  {
LABEL_14:
    if ( NiRTTI::IsObjectOfRTTIType(&stru_B3FD0C, (NiObject *)a3) ) /*0x767c04*/
    {
      v26 = a3->__vftable->GetNumTris((NiTriBasedGeomData *)a3); /*0x767c23*/
      v24 = a3->member.m_pusTriList; /*0x767c2a*/
      m_pusTriList = a3->member.m_pkSharedNormals; /*0x767c32*/
      m_uiTriListLength = a3->member.m_uiTriListLength; /*0x767c39*/
      m_usTriangles = a3->member.super.m_usTriangles; /*0x767c40*/
      Src = m_usTriangles + 2 * m_uiTriListLength; /*0x767c47*/
    }
  }
  if ( a5 ) /*0x767c51*/
    streamCount = a5->member.StreamCount; /*0x767c56*/
  else
    streamCount = 1; /*0x767c93*/
  v12 = a3->member.super.super.m_usDirtyFlags & 0xFFF; /*0x767caa*/
  if ( a4 ) /*0x767cad*/
  {
    v29 = a4[6]; /*0x767cb6*/
    if ( v29 != Shared_GetDwordAtOffset3C(this->member.vertexBufferMgr) ) /*0x767cc9*/
    {
      v12 |= 3u; /*0x767cd5*/
      a4[6] = Shared_GetDwordAtOffset3C(this->member.vertexBufferMgr); /*0x767cdd*/
    }
  }
  if ( (a3->member.super.super.m_usDirtyFlags & 0xF000) == 0x8000 || (_BYTE)IBSize ) /*0x767cf5*/
    v12 = 0xFFF; /*0x767cf7*/
  if ( v32 ) /*0x767d01*/
  {
    if ( streamCount == a2->StreamCount ) /*0x767d0a*/
      goto LABEL_33; /*0x767d0a*/
    sub_777F70(a2, streamCount); /*0x767d0f*/
  }
  else
  {
    GeometryGroup = a2->GeometryGroup; /*0x767d16*/
    for ( i = 0; i < streamCount; ++i ) /*0x767d1f*/
      GeometryGroup->vtbl->ReleaseChip(GeometryGroup, a2, i); /*0x767d2b*/
    sub_777F70(a2, streamCount); /*0x767d3d*/
    a2->BaseVertexIndex = 0; /*0x767d42*/
  }
  v12 = 0xFFF; /*0x767d49*/
LABEL_33:
  a2->VertCount = v30; /*0x767d4e*/
  a2->MaxVertCount = m_usVertices; /*0x767d65*/
  a2->IndexArray = &m_pusTriList->count; /*0x767d6c*/
  a2->MaxTriCount = m_usTriangles; /*0x767d6f*/
  a2->TriCount = v26; /*0x767d7f*/
  a2->ArrayLengths = v24; /*0x767d86*/
  a2->NumArrays = m_uiTriListLength; /*0x767d89*/
  if ( (v12 & 0xFFEF) != 0 )
  {
    v15 = 0; /*0x767d8e*/
    IBSize = 0; /*0x767d94*/
    if ( streamCount )
    {
      while ( 1 )
      {
        v16 = v15 >= a2->StreamCount ? 0 : a2->VBChip[v15];
        if ( (!a5 /*0x767dee*/
           || !(*((int (__thiscall **)(NiD3DShaderDeclaration *, NiTriShapeData *, _DWORD *, _DWORD, int, NiVBChip *, UInt32, _DWORD))a5->__vftable
                + 0x1B))(
                 a5,
                 a3,
                 a4,
                 0,
                 v12,
                 v16,
                 v15,
                 0))
          && (streamCount != 1
           || !sub_776E90((char *)this->member.vertexBufferMgr, (int)a3, (NiGeometry *)a3, a4, v12, (int *)v16, 0)) )
        {
          return 0; /*0x767df5*/
        }
        if ( ++IBSize >= streamCount ) /*0x767e06*/
          break; /*0x767e06*/
        v15 = IBSize; /*0x767da0*/
      }
    }
  }
  if ( m_pusTriList && (v12 & 0x30) != 0 )
  {
    IB = a2->IB; /*0x767e17*/
    v18 = a2->SoftwareVP != 0; /*0x767e21*/
    IBSize = a2->IBSize; /*0x767e23*/
    v19 = NiDX9IndexBufferManager_PackBuffer(
            (int)this->member.indexBufferMgr,
            a2,
            (int)a3,
            (int)m_pusTriList,
            (void *)Src,
            Src,
            (int)IB,
            &IBSize,
            1,
            v18 ? (void *)0x10 : 0);
    v20 = (IDirect3DIndexBuffer9 *)v19; /*0x767e4b*/
    if ( !v19 ) /*0x767e4f*/
      return 0; /*0x767e5a*/
    if ( IB != (IDirect3DIndexBuffer9 *)v19 ) /*0x767e5f*/
    {
      sub_777F40(a2); /*0x767e63*/
      v21 = IBSize; /*0x767e6c*/
      a2->IB = v20; /*0x767e70*/
      a2->IndexCount = Src; /*0x767e73*/
      a2->IBSize = v21; /*0x767e76*/
    }
  }
  a3->member.super.super.m_usDirtyFlags &= 0xF000u; /*0x767e79*/
  return 1; /*0x767b87*/
}
