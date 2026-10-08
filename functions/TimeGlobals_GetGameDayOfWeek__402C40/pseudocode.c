unsigned int __thiscall TimeGlobals_GetGameDayOfWeek(_DWORD *this)
{
  int v1; // eax
  double v2; // st7
  float v4; // [esp+0h] [ebp-Ch]

  v1 = *(this + 4); /*0x402c40*/
  if ( v1 ) /*0x402c48*/
    v2 = *(float *)(v1 + 0x24); /*0x402c4a*/
  else
    v2 = 1.0; /*0x402c4f*/
  v4 = v2; /*0x402c51*/
  return (unsigned int)(__int64)v4 % 7; /*0x402c81*/
}
