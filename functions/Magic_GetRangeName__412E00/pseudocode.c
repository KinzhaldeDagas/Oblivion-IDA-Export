int __cdecl Magic_GetRangeName(int a1)
{
  int v1; // eax

  v1 = (int)*(&Magic_RangeNameArray + a1);
  if ( v1 )
    return *(_DWORD *)v1;
  else
    return 0;
}
