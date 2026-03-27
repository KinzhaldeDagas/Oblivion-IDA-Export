CHAR *__thiscall TESDescription_GetDesc(void *this, TESForm *a2, int a3)
{
  TESForm *v4; // eax
  CHAR *result; // eax

  if ( !*(_BYTE *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x184) )
  {
    v4 = a2;
    if ( !a2 )
      v4 = (TESForm *)OblivionDynamicCast(
                        this,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESDescription `RTTI Type Descriptor',
                        (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                        0);
    TESDescription_LoadToCache((char **)this, v4, a3);
  }
  result = TESDescription_CachedDesc.m_data;
  if ( !TESDescription_CachedDesc.m_data )
    return EmptyString;
  return result;
}
