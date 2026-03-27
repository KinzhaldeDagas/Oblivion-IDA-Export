int __thiscall TESDescription_Initialize(TESDescription *this)
{
  FormHeapFree((unsigned int)TESDescription_CachedDesc.m_data);
  TESDescription_CachedDesc.m_data = 0;
  TESDescription_CachedDesc.m_bufLen = 0;
  TESDescription_CachedDesc.m_dataLen = 0;
  TESDescription_lastDescription = 0;
  this->formDiskOffset = 0;
  return 0;
}
