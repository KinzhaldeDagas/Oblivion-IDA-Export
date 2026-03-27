void __thiscall sub_75EDA0(NiTriBasedGeomData *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  int y_low; // eax
  int v5; // ebx
  int m_pkColor; // eax
  void *m_pkTexture; // ecx

  v2 = arg0;
  sub_700750(this, (int)arg0);
  NiTMap_GetAt(*v2, (int)this, &arg0);
  y_low = LODWORD(this->members.super.m_kBound.Center.y);
  v5 = (int)arg0;
  if ( y_low )
  {
    if ( NiTMap_GetAt(*v2, y_low, &arg0) )
      *(_DWORD *)(v5 + 0x10) = arg0;
    else
      *(float *)(v5 + 0x10) = this->members.super.m_kBound.Center.y;
  }
  m_pkColor = (int)this->members.super.m_pkColor;
  if ( m_pkColor )
  {
    if ( NiTMap_GetAt(*v2, m_pkColor, &arg0) )
      *(_DWORD *)(v5 + 0x24) = arg0;
    else
      *(_DWORD *)(v5 + 0x24) = this->members.super.m_pkColor;
  }
  m_pkTexture = this->members.super.m_pkTexture;
  if ( m_pkTexture )
    (*(void (__thiscall **)(void *, _DWORD **))(*(_DWORD *)m_pkTexture + 0x38))(m_pkTexture, v2);
}
