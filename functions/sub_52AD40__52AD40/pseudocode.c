int __thiscall sub_52AD40(char *this)
{
  unsigned int v2; // edi
  char *m_data; // [esp-4h] [ebp-24h]

  m_data = stru_B36300.m_data;
  dword_B362FC = 0;
  FormHeapFree((unsigned int)m_data);
  stru_B36300.m_data = 0;
  stru_B36300.m_bufLen = 0;
  stru_B36300.m_dataLen = 0;
  v2 = *((_DWORD *)this + 0x19);
  if ( v2 )
  {
    TESTexture::ClearComponentReferences(*((void **)this + 0x19));
    FormHeapFree(v2);
  }
  Script_StaticDestructor((TESForm *)(this + 0xC));
  return sub_56A7A0(this + 4);
}
