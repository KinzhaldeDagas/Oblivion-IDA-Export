int __cdecl TESForm_GetFormTypeFromChunkType(int a1)
{
  int result; // eax
  int *v2; // ecx

  if ( a1 == TESForm_Static_CacheChunkType )
    return TESForm_Static_CacheFormType;
  result = 0;
  v2 = dword_B05E08;
  while ( *v2 != a1 )
  {
    v2 += 3;
    ++result;
    if ( (int)v2 >= (int)&dword_B06144 )
      return 0;
  }
  TESForm_Static_CacheFormType = result;
  TESForm_Static_CacheChunkType = a1;
  return result;
}
