void *__stdcall TESDataHandler_LookupTESClassByFormID(void *a1)
{
  void *v1; // eax
  char v2; // al
  int v4; // [esp-8h] [ebp-8h]

  v1 = a1; /*0x4473a0*/
  if ( a1 )
  {
    v4 = (int)a1; /*0x4473ad*/
    a1 = 0; /*0x4473b3*/
    v2 = NiTMap_GetAt(&TESForm_FormIDMap, v4, &a1); /*0x4473bb*/
    v1 = v2 != 0 ? a1 : 0;
  }
  return OblivionDynamicCast( /*0x4473df*/
           v1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESClass `RTTI Type Descriptor',
           0);
}
