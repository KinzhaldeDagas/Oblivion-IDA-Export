int sub_684710()
{
  int result; // eax
  int *v1; // ecx
  unsigned int v2; // esi

LABEL_1:
  result = dword_B3C094;
  v1 = (int *)dword_B3C098;
  while ( v1 || result )
  {
    v2 = result;
    if ( result )
    {
      TESTexture::ClearComponentReferences((void *)(result + 4));
      FormHeapFree(v2);
      v1 = (int *)dword_B3C098;
    }
    if ( v1 )
    {
      dword_B3C098 = v1[1];
      dword_B3C094 = *v1;
      FormHeapFree((unsigned int)v1);
      goto LABEL_1;
    }
    result = 0;
    dword_B3C094 = 0;
  }
  return result;
}
