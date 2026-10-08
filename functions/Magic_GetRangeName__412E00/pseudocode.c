int __cdecl Magic_GetRangeName(int a1)
{
  int v1; // eax

  v1 = (int)*(&Magic_RangeNameArray + a1); /*0x412e04*/
  if ( v1 ) /*0x412e0d*/
    return *(_DWORD *)v1; /*0x412e0f*/
  else
    return 0; /*0x412e12*/
}
