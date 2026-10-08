bool __stdcall TESDescription_CompareTo(void *a1)
{
  void *v1; // eax
  bool result; // al
  char *m_data; // edx
  unsigned __int16 v4; // bp
  unsigned int v5; // esi
  unsigned int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // edx
  const char *v9; // ecx
  int v10; // eax

  v1 = OblivionDynamicCast( /*0x46a4f3*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESDescription `RTTI Type Descriptor',
         0);
  if ( !v1 ) /*0x46a4fd*/
    return 1; /*0x46a4ff*/
  m_data = MEMORY[0xB33C08].m_data; /*0x46a504*/
  v4 = word_B33C0C; /*0x46a50c*/
  if ( word_B33C0C == 0xFFFF ) /*0x46a51a*/
    v5 = strlen(m_data); /*0x46a51e*/
  else
    v5 = v4; /*0x46a52e*/
  result = 0; /*0x46a5e1*/
  if ( v5 || (v4 != 0xFFFF ? (v6 = v4) : (v6 = strlen(m_data)), v6) )
  {
    if ( v4 == 0xFFFF ) /*0x46a55e*/
    {
      v7 = strlen(m_data); /*0x46a562*/
      v8 = strlen(m_data); /*0x46a570*/
    }
    else
    {
      v7 = v4; /*0x46a580*/
      v8 = v4; /*0x46a583*/
    }
    if ( v7 != v8 ) /*0x46a587*/
      return 1; /*0x46a587*/
    v9 = (const char *)(*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v1 + 0x10))(v1, 0, 0x43534544); /*0x46a599*/
    if ( v9 && MEMORY[0xB33C08].m_data ) /*0x46a59f*/
      v10 = strcmp(MEMORY[0xB33C08].m_data, v9); /*0x46a5ac*/
    else
      v10 = 2 * (v9 == 0) - 1; /*0x46a5d6*/
    if ( v10 ) /*0x46a5dc*/
      return 1; /*0x46a553*/
  }
  return result; /*0x46a501*/
}
