// TES4 authoritative: searches existing manifold entries for a candidate 0x30-byte contact with match error < 0.1; returns index or 0xFFFFFFFF.
unsigned int __thiscall hkpCharacterProxy_FindMatchingManifoldContact(float *this, __m128 *candidate)
{
  int v3; // ebp
  unsigned int result; // eax
  signed int v5; // esi
  __m128 *v6; // edi
  double matched; // st7
  float v8; // [esp+Ch] [ebp-8h]
  unsigned int v9; // [esp+10h] [ebp-4h]

  v3 = *((_DWORD *)this + 0x1E); /*0x8ac647*/
  result = 0xFFFFFFFF; /*0x8ac64b*/
  v5 = 0; /*0x8ac64e*/
  v9 = 0xFFFFFFFF; /*0x8ac652*/
  v8 = 0.1;                                     // Contact-match threshold is 0.1; entries above this are treated as new contacts. /*0x8ac656*/
  if ( v3 > 0 ) /*0x8ac65e*/
  {
    v6 = *((__m128 **)this + 0x1D); /*0x8ac661*/
    do /*0x8ac68e*/
    {
      matched = hkpCharacterProxy_ComputeContactMatchError(this, candidate, v6); /*0x8ac66c*/
      if ( matched < v8 ) /*0x8ac67a*/
      {
        v8 = matched; /*0x8ac67c*/
        v9 = v5; /*0x8ac680*/
      }
      ++v5; /*0x8ac688*/
      v6 += 3; /*0x8ac689*/
    }
    while ( v5 < v3 ); /*0x8ac68e*/
    return v9; /*0x8ac690*/
  }
  return result; /*0x8ac695*/
}
