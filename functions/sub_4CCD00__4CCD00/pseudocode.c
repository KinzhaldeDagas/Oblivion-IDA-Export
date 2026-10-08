bool __cdecl sub_4CCD00(int *a1)
{
  bool result; // al
  int v2; // ecx
  unsigned __int8 FormTypeFromChunkType; // al

  result = 0; /*0x4ccd04*/
  if ( a1 ) /*0x4ccd08*/
  {
    if ( *a1 == dword_B05E20 ) /*0x4ccd12*/
    {
      v2 = a1[3]; /*0x4ccd14*/
      if ( v2 == 6 || (unsigned int)(v2 - 8) <= 2 ) /*0x4ccd22*/
        return 1; /*0x4ccd24*/
    }
    else
    {
      FormTypeFromChunkType = TESForm_GetFormTypeFromChunkType(*a1); /*0x4ccd28*/
      return FormTypeFromChunkType >= 0x31u && (FormTypeFromChunkType <= 0x34u || FormTypeFromChunkType == 0x36); /*0x4ccd3c*/
    }
  }
  return result; /*0x4ccd26*/
}
