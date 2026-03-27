char __thiscall NiDX9Renderer::PackGeometryBuffers(
        NiDX9Renderer *this,
        NiGeometryBufferData *a2,
        NiTriShapeData *a3,
        _DWORD *a4,
        NiD3DShaderDeclaration *a5,
        UInt32 a6)
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
  UInt16 *m_pusTriList; // [esp+24h] [ebp-28h]
  UInt16 *v24; // [esp+2Ch] [ebp-20h]
  int Src; // [esp+30h] [ebp-1Ch]
  UInt16 v26; // [esp+34h] [ebp-18h]
  UInt16 m_usTriangles; // [esp+38h] [ebp-14h]
  unsigned __int16 m_uiTriListLength; // [esp+3Ch] [ebp-10h]
  void *v29; // [esp+40h] [ebp-Ch]
  UInt16 v30; // [esp+44h] [ebp-8h]
  UInt16 m_usVertices; // [esp+48h] [ebp-4h]
  char v32; // [esp+50h] [ebp+4h]
  unsigned int streamCount; // [esp+54h] [ebp+8h]

  if ( !a2 || !a3 )
    return 0;
  v8 = sub_777F10(a2);
  v32 = v8;
  if ( !(_BYTE)a6 && v8 && (a3->member.super.super.m_usDirtyFlags & 0xF000) == 0x4000 )
    return 1;
  v10 = 0;
  if ( a3->member.super.super.m_pkColor )
    v10 = 0x400000;
  if ( a3->member.super.super.m_pkNormal )
    v10 |= (unsigned int)&loc_800000;
  a2->Flags = v10 | ((a3->member.super.super.format & 0x3F) << 0x18);
  v30 = a3->__vftable->super.GetNumVertices((NiGeometryData *)a3);
  m_usVertices = a3->member.super.super.m_usVertices;
  m_pusTriList = 0;
  v24 = 0;
  v11 = a3->__vftable->super.super.GetType(a3);
  if ( v11 )
  {
    while ( v11 != (NiRTTI *)dword_B3FD2C )
    {
      v11 = v11->parent;
      if ( !v11 )
        goto LABEL_14;
    }
    v26 = a3->__vftable->GetNumTris((NiTriBasedGeomData *)a3);
    m_usTriangles = a3->member.super.m_usTriangles;
    m_pusTriList = a3->member.m_pusTriList;
    v24 = 0;
    m_uiTriListLength = 1;
    Src = 3 * m_usTriangles;
  }
  else
  {
LABEL_14:
    if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD0C, (NiObject *)a3) )
    {
      v26 = a3->__vftable->GetNumTris((NiTriBasedGeomData *)a3);
      v24 = a3->member.m_pusTriList;
      m_pusTriList = (UInt16 *)a3->member.unk4C;
      m_uiTriListLength = a3->member.m_uiTriListLength;
      m_usTriangles = a3->member.super.m_usTriangles;
      Src = m_usTriangles + 2 * m_uiTriListLength;
    }
  }
  if ( a5 )
    streamCount = a5->member.StreamCount;
  else
    streamCount = 1;
  v12 = a3->member.super.super.m_usDirtyFlags & 0xFFF;
  if ( a4 )
  {
    v29 = (void *)a4[6];
    if ( v29 != TESObjectREFR_GetNiNode((TESObjectREFR *)this->member.vertexBufferMgr) )
    {
      v12 |= 3u;
      a4[6] = TESObjectREFR_GetNiNode((TESObjectREFR *)this->member.vertexBufferMgr);
    }
  }
  if ( (a3->member.super.super.m_usDirtyFlags & 0xF000) == 0x8000 || (_BYTE)a6 )
    v12 = 0xFFF;
  if ( v32 )
  {
    if ( streamCount == a2->StreamCount )
      goto LABEL_33;
    sub_777F70(a2, streamCount);
  }
  else
  {
    GeometryGroup = a2->GeometryGroup;
    for ( i = 0; i < streamCount; ++i )
      GeometryGroup->vtbl->ReleaseChip(GeometryGroup, a2, i);
    sub_777F70(a2, streamCount);
    a2->BaseVertexIndex = 0;
  }
  v12 = 0xFFF;
LABEL_33:
  a2->VertCount = v30;
  a2->MaxVertCount = m_usVertices;
  a2->IndexArray = m_pusTriList;
  a2->MaxTriCount = m_usTriangles;
  a2->TriCount = v26;
  a2->ArrayLengths = v24;
  a2->NumArrays = m_uiTriListLength;
  if ( (v12 & 0xFFEF) != 0 )
  {
    v15 = 0;
    a6 = 0;
    if ( streamCount )
    {
      while ( 1 )
      {
        v16 = v15 >= a2->StreamCount ? 0 : a2->VBChip[v15];
        if ( (!a5
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
          return 0;
        }
        if ( ++a6 >= streamCount )
          break;
        v15 = a6;
      }
    }
  }
  if ( m_pusTriList && (v12 & 0x30) != 0 )
  {
    IB = a2->IB;
    v18 = a2->SoftwareVP != 0;
    a6 = a2->IBSize;
    v19 = sub_7781F0(
            (int)this->member.indexBufferMgr,
            a2,
            (int)a3,
            (int)m_pusTriList,
            (void *)Src,
            Src,
            (int)IB,
            &a6,
            1,
            v18 ? (void *)0x10 : 0);
    v20 = (IDirect3DIndexBuffer9 *)v19;
    if ( !v19 )
      return 0;
    if ( IB != (IDirect3DIndexBuffer9 *)v19 )
    {
      sub_777F40(a2);
      v21 = a6;
      a2->IB = v20;
      a2->IndexCount = Src;
      a2->IBSize = v21;
    }
  }
  a3->member.super.super.m_usDirtyFlags &= 0xF000u;
  return 1;
}
