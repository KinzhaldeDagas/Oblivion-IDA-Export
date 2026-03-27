int *sub_6844D0()
{
  unsigned int v0; // ecx
  int *result; // eax

LABEL_1:
  v0 = dword_B3C08C;
  result = (int *)dword_B3C090;
  while ( result || v0 )
  {
    FormHeapFree(v0);
    result = (int *)dword_B3C090;
    if ( dword_B3C090 )
    {
      dword_B3C090 = result[1];
      dword_B3C08C = *result;
      FormHeapFree((unsigned int)result);
      goto LABEL_1;
    }
    v0 = 0;
    dword_B3C08C = 0;
  }
  return result;
}
