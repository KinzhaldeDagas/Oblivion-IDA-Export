bool __cdecl sub_4CCD00(int *a1)
{
  bool result; // al
  int v2; // ecx
  unsigned __int8 FormTypeFromChunkType; // al

  result = 0;
  if ( a1 )
  {
    if ( *a1 == dword_B05E20 )
    {
      v2 = a1[3];
      if ( v2 == 6 || (unsigned int)(v2 - 8) <= 2 )
        return 1;
    }
    else
    {
      FormTypeFromChunkType = TESForm_GetFormTypeFromChunkType(*a1);
      return FormTypeFromChunkType >= 0x31u && (FormTypeFromChunkType <= 0x34u || FormTypeFromChunkType == 0x36);
    }
  }
  return result;
}
