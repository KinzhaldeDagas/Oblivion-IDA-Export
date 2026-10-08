int __cdecl TESScriptableForm_GetScriptForForm(void *a1)
{
  _DWORD *v1; // eax

  v1 = OblivionDynamicCast( /*0x469583*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESScriptableForm `RTTI Type Descriptor',
         0);
  if ( v1 ) /*0x46958d*/
    return v1[1]; /*0x46958f*/
  else
    return 0; /*0x469593*/
}
