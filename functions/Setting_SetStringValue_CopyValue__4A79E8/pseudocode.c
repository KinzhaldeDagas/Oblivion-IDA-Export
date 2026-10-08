int __userpurge Setting_SetStringValue_::CopyValue@<eax>(
        char *a1@<eax>,
        int a2@<edx>,
        int a3@<ebx>,
        int a4@<ebp>,
        _BYTE *a5@<esi>,
        int a6,
        int a7,
        int a8,
        _DWORD *a9)
{
  char v9; // cl

  do /*0x4a79f2*/
  {
    v9 = *a1; /*0x4a79e8*/
    a1[a2] = *a1; /*0x4a79ea*/
    ++a1; /*0x4a79ed*/
  }
  while ( v9 ); /*0x4a79f2*/
  *a9 = a4; /*0x4a79fa*/
  if ( !a3 ) /*0x4a79fc*/
    JUMPOUT(0x4A7A28); /*0x4a7a28*/
  return Setting_SetStringValue_::CopyName(a5, (char *)a9[1], (int)a9, a5, a6);
}
