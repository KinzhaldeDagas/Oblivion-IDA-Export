void __thiscall sub_716460(NiTriBasedGeomData *this, _DWORD **arg0)
{
  _DWORD **v2; // ebx
  NiPoint3 *m_pkVertex; // eax
  _DWORD **v5; // ebp
  float x; // edx
  MEF_U32PointerMapLayout32 *p_m_usVertices; // edi
  unsigned int v8; // eax
  float y; // esi
  MEF_U32PointerMapEntry32 **buckets; // ecx
  _DWORD **v11; // eax
  unsigned int v12; // esi
  unsigned int keyOut; // [esp+Ch] [ebp-Ch] BYREF
  void *valueOut; // [esp+10h] [ebp-8h] BYREF
  int v15; // [esp+14h] [ebp-4h] BYREF

  v2 = arg0; /*0x716464*/
  sub_700750(this, (int)arg0); /*0x71646d*/
  NiTMap_GetAt(*v2, (int)this, &arg0); /*0x71647a*/
  m_pkVertex = this->members.super.m_pkVertex; /*0x71647f*/
  v5 = arg0; /*0x716484*/
  if ( m_pkVertex ) /*0x716488*/
  {
    NiTMap_GetAt(*v2, (int)m_pkVertex, &arg0); /*0x716492*/
    v5[7] = arg0; /*0x71649b*/
  }
  if ( LODWORD(this->members.super.m_kBound.Center.z) ) /*0x71649e*/
  {
    x = this->members.super.m_kBound.Center.x; /*0x7164a4*/
    p_m_usVertices = (MEF_U32PointerMapLayout32 *)&this->members.super.m_usVertices; /*0x7164a8*/
    v8 = 0; /*0x7164ab*/
    if ( x == 0.0 ) /*0x7164af*/
    {
LABEL_8:
      v11 = 0; /*0x7164c5*/
    }
    else
    {
      y = this->members.super.m_kBound.Center.y; /*0x7164b1*/
      buckets = p_m_usVertices->buckets; /*0x7164b4*/
      while ( !*buckets ) /*0x7164b9*/
      {
        ++v8; /*0x7164bb*/
        ++buckets; /*0x7164be*/
        if ( v8 >= LODWORD(x) ) /*0x7164c3*/
          goto LABEL_8; /*0x7164c3*/
      }
      v11 = *(_DWORD ***)(LODWORD(y) + 4 * v8); /*0x716528*/
    }
    arg0 = v11; /*0x7164c9*/
    while ( arg0 ) /*0x7164cd*/
    {
      NiTMap_U32Pointer_GetNextEntry(p_m_usVertices, (MEF_U32PointerMapEntry32 **)&arg0, &keyOut, &valueOut); /*0x7164e1*/
      v12 = keyOut; /*0x7164e6*/
      if ( keyOut ) /*0x7164ec*/
      {
        if ( valueOut ) /*0x7164f4*/
        {
          if ( NiTMap_GetAt(*v2, (int)valueOut, &v15) ) /*0x7164fe*/
            ((void (__thiscall *)(_DWORD **, unsigned int, int))(*v5)[0x14])(v5, v12, v15); /*0x716515*/
        }
      }
    }
  }
}
