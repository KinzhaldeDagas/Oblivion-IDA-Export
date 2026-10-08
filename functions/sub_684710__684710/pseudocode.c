unsigned int sub_684710()
{
  unsigned int result; // eax
  int *v1; // ecx
  unsigned int v2; // esi

LABEL_1:
  result = dword_B3C094[0]; /*0x684711*/
  v1 = (int *)dword_B3C094[1]; /*0x684716*/
  while ( v1 || result ) /*0x684726*/
  {
    v2 = result; /*0x68472a*/
    if ( result ) /*0x68472c*/
    {
      Shared_NoOpVirtual_60D0A0((void *)(result + 4)); /*0x684731*/
      FormHeapFree(v2); /*0x684737*/
      v1 = (int *)dword_B3C094[1]; /*0x68473c*/
    }
    if ( v1 ) /*0x684747*/
    {
      dword_B3C094[1] = v1[1]; /*0x68474e*/
      dword_B3C094[0] = *v1; /*0x684757*/
      FormHeapFree((unsigned int)v1); /*0x68475d*/
      goto LABEL_1; /*0x684765*/
    }
    result = 0; /*0x684767*/
    dword_B3C094[0] = 0; /*0x684769*/
  }
  return result; /*0x684770*/
}
