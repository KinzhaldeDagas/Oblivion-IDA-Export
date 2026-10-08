unsigned int *__cdecl __doserrno()
{
  DWORD *v0; // eax

  v0 = _getptd_noexit(); /*0x98541e*/
  if ( v0 ) /*0x985425*/
    return v0 + 3; /*0x98542d*/
  else
    return (unsigned int *)&unk_B30D2C; /*0x985427*/
}
