int __cdecl TESForm_GetFormTypeFromChunkType(int a1)
{
  int result; // eax
  int *v2; // ecx

  if ( a1 == *(_DWORD *)&word_B33C0E[9] ) /*0x46af7a*/
    return *(_DWORD *)&word_B33C0E[7]; /*0x46af7c*/
  result = 0; /*0x46af82*/
  v2 = dword_B05E08; /*0x46af84*/
  while ( *v2 != a1 ) /*0x46af92*/
  {
    v2 += 3; /*0x46af94*/
    ++result; /*0x46af97*/
    if ( (int)v2 >= (int)&TESForm_FormIDMap.buckets ) /*0x46afa0*/
      return 0; /*0x46afa4*/
  }
  *(_DWORD *)&word_B33C0E[7] = result; /*0x46afa5*/
  *(_DWORD *)&word_B33C0E[9] = a1; /*0x46afaa*/
  return result; /*0x46af81*/
}
