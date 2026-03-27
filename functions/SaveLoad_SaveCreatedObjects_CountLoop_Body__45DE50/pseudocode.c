int __userpurge SaveLoad_SaveCreatedObjects_::CountLoop_Body@<eax>(
        UInt32 *a1@<edi>,
        int a2@<ebx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  TESForm *v16; // eax
  TESForm *v17; // esi
  void *v18; // ebp
  void *v19; // ebx
  _DWORD *v20; // eax
  int v21; // eax

  v16 = TESForm_LookupByFormID(*a1);
  v17 = v16;
  if ( !v16 )
    return SaveLoad_SaveCreatedObjects_::CountLoop_Next(
             a2,
             (int)a1,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16);
  v18 = OblivionDynamicCast(
          v16,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  v19 = OblivionDynamicCast(
          v17,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &SpellItem `RTTI Type Descriptor',
          0);
  v20 = OblivionDynamicCast(
          v17,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  if ( !v20 )
    goto LABEL_6;
  v21 = v20[1];
  if ( v21 )
  {
    if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v21 + 0xC)) )
      ++a6;
LABEL_6:
    if ( v18 || v19 )
      return SaveLoad_SaveCreatedObjects_::CountLoop_Next_(a3, a4, a5, a6 + 1, a7);
  }
  return SaveLoad_SaveCreatedObjects_::CountLoop_Next_(a3, a4, a5, a6, a7);
}
