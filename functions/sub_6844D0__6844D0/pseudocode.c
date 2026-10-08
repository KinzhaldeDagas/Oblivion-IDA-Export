int *sub_6844D0()
{
  unsigned int v0; // ecx
  int *result; // eax

LABEL_1:
  v0 = unk_B3C08C; /*0x6844d0*/
  result = (int *)unk_B3C090; /*0x6844d6*/
  while ( result || v0 ) /*0x6844e6*/
  {
    FormHeapFree(v0); /*0x6844e9*/
    result = (int *)unk_B3C090; /*0x6844ee*/
    if ( unk_B3C090 ) /*0x6844ee*/
    {
      unk_B3C090 = result[1]; /*0x6844fd*/
      unk_B3C08C = *result; /*0x684506*/
      FormHeapFree((unsigned int)result); /*0x68450c*/
      goto LABEL_1; /*0x684514*/
    }
    v0 = 0; /*0x684516*/
    unk_B3C08C = 0; /*0x684518*/
  }
  return result; /*0x684520*/
}
