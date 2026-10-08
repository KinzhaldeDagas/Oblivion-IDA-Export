void *__stdcall sub_447350(void *a1)
{
  void *v1; // eax
  char v2; // al
  int v4; // [esp-8h] [ebp-8h]

  v1 = a1; /*0x447350*/
  if ( a1 )
  {
    v4 = (int)a1; /*0x44735d*/
    a1 = 0; /*0x447363*/
    v2 = NiTMap_GetAt(&TESForm_FormIDMap, v4, &a1); /*0x44736b*/
    v1 = v2 != 0 ? a1 : 0;
  }
  return OblivionDynamicCast( /*0x44738f*/
           v1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &BirthSign `RTTI Type Descriptor',
           0);
}
