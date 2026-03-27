void __cdecl sub_A184D0()
{
  FormHeapFree((unsigned int)TESDescription_CachedDesc.m_data);
  TESDescription_CachedDesc.m_data = 0;
  TESDescription_CachedDesc.m_bufLen = 0;
  TESDescription_CachedDesc.m_dataLen = 0;
}
