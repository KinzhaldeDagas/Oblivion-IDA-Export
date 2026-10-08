int __userpurge SaveLoad_SaveCreatedObjects_::CountLoop_Body@<eax>(
        UInt32 *a1@<edi>,
        _DWORD *a2@<ebx>,
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

  v16 = TESForm_LookupByFormID(*a1); /*0x45de53*/
  v17 = v16; /*0x45de58*/
  if ( !v16 ) /*0x45de5f*/
    return SaveLoad_SaveCreatedObjects_::CountLoop_Next( /*0x45de5f*/
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
  v18 = OblivionDynamicCast( /*0x45de84*/
          v16,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
          0);
  v19 = OblivionDynamicCast( /*0x45de9a*/
          v17,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &SpellItem `RTTI Type Descriptor',
          0);
  v20 = OblivionDynamicCast( /*0x45de9c*/
          v17,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0);
  if ( !v20 ) /*0x45dea6*/
    goto LABEL_6; /*0x45dea6*/
  v21 = v20[1]; /*0x45dea8*/
  if ( v21 ) /*0x45dead*/
  {
    if ( TESDataHandler_IsFormIDCreated_(*(_DWORD *)(v21 + 0xC)) ) /*0x45deb9*/
      ++a6; /*0x45dec2*/
LABEL_6:
    if ( v18 || v19 ) /*0x45decd*/
      return SaveLoad_SaveCreatedObjects_::CountLoop_Next_( /*0x45ded0*/
               (int)a1,
               a3,
               a4,
               a5,
               a6 + 1,
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
  }
  return SaveLoad_SaveCreatedObjects_::CountLoop_Next_(
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
}
