ArchiveFile *__cdecl sub_42EBC0(int a1, int a2, int a3, ArchiveFile *ArgList)
{
  bool v5; // bl
  volatile LONG *v6; // esi
  ArchiveFile *FileByEntry; // edi
  bool v9; // [esp+18h] [ebp+8h]

  v5 = *(int *)(a2 + 0xC) < 0; /*0x42ebd6*/
  v6 = (volatile LONG *)MEMORY[0xB338E8][8 * v5 + v5 + a1]; /*0x42ebe2*/
  if ( !v6 ) /*0x42ebeb*/
    return 0; /*0x42ec5d*/
  InterlockedIncrement(v6 + 0x6A); /*0x42ebf4*/
  v9 = *(int *)(a2 + 0xC) < 0; /*0x42ec04*/
  if ( v5 == *(int *)(a2 + 0xC) < 0 ) /*0x42ec08*/
  {
LABEL_5:
    FileByEntry = Archive_GetFileByEntry((int)v6, a2, a3, ArgList); /*0x42ec38*/
    Arcghive_CheckDelete(v6); /*0x42ec4e*/
    return FileByEntry; /*0x42ec59*/
  }
  Arcghive_CheckDelete(v6); /*0x42ec0c*/
  v6 = (volatile LONG *)MEMORY[0xB338E8][8 * v9 + v9 + a1]; /*0x42ec20*/
  if ( v6 ) /*0x42ec29*/
  {
    InterlockedIncrement(v6 + 0x6A); /*0x42ec32*/
    goto LABEL_5; /*0x42ec32*/
  }
  return 0; /*0x42ec55*/
}
