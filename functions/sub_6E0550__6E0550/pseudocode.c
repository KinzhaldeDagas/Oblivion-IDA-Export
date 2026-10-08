void __thiscall sub_6E0550(NiTriBasedGeomData *this, _DWORD **a2)
{
  _DWORD **v2; // edi
  int v4; // eax
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = a2; /*0x6e0553*/
  sub_715E40(this, (int)a2); /*0x6e055a*/
  NiTMap_GetAt(*v2, (int)this, &v5); /*0x6e0567*/
  v4 = *(_DWORD *)&this->members.m_usTriangles; /*0x6e056c*/
  if ( v4 ) /*0x6e0571*/
  {
    if ( NiTMap_GetAt(*v2, v4, &a2) ) /*0x6e057b*/
      *(_DWORD *)(v5 + 0x40) = a2; /*0x6e059c*/
    else
      *(_DWORD *)(v5 + 0x40) = *(_DWORD *)&this->members.m_usTriangles; /*0x6e058c*/
  }
}
