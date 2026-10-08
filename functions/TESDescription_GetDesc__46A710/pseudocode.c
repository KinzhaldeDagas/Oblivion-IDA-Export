CHAR *__thiscall TESDescription_GetDesc(void *this, TESForm *a2, int a3)
{
  TESForm *v4; // eax
  CHAR *result; // eax

  if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x184) ) /*0x46a722*/
  {
    v4 = a2; /*0x46a72b*/
    if ( !a2 ) /*0x46a731*/
      v4 = (TESForm *)OblivionDynamicCast( /*0x46a740*/
                        this,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESDescription `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                        0);
    TESDescription_LoadToCache((char **)this, v4, a3); /*0x46a750*/
  }
  result = MEMORY[0xB33C08].m_data; /*0x46a755*/
  if ( !MEMORY[0xB33C08].m_data ) /*0x46a755*/
    return EmptyString; /*0x46a75f*/
  return result; /*0x46a75c*/
}
