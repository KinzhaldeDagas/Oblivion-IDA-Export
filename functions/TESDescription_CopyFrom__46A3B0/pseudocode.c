_DWORD *__thiscall TESDescription_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  const char *v5; // eax

  result = OblivionDynamicCast( /*0x46a3c7*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESDescription `RTTI Type Descriptor',
             0);
  v4 = result; /*0x46a3cc*/
  if ( result ) /*0x46a3d3*/
  {
    v5 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*result + 0x10))(result, 0, 0x43534544); /*0x46a3e5*/
    result = (_DWORD *)BSStringT_Set(&MEMORY[0xB33C08], v5, 0); /*0x46a3ed*/
    *(this + 1) = v4[1]; /*0x46a3f5*/
  }
  return result; /*0x46a3f8*/
}
