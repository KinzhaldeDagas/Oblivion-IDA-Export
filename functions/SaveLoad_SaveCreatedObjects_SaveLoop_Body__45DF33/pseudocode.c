int __userpurge SaveLoad_SaveCreatedObjects_::SaveLoop_Body@<eax>(
        _DWORD *a1@<ebx>,
        int a2,
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
        int a15)
{
  UInt32 v15; // ebp
  TESForm *v16; // eax
  TESForm *v17; // edi
  void *v18; // esi
  void *v19; // eax
  int v21; // [esp+18h] [ebp+18h]

  v15 = *(_DWORD *)a6;
  v21 = *(_DWORD *)a6;
  v16 = TESForm_LookupByFormID(*(_DWORD *)a6);
  v17 = v16;
  if ( v16
    && ((v18 = OblivionDynamicCast(
                 v16,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                 0),
         v19 = OblivionDynamicCast(
                 v17,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &SpellItem `RTTI Type Descriptor',
                 0),
         v18)
     || v19) )
  {
    return SaveLoad_SaveCreatedObjects_::CheckForEnch(
             a1,
             v15,
             v17,
             a2,
             a3,
             a4,
             a5,
             a6,
             v21,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  }
  else
  {
    return SaveLoad_SaveCreatedObjects_::FormLoop_Next(a2, a3, a4, a5, a6);
  }
}
