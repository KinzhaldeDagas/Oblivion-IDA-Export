void __thiscall sub_75EDA0(NiTriBasedGeomData *this, _DWORD **arg0)
{
  _DWORD **v2; // edi
  int y_low; // eax
  _DWORD **v5; // ebx
  NiColorAlpha *m_pkColor; // eax
  void *m_pkTexture; // ecx

  v2 = arg0; /*0x75eda3*/
  sub_700750(this, (int)arg0); /*0x75edaa*/
  NiTMap_GetAt(*v2, (int)this, &arg0); /*0x75edb7*/
  y_low = LODWORD(this->members.super.m_kBound.Center.y); /*0x75edbc*/
  v5 = arg0; /*0x75edc1*/
  if ( y_low ) /*0x75edc5*/
  {
    if ( NiTMap_GetAt(*v2, y_low, &arg0) ) /*0x75edcf*/
      v5[4] = arg0; /*0x75eddc*/
    else
      v5[4] = (_DWORD *)LODWORD(this->members.super.m_kBound.Center.y); /*0x75ede4*/
  }
  m_pkColor = this->members.super.m_pkColor; /*0x75ede7*/
  if ( m_pkColor ) /*0x75edec*/
  {
    if ( NiTMap_GetAt(*v2, (int)m_pkColor, &arg0) ) /*0x75edf6*/
      v5[9] = arg0; /*0x75ee03*/
    else
      v5[9] = this->members.super.m_pkColor; /*0x75ee0b*/
  }
  m_pkTexture = this->members.super.m_pkTexture; /*0x75ee0e*/
  if ( m_pkTexture ) /*0x75ee13*/
    (*(void (__thiscall **)(void *, _DWORD **))(*(_DWORD *)m_pkTexture + 0x38))(m_pkTexture, v2); /*0x75ee1b*/
}
