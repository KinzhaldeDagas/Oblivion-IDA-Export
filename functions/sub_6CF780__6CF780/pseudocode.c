// NiBlendAccumTransformInterpolator virtual transform update (+0x4C). One item uses the accumulation fast path. With multiple items, normalizes blend state, updates each nonzero-weight 0x18-byte item using either caller time or its per-item time +0x14, then evaluates the accumulated transform. Caches requested time at +0x08.
char __thiscall NiBlendAccumTransformInterpolator_Update(float *this, float a2, int a3, float *a4)
{
  char v5; // cl
  char result; // al
  unsigned __int8 v8; // bl
  int v9; // ecx
  unsigned __int8 i; // [esp+18h] [ebp-4h]
  float v11; // [esp+24h] [ebp+8h]

  v5 = *((_BYTE *)this + 0xE); /*0x6cf784*/
  result = 0; /*0x6cf787*/
  if ( v5 == 1 ) /*0x6cf78c*/
  {
    result = NiBlendAccumTransformInterpolator_UpdateSingle((int)this, a2, a3, a4); /*0x6cf7a2*/
    *(this + 2) = a2; /*0x6cf7ab*/
  }
  else
  {
    if ( v5 ) /*0x6cf7b5*/
    {
      NiBlendInterpolator_RecomputeNormalizedWeights((int)this); /*0x6cf7bf*/
      v8 = 0; /*0x6cf7c8*/
      for ( i = 0; v8 < *((_BYTE *)this + 0xD); i = v8 ) /*0x6cf7ca*/
      {
        v11 = a2; /*0x6cf7dd*/
        v9 = *((_DWORD *)this + 5) + 0x18 * v8; /*0x6cf7e8*/
        if ( *(_DWORD *)v9 ) /*0x6cf7e4*/
        {
          if ( 0.0 != *(float *)(v9 + 8) ) /*0x6cf7f7*/
          {
            if ( (*(_BYTE *)(this + 3) & 1) != 0 ) /*0x6cf7fd*/
              v11 = *(float *)(v9 + 0x14); /*0x6cf802*/
            if ( flt_A79F00 != v11 ) /*0x6cf819*/
              NiBlendAccumTransformInterpolator_UpdateItemAccumulation((int)this, i, v11, a3); /*0x6cf827*/
          }
        }
        ++v8; /*0x6cf830*/
      }
      result = NiBlendAccumTransformInterpolator_UpdateMultiple(this, SLODWORD(a2), a3, a4); /*0x6cf84c*/
    }
    *(this + 2) = a2; /*0x6cf857*/
  }
  return result; /*0x6cf7ae*/
}
