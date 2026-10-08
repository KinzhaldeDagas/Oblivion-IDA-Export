int __thiscall sub_90D240(_DWORD *this)
{
  int v1; // edx
  int result; // eax
  int v3; // ecx

  v1 = *(this + 1); /*0x90d240*/
  for ( result = *(this + 7); v1; result += v3 ) /*0x90d248*/
  {
    v3 = *(_DWORD *)(v1 + 0x1C); /*0x90d250*/
    v1 = *(_DWORD *)(v1 + 4); /*0x90d253*/
  }
  return result; /*0x90d25c*/
}
