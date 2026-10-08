double __thiscall TimeGlobals_GetGameHour(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 3); /*0x402bd1*/
  if ( v1 ) /*0x402bd6*/
    return *(float *)(v1 + 0x24); /*0x402bde*/
  else
    return (float)12.0; /*0x402bec*/
}
