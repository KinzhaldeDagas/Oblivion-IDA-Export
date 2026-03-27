int *__cdecl _errno()
{
  int v0; // eax

  v0 = _getptd_noexit();
  if ( v0 )
    return (int *)(v0 + 8);
  else
    return (int *)&unk_B30D28;
}
