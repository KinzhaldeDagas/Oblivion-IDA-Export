// Returns save-game payload size for the fixed 0x34-byte TESClass DATA block plus length-prefixed name and icon strings.
UInt32 __thiscall TESClass_GetSaveGameSize(TESClass *this)
{
  char *m_data; // eax
  char *v2; // ecx
  int v3; // eax

  m_data = this->members.fullName.name.m_data; /*0x51c361*/
  if ( !m_data ) /*0x51c366*/
    m_data = EmptyString; /*0x51c368*/
  v2 = this->members.texture.path.m_data; /*0x51c37a*/
  v3 = (unsigned __int16)(strlen(m_data) + 0x35) + 1; /*0x51c385*/
  if ( !v2 ) /*0x51c38a*/
    v2 = EmptyString; /*0x51c38c*/
  return strlen(v2) + v3; /*0x51c3a3*/
}
