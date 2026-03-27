_DWORD *__thiscall TESDescription_constr(_DWORD *this)
{
  *this = &TESDescription::`vftable';
  FormHeapFree((unsigned int)TESDescription_CachedDesc.m_data);
  TESDescription_CachedDesc.m_data = 0;
  TESDescription_CachedDesc.m_bufLen = 0;
  TESDescription_CachedDesc.m_dataLen = 0;
  TESDescription_lastDescription = 0;
  *(this + 1) = 0;
  return this;
}
