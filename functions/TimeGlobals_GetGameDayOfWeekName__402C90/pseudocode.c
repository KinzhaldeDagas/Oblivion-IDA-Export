const char *__thiscall TimeGlobals_GetGameDayOfWeekName(_DWORD *this)
{
  int v1; // eax
  double v2; // st7
  signed int v3; // edx
  int v4; // edx
  float v6; // [esp+0h] [ebp-Ch]

  v1 = *(this + 4); /*0x402c90*/
  if ( v1 ) /*0x402c98*/
    v2 = *(float *)(v1 + 0x24); /*0x402c9a*/
  else
    v2 = 1.0; /*0x402c9f*/
  v6 = v2; /*0x402ca1*/
  v3 = (unsigned int)(__int64)v6 % 7; /*0x402cca*/
  if ( v3 == 0xFFFFFFFF || v3 >= 7 ) /*0x402cd6*/
    return "Bad Day"; /*0x402cef*/
  v4 = (int)*(&off_B06FD4 + v3); /*0x402cd8*/
  if ( v4 ) /*0x402ce1*/
    return *(const char **)v4; /*0x402ce3*/
  else
    return 0; /*0x402ce9*/
}
