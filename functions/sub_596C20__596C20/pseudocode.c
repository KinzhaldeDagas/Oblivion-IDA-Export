// Case-insensitive TESClass full-name comparator used to keep the playable class list sorted.
int __cdecl TESClass_CompareNameNoCase(TESClass *left, TESClass *right)
{
  char *m_data; // eax
  char *v3; // ecx

  m_data = right->members.fullName.name.m_data; /*0x596c24*/
  if ( !m_data ) /*0x596c29*/
    m_data = EmptyString; /*0x596c2b*/
  v3 = left->members.fullName.name.m_data; /*0x596c34*/
  if ( !v3 ) /*0x596c39*/
    v3 = EmptyString; /*0x596c3b*/
  return _mbsicmp((const unsigned __int8 *)v3, (const unsigned __int8 *)m_data);
}
