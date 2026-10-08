_DWORD *__thiscall MemoryPool_Free(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // edx
  unsigned int v4; // eax
  int v5; // ecx

  result = a2; /*0x402600*/
  if ( a2 ) /*0x402606*/
  {
    *a2 = 0; /*0x402608*/
    a2[1] = *(this + 0x11); /*0x402611*/
    v3 = (_DWORD *)*(this + 0x11); /*0x402614*/
    if ( v3 ) /*0x402619*/
      *v3 = a2; /*0x40261b*/
    ++*(this + 0x45); /*0x40261d*/
    *(this + 0x11) = a2; /*0x402624*/
    v4 = (unsigned int)a2 - *(this + 0x10); /*0x402627*/
    v5 = *(this + 0x42); /*0x40262a*/
    v4 >>= 0xC; /*0x402630*/
    --*(_WORD *)(v5 + 2 * v4); /*0x402633*/
    return (_DWORD *)(v5 + 2 * v4); /*0x402639*/
  }
  return result; /*0x40263c*/
}
