// Looks up a form by runtime FormID and dynamic-casts TESForm to TESTopic. Used here only for the HELLO and GOODBYE conversation roots.
TESTopic *__stdcall LookupTopicByFormID(UInt32 formID)
{
  void *v1; // eax
  char v2; // al
  UInt32 v4; // [esp-8h] [ebp-8h]

  v1 = (void *)formID; /*0x447440*/
  if ( formID )
  {
    v4 = formID; /*0x44744d*/
    formID = 0; /*0x447453*/
    v2 = NiTMap_GetAt(&TESForm_FormIDMap, v4, &formID); /*0x44745b*/
    v1 = v2 != 0 ? (void *)formID : 0;
  }
  return (TESTopic *)OblivionDynamicCast( /*0x44747f*/
                       v1,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESTopic `RTTI Type Descriptor',
                       0);
}
