_WORD *__cdecl sub_92A630(_WORD *a1)
{
  _WORD *result; // eax

  if ( a1 ) /*0x92a637*/
  {
    result = sub_929DD0(a1, 1); /*0x92a641*/
    *(_DWORD *)a1 = &off_AA1AF4; /*0x92a646*/
  }
  return result; /*0x92a64c*/
}
