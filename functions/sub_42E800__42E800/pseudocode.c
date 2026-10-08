char __cdecl sub_42E800(char *Str1)
{
  char *v1; // esi
  int *v2; // edi
  int v3; // esi
  unsigned int v4; // ebx
  int v6; // eax
  size_t v7; // [esp-4h] [ebp-2Ch]
  size_t v8; // [esp-4h] [ebp-2Ch]
  unsigned int v9; // [esp+10h] [ebp-18h] BYREF
  signed int v10; // [esp+14h] [ebp-14h] BYREF
  int v11[2]; // [esp+18h] [ebp-10h] BYREF
  int v12[2]; // [esp+20h] [ebp-8h] BYREF

  if ( !MEMORY[0xB338E0] ) /*0x42e813*/
    return 0; /*0x42e813*/
  v1 = Str1; /*0x42e819*/
  if ( *Str1 == 0x5C ) /*0x42e81f*/
    v1 = Str1 + 1; /*0x42e821*/
  LODWORD(v7) = 5; /*0x42e824*/
  if ( !strncmp(v1, "Data\\", v7) || (LODWORD(v8) = 5, !strncmp(v1, "data\\", v8)) ) /*0x42e840*/
    v1 += 5; /*0x42e84c*/
  HashFilePAth(v1, (int)v11, (int)v12); /*0x42e85a*/
  v2 = (int *)MEMORY[0xB338E0]; /*0x42e85f*/
  if ( !MEMORY[0xB338E0] ) /*0x42e86a*/
    return 0; /*0x42e8b2*/
  while ( 1 ) /*0x42e870*/
  {
    v3 = *v2; /*0x42e870*/
    if ( *v2 ) /*0x42e870*/
    {
      if ( Archive_ContainsFolder(v3, (unsigned int *)v11, (signed int *)&v9, 0) ) /*0x42e884*/
      {
        v4 = v9; /*0x42e88d*/
        if ( Archive_FolderContainFile(v3, v9, (unsigned int *)v12, &v10, 0, 0) ) /*0x42e8a2*/
          break; /*0x42e8a2*/
      }
    }
    v2 = (int *)v2[1]; /*0x42e8ab*/
    if ( !v2 ) /*0x42e8b0*/
      return 0; /*0x42e8b0*/
  }
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 0x178) + 0x10 * v4 + 0xC) + 0x10 * v10; /*0x42e8cb*/
  *(_DWORD *)(v6 + 0xC) &= 0x80000000; /*0x42e8d0*/
  return 1; /*0x42e8b4*/
}
