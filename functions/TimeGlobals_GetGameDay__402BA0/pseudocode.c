double __thiscall TimeGlobals_GetGameDay(_DWORD *this)
{
  int v1; // eax
  double result; // st7

  v1 = *(this + 2); /*0x402ba1*/
  if ( v1 ) /*0x402ba6*/
    result = *(float *)(v1 + 0x24); /*0x402bae*/
  else
    result = (float)17.0; /*0x402bc2*/
  Double_To_SInt32(result); /*0x402bb4*/
  return result;
}
