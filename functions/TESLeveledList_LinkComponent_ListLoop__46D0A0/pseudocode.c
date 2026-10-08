int __userpurge TESLeveledList_LinkComponent_::ListLoop@<eax>(
        _DWORD *a1@<ebp>,
        unsigned int *edi0@<edi>,
        int a3,
        int a4,
        Data *a2,
        int a6,
        UInt32 ArgList)
{
  unsigned int v7; // esi
  TESForm *v8; // eax
  unsigned int *v10; // eax
  const char *v11; // eax
  const char *v12; // eax

  v7 = *edi0; /*0x46d0a0*/
  if ( !*edi0 ) /*0x46d0a4*/
    JUMPOUT(0x46D19A); /*0x46d19a*/
  ArgList = *(_DWORD *)(v7 + 4); /*0x46d0b7*/
  TESForm_ResolveFormID(&ArgList, a2);          // 3DTheft decode 2026-05-14: TESLeveledList link resolves each stored list entry FormID to a TESForm pointer in ListData.form at +0x04. /*0x46d0bb*/
  v8 = TESForm_LookupByFormID(ArgList); /*0x46d0c5*/
  *(_DWORD *)(v7 + 4) = v8; /*0x46d0cf*/
  if ( !v8 ) /*0x46d0d2*/
  {
    v10 = (unsigned int *)edi0[1]; /*0x46d0d8*/
    if ( v10 ) /*0x46d0dd*/
    {
      edi0[1] = v10[1]; /*0x46d0e2*/
      *edi0 = *v10; /*0x46d0e8*/
      FormHeapFree((unsigned int)v10); /*0x46d0ea*/
    }
    else
    {
      *edi0 = 0; /*0x46d0f4*/
    }
    FormHeapFree(v7); /*0x46d0fb*/
    if ( a1 ) /*0x46d105*/
    {
      if ( !unk_B333F4 /*0x46d12f*/
        && (unk_B333F4 = 1, v11 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0xD4))(a1), unk_B333F4 = 0, v11)
        && strlen(v11) )
      {
        v12 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0xD4))(a1); /*0x46d14c*/
        PrintError("Unable to find Leveled Object Form (%08X) for owner object \"%s\".", ArgList, v12); /*0x46d159*/
      }
      else
      {
        PrintError("Unable to find Leveled Object Form (%08X) for owner object (%08X).", ArgList, a1[3]); /*0x46d171*/
      }
    }
    else
    {
      PrintError("Unable to find Leveled Object Form (%08X) for unknown owner.", ArgList); /*0x46d185*/
    }
    JUMPOUT(0x46D192); /*0x46d192*/
  }
  return TESLeveledList_LinkComponent_::ListLoop_next(a1, (int)edi0, a3, a4, a2, a6, ArgList);
}
