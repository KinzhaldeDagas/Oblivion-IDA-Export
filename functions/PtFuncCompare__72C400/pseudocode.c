int __cdecl PtFuncCompare(_WORD *a1, _WORD *a2)
{
  if ( *a2 <= *a1 ) /*0x72c411*/
    return *a2 < *a1; /*0x72c419*/
  else
    return 0xFFFFFFFF; /*0x72c413*/
}
