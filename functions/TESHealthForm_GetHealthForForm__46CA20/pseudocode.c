int __cdecl TESHealthForm_GetHealthForForm(void *a1)
{
  void *v1; // eax

  v1 = OblivionDynamicCast( /*0x46ca33*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESHealthForm `RTTI Type Descriptor',
         0);
  if ( v1 ) /*0x46ca3d*/
    return (*(int (__thiscall **)(void *))(*(_DWORD *)v1 + 0x10))(v1); /*0x46ca46*/
  else
    return 0; /*0x46ca48*/
}
