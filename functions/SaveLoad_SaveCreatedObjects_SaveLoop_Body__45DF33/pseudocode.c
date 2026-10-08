int __userpurge SaveLoad_SaveCreatedObjects_::SaveLoop_Body@<eax>(
        _DWORD *a1@<ebx>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        int a12,
        int a13)
{
  int v13; // ebp
  TESForm *v14; // eax
  TESForm *v15; // edi
  void *v16; // esi
  void *v17; // eax
  int v19; // [esp+18h] [ebp+18h]

  v13 = *(_DWORD *)a6; /*0x45df37*/
  v19 = *(_DWORD *)a6; /*0x45df3a*/
  v14 = TESForm_LookupByFormID(*(_DWORD *)a6); /*0x45df3e*/
  v15 = v14; /*0x45df43*/
  if ( v14 /*0x45df83*/
    && ((v16 = OblivionDynamicCast(
                 v14,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                 0),
         v17 = OblivionDynamicCast(
                 v15,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &SpellItem `RTTI Type Descriptor',
                 0),
         v16)
     || v17) )
  {
    return SaveLoad_SaveCreatedObjects_::CheckForEnch(a1, v13, v15, a2, a3, a4, a5, a6, v19, a8, a9, a10, a11, a12, a13); /*0x45df84*/
  }
  else
  {
    return SaveLoad_SaveCreatedObjects_::FormLoop_Next(a2, a3, a4, a5, a6); /*0x45df4a*/
  }
}
