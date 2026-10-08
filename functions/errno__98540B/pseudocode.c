int *__cdecl _errno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit(); /*0x98540b*/
  if ( v0 ) /*0x985412*/
    return (int *)(v0 + 2); /*0x98541a*/
  else
    return (int *)&unk_B30D28; /*0x985414*/
}
