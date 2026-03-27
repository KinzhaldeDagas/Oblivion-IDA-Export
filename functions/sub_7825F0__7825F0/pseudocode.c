UInt32 __cdecl sub_7825F0(char **a1, rsize_t SizeInBytes)
{
  unsigned int v2; // edi
  UInt32 v3; // ebx

  if ( HIDWORD(SizeInBytes) && *(_BYTE *)HIDWORD(SizeInBytes) )
  {
    v2 = strlen((const char *)HIDWORD(SizeInBytes)) + 1;
    if ( *a1 )
    {
      v3 = SizeInBytes;
      if ( (unsigned int)SizeInBytes > v2 )
      {
LABEL_7:
        strcpy_s(*a1, v3, (const char *)HIDWORD(SizeInBytes));
        return v3;
      }
      FormHeapFree((unsigned int)*a1);
      *a1 = 0;
    }
    *a1 = (char *)FormHeapAlloc(v2);
    v3 = v2;
    goto LABEL_7;
  }
  FormHeapFree((unsigned int)*a1);
  *a1 = 0;
  return 0;
}
