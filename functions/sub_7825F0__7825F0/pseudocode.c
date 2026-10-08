UInt32 __cdecl sub_7825F0(char **a1, rsize_t SizeInBytes)
{
  unsigned int v2; // edi
  UInt32 v3; // ebx

  if ( HIDWORD(SizeInBytes) && *(_BYTE *)HIDWORD(SizeInBytes) ) /*0x7825fa*/
  {
    v2 = strlen((const char *)HIDWORD(SizeInBytes)) + 1; /*0x782616*/
    if ( *a1 ) /*0x782619*/
    {
      v3 = SizeInBytes; /*0x78261f*/
      if ( (unsigned int)SizeInBytes > v2 ) /*0x782625*/
      {
LABEL_7:
        strcpy_s(*a1, v3, (const char *)HIDWORD(SizeInBytes)); /*0x782643*/
        return v3; /*0x782656*/
      }
      FormHeapFree((unsigned int)*a1); /*0x782628*/
      *a1 = 0; /*0x782630*/
    }
    *a1 = (char *)FormHeapAlloc(v2); /*0x78263f*/
    v3 = v2; /*0x782641*/
    goto LABEL_7; /*0x782641*/
  }
  FormHeapFree((unsigned int)*a1); /*0x78265e*/
  *a1 = 0; /*0x782666*/
  return 0; /*0x782654*/
}
