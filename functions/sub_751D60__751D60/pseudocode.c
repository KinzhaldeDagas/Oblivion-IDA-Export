bool __thiscall sub_751D60(NiTriBasedGeomData *this, int a2)
{
  return sub_752CD0(this, a2) /*0x751ddb*/
      && *(_WORD *)(a2 + 0x18) == LOWORD(this->members.super.m_kBound.Radius)
      && *(float *)&this->members.super.m_pkVertex == *(float *)(a2 + 0x1C)
      && *(_WORD *)(a2 + 0x20) == LOWORD(this->members.super.m_pkNormal)
      && *(_WORD *)(a2 + 0x22) == HIWORD(this->members.super.m_pkNormal)
      && *(float *)&this->members.super.m_pkColor == *(float *)(a2 + 0x24)
      && *(float *)&this->members.super.m_pkTexture == *(float *)(a2 + 0x28)
      && *(float *)&this->members.super.format == *(float *)(a2 + 0x2C)
      && *(float *)&this->members.super.m_ucKeepFlags == *(float *)(a2 + 0x30);
}
