int __cdecl PtFuncCompare(_WORD *a1, _WORD *a2)
{
  if ( *a2 <= *a1 )
    return *a2 < *a1;
  else
    return 0xFFFFFFFF;
}
