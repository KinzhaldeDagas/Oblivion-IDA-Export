int __thiscall TimeGlobals_GetGameYear(void *this)
{
  double v1; // st7

  if ( *(_DWORD *)this ) /*0x402b40*/
    v1 = *(float *)(*(_DWORD *)this + 0x24); /*0x402b49*/
  else
    v1 = 427.0; /*0x402b4e*/
  return (__int64)(float)v1; /*0x402b79*/
}
