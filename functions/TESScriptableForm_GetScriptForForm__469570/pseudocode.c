int __cdecl TESScriptableForm_GetScriptForForm(void *a1)
{
  _DWORD *v1; // eax

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESScriptableForm `RTTI Type Descriptor',
         0);
  if ( v1 )
    return v1[1];
  else
    return 0;
}
