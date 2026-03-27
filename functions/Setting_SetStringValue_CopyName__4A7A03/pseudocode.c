// positive sp value has been detected, the output may be wrong!
int __userpurge Setting_SetStringValue_::CopyName@<eax>(
        _BYTE *a1@<edx>,
        char *a2@<ecx>,
        int a3@<edi>,
        _BYTE *a4@<esi>,
        int a5)
{
  char v5; // al

  do
  {
    v5 = *a2;
    *a1++ = *a2++;
  }
  while ( v5 );
  *a4 = 0x53;
  if ( **(_BYTE **)(a3 + 4) == 0x53 )
    FormHeapFree(*(_DWORD *)(a3 + 4));
  *(_DWORD *)(a3 + 4) = a4;
  return a3;
}
