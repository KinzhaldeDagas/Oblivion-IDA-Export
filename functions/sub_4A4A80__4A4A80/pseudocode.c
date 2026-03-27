BSStringT *__thiscall sub_4A4A80(BSStringT *this)
{
  sub_4A34C0(this);
  this->m_data = (char *)&TESRegionDataMap::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_WORD *)this + 6) = 0;
  *((_WORD *)this + 7) = 0;
  BSStringT_Set(this + 1, "Default Region Name", 0);
  return this;
}
