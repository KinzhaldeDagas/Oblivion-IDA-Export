int __userpurge SaveLoad_SaveCreatedObjects_::CheckForEnch@<eax>(
        _DWORD *a1@<ebx>,
        int a2@<ebp>,
        _BYTE *a3@<edi>,
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
        int a16,
        int a17)
{
  _DWORD *v17; // eax
  int v18; // esi

  v17 = OblivionDynamicCast(
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  if ( !v17 )
    return SaveLoad_SaveCreatedObjects_::SaveLoop_SaveForm(
             a1,
             (unsigned __int8)a2,
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
             a16,
             a17);
  v18 = v17[1];
  if ( !v18 )
  {
    PrintError("Enchantable item %08X with no enchantment exists in the created base objects list.", a2);
    return SaveLoad_SaveCreatedObjects_::SaveLoop_Check(a4, a5, a6, a7, *(_DWORD *)(a8 + 4));
  }
  if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v18 + 0xC)) )
    return SaveLoad_SaveCreatedObjects_::SaveEnchantment_(a4);
  else
    return SaveLoad_SaveCreatedObjects_::SaveLoop_SaveForm(
             a1,
             (unsigned __int8)a2,
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
             a16,
             a17);
}
