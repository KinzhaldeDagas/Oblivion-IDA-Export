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
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        int a15)
{
  _DWORD *v15; // eax
  int v16; // esi

  v15 = OblivionDynamicCast( /*0x45df98*/
          a3,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  if ( !v15 ) /*0x45dfa2*/
    return SaveLoad_SaveCreatedObjects_::SaveLoop_SaveForm( /*0x45dfa2*/
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             SHIDWORD(a11),
             a12,
             a13,
             a14,
             a15);
  v16 = v15[1]; /*0x45dfa8*/
  if ( !v16 ) /*0x45dfad*/
  {
    PrintError("Enchantable item %08X with no enchantment exists in the created base objects list.", a2); /*0x45dfb5*/
    return SaveLoad_SaveCreatedObjects_::SaveLoop_Check( /*0x45dfc8*/
             a1,
             a4,
             a5,
             a6,
             a7,
             *(_DWORD *)(a8 + 4),
             a9,
             a10,
             a11,
             SHIDWORD(a11),
             a12,
             a13,
             SHIDWORD(a13),
             a14,
             a15);
  }
  if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v16 + 0xC)) ) /*0x45dfd7*/
    return SaveLoad_SaveCreatedObjects_::SaveEnchantment_( /*0x45dfdf*/
             a1,
             a3,
             v16,
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
             SHIDWORD(a13),
             a14,
             a15);
  else
    return SaveLoad_SaveCreatedObjects_::SaveLoop_SaveForm( /*0x45dfa2*/
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             SHIDWORD(a11),
             a12,
             a13,
             a14,
             a15);
}
