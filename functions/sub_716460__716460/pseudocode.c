void __thiscall sub_716460(NiTriBasedGeomData *this, _DWORD **arg0)
{
  _DWORD **v2; // ebx
  int m_pkVertex; // eax
  _DWORD *v5; // ebp
  float x; // edx
  NiTMap_TESCELL *p_m_usVertices; // edi
  unsigned int v8; // eax
  float y; // esi
  NiTMap_Entry_TESCELL **m_buckets; // ecx
  int v11; // eax
  void *v12; // esi
  void *v13; // [esp+Ch] [ebp-Ch] BYREF
  TESObjectCELL *v14; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h] BYREF

  v2 = arg0;
  sub_700750(this, (int)arg0);
  NiTMap_GetAt(*v2, (int)this, &arg0);
  m_pkVertex = (int)this->members.super.m_pkVertex;
  v5 = arg0;
  if ( m_pkVertex )
  {
    NiTMap_GetAt(*v2, m_pkVertex, &arg0);
    v5[7] = arg0;
  }
  if ( LODWORD(this->members.super.m_kBound.Center.z) )
  {
    x = this->members.super.m_kBound.Center.x;
    p_m_usVertices = (NiTMap_TESCELL *)&this->members.super.m_usVertices;
    v8 = 0;
    if ( x == 0.0 )
    {
LABEL_8:
      v11 = 0;
    }
    else
    {
      y = this->members.super.m_kBound.Center.y;
      m_buckets = p_m_usVertices->m_buckets;
      while ( !*m_buckets )
      {
        ++v8;
        ++m_buckets;
        if ( v8 >= LODWORD(x) )
          goto LABEL_8;
      }
      v11 = *(_DWORD *)(LODWORD(y) + 4 * v8);
    }
    arg0 = (_DWORD **)v11;
    if ( v11 )
    {
      do
      {
        sub_452600(p_m_usVertices, (NiTMap_Entry_TESCELL **)&arg0, &v13, &v14);
        v12 = v13;
        if ( v13 )
        {
          if ( v14 )
          {
            if ( NiTMap_GetAt(*v2, (int)v14, &v15) )
              (*(void (__thiscall **)(_DWORD *, void *, int))(*v5 + 0x50))(v5, v12, v15);
          }
        }
      }
      while ( arg0 );
    }
  }
}
