int __userpurge Setting_SetStringValue_::CopyValue@<eax>(
        char *a1@<eax>,
        int a2@<edx>,
        int a3@<ebx>,
        int a4@<ebp>,
        int a5,
        int a6,
        int a7,
        _DWORD *a8)
{
  char v8; // cl

  do
  {
    v8 = *a1;
    a1[a2] = *a1;
    ++a1;
  }
  while ( v8 );
  *a8 = a4;
  if ( !a3 )
    JUMPOUT(0x4A7A28);
  return Setting_SetStringValue_::CopyName(a5);
}
