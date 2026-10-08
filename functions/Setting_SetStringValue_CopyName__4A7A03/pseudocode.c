// positive sp value has been detected, the output may be wrong!
int __userpurge Setting_SetStringValue_::CopyName@<eax>(
        _BYTE *a1@<edx>,
        char *a2@<ecx>,
        int a3@<edi>,
        _BYTE *a4@<esi>,
        int a5)
{
  char v5; // al

  do /*0x4a7a0f*/
  {
    v5 = *a2; /*0x4a7a03*/
    *a1++ = *a2++; /*0x4a7a05*/
  }
  while ( v5 ); /*0x4a7a0f*/
  *a4 = 0x53; /*0x4a7a11*/
  if ( **(_BYTE **)(a3 + 4) == 0x53 ) /*0x4a7a1a*/
    FormHeapFree(*(_DWORD *)(a3 + 4)); /*0x4a7a1d*/
  *(_DWORD *)(a3 + 4) = a4; /*0x4a7a25*/
  return a3; /*0x4a7a2f*/
}
