ArchiveFile *__cdecl sub_42EBC0(int a1, int a2, int a3, ArchiveFile *ArgList)
{
  bool v5; // bl
  volatile LONG *v6; // esi
  ArchiveFile *FileByEntry; // edi
  bool v9; // [esp+18h] [ebp+8h]

  v5 = *(int *)(a2 + 0xC) < 0;
  v6 = (volatile LONG *)*(&FirstLoadedArchiveByType + 8 * v5 + v5 + a1);
  if ( !v6 )
    return 0;
  InterlockedIncrement(v6 + 0x6A);
  v9 = *(int *)(a2 + 0xC) < 0;
  if ( v5 == *(int *)(a2 + 0xC) < 0 )
  {
LABEL_5:
    FileByEntry = Archive_GetFileByEntry((int)v6, a2, a3, ArgList);
    Arcghive_CheckDelete(v6);
    return FileByEntry;
  }
  Arcghive_CheckDelete(v6);
  v6 = (volatile LONG *)*(&FirstLoadedArchiveByType + 8 * v9 + v9 + a1);
  if ( v6 )
  {
    InterlockedIncrement(v6 + 0x6A);
    goto LABEL_5;
  }
  return 0;
}
