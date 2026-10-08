void __cdecl TESModel_LoadTextureHashSubrecord(void *a1, Data *a2)
{
  _DWORD *v2; // eax
  const char *v3; // [esp-8h] [ebp-Ch]

  if ( a1 ) /*0x46d947*/
  {
    if ( a2 ) /*0x46d950*/
    {
      v3 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x14))(a1); /*0x46d95b*/
      v2 = OblivionDynamicCast( /*0x46d96b*/
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESModel `RTTI Type Descriptor',
             (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
             0);
      TESModel_ReadAndReplaceTextureHashEntries((_BYTE *)a1 + 0x10, a2, v2, v3); /*0x46d978*/
    }
  }
}
