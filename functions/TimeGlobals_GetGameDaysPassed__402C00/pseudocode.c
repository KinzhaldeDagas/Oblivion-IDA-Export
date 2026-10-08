int __thiscall TimeGlobals_GetGameDaysPassed(_DWORD *this)
{
  int v1; // eax
  double v2; // st7

  v1 = *(this + 4); /*0x402c00*/
  if ( v1 ) /*0x402c08*/
    v2 = *(float *)(v1 + 0x24); /*0x402c0a*/
  else
    v2 = 1.0; /*0x402c0f*/
  return (__int64)(float)v2; /*0x402c36*/
}
