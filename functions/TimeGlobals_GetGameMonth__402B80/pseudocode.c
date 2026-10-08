signed int __thiscall TimeGlobals_GetGameMonth(_DWORD *this)
{
  int v1; // eax

  v1 = *(this + 1); /*0x402b80*/
  if ( v1 ) /*0x402b85*/
    return (char)Double_To_SInt32(*(float *)(v1 + 0x24)); /*0x402b8f*/
  else
    return 7; /*0x402b93*/
}
