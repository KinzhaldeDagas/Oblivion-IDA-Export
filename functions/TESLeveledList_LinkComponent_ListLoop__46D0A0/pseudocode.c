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

  v7 = *edi0;
  if ( !*edi0 )
    JUMPOUT(0x46D19A);
  ArgList = *(_DWORD *)(v7 + 4);
  TESForm_ResolveFormID(&ArgList, a2);
  v8 = TESForm_LookupByFormID(ArgList);
  *(_DWORD *)(v7 + 4) = v8;
  if ( !v8 )
  {
    v10 = (unsigned int *)edi0[1];
    if ( v10 )
    {
      edi0[1] = v10[1];
      *edi0 = *v10;
      FormHeapFree((unsigned int)v10);
    }
    else
    {
      *edi0 = 0;
    }
    FormHeapFree(v7);
    if ( a1 )
    {
      if ( !byte_B333F4
        && (byte_B333F4 = 1, v11 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0xD4))(a1),
                             byte_B333F4 = 0,
                             v11)
        && strlen(v11) )
      {
        v12 = (const char *)(*(int (__thiscall **)(_DWORD *))(*a1 + 0xD4))(a1);
        PrintError("Unable to find Leveled Object Form (%08X) for owner object \"%s\".", ArgList, v12);
      }
      else
      {
        PrintError("Unable to find Leveled Object Form (%08X) for owner object (%08X).", ArgList, a1[3]);
      }
    }
    else
    {
      PrintError("Unable to find Leveled Object Form (%08X) for unknown owner.", ArgList);
    }
    JUMPOUT(0x46D192);
  }
  return TESLeveledList_LinkComponent_::ListLoop_next(a3);
}
