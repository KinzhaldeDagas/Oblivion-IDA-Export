unsigned int __cdecl sub_4D9890(void *a1)
{
  void *v1; // eax
  unsigned __int16 v2; // cx

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFullName `RTTI Type Descriptor',
         0);
  if ( !v1 )
    return 0;
  v2 = *((_WORD *)v1 + 4);
  if ( v2 == 0xFFFF )
    return strlen(*((const char **)v1 + 1));
  else
    return v2;
}
