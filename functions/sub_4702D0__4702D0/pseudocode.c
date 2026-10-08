CHAR *__cdecl sub_4702D0(void *a1, TESObjectREFR *a2)
{
  _DWORD *v2; // eax
  CHAR *result; // eax

  v2 = OblivionDynamicCast( /*0x4702e4*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESTexture `RTTI Type Descriptor',
         0);
  if ( v2 ) /*0x4702ee*/
    result = (CHAR *)v2[1]; /*0x470300*/
  else
    result = sub_469440(a1, a2); /*0x4702f6*/
  if ( !result ) /*0x470305*/
    return EmptyString; /*0x470307*/
  return result; /*0x47030c*/
}
