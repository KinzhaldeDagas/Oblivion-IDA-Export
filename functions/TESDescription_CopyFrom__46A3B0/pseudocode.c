_DWORD *__thiscall TESDescription_CopyFrom(_DWORD *this, void *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  const char *v5; // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESDescription `RTTI Type Descriptor',
             0);
  v4 = result;
  if ( result )
  {
    v5 = (const char *)(*(int (__thiscall **)(_DWORD *, _DWORD, int))(*result + 0x10))(result, 0, 0x43534544);
    result = (_DWORD *)BSStringT_Set(&TESDescription_CachedDesc, v5, 0);
    *(this + 1) = v4[1];
  }
  return result;
}
