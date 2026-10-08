unsigned int __cdecl sub_4D9890(void *a1)
{
  void *v1; // eax
  unsigned __int16 v2; // cx

  v1 = OblivionDynamicCast( /*0x4d98a3*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v1 ) /*0x4d98ad*/
    return 0; /*0x4d98d0*/
  v2 = *((_WORD *)v1 + 4); /*0x4d98af*/
  if ( v2 == 0xFFFF ) /*0x4d98b8*/
    return strlen(*((const char **)v1 + 1)); /*0x4d98bd*/
  else
    return v2; /*0x4d98cc*/
}
